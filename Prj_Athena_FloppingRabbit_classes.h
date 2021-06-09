// BlueprintGeneratedClass Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C
// Size: 0xce1 (Inherited: 0x91c)
struct APrj_Athena_FloppingRabbit_C : AB_Prj_ThrownConsumable_C {
	char pad_91C[0x4]; // 0x91c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x920(0x08)
	struct USceneComponent* LineLoc; // 0x928(0x08)
	float Timeline_0_NewTrack_0_5E59FE3C4CA5776FE578F391478AB1A6; // 0x930(0x04)
	enum class ETimelineDirection Timeline_0__Direction_5E59FE3C4CA5776FE578F391478AB1A6; // 0x934(0x01)
	char pad_935[0x3]; // 0x935(0x03)
	struct UTimelineComponent* Timeline_1; // 0x938(0x08)
	float BigBob_BigDip_9789CB934FE6D3F1A956D993031B4307; // 0x940(0x04)
	enum class ETimelineDirection BigBob__Direction_9789CB934FE6D3F1A956D993031B4307; // 0x944(0x01)
	char pad_945[0x3]; // 0x945(0x03)
	struct UTimelineComponent* BigBob; // 0x948(0x08)
	struct FHitResult NullHit; // 0x950(0x88)
	struct FRotator WaterRotation; // 0x9d8(0x0c)
	struct FVector MeshLocAfterHit; // 0x9e4(0x0c)
	float ChanceForBigBob; // 0x9f0(0x04)
	char pad_9F4[0x4]; // 0x9f4(0x04)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x9f8(0x10)
	float DistanceCheckInterval; // 0xa08(0x04)
	char pad_A0C[0x4]; // 0xa0c(0x04)
	struct AActor* Spawner; // 0xa10(0x08)
	float StartingCatchBigBobChance; // 0xa18(0x04)
	float Delay_CatchWindow; // 0xa1c(0x04)
	bool CanCatch; // 0xa20(0x01)
	bool InWater; // 0xa21(0x01)
	char pad_A22[0x6]; // 0xa22(0x06)
	struct AFortPlayerPawn* PlayerPawn; // 0xa28(0x08)
	struct AB_Athena_FloppingRabbit_Wire_C* Wire; // 0xa30(0x08)
	struct FGameplayTag Event_Fire; // 0xa38(0x08)
	struct FGameplayTag Event_InWorld; // 0xa40(0x08)
	float MaxDistanceFromPlayer; // 0xa48(0x04)
	bool DefaultSpawner; // 0xa4c(0x01)
	char pad_A4D[0x3]; // 0xa4d(0x03)
	float IncreaseBigBobChanceAmount; // 0xa50(0x04)
	char pad_A54[0x4]; // 0xa54(0x04)
	struct FScalableFloat Row_ChanceForBigBob; // 0xa58(0x28)
	struct FScalableFloat Row_ChanceForBigBobIncrease; // 0xa80(0x28)
	struct FScalableFloat Row_CatchWindow; // 0xaa8(0x28)
	struct UParticleSystem* FX_HitWater; // 0xad0(0x08)
	struct FVector FXScaleHitWater; // 0xad8(0x0c)
	char pad_AE4[0x4]; // 0xae4(0x04)
	struct USoundBase* Sound_HitWater; // 0xae8(0x08)
	struct UParticleSystem* FX_WaterDip; // 0xaf0(0x08)
	struct UNiagaraSystem* NS_FX_HitWater; // 0xaf8(0x08)
	struct UNiagaraSystem* NS_FX_SpawnItems; // 0xb00(0x08)
	struct UNiagaraSystem* NS_FX_WaterDip; // 0xb08(0x08)
	struct UNiagaraSystem* NS_FX_WaterDip_HighTier; // 0xb10(0x08)
	struct UParticleSystem* FX_WaterDip_HighTier; // 0xb18(0x08)
	struct FVector FXScaleWaterDip; // 0xb20(0x0c)
	char pad_B2C[0x4]; // 0xb2c(0x04)
	struct USoundBase* Sound_WaterDip; // 0xb30(0x08)
	struct FGameplayTag Event_ProjDestroyed; // 0xb38(0x08)
	struct FGameplayTag Event_Hooked; // 0xb40(0x08)
	struct FScalableFloat Row_DistanceCheck; // 0xb48(0x28)
	struct FScalableFloat Row_DistanceCheckZ; // 0xb70(0x28)
	bool Dipping; // 0xb98(0x01)
	char pad_B99[0x7]; // 0xb99(0x07)
	struct AActor* SpawnedDefaultSpawner; // 0xba0(0x08)
	struct FScalableFloat Row_BobChanceDelayMin; // 0xba8(0x28)
	struct FScalableFloat Row_BobChanceDelayMax; // 0xbd0(0x28)
	bool SpawnedItem; // 0xbf8(0x01)
	char pad_BF9[0x7]; // 0xbf9(0x07)
	struct ABP_FluidSim_FN_C* FluidSim; // 0xc00(0x08)
	struct USoundBase* Sound_WaterDip_HighTier; // 0xc08(0x08)
	bool WorldSpawner; // 0xc10(0x01)
	char pad_C11[0x7]; // 0xc11(0x07)
	struct UParticleSystem* FX_SpawnItems; // 0xc18(0x08)
	struct USoundBase* Sound_SpawnItems; // 0xc20(0x08)
	float ItemAttachMinDist; // 0xc28(0x04)
	float ItemAttachDistanceRequirement; // 0xc2c(0x04)
	bool bStartedFishingSession; // 0xc30(0x01)
	char pad_C31[0x3]; // 0xc31(0x03)
	float BounceOutOfWaterDelay; // 0xc34(0x04)
	struct FGameplayTag Event_Unhooked; // 0xc38(0x08)
	struct FVector TowardPlayerVector; // 0xc40(0x0c)
	struct FVector BobberStartLocation; // 0xc4c(0x0c)
	struct FVector Target; // 0xc58(0x0c)
	char pad_C64[0x4]; // 0xc64(0x04)
	struct FFortAIAssignmentIdentifier AIAssignmentIdentifier; // 0xc68(0x30)
	struct UFortAIAssignmentSettings* AIAssignmentSettings; // 0xc98(0x08)
	struct FName TetherSocket; // 0xca0(0x08)
	bool bTetherCanChangeWeapons; // 0xca8(0x01)
	char pad_CA9[0x7]; // 0xca9(0x07)
	struct FGameplayTagContainer FishingRodTag; // 0xcb0(0x20)
	struct AB_Athena_FloppingRabbit_Wire_C* FloppingRabbitWire; // 0xcd0(0x08)
	struct FGameplayTag GC_MiniGameSplash; // 0xcd8(0x08)
	bool bDidHitMeatball; // 0xce0(0x01)

	struct FName DetermineFishLootTierNameAndSetLootForSpawner(bool bIsExplosion); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.DetermineFishLootTierNameAndSetLootForSpawner // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void IgnoreTetherablePawn(struct AActor* HitActor, bool isIgnored); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.IgnoreTetherablePawn // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UnRegisterWithGoalManager(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.UnRegisterWithGoalManager // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RegisterWithGoalManager(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.RegisterWithGoalManager // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AttemptTether(struct AActor* HitActor, bool bTethered); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.AttemptTether // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetSheetVals(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.GetSheetVals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BigBob__FinishedFunc(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BigBob__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void BigBob__UpdateFunc(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BigBob__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__FinishedFunc(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__UpdateFunc(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void FullDip(bool InWorldSpawner); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.FullDip // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CatchWindow(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CatchWindow // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TryCatch(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.TryCatch // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideAndKill(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.HideAndKill // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void DistanceCheck(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.DistanceCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ForceKill(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ForceKill // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnExploded(struct TArray<struct AActor*> HitActors, struct TArray<struct FHitResult> HitResults); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void HitWater(bool FishSpawner); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.HitWater // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void CheckForDip(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CheckForDip // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CheckForHighTierSpawner(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CheckForHighTierSpawner // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnItemsFX(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.SpawnItemsFX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CustomPickupAttach(struct AFortPickup* FortPickup); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CustomPickupAttach // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void WriteNothingCaughtFishingAnalytic(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.WriteNothingCaughtFishingAnalytic // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnExitWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsLastBody); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnExitWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ReelIn(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReelIn // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ServerAttemptTether(struct APawn* TetherActor); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ServerAttemptTether // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Minigame_MoveBobber(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.Minigame_MoveBobber // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DipFx(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.DipFx // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ClientReelIn(); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ClientReelIn // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ToggleMiniGameSplashLoop(bool On); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ToggleMiniGameSplashLoop // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Prj_Athena_FloppingRabbit(int32_t EntryPoint); // Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ExecuteUbergraph_Prj_Athena_FloppingRabbit // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

