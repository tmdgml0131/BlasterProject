// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BlasterPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class BLASTER_API ABlasterPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	virtual void OnRep_Score() override;
	void AddToScore(float ScoreAmount);
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	UFUNCTION()
	virtual void OnRep_Defeats();

	void AddToDefeats(int32 DefeatsAmount);

private:
	UPROPERTY()
	class ABlasterCharacter* Character;
	
	UPROPERTY()
	class ABlasterPlayerController* Controller;
	
	UPROPERTY(ReplicatedUsing = OnRep_Defeats)
	int32 Defeats;

};
