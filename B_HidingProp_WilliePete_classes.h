// BlueprintGeneratedClass B_HidingProp_WilliePete.B_HidingProp_WilliePete_C
// Size: 0x114a (Inherited: 0xf88)
struct AB_HidingProp_WilliePete_C : AB_HidingProp_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf88(0x08)
	struct UStaticMeshComponent* overlapCylinder; // 0xf90(0x08)
	struct UAudioComponent* WilliePete_Ambient_Loop; // 0xf98(0x08)
	struct UStaticMeshComponent* Geyser; // 0xfa0(0x08)
	struct UStaticMeshComponent* S_Whirlpool_01; // 0xfa8(0x08)
	struct UParticleSystemComponent* P_WilliePete_SurfaceVerticalSplash; // 0xfb0(0x08)
	struct UFortProjectileMovementComponent* OverlappedFortProjectileMovementComponent; // 0xfb8(0x08)
	struct UProjectileMovementComponent* OverlappedStandardProjectileMovementComponent; // 0xfc0(0x08)
	struct AActor* TeleportingNonPawn; // 0xfc8(0x08)
	struct FHitResult SphereOverlapResult; // 0xfd0(0x88)
	float ProjectileSpeedCeiling; // 0x1058(0x04)
	struct FRotator ProjectileExitFVectorRotation; // 0x105c(0x0c)
	int32_t WaterLevel; // 0x1068(0x04)
	struct FGameplayTag GC_Exit; // 0x106c(0x08)
	struct FGameplayTag GC_Enter; // 0x1074(0x08)
	char pad_107C[0x4]; // 0x107c(0x04)
	struct FScalableFloat EnabledValue; // 0x1080(0x28)
	struct FScalableFloat LaunchHeightValue; // 0x10a8(0x28)
	struct AFortPlayerPawnAthena* LaunchPawn; // 0x10d0(0x08)
	struct FActiveGameplayEffectHandle LaunchGrantedEffectHandle; // 0x10d8(0x08)
	struct FGameplayTagContainer T_Quest; // 0x10e0(0x20)
	struct AActor* SpawnedWaterBody; // 0x1100(0x08)
	struct FGameplayTag GC_ScreenFX; // 0x1108(0x08)
	bool isOnTestMap; // 0x1110(0x01)
	char pad_1111[0x7]; // 0x1111(0x07)
	struct USoundBase* Launch Sound; // 0x1118(0x08)
	struct FVector AdjustedLocation; // 0x1120(0x0c)
	bool skipAnimForLaunch; // 0x112c(0x01)
	char pad_112D[0x3]; // 0x112d(0x03)
	struct AFortPlayerPawnAthena* ExitingPawn; // 0x1130(0x08)
	struct UMovementComponent* OverlappedMovementComponent; // 0x1138(0x08)
	float ProjectileSpeedMult; // 0x1140(0x04)
	float PickupSpeedMult; // 0x1144(0x04)
	bool bSetSilentDie; // 0x1148(0x01)
	bool bSetSpawnedWaterBody; // 0x1149(0x01)

	void OnRep_bSetSpawnedWaterBody(); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_bSetSpawnedWaterBody // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_bSetSilentDie(); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_bSetSilentDie // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HelperLocationLogger(struct FString inString); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.HelperLocationLogger // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_AdjustedLocation(); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnRep_AdjustedLocation // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TeleportExitSpeed(struct FVector ExitFVector, float EnterSpeed, float OverrideSpeed, float MinimumSpeed, bool ForceSpeedOverride, struct FVector TeleportExitVelocity); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.TeleportExitSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnReady_74044DD44988556292500EB8F289359F(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.OnReady_74044DD44988556292500EB8F289359F // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Non Pawn Actor Destroyed(struct AActor* DestroyedActor); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Non Pawn Actor Destroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Non Pawn Teleport(struct AActor* TeleportingActor); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Non Pawn Teleport // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Remove GE(); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Remove GE // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.BndEvt__overlapCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void Complete Setup(); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.Complete Setup // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopHiding(struct AFortPawn* Pawn); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.StopHiding // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetGravity(struct FHitResult Hit); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ResetGravity // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_HidingProp_WilliePete(int32_t EntryPoint); // Function B_HidingProp_WilliePete.B_HidingProp_WilliePete_C.ExecuteUbergraph_B_HidingProp_WilliePete // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

