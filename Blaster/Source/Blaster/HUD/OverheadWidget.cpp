// Fill out your copyright notice in the Description page of Project Settings.


#include "OverheadWidget.h"
#include "Components/TextBlock.h"
#include "GameFramework/PlayerState.h"

void UOverheadWidget::SetDisplayText(FString TextToDisplay)
{
	if (DisplayText)
	{
		DisplayText->SetText(FText::FromString(TextToDisplay));
	}
}

void UOverheadWidget::ShowPlayerName(APawn* InPawn)
{
	TObjectPtr<APlayerState> PlayerState = InPawn->GetPlayerState();

	if (PlayerState)
	{
		FString PlayerName = PlayerState->GetPlayerName();

		FString PlayerNameString = FString::Printf(TEXT("Player Name: %s"), *PlayerName);
		SetDisplayText(PlayerNameString);
	}
}

void UOverheadWidget::NativeDestruct()
{
	RemoveFromParent();
	Super::NativeDestruct();
}
