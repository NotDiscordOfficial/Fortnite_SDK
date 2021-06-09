// Class CraftingRuntime.CraftingCheatManager
// Size: 0x28 (Inherited: 0x28)
struct UCraftingCheatManager : UChildCheatManager {

	void StartSelfCrafting(struct FName FormulaName); // Function CraftingRuntime.CraftingCheatManager.StartSelfCrafting // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x3b41a98
};

// Class CraftingRuntime.CraftingLibrary
// Size: 0x28 (Inherited: 0x28)
struct UCraftingLibrary : UBlueprintFunctionLibrary {

	void StartCrafting(struct AFortPlayerController* Instigator, struct AActor* CraftingObject, struct FName CraftingFormulaName); // Function CraftingRuntime.CraftingLibrary.StartCrafting // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b418e4
	void ReportCraftingSuccess(struct AFortPlayerController* Instigator, struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.ReportCraftingSuccess // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b41254
	void PickupItemAndStartCrafting(struct AFortPlayerController* Instigator, struct AActor* CraftingObject, struct AFortPickup* Pickup, struct FName CraftingFormulaName); // Function CraftingRuntime.CraftingLibrary.PickupItemAndStartCrafting // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b41010
	bool IsValidIngredient(struct AFortPlayerController* FortPC, struct AActor* CraftingObject, struct UFortItemDefinition* ItemDef); // Function CraftingRuntime.CraftingLibrary.IsValidIngredient // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b40a04
	void GiveItemToCraftingObject(struct AFortPlayerController* Instigator, struct AActor* CraftingObject, struct FFortItemEntry ItemEntryToGrant); // Function CraftingRuntime.CraftingLibrary.GiveItemToCraftingObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3b4007c
	void GetValidIngredientsInInventory(struct AFortPlayerController* FortPC, struct AActor* CraftingObject, struct TArray<struct UFortWorldItem*> OutIngredients); // Function CraftingRuntime.CraftingLibrary.GetValidIngredientsInInventory // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b3ff28
	void GetUIDataForCraftingIngredientTags(struct UObject* WorldContextObject, struct FGameplayTagContainer IngredientTags, struct TArray<struct TSoftObjectPtr<struct UFortItemDefinition>> OutItemDefs, struct TArray<struct TSoftObjectPtr<struct UObject>> OutIcons); // Function CraftingRuntime.CraftingLibrary.GetUIDataForCraftingIngredientTags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b3fd2c
	void GetKnownCraftingFormulas(struct AFortPlayerController* FortPC, struct AActor* CraftingObject, struct TArray<struct FName> OutFormulas); // Function CraftingRuntime.CraftingLibrary.GetKnownCraftingFormulas // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b3fb04
	struct TArray<struct UFortWorldItem*> GetIngredientsInCraftingObject(struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.GetIngredientsInCraftingObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b3fa30
	void GetCraftingResultsForRowName(struct UObject* WorldContextObject, struct FName CraftingFormulaRow, struct TArray<struct FItemAndCount> OutResults); // Function CraftingRuntime.CraftingLibrary.GetCraftingResultsForRowName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b3f8d0
	float GetCraftingObjectCurrentCraftingStateTimeLeft(struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateTimeLeft // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b3f838
	float GetCraftingObjectCurrentCraftingStateStartTime(struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateStartTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b3f778
	float GetCraftingObjectCurrentCraftingStateEndTime(struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.GetCraftingObjectCurrentCraftingStateEndTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b3f6b0
	enum class ECraftingObjectState GetCraftingObjectCraftingState(struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.GetCraftingObjectCraftingState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3b3f5f0
	struct TArray<struct UFortWorldItem*> GetCraftingIngredients_TempItems(struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.GetCraftingIngredients_TempItems // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b3f50c
	struct FName GetCraftingFormulaNameBeingCrafted(struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.GetCraftingFormulaNameBeingCrafted // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b3f448
	bool GetCraftingFormulaIngredientRequirements(struct UObject* WorldContextObject, struct FName CraftingFormulaRow, struct TArray<struct FCraftingIngredientRequirement> OutIngredientRequirements); // Function CraftingRuntime.CraftingLibrary.GetCraftingFormulaIngredientRequirements // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b3f2d8
	struct TArray<struct UFortWorldItem*> GetCraftedResults_TempItems(struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.GetCraftedResults_TempItems // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b3f1f4
	void GetAllValidIngredients(struct AFortPlayerController* FortPC, struct AActor* CraftingObject, struct TArray<struct FGameplayTagContainer> OutIngredients); // Function CraftingRuntime.CraftingLibrary.GetAllValidIngredients // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b3efd4
	void GetAllCraftableFormulas(struct AFortPlayerController* FortPC, struct AActor* CraftingObject, struct TArray<struct FName> OutFormulas); // Function CraftingRuntime.CraftingLibrary.GetAllCraftableFormulas // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b3ee80
	void EjectItems(struct AFortPlayerController* Instigator, struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.EjectItems // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b3ed48
	void ClaimCraftingResults(struct AFortPlayerController* Instigator, struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.ClaimCraftingResults // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b3e9f8
	bool CanCraftFormulaWithAdditionalItems(struct AFortPlayerController* FortPC, struct AActor* CraftingObject, struct FName CraftingFormulaRow, struct TArray<struct FItemAndCount> AdditionalItems, struct TArray<struct FCraftingIngredientQueryState> OutIngredientStates); // Function CraftingRuntime.CraftingLibrary.CanCraftFormulaWithAdditionalItems // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b3e684
	bool CanCraftFormula(struct AFortPlayerController* FortPC, struct AActor* CraftingObject, struct FName CraftingFormulaRow, struct TArray<struct FCraftingIngredientQueryState> OutIngredientStates); // Function CraftingRuntime.CraftingLibrary.CanCraftFormula // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b3e4f0
	void CancelCrafting(struct AFortPlayerController* Instigator, struct AActor* CraftingObject); // Function CraftingRuntime.CraftingLibrary.CancelCrafting // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b3e89c
};

// Class CraftingRuntime.CraftingObjectBGA
// Size: 0x8f8 (Inherited: 0x898)
struct ACraftingObjectBGA : ABuildingGameplayActor {
	char pad_898[0x8]; // 0x898(0x08)
	struct AFortInventory* Inventory; // 0x8a0(0x08)
	char pad_8A8[0x18]; // 0x8a8(0x18)
	struct USphereComponent* SphereComponent_InteractionRange; // 0x8c0(0x08)
	SoftClassProperty MenuWidget; // 0x8c8(0x28)
	struct UWidgetComponent* WidgetComponent_PotContents; // 0x8f0(0x08)

	void HandleInteractionRangeEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function CraftingRuntime.CraftingObjectBGA.HandleInteractionRangeEndOverlap // (Final|Native|Private) // @ game+0x3b40650
	void HandleInteractionRangeBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function CraftingRuntime.CraftingObjectBGA.HandleInteractionRangeBeginOverlap // (Final|Native|Private|HasOutParms) // @ game+0x3b403e4
};

// Class CraftingRuntime.CraftingObjectComponent
// Size: 0x460 (Inherited: 0xb0)
struct UCraftingObjectComponent : UGameFrameworkComponent {
	struct FMulticastInlineDelegate CraftingObjectStateChanged; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnFormulaCraftableChanged; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnCraftingSuccess; // 0xd0(0x10)
	struct FCraftingObjectRepStateData CraftingObjectRepStateData; // 0xe0(0x08)
	struct FName CraftingFormulaRow; // 0xe8(0x08)
	struct TWeakObjectPtr<struct AFortPlayerController> CraftingInstigator; // 0xf0(0x08)
	struct TArray<struct FFortItemEntry> IngredientItems; // 0xf8(0x10)
	struct FString LastIngredientStringForAnalytics; // 0x108(0x10)
	struct FString LastFormulaStringForAnalytics; // 0x118(0x10)
	struct FString LastResultsStringForAnalytics; // 0x128(0x10)
	struct TArray<struct FItemAndCount> CraftingResults; // 0x138(0x10)
	struct FGameplayAbilitySpecHandle WhileCraftingAbilitySpecHandle; // 0x148(0x04)
	struct FGameplayAbilitySpecHandle OwnerCraftingAbilitySpecHandle; // 0x14c(0x04)
	struct FGameplayTag CraftingObjectTag; // 0x150(0x08)
	struct FScalableFloat CraftingTimeLength; // 0x158(0x28)
	struct FScalableFloat ReadyTimeLength; // 0x180(0x28)
	struct FScalableFloat OverCraftingTimeLength; // 0x1a8(0x28)
	struct FScalableFloat ResettingTimeLength; // 0x1d0(0x28)
	struct FName OverCraftingLootTierKey; // 0x1f8(0x08)
	char bTakeItemsAtCraftingStart : 1; // 0x200(0x01)
	char bGiveIngredientsToCraftingObject : 1; // 0x200(0x01)
	char bGiveIngredientsToInstigator : 1; // 0x200(0x01)
	char pad_200_3 : 5; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	struct FVector IngredientSpawnOffset; // 0x204(0x0c)
	char bGiveToCraftingObject : 1; // 0x210(0x01)
	char bGiveResultToInstigator : 1; // 0x210(0x01)
	char pad_210_2 : 6; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	SoftClassProperty OwnerCraftingAbility; // 0x218(0x28)
	struct FGameplayTagContainer CraftingFailedTags; // 0x240(0x20)
	struct AFortPickup* PendingPickupCraftingItem; // 0x260(0x08)
	struct FName PendingPickupCraftingFormula; // 0x268(0x08)
	struct FFortItemEntry PendingPickupCraftingItemEntry; // 0x270(0x190)
	int32_t PendingPickupHeldCount; // 0x400(0x04)
	char pad_404[0x5c]; // 0x404(0x5c)

	void OnRep_CraftingObjectRepStateData(); // Function CraftingRuntime.CraftingObjectComponent.OnRep_CraftingObjectRepStateData // (Final|Native|Private) // @ game+0x3b40ffc
	void HandlePickupCraftingItemPickedUp(struct AFortPickup* Pickup, struct AFortPawn* InteractingPawn, struct UFortWorldItemDefinition* WorldItemDefinition, struct FVector PickupLocation); // Function CraftingRuntime.CraftingObjectComponent.HandlePickupCraftingItemPickedUp // (Final|Native|Private|HasDefaults) // @ game+0x3b4087c
	void CraftingObjectStateChanged__DelegateSignature(enum class ECraftingObjectState CraftingState, float CraftingStateStartTime, float CraftingStateDuration); // DelegateFunction CraftingRuntime.CraftingObjectComponent.CraftingObjectStateChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda7c34
	void CraftingObjectOnFormulaCraftableChanged__DelegateSignature(struct FName FormulaRowName, bool bIsCraftable); // DelegateFunction CraftingRuntime.CraftingObjectComponent.CraftingObjectOnFormulaCraftableChanged__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0xda7c34
};

// Class CraftingRuntime.FortContextualTutorial_CraftingComplete
// Size: 0x120 (Inherited: 0x120)
struct UFortContextualTutorial_CraftingComplete : UFortContextualTutorial {

	void OnCraftingSuccess(struct AFortPlayerController* Instigator, struct AActor* CraftingObject, struct FName FormulaRowName); // Function CraftingRuntime.FortContextualTutorial_CraftingComplete.OnCraftingSuccess // (Final|Native|Private|HasOutParms) // @ game+0x3b40ebc
};

// Class CraftingRuntime.FortContextualTutorial_CraftingReady
// Size: 0x120 (Inherited: 0x120)
struct UFortContextualTutorial_CraftingReady : UFortContextualTutorial {

	void HandleFormulaCraftableChanged(struct FName FormulaRowName, bool bIsCraftable); // Function CraftingRuntime.FortContextualTutorial_CraftingReady.HandleFormulaCraftableChanged // (Final|Native|Private|HasOutParms) // @ game+0x3b40204
};

// Class CraftingRuntime.FortContextualTutorial_CraftingTabOpen
// Size: 0x128 (Inherited: 0x120)
struct UFortContextualTutorial_CraftingTabOpen : UFortContextualTutorial {
	char pad_120[0x8]; // 0x120(0x08)

	void HandleInventoryTabChanged(struct FName InventoryTabNameId); // Function CraftingRuntime.FortContextualTutorial_CraftingTabOpen.HandleInventoryTabChanged // (Final|Native|Private) // @ game+0x3b407e4
	void HandleFormulaCraftableChanged(struct FName FormulaRowName, bool bIsCraftable); // Function CraftingRuntime.FortContextualTutorial_CraftingTabOpen.HandleFormulaCraftableChanged // (Final|Native|Private|HasOutParms) // @ game+0x3b40304
};

// Class CraftingRuntime.FortControllerComponent_CraftingNetworkEvents
// Size: 0xc0 (Inherited: 0xb0)
struct UFortControllerComponent_CraftingNetworkEvents : UFortControllerComponent {
	struct FMulticastInlineDelegate OnCraftingSuccess; // 0xb0(0x10)

	void ServerStartCrafting(struct AActor* CraftingObject, struct FName CraftingFormulaName); // Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerStartCrafting // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x3b417c0
	void ServerReportCraftingSuccess(struct AActor* CraftingObject); // Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerReportCraftingSuccess // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x3b41708
	void ServerPickupItemAndStartCrafting(struct AActor* CraftingObject, struct AFortPickup* Pickup, struct FName CraftingFormulaName); // Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerPickupItemAndStartCrafting // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x3b4159c
	void ServerEjectItems(struct AActor* CraftingObject); // Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerEjectItems // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x3b414e4
	void ServerClaimCraftingResults(struct AActor* CraftingObject); // Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerClaimCraftingResults // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x3b4142c
	void ServerCancelCrafting(struct AActor* CraftingObject); // Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerCancelCrafting // (Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate) // @ game+0x3b41374
	void NotifyCraftingSuccess(struct AActor* CraftingObject, struct FName FormulaRowName); // Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.NotifyCraftingSuccess // (Final|Native|Public|HasOutParms) // @ game+0x3b40d84
	void ClientNotifyCraftingSuccess(struct AActor* CraftingObject, struct FName FormulaRowName); // Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ClientNotifyCraftingSuccess // (Net|Native|Event|Public|NetClient) // @ game+0x3b3ec5c
	void ClientNotifyCraftingFailed(struct AActor* CraftingObject, struct FGameplayTagContainer FailedReason); // Function CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ClientNotifyCraftingFailed // (Net|Native|Event|Public|NetClient) // @ game+0x3b3eb30
};

// Class CraftingRuntime.FortGameStateComponent_Crafting
// Size: 0x260 (Inherited: 0xb0)
struct UFortGameStateComponent_Crafting : UFortGameStateComponent {
	struct FDataRegistryType CraftingFormulaRegistryType; // 0xb0(0x08)
	struct FDataRegistryType CraftingIngredientsUIDataRegistryType; // 0xb8(0x08)
	char pad_C0[0x140]; // 0xc0(0x140)
	struct TArray<struct FCraftingResult> CraftingResultsList; // 0x200(0x10)
	char pad_210[0x50]; // 0x210(0x50)

	void OnRep_CraftingResultsList(); // Function CraftingRuntime.FortGameStateComponent_Crafting.OnRep_CraftingResultsList // (Final|Native|Protected) // @ game+0x208b9d8
	void OnPlaylistDataReady(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags); // Function CraftingRuntime.FortGameStateComponent_Crafting.OnPlaylistDataReady // (Final|Native|Protected|HasOutParms) // @ game+0x27dcba0
};

// Class CraftingRuntime.FortPickupInteractOverrideComponent_Crafting
// Size: 0xf0 (Inherited: 0xd0)
struct UFortPickupInteractOverrideComponent_Crafting : UFortPickupInteractOverrideComponent {
	struct UFortItemDefinition* LastPickupItemDef; // 0xd0(0x08)
	struct UFortItemDefinition* LastFocusedItemDef; // 0xd8(0x08)
	struct FName LastTargetFormulaName; // 0xe0(0x08)
	float ContextualCraftingInteractDuration; // 0xe8(0x04)
	enum class TInteractionType CachedInteractionType; // 0xec(0x01)
	enum class EInteractionBeingAttempted CachedInteractionBeingAttempted; // 0xed(0x01)
	char pad_EE[0x2]; // 0xee(0x02)
};

