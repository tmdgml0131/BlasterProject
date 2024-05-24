// Fill out your copyright notice in the Description page of Project Settings.


#include "ReturnToMainMenu.h"

#include "MultiplayerSessionSubsystem.h"
#include "Components/Button.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/PlayerController.h"

void UReturnToMainMenu::MenuSetup()
{
	SetMenuBaseSetup();

	BindMultiplayerSession();
}

void UReturnToMainMenu::SetMenuBaseSetup()
{
	AddToViewport();
	SetVisibility(ESlateVisibility::Visible);
	bIsFocusable = true;

	UWorld* World = GetWorld();
	if(World)
	{
		PlayerController == nullptr ? World->GetFirstPlayerController() : PlayerController;
		if(PlayerController)
		{
			FInputModeGameAndUI InputModeData;
			InputModeData.SetWidgetToFocus(TakeWidget());
			PlayerController->SetInputMode(InputModeData);
			PlayerController->SetShowMouseCursor(true);
		}
	}
}

void UReturnToMainMenu::BindMultiplayerSession()
{
	if(ReturnButton)
	{
		ReturnButton->OnClicked.AddDynamic(this, &ThisClass::OnReturnButtonClicked);
	}
	
	UGameInstance* GameInstance = GetGameInstance();
	if(GameInstance)
	{
		MultiplayerSessionSubsystem = GameInstance->GetSubsystem<UMultiplayerSessionSubsystem>();
		if(MultiplayerSessionSubsystem)
		{
			MultiplayerSessionSubsystem->MultiplayerOnDestroySessionComplete.AddDynamic(this, &ThisClass::OnDestroySession);
		}
	}
}

void UReturnToMainMenu::MenuTearDown()
{
	RemoveFromParent();	// Removing from Viewport

	UWorld* World = GetWorld();
	if(World)
	{
		PlayerController == nullptr ? World->GetFirstPlayerController() : PlayerController;
		if(PlayerController)
		{
			FInputModeGameOnly InputModeData;
			PlayerController->SetInputMode(InputModeData);
			PlayerController->SetShowMouseCursor(false);
		}
	}
}

bool UReturnToMainMenu::Initialize()
{
	if(!Super::Initialize())
	{
		return false;
	}
	
	return true;
}

void UReturnToMainMenu::OnDestroySession(bool bWasSuccessful)
{
	if(!bWasSuccessful)
	{
		ReturnButton->SetIsEnabled(true);
		return;
	}
	
	UWorld* World = GetWorld();
	if(World)
	{
		AGameModeBase* GameMode = World->GetAuthGameMode<AGameModeBase>();
		if(GameMode)
		{
			GameMode->ReturnToMainMenuHost();
		}
		else
		{
			PlayerController = PlayerController == nullptr ? World->GetFirstPlayerController() : PlayerController;
			if(PlayerController)
			{
				PlayerController->ClientReturnToMainMenuWithTextReason(FText());
			}
		}
	}
}

void UReturnToMainMenu::OnReturnButtonClicked()
{
	ReturnButton->SetIsEnabled(false);
	
	if(MultiplayerSessionSubsystem)
	{
		MultiplayerSessionSubsystem->DestroySession();
	}
}
