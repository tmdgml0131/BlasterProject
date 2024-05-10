// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BlasterPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BLASTER_API ABlasterPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	void SetHUDHealth(float Health, float MaxHealth);
	void SetHUDShield(float Shield, float MaxShield);
	void SetHUDScore(float Score);
	void SetHUDDefeats(int32 Defeats);
	void SetHUDWeaponAmmo(int32 Ammo);
	void SetHUDCarriedAmmo(int32 Ammo);
	void SetHUDMatchCountdown(float CountdownTime);
	void SetHUDAnnouncementCountdown(float CountdownTime);
	void SetHUDGrenades(int32 Grenades);
	virtual void OnPossess(APawn* InPawn) override;
	virtual void Tick(float Deltatime) override;
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	void CheckPing(float Deltatime);

	// 서버 시간과 동기화
	virtual float GetServerTime();

	// 최대한 빨리 서버 시간과 동기화
	virtual void ReceivedPlayer() override;
	void OnMatchStateSet(FName State);

	void HandleMatchHasStarted();
	void HandleCooldown();
protected:
	virtual void BeginPlay() override;
	void SetHUDTime();
	void InitializeHUD();
	void PollInit();

	// Sync time between client-server

	// 서버에 현재 시간 쿼리 함수
	UFUNCTION(Server, Reliable)
	void ServerRequestServerTime(float TimeOfClientRequest);

	// 클라이언트에 서버 시간 전송
	UFUNCTION(Client, Reliable)
	void ClientReportServerTime(float TimeOfClientRequest, float TimeServerReceivedClientRequest);

	// 클라이언트와 서버의 시간 차이
	float ClientServerDelta = 0.f;

	UPROPERTY(EditAnywhere, Category = Time)
	float TimeSyncFrequency = 5.f;

	float TimeSyncRunningTime = 0.f;

	void CheckTimeSync(float deltaTime);

	UFUNCTION(Server, Reliable)
	void ServerCheckMatchState();

	UFUNCTION(Client, Reliable)
	void ClientJoinMidGame(FName StateOfMatch, float WarmUp, float Match, float Cooldown, float StartingTime);

	void StartHighPingWarning();
	void StopHighPingWarning();
private:
	UPROPERTY()
	class ABlasterHUD* BlasterHUD;

	UPROPERTY()
	class ABlasterGameMode* BlasterGameMode;

	float LevelStartingTime = 0.f;
	float MatchTime = 0.f;
	float WarmupTime = 0.f;
	float CooldownTime = 0.f;
	uint32 CountdownInt = 0;

	UPROPERTY(ReplicatedUsing = OnRep_MatchState)
	FName MatchState;

	UFUNCTION()
	void OnRep_MatchState();

	UPROPERTY();
	class UCharacterOverlay* CharacterOverlay;

	// Health
	float HUDHealth;
	float HUDMaxHealth;
	bool bInitializeHealth = false;

	// Shield
	float HUDShield;
	float HUDMaxShield;
	bool bInitializeShield = false;

	// Score
	float HUDScore;
	bool bInitializeScore = false;

	// Death
	int32 HUDDeath;
	bool bInitializeDeath = false;

	// Grenade
	int32 HUDGrenades;
	bool bInitializeGrenade = false;

	float HUDCarriedAmmo;
	bool bInitializeCarriedAmmo = false;
	float HUDWeaponAmmo;
	bool bInitializeWeaponAmmo = false;

	// Ping Warning
	float HighPingRunningTime = 0.f;
	float PingAnimationRunningTime = 0.f;

	UPROPERTY(EditAnywhere)
	float HighPingWarningDuration = 5.f;
	
	UPROPERTY(EditAnywhere)
	float CheckPingFrequency = 20.f;

	UPROPERTY(EditAnywhere)
	float HighPingThreshold = 50.f;
};
