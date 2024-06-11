// Fill out your copyright notice in the Description page of Project Settings.


#include "TeamGameMode.h"
#include "Blaster/GameState/BlasterGameState.h"
#include "Blaster/PlayerState/BlasterPlayerState.h"
#include "Kismet/GameplayStatics.h"

void ATeamGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	
	ABlasterGameState* BGameState = Cast<ABlasterGameState>(UGameplayStatics::GetGameState(this));
	if(BGameState)
	{
		ABlasterPlayerState* BPState = NewPlayer->GetPlayerState<ABlasterPlayerState>();
		if(BPState && BPState->GetTeam() == ETeam::ET_NoTeam)
		{
			if(BGameState->BlueTeam.Num() >= BGameState->RedTeam.Num())
			{
				BGameState->RedTeam.AddUnique(BPState);
				BPState->SetTeam(ETeam::ET_RedTeam);
			}
			else
			{
				BGameState->BlueTeam.AddUnique(BPState);
				BPState->SetTeam(ETeam::ET_BlueTeam);
			}
		}
	}
}

void ATeamGameMode::Logout(AController* Exiting)
{
	ABlasterGameState* BGameState = Cast<ABlasterGameState>(UGameplayStatics::GetGameState(this));
	ABlasterPlayerState* BPState = Exiting->GetPlayerState<ABlasterPlayerState>();

	if(BGameState && BPState)
	{
		if(BGameState->RedTeam.Contains(BPState))
		{
			BGameState->RedTeam.Remove(BPState);
		}
		if(BGameState->BlueTeam.Contains(BPState))
		{
			BGameState->BlueTeam.Remove(BPState);
		}
	}
}

float ATeamGameMode::CalculateDamage(AController* Attacker, AController* Victim, float BaseDamage)
{
	if(!Attacker || !Victim) return BaseDamage;
	
	ABlasterPlayerState* AttackerPState = Attacker->GetPlayerState<ABlasterPlayerState>();
	ABlasterPlayerState* VictimPState = Victim->GetPlayerState<ABlasterPlayerState>();
	
	if(!AttackerPState || !VictimPState) return BaseDamage;																	// null check
	if(AttackerPState == VictimPState) return BaseDamage;																	// self-damage
	if(AttackerPState->GetTeam() == ETeam::ET_NoTeam || VictimPState->GetTeam() == ETeam::ET_NoTeam) return BaseDamage;		// no team check == NPC
	if(AttackerPState->GetTeam() == VictimPState->GetTeam()) return 0.f;													// team check
	return BaseDamage;
}

void ATeamGameMode::HandleMatchHasStarted()
{
	Super::HandleMatchHasStarted();

	ABlasterGameState* BGameState = Cast<ABlasterGameState>(UGameplayStatics::GetGameState(this));
	if(BGameState)
	{
		for(auto PState : BGameState->PlayerArray)
		{
			ABlasterPlayerState* BPState = Cast<ABlasterPlayerState>(PState.Get());
			if(BPState && BPState->GetTeam() == ETeam::ET_NoTeam)
			{
				if(BGameState->BlueTeam.Num() >= BGameState->RedTeam.Num())
				{
					BGameState->RedTeam.AddUnique(BPState);
					BPState->SetTeam(ETeam::ET_RedTeam);
				}
				else
				{
					BGameState->BlueTeam.AddUnique(BPState);
					BPState->SetTeam(ETeam::ET_BlueTeam);
				}
			}
		}
	}
}
