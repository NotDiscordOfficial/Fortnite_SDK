// BlueprintGeneratedClass B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C
// Size: 0xb70 (Inherited: 0x898)
struct AB_BGA_Athena_EnvCampFire_C : ABuildingGameplayActorCampFire {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0x8a0(0x08)
	struct USphereComponent* Sphere; // 0x8a8(0x08)
	struct UStaticMeshComponent* FirePitEmpty; // 0x8b0(0x08)
	struct UStaticMeshComponent* Cylinder; // 0x8b8(0x08)
	struct UArrowComponent* FireLoc; // 0x8c0(0x08)
	struct UStaticMeshComponent* Wood; // 0x8c8(0x08)
	struct UStaticMeshComponent* Root; // 0x8d0(0x08)
	struct AFortPawn* InteractingPawn; // 0x8d8(0x08)
	bool BeenUsed; // 0x8e0(0x01)
	char pad_8E1[0x3]; // 0x8e1(0x03)
	float DousedSmokeLife; // 0x8e4(0x04)
	struct FScalableFloat Row_DousedSmokeLife; // 0x8e8(0x28)
	bool HotfixedEnabled; // 0x910(0x01)
	bool DestroyIfDisabled; // 0x911(0x01)
	bool Destroyed; // 0x912(0x01)
	char pad_913[0x5]; // 0x913(0x05)
	struct FScalableFloat Row_HotfixEnabled; // 0x918(0x28)
	struct FVector TraceOffset; // 0x940(0x0c)
	bool Season7Campfire; // 0x94c(0x01)
	char pad_94D[0x3]; // 0x94d(0x03)
	struct FGameplayTagContainer CustomSpecialS7Tags; // 0x950(0x20)
	float SpecialS7FireTime; // 0x970(0x04)
	char pad_974[0x4]; // 0x974(0x04)
	struct FTimerHandle DousedSmokeWispTimer; // 0x978(0x08)
	struct UParticleSystem* S7SuccessEmitter; // 0x980(0x08)
	struct USoundBase* S7SuccessSound; // 0x988(0x08)
	bool BlockInteraction; // 0x990(0x01)
	char pad_991[0x3]; // 0x991(0x03)
	int32_t LitRepBool; // 0x994(0x04)
	struct FGameplayTag DousedCue; // 0x998(0x08)
	struct FGameplayTag DeathCue; // 0x9a0(0x08)
	struct FScalableFloat Row_Light_Cost; // 0x9a8(0x28)
	struct FText Text_Light; // 0x9d0(0x18)
	struct FText Text_LightCost; // 0x9e8(0x18)
	struct FText Text_LightCostNeedMore; // 0xa00(0x18)
	struct UFortWorldItemDefinition* Item_Wood; // 0xa18(0x08)
	bool Stoked; // 0xa20(0x01)
	char pad_A21[0x3]; // 0xa21(0x03)
	struct FGameplayTag StokedCue; // 0xa24(0x08)
	char pad_A2C[0x4]; // 0xa2c(0x04)
	struct FScalableFloat Row_Stoke_Cost; // 0xa30(0x28)
	struct FScalableFloat Row_HotfixStokeEnabled; // 0xa58(0x28)
	struct FText Text_StokeCostNeedMore; // 0xa80(0x18)
	bool HasBeenLit; // 0xa98(0x01)
	char pad_A99[0x7]; // 0xa99(0x07)
	struct FScalableFloat Row_ReplaceCampfire; // 0xaa0(0x28)
	struct ABuildingActor* ActorToReplaceWith; // 0xac8(0x08)
	bool CurieActivated; // 0xad0(0x01)
	char pad_AD1[0x7]; // 0xad1(0x07)
	struct FScalableFloat FloodLevel; // 0xad8(0x28)
	float FloodHeightPerLevel; // 0xb00(0x04)
	float OceanHeight; // 0xb04(0x04)
	struct TMap<struct AActor*, struct FCurieInteractHandle> InteractHandleMap; // 0xb08(0x50)
	struct FGameplayTag FireCue; // 0xb58(0x08)
	struct UMaterialInstanceDynamic* WoodBurningMatInstance; // 0xb60(0x08)
	float FX_WoodBurnAmount; // 0xb68(0x04)
	float FX_WoodBurnEmissive; // 0xb6c(0x04)

	void DisableIfBelowFlood(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.DisableIfBelowFlood // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShouldPlayNativeCurieFX(enum class EFortCurieNativeFXType FXType, struct FFortNativeCurieFXResponse OutResponse); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ShouldPlayNativeCurieFX // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void HasInfiniteResources(struct APawn* Pawn, bool HasInfiniteResources); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HasInfiniteResources // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void OnRep_Stoked(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_Stoked // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FText BlueprintGetFailedInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintGetFailedInteractionString // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	int32_t GetCostReActivate(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.GetCostReActivate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnRep_LitRepBool(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_LitRepBool // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_Destroyed(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnRep_Destroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CheckIfUserIsSpecialS7(struct AFortPawn* PawnWhoLitFire, bool UserIsSpecial); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckIfUserIsSpecialS7 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool RowToBool(struct FScalableFloat Input); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.RowToBool // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetSheetValues(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.SetSheetValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void OnReady_9F4554BE40FCB41157835B9AD897EE69(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnReady_9F4554BE40FCB41157835B9AD897EE69 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCurieActive_A24E3C804D14344FC0E5E0B5CDB4FF55(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnCurieActive_A24E3C804D14344FC0E5E0B5CDB4FF55 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Light(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Light // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GoOut(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.GoOut // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Start(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Start // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleBoundDestroyed(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HandleBoundDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CheckDestroyDisabled(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckDestroyDisabled // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpecialS7LightsFireAfterOut(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.SpecialS7LightsFireAfterOut // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void KillDouseSmokeWisp(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.KillDouseSmokeWisp // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Server_QuestObjectiveUpdated(struct AFortPlayerController* Controller, struct UFortQuestItemDefinition* QuestDef, struct FName BackendName, int32_t CompletionCount, bool ObjectiveCompleted, bool QuestCompleted); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Server_QuestObjectiveUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleCharacterVariantTransition(struct AFortPawn* TransitioningPawn); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.HandleCharacterVariantTransition // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PayLightCost(struct AFortPawn* InteractingPawn); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.PayLightCost // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PayStokeCost(struct AFortPawn* InteractingPawn); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.PayStokeCost // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CheckReplaceCampfire(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckReplaceCampfire // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void EndFireInteract(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.EndFireInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCurieElementAttached_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag ElementTag); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnCurieElementAttached_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnCurieElementDetached_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag ElementTag); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.OnCurieElementDetached_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void CheckInitialOverlappingActors(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.CheckInitialOverlappingActors // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Begin_Wood_Burn_FX(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.Begin_Wood_Burn_FX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_2_OnLinkedActorDestroyed__DelegateSignature(); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_2_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_BGA_Athena_EnvCampFire(int32_t EntryPoint); // Function B_BGA_Athena_EnvCampFire.B_BGA_Athena_EnvCampFire_C.ExecuteUbergraph_B_BGA_Athena_EnvCampFire // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

