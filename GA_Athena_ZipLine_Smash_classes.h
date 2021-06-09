// BlueprintGeneratedClass GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C
// Size: 0xb10 (Inherited: 0xa88)
struct UGA_Athena_ZipLine_Smash_C : UFortGameplayAbility_ZiplineSmashBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa88(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa90(0x08)
	float UpdateIntervalForSmashVolume; // 0xa98(0x04)
	char pad_A9C[0x4]; // 0xa9c(0x04)
	struct UGameplayEffect* StructureDamageGE; // 0xaa0(0x08)
	struct ABP_ZipLine_Athena_Harness_C* ZiplineHarness; // 0xaa8(0x08)
	struct AFortAthenaZipline* Zipline; // 0xab0(0x08)
	enum class EFortCustomMovement DrivingCustomMovementMode; // 0xab8(0x01)
	char pad_AB9[0x3]; // 0xab9(0x03)
	struct FActiveGameplayEffectHandle FallImmunityGEFX; // 0xabc(0x08)
	struct FGameplayTag AttachVFXCue; // 0xac4(0x08)
	struct FGameplayTag SmashCue; // 0xacc(0x08)
	struct FGameplayTag T_Swimming; // 0xad4(0x08)
	struct FGameplayTag T_Falling; // 0xadc(0x08)
	char pad_AE4[0x4]; // 0xae4(0x04)
	struct FGameplayTagContainer TagsThatBlockFallImmunityRemoval; // 0xae8(0x20)
	struct FTimerHandle TH_DelayFallDamageRemoval; // 0xb08(0x08)

	void Get Zipline Motor Offset(struct FVector Offset); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.Get Zipline Motor Offset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetZiplineRotationForMotor(struct FRotator Rotation); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.GetZiplineRotationForMotor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Get Zipline Pole A Socket Loc(struct FVector PoleBSocketLoc); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.Get Zipline Pole A Socket Loc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Get Zipline Pole B Socket Loc(struct FVector PoleBSocketLoc); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.Get Zipline Pole B Socket Loc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CheckForQuestProgress(); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.CheckForQuestProgress // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CheckMotor(); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.CheckMotor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Spawn Motor(struct AActor* PlayerPawn); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.Spawn Motor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BreakNearbyStructures(struct AFortPlayerPawn* PlayerPawn); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.BreakNearbyStructures // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Added_57667DA14EF15649A9E09AA4184D83F2(); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.Added_57667DA14EF15649A9E09AA4184D83F2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Removed_4E9755484C178DFBE6FF8396B520588B(); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.Removed_4E9755484C178DFBE6FF8396B520588B // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SurroundingsCheck(); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.SurroundingsCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnPawnLanded_Bind(struct FHitResult Hit); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnPawnLanded_Bind // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleZiplineStateChanged(bool bIsZiplining); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.HandleZiplineStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RemoveFallDamageImmunity(); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.RemoveFallDamageImmunity // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEnterVehicle_Bind(); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnEnterVehicle_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ZipliningComplete(); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.ZipliningComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPawnDied_Bind(struct AActor* NewParam, float NewParam2, struct AController* NewParam3, struct AActor* NewParam4, struct FVector NewParam5, struct UPrimitiveComponent* NewParam6, struct FName NewParam7, struct FVector NewParam8); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnPawnDied_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEnteredAircraft_Bind(); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnEnteredAircraft_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBeginSkydiving_Bind(); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.OnBeginSkydiving_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DelaySpawnMotor(); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.DelaySpawnMotor // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BindEvent(); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.BindEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwimmingStarted(); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.SwimmingStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EnterWaterExit(struct AFortPlayerPawn* FortPlayerPawn); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.EnterWaterExit // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleClientSplineZiplineStateChanged(bool bIsZiplining); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.HandleClientSplineZiplineStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SplineZiplineMovementModeDelayOver(); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.SplineZiplineMovementModeDelayOver // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Remove Fall Damage Immunity Delayed(); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.Remove Fall Damage Immunity Delayed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EndAsyncBreakNearbyStructuresOverlap(struct TArray<struct AActor*> OverlapActors); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.EndAsyncBreakNearbyStructuresOverlap // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_ZipLine_Smash(int32_t EntryPoint); // Function GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C.ExecuteUbergraph_GA_Athena_ZipLine_Smash // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

