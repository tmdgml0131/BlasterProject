// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectileWeapon.h"
#include "Engine/SkeletalMeshSocket.h"
#include "Projectile.h"

void AProjectileWeapon::Fire(const FVector& HitTarget)
{
	Super::Fire(HitTarget);

	APawn* InstigatorPawn = Cast<APawn>(GetOwner());
	if(!InstigatorPawn) return;

	const USkeletalMeshSocket* MuzzleFlashSocket = GetWeaponMesh()->GetSocketByName(FName("MuzzleFlash"));

	UWorld* World = GetWorld();

	if (MuzzleFlashSocket && World)
	{
		FTransform SocketTransform = MuzzleFlashSocket->GetSocketTransform(GetWeaponMesh());

		FVector ToTarget = HitTarget - SocketTransform.GetLocation();
		FRotator TargetRotation = ToTarget.Rotation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.Owner = GetOwner();
		SpawnParams.Instigator = InstigatorPawn;

		AProjectile* SpawnedProjectile = nullptr;
		
		if(bUseServerSideRewind)
		{
			if(InstigatorPawn->HasAuthority())					// Server
			{
				if(InstigatorPawn->IsLocallyControlled())		// Server, Host - Use Replicated projectile
				{
					SpawnedProjectile = World->SpawnActor<AProjectile>(ProjectileClass, SocketTransform.GetLocation(), TargetRotation, SpawnParams);
					if(SpawnedProjectile)
					{
						SpawnedProjectile->bUseServerSideRewind = false;
						SpawnedProjectile->Damage = bIsExplosiveProjectile? SpawnedProjectile->Damage : Damage;	// projectile decide the damage if its explosive, else the weapon decide
						SpawnedProjectile->HeadShotDamage = HeadShotDamage;
					}
				}
				else										    // Server, not locally controlled, spawn non-replicated projectile, SSR
				{
					SpawnedProjectile = World->SpawnActor<AProjectile>(ServerSideRewindProjectileClass, SocketTransform.GetLocation(), TargetRotation, SpawnParams);
					if(SpawnedProjectile)
					{
						SpawnedProjectile->bUseServerSideRewind = true;
					}
				}
			}
			else												// Client, using SSR
			{
				if(InstigatorPawn->IsLocallyControlled())		// Client, locally controlled, spawn non-replicated projectile, use SSR
				{
					SpawnedProjectile = World->SpawnActor<AProjectile>(ServerSideRewindProjectileClass, SocketTransform.GetLocation(), TargetRotation, SpawnParams);
					if(SpawnedProjectile)
					{
						SpawnedProjectile->bUseServerSideRewind = true;
						SpawnedProjectile->TraceStart = SocketTransform.GetLocation();
						SpawnedProjectile->InitialVelocity = SpawnedProjectile->GetActorForwardVector() * SpawnedProjectile->InitialSpeed;
						SpawnedProjectile->Damage = bIsExplosiveProjectile? SpawnedProjectile->Damage : Damage;	// projectile decide the damage if its explosive, else the weapon decide
					}
				}
				else											// Client, not locally controlled, spawn non-replicated projectile, no SSR
				{
					SpawnedProjectile = World->SpawnActor<AProjectile>(ServerSideRewindProjectileClass, SocketTransform.GetLocation(), TargetRotation, SpawnParams);
					if(SpawnedProjectile)
					{
						SpawnedProjectile->bUseServerSideRewind = false;
					}
				}
			}
		}
		else // Weapon not using SSR
		{
			if(InstigatorPawn->HasAuthority())
			{
				SpawnedProjectile = World->SpawnActor<AProjectile>(ProjectileClass, SocketTransform.GetLocation(), TargetRotation, SpawnParams);
				if(SpawnedProjectile)
				{
					SpawnedProjectile->bUseServerSideRewind = false;
					SpawnedProjectile->Damage = bIsExplosiveProjectile? SpawnedProjectile->Damage : Damage;	// projectile decide the damage if its explosive, else the weapon decide
					SpawnedProjectile->HeadShotDamage = HeadShotDamage;
				}
			}
		}
	}
}
