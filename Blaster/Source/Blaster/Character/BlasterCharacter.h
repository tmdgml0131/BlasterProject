// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Blaster/BlasterTypes/TurningInPlace.h"
#include "Blaster/Interfaces/InteractWithCrosshairsInterface.h"
#include "Components/TimelineComponent.h"
#include "Blaster/BlasterTypes/CombatState.h"
//////////////////////////////////////////////////
#include "BlasterCharacter.generated.h"

UCLASS()
class BLASTER_API ABlasterCharacter : public ACharacter, public IInteractWithCrosshairsInterface
{
	GENERATED_BODY()

public:
	ABlasterCharacter();
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void Tick(float DeltaTime) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PostInitializeComponents() override;

	// 발사 애니메이션
	void PlayFireMontage(bool bAiming);
	// 장전 애니메이션
	void PlayReloadMontage();
	// 죽음 애니메이션
	void PlayElimMontage();
	// 수류탄 애니메이션
	void PlayThrowGrenadeMontage();

	virtual void OnRep_ReplicatedMovement() override;

	// GameMode에서 호출하는 Elim
	void Elim();

	// 플레이어 죽음
	UFUNCTION(NetMulticast, Reliable) 
	void MulticastElim();

	virtual void Destroyed() override;
	
	UPROPERTY(Replicated)
	bool bDisableGameplay = false;

	UFUNCTION(BlueprintImplementableEvent)
	void ShowSniperScopeWidget(bool bShowScope);

	bool bCanJump = true;
	bool bIsRunning = false;

	void UpdateHUDHealth();
	void UpdateHUDShield();

protected:
	virtual void BeginPlay() override;

	// Movement / Action
	void MoveForward(float Value);
	void MoveRight(float Value);
	void RunButtonPressed();
	void RunButtonReleased();
	void Turn(float Value);
	void LookUp(float Value);
	void EquipButtonPressed();
	void CrouchButtonPressed();
	void AimButtonPressed();
	void AimButtonReleased();
	void ThrowGrenadeButtonPressed();
	void AimOffset(float DeltaTime);
	void ReloadButtonPressed();

	void CalculateAO_Pitch();

	// Simulated Proxy Turn
	void SimProxiesTurn();
	virtual void Jump() override;
	void FireButtonPressed();
	void FireButtonReleased();

	// 피격 애니메이션
	void PlayHitReactMontage();

	// 데미지 처리 함수
	UFUNCTION()
	void ReceiveDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, class AController* InstigatorController, AActor* DamageCauser);


	// 관련 클래스 Poll 및 HUD Initialize 
	void PollInit();

	void RotateInPlace(float DeltaTime);
private:
	UPROPERTY(VisibleAnywhere, Category = Camera)
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	class UCameraComponent* FollowCamera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UWidgetComponent* OverheadWidget;

	UPROPERTY(ReplicatedUsing = OnRep_OverlappingWeapon)
	class AWeapon* OverlappingWeapon;

	UFUNCTION()
	void OnRep_OverlappingWeapon(AWeapon* LastWeapon);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCombatComponent* CombatComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UBuffComponent* BuffComponent;

	// RPC 함수
	UFUNCTION(Server, Reliable)
	void ServerEquipButtonPressed();

	// RPC 함수
	UFUNCTION(Server, Reliable)
	void ServerRunButtonPressed();
	
	// RPC 함수
	UFUNCTION(Server, Reliable)
	void ServerRunButtonReleased();

	float AO_Yaw;
	float InterpAO_Yaw;
	float AO_Pitch;
	FRotator StartingAimRotation;
	
	ETurningInPlace TurningInPlace;
	void TurnInPlace(float DeltaTime);

	UPROPERTY(EditAnywhere, Category = CombatComponent)
	class UAnimMontage* FireWeaponMontage;

	UPROPERTY(EditAnywhere, Category = CombatComponent)
	UAnimMontage* ReloadMontage;

	UPROPERTY(EditAnywhere, Category = CombatComponent)
	UAnimMontage* HitReactMontage;

	UPROPERTY(EditAnywhere, Category = CombatComponent)
	UAnimMontage* ElimMontage;

	UPROPERTY(EditAnywhere, Category = CombatComponent)
	UAnimMontage* ThrowGrenadeMontage;

	// 카메라 가까우면 플레이어 숨기는 함수
	void HideCameraIfCharacterClose();

	UPROPERTY(EditAnywhere)
	float CameraTreshold = 200.f;

	bool bRotateRootBone;

	float TurnThreshold = 0.5f;
	float ProxyYaw;
	float TimeSinceLastMovementReplication;
	FRotator ProxyRotationLastFrame;
	FRotator ProxyRotation;
	float CalculateSpeed();

	// Player Health
	UPROPERTY(EditAnywhere, Category = "Player Stats")
	float MaxHealth = 100.f;

	UPROPERTY(ReplicatedUsing = OnRep_Health, VisibleAnywhere, Category = "Player Stats")
	float Health = 100.f;
	
	// Player Shield
	UPROPERTY(EditAnywhere, Category = "Player Stats")
	float MaxShield = 100.f;

	UPROPERTY(ReplicatedUsing = OnRep_Shield, EditAnywhere, Category = "Player Stats")
	float Shield = 0.f;
	
	// Player Speed
	UPROPERTY(EditAnywhere, Category = "Player Stats")
	float MaxSpeed = 1800.f;

	float InitialWalkSpeed = 600.f;
	float InitialRunSpeed = 1200.f;

	UPROPERTY(Replicated)
	float WalkSpeed = 600.f;

	UPROPERTY(Replicated)
	float RunSpeed = 1200.f;

	UFUNCTION()
	void OnRep_Health(float LastHealth);

	UFUNCTION()
	void OnRep_Shield(float LastShield);

	class ABlasterPlayerController* BlasterPlayerController;

	bool bElimmed = false;

	FTimerHandle ElimTimer;

	void ElimTimerFinished();

	UPROPERTY(EditDefaultsOnly)
	float ElimDealy = 3.f;

	// Dissolve Effect
	// Timeline 추가 시 Call-back Func. 필요
	UPROPERTY(VisibleAnywhere)
	UTimelineComponent* DissolveTimeline;

	FOnTimelineFloat DissolveTrack;

	UPROPERTY(EditAnywhere)
	UCurveFloat* DissolveCurve;

	UFUNCTION()
	void UpdateDissolveMaterial(float DissolveValue);
	
	void StartDissolve();

	// Dynamic Instance, Runtime 에 변경 가능
	UPROPERTY(VisibleAnywhere, Category = Elim)
	UMaterialInstanceDynamic* DynamicDissolveMaterialInstance;

	// Blueprint 에서 변경 가능한 Material Instance 로 Dynamic Material 에 쓰임
	UPROPERTY(EditAnywhere, Category = Elim)
	UMaterialInstance* DissolveMaterialInstance;

	// ElimBot
	UPROPERTY(EditAnywhere)
	UParticleSystem* ElimBotEffect;

	UPROPERTY(VisibleAnywhere)
	UParticleSystemComponent* ElimBotComponent;

	UPROPERTY(EditAnywhere)
	class USoundCue* ElimBotSound;

	UPROPERTY()
	class ABlasterPlayerState* BlasterPlayerState;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* AttachedGrenade;
public:	
	void SetOverlappingWeapon(AWeapon* Weapon);
	bool IsWeaponEquipped();
	bool IsAiming();
	AWeapon* GetEquippedWeapon();
	FVector GetHitTarget() const;
	ECombatState GetCombatState() const;
	
	FORCEINLINE float GetAO_Yaw() const { return AO_Yaw; }
	FORCEINLINE float GetAO_Pitch() const { return AO_Pitch; }
	FORCEINLINE bool ShouldRotateRootBone() const { return bRotateRootBone; }
	FORCEINLINE bool IsElimmed() const { return bElimmed; }
	FORCEINLINE float GetHealth() const { return Health; }
	FORCEINLINE void SetHealth(float AmountToHeal) { Health = AmountToHeal; }
	FORCEINLINE float GetMaxHealth() const { return MaxHealth; }
	FORCEINLINE float GetShield() const { return Shield; }
	FORCEINLINE float GetMaxShield() const { return MaxShield; }
	FORCEINLINE void SetShield(float ShieldAmount) { Shield = ShieldAmount; }
	FORCEINLINE bool GetDisableGameplay() const { return bDisableGameplay; }
	FORCEINLINE float GetCharacterWalkSpeed() const { return WalkSpeed; }
	FORCEINLINE float GetCharacterRunSpeed() const { return RunSpeed; }
	FORCEINLINE float GetCharacterMaxSpeed() const { return MaxSpeed; }
	FORCEINLINE float GetCharacterInitialWalkSpeed() const { return InitialWalkSpeed; }
	FORCEINLINE float GetCharacterInitialRunSpeed() const { return InitialRunSpeed; }
	FORCEINLINE void SetCharacterWalkSpeed(float Value) { WalkSpeed = Value; }
	FORCEINLINE void SetCharacterRunSpeed(float Value) { RunSpeed = Value; }
	FORCEINLINE ETurningInPlace GetTurningInPlace() const { return TurningInPlace; }
	FORCEINLINE UCameraComponent* GetFollowCamera() const { return FollowCamera; }
	FORCEINLINE UCombatComponent* GetCombatComponent() const { return CombatComponent; }
	FORCEINLINE UAnimMontage* GetReloadMontage() const { return ReloadMontage; }
	FORCEINLINE UStaticMeshComponent* GetAttachedGrenade() const { return AttachedGrenade; }
	FORCEINLINE UBuffComponent* GetBuffComponent() const { return BuffComponent; }
};
