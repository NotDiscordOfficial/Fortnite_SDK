// BlueprintGeneratedClass NPC_Pawn_Parent.NPC_Pawn_Parent_C
// Size: 0x2f29 (Inherited: 0x2904)
struct ANPC_Pawn_Parent_C : AEnemyPawn_Parent_Deimos_C {
	char pad_2904[0x4]; // 0x2904(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2908(0x08)
	struct USoundLibraryComponent* SoundLibrary_Component; // 0x2910(0x08)
	struct UAudioComponent* MovementAudioComponent; // 0x2918(0x08)
	struct UNPC_VoiceComponent_C* NPC_VoiceComponent; // 0x2920(0x08)
	struct UAudioComponent* VOAudioComponent; // 0x2928(0x08)
	struct UFortWidgetComponent* NPCStatusWidget; // 0x2930(0x08)
	struct UGameplayEffect* GE_NPC_RecentlyDamaged; // 0x2938(0x08)
	enum class Enum_NPC_AlertLevel NPC_AlertLevel; // 0x2940(0x01)
	enum class Enum_NPC_AlertLevel NPC_AlertLevelPrevious; // 0x2941(0x01)
	char pad_2942[0x6]; // 0x2942(0x06)
	struct TMap<enum class Enum_NPC_AlertLevel, struct FGameplayTag> NPC AlertLevelToTagMap; // 0x2948(0x50)
	bool NPC StatusWidgetHealthBarDisabled; // 0x2998(0x01)
	char pad_2999[0x3]; // 0x2999(0x03)
	struct FGameplayTag GameplayCue_PickupGrabbed; // 0x299c(0x08)
	enum class EFortRarity NPC BestLootRarityInInventory; // 0x29a4(0x01)
	bool NPC DebugPawn; // 0x29a5(0x01)
	bool NPC ShowInventoryRarityVisuals; // 0x29a6(0x01)
	char pad_29A7[0x1]; // 0x29a7(0x01)
	float InventoryGlowDelay; // 0x29a8(0x04)
	char pad_29AC[0x4]; // 0x29ac(0x04)
	struct FScalableFloat NPC NumberOfInventoryItemsToDeliverHF; // 0x29b0(0x28)
	bool NPC SpawnInvisible; // 0x29d8(0x01)
	char pad_29D9[0x7]; // 0x29d9(0x07)
	struct FGameplayTagContainer TC_NPC SpawnAbilityTag; // 0x29e0(0x20)
	bool NPC IsSpawning; // 0x2a00(0x01)
	char pad_2A01[0x3]; // 0x2a01(0x03)
	float NPC OriginalGravityScale; // 0x2a04(0x04)
	struct FRotator NPC OriginalRotationRate; // 0x2a08(0x0c)
	bool NPC HasPawnGoal; // 0x2a14(0x01)
	char pad_2A15[0x3]; // 0x2a15(0x03)
	struct AActor* NPC PawnGoalActor; // 0x2a18(0x08)
	struct FScalableFloat NPC NumberOfInventoryItemsToConsumeBeforeFullHF; // 0x2a20(0x28)
	bool NPC PawnIsDestroyingBuildingForNavigation; // 0x2a48(0x01)
	char pad_2A49[0x7]; // 0x2a49(0x07)
	struct FScalableFloat MaxIdleVODelay; // 0x2a50(0x28)
	struct FScalableFloat MinIdleVODelay; // 0x2a78(0x28)
	struct FScalableFloat NPC DeathDropLootDelay; // 0x2aa0(0x28)
	struct FName NPC DeathDropLootTierGroupName; // 0x2ac8(0x08)
	struct FGameplayTagContainer NPC DeathDropLootRequiredDamageTags; // 0x2ad0(0x20)
	struct FGameplayTagContainer NPC DeathDropLootForbiddenDamageTags; // 0x2af0(0x20)
	struct FGameplayTagContainer GrantStartingItemsAbilityTC; // 0x2b10(0x20)
	bool NPC HasItemInInventory; // 0x2b30(0x01)
	char pad_2B31[0x3]; // 0x2b31(0x03)
	struct FGameplayTag VoiceTag_FullAlertIdle; // 0x2b34(0x08)
	struct FGameplayTag VoiceTag_Idle; // 0x2b3c(0x08)
	struct FGameplayTag VoiceTag_ReturnToIdle; // 0x2b44(0x08)
	struct FGameplayTag VoiceTag_LostTarget; // 0x2b4c(0x08)
	struct FGameplayTag VoiceTag_Suspicious; // 0x2b54(0x08)
	struct FGameplayTag VoiceTag_FullAlert; // 0x2b5c(0x08)
	char pad_2B64[0x4]; // 0x2b64(0x04)
	struct TArray<struct FStruct_NPC_TargetSlots> NPC TargetSlotsHF; // 0x2b68(0x10)
	bool NPC DamageCanCancelIntroPhase; // 0x2b78(0x01)
	char pad_2B79[0x7]; // 0x2b79(0x07)
	struct FGameplayTagQuery TQ_NPC DamageTagsThatCanCancelIntroPhase; // 0x2b80(0x48)
	struct UGameplayEffect* GE_NPC_IntroPhaseBehaviorCooldown; // 0x2bc8(0x08)
	struct FGameplayTagContainer TC_IntroBehaviorActive; // 0x2bd0(0x20)
	bool Debug_NPC_AlertLevelForced; // 0x2bf0(0x01)
	char pad_2BF1[0x7]; // 0x2bf1(0x07)
	struct TArray<struct USoundLibrary*> SoundLibs; // 0x2bf8(0x10)
	bool NPC PawnCanInteractInternal; // 0x2c08(0x01)
	char pad_2C09[0x7]; // 0x2c09(0x07)
	struct FScalableFloat NPC PrimtiveDataFloatSetRandomlyInRange; // 0x2c10(0x28)
	struct FScalableFloat NPC PrimtiveDataFloatIndexHF; // 0x2c38(0x28)
	struct FScalableFloat NPC PrimtiveDataFloatMinRangeHF; // 0x2c60(0x28)
	struct FScalableFloat NPC PrimtiveDataFloatMaxRangeHF; // 0x2c88(0x28)
	struct AActor* NPC Leader; // 0x2cb0(0x08)
	struct FGameplayTag GameplayCue_LeaderSet; // 0x2cb8(0x08)
	struct TArray<struct USoundLibrary*> SoundLibs_Alert; // 0x2cc0(0x10)
	struct TArray<struct USoundLibrary*> SoundLibs_Aggressive; // 0x2cd0(0x10)
	struct TArray<struct USoundLibrary*> SoundLibs_Foley; // 0x2ce0(0x10)
	struct USoundBase* UnawareStateChangeSound; // 0x2cf0(0x08)
	struct USoundBase* AlertStateChangeSound; // 0x2cf8(0x08)
	struct USoundBase* AggressiveStateChangeSound; // 0x2d00(0x08)
	float NPC Skeletal Mesh Index; // 0x2d08(0x04)
	char pad_2D0C[0x4]; // 0x2d0c(0x04)
	struct USoundBase* TamedSound; // 0x2d10(0x08)
	struct UAudioComponent* StateChangeSound; // 0x2d18(0x08)
	struct USoundLibrary* CurrentSoundLIb; // 0x2d20(0x08)
	struct FScalableFloat NPC ShouldDespawnFromStormHF; // 0x2d28(0x28)
	struct FScalableFloat NPC DespawnTimerHF; // 0x2d50(0x28)
	struct FGameplayTag NPC DespawnGameplayTag; // 0x2d78(0x08)
	struct FTimerHandle NPC TestIsInSafeZoneTimer; // 0x2d80(0x08)
	struct FTimerHandle NPC DespawnFromStormTimer; // 0x2d88(0x08)
	bool NPC isTryingToDespawn; // 0x2d90(0x01)
	char pad_2D91[0x3]; // 0x2d91(0x03)
	struct FGameplayTag NPC ResetIntroGameplayTags; // 0x2d94(0x08)
	float SelectedPrimitiveDataFloat; // 0x2d9c(0x04)
	struct TArray<struct UMaterialInterface*> OG Materials; // 0x2da0(0x10)
	bool NPC Apply GE for Swimming; // 0x2db0(0x01)
	char pad_2DB1[0x7]; // 0x2db1(0x07)
	struct UGameplayEffect* NPC GE_ClassToApplyForSwimming; // 0x2db8(0x08)
	bool Exit Burst GC; // 0x2dc0(0x01)
	char pad_2DC1[0x3]; // 0x2dc1(0x03)
	struct FActiveGameplayEffectHandle NPC GE_AppliedForSwimming; // 0x2dc4(0x08)
	struct FName GoalActorBBKey; // 0x2dcc(0x08)
	struct FGameplayTag GameplayCueLureInterest; // 0x2dd4(0x08)
	char pad_2DDC[0x4]; // 0x2ddc(0x04)
	struct UObject* NPC PreviousLureGoal; // 0x2de0(0x08)
	struct FGameplayTag Exit Water; // 0x2de8(0x08)
	struct FGameplayTag Enter Water; // 0x2df0(0x08)
	struct FScalableFloat NPC MaxDistanceFromDamagedNPCToDrawHeallthBarHF; // 0x2df8(0x28)
	struct FScalableFloat NPC HealthBarHideTimeAfterDeathHF; // 0x2e20(0x28)
	struct FScalableFloat NPC PlayEffectWhenLuredHF; // 0x2e48(0x28)
	struct FScalableFloat NPC PawnCanInteractHF; // 0x2e70(0x28)
	struct FScalableFloat NPC AllowInteractOnlyWhenUnawareHF; // 0x2e98(0x28)
	struct FScalableFloat NPC AllowInteractWhenHasLeaderHF; // 0x2ec0(0x28)
	struct FScalableFloat NPC AllowDrownInShallowWaterHF; // 0x2ee8(0x28)
	bool NPC_IsInventoryInitialized; // 0x2f10(0x01)
	bool isGCForLeaderSetLooping; // 0x2f11(0x01)
	char pad_2F12[0x2]; // 0x2f12(0x02)
	struct FGameplayTag NPC DeathByStormTag; // 0x2f14(0x08)
	bool NPC TryDespawnAbility; // 0x2f1c(0x01)
	char pad_2F1D[0x3]; // 0x2f1d(0x03)
	struct FActiveGameplayEffectHandle GeOutsideSafeZoneDamageHandle; // 0x2f20(0x08)
	bool IsGEStormDamageInit; // 0x2f28(0x01)

	void NPC GetSafeZonePhase(int32_t SafeZonePhase); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetSafeZonePhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_NPC Leader(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC Leader // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Play Water Splash at Water Surface(struct AFortWaterBodyActor* Water Body, bool Enter Water); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Play Water Splash at Water Surface // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetMaterialFromDeath(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ResetMaterialFromDeath // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_SelectedPrimitiveDataFloat(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_SelectedPrimitiveDataFloat // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CheckSoundLibraryRemoved(struct TArray<struct USoundLibrary*> Libraries); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.CheckSoundLibraryRemoved // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CheckSoundLibraryAdded(struct TArray<struct USoundLibrary*> Libraries); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.CheckSoundLibraryAdded // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateSoundLibrary(enum class Enum_NPC_AlertLevel Alert Level); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.UpdateSoundLibrary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC ClearOutTargetSlots(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ClearOutTargetSlots // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC UpdateInteract(bool CanInteract, bool EnabledInteract); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC UpdateInteract // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC HasLeader?(bool HasLeader?, struct AActor* Leader); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC HasLeader? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void NPC SetLeader(struct AActor* Leader, bool Success?, struct AActor* LeaderSet); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetLeader // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC AttemptToSetLeader(struct AActor* PossibleLeader); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC AttemptToSetLeader // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetPrimitiveDataFloat(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.SetPrimitiveDataFloat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SelectPrimitiveDataFloat(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.SelectPrimitiveDataFloat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StoreOriginalGravityAndRotation(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StoreOriginalGravityAndRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC DisableIntroPhaseBehavior(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC DisableIntroPhaseBehavior // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC DamageAttemptDisableIntroPhaseBehavior(struct FGameplayTagContainer DamageTags); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC DamageAttemptDisableIntroPhaseBehavior // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC TargetSlotIsUsingOverride(enum class Enum_NPC_TargetSlots TargetSlotType, struct AActor* TargetWeWantToSlotOnto, bool Override); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TargetSlotIsUsingOverride // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC TargetSlotInfo(enum class Enum_NPC_TargetSlots TargetSlotType, struct AActor* TargetWeWantToSlotOnto, int32_t TargetSlotCount, int32_t TargetSlotMax, int32_t NPC TargetSlotsRequired, bool TargetSlotsMaxOrMore, bool TargetSlotCountIsExactlyMax, bool NPC IsTargetSlotOwner, bool NPC HasSpaceToSlotOnTarget, enum class Enum_NPC_TargetSlots TargetSlotTypeOut, struct UGameplayEffect* TargetSlotCountingGE, struct FScalableFloat AI TargetSlotSizeHF, struct FScalableFloat AI TargetSlotDurationHF, struct UGameplayEffect* TargetSlotOverrideGE, struct UGameplayEffect* TargetSlotOwnerGE, struct UGameplayEffect* TargetSlotCountingMaxedGE); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TargetSlotInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void NPC CheckIsInSafeZone(bool TestSucceeded, bool IsInSafeZone); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC CheckIsInSafeZone // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC HandleAlertLevelVoice(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC HandleAlertLevelVoice // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC TryToDropLootOnDeath(struct FGameplayTagContainer DamageTags, bool CanDropLoot); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC TryToDropLootOnDeath // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC ApplyGameplayEffectWithMMRScaling(struct AActor* Actor, struct UGameplayEffect* GE Class); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyGameplayEffectWithMMRScaling // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC SetLootCollectionPhaseCompleteToBlackboard(bool LootCollectionPhaseComplete); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetLootCollectionPhaseCompleteToBlackboard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC ResetOriginalRotationRate(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ResetOriginalRotationRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC ResetOriginalGravityScale(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ResetOriginalGravityScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC SetReturnGatheredLootToBlackboard(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetReturnGatheredLootToBlackboard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC GetScalableFloatHotfixValue(struct FScalableFloat ScalableFloatHotfix, float AtLevel, bool AsBool, int32_t AsIntRounded, float AsFloat); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetScalableFloatHotfixValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC ScalableFloatIsValid(struct FScalableFloat ScalableFloat, bool Valid); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ScalableFloatIsValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void NPC PickupDropped(struct AFortPickup* FortPickupDropped); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupDropped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC PickupGrabbed(struct AFortPickup* FortPickupGrabbed); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PickupGrabbed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_NPC BestLootRarityInInventory(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC BestLootRarityInInventory // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC SendGameplayCuePickupGrabbed(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SendGameplayCuePickupGrabbed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC PawnDebugMessage(struct FString String, bool OnlyWhenDebug); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC PawnDebugMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC GetInventoryInformation(bool HasItemInInventory, int32_t TotalNumberOfInventoryItems, int32_t LastInventoryItemIndex, bool HasEnoughItemsToDeliver, bool ConsumedEnoughItemsToBeConsideredFull); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetInventoryInformation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC SetBestLootRarityInInventory(enum class EFortRarity NPC BestLootRarityInInventory); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetBestLootRarityInInventory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_NPC_AlertLevel(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnRep_NPC_AlertLevel // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC GetAlertLevelInfo(enum class Enum_NPC_AlertLevel AlertLevel, struct FGameplayTag AlertLevelTag, bool ValidDataFound); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC GetAlertLevelInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void NPC ApplyRecentlyDamagedTag(struct UGameplayEffect* RecentlyDamagedOverride); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ApplyRecentlyDamagedTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool ShouldUpdateSkeletalMesh(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ShouldUpdateSkeletalMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void GrantStartingItems(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.GrantStartingItems // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void WidgetVisibilityChanged(bool bVisible); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.WidgetVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC ParentLaunchVehicle(struct AActor* Vehicle, struct FVector Velocity); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC ParentLaunchVehicle // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TestLoot(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TestLoot // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void NPC SetupHealthBarOnDeath(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC SetupHealthBarOnDeath // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceivePossessed(struct AController* NewController); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void RequestUpdateNPCAlertLevel(enum class Enum_NPC_AlertLevel NPC_AlertLevel); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.RequestUpdateNPCAlertLevel // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPCAlertLevelChangedClient(enum class Enum_NPC_AlertLevel NPC_AlertLevel); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCAlertLevelChangedClient // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC InitializeIdleVO(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC InitializeIdleVO // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TriggerIdleVO(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TriggerIdleVO // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void NPCEnableHealthBars(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCEnableHealthBars // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPCDisableHealthBars(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPCDisableHealthBars // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Debug_AlertLevel_ForceLevel(enum class Enum_NPC_AlertLevel NewNPC_AlertLevel); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_AlertLevel_ForceLevel // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Debug_AlertLevel_ClearDebug(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_AlertLevel_ClearDebug // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Debug_ForceAlertLevel_Invalid(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Invalid // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Debug_ForceAlertLevel_Unaware(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Unaware // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Debug_ForceAlertLevel_NA(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_NA // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Debug_ForceAlertLevel_Alerted(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Alerted // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Debug_ForceAlertLevel_Aggressive(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.Debug_ForceAlertLevel_Aggressive // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleInteracts(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.HandleInteracts // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC Pawn Interact(struct AFortAIPawn* AI, struct AFortPlayerController* InteractingPlayerController, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC Pawn Interact // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void On NPC PawnInteractedWith(struct AActor* AIPawn, struct AFortPlayerPawn* InteractingPlayerPawn); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.On NPC PawnInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBeginDeepWaterInteraction(struct FVector WaterSurfaceLocation, float WaterDepth); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnBeginDeepWaterInteraction // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void NPC LeaderSet(bool Success?, struct AActor* Leader); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC LeaderSet // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TestIsInSafeZone(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TestIsInSafeZone // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TryToDespawnDueToStorm(bool Reset Timer); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TryToDespawnDueToStorm // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeTestInSafeZone(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.InitializeTestInSafeZone // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DespawnDueToStorm(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.DespawnDueToStorm // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void End Music Tracker(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.End Music Tracker // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BeginMusicTracker(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.BeginMusicTracker // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopUpdatingHealthBarWidget(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StopUpdatingHealthBarWidget // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RemoveSoundSystemLibraries(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.RemoveSoundSystemLibraries // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AddSoundSystemLibraries(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.AddSoundSystemLibraries // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeInventory(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.InitializeInventory // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartUpdatingHleathBarWidget(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StartUpdatingHleathBarWidget // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NPC AlertLevelChangedServer(enum class Enum_NPC_AlertLevel NPCAlertLevel); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.NPC AlertLevelChangedServer // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDamageServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnPawnHealthChanged_Event_1(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnPawnHealthChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEnteredWaterBody(struct AFortWaterBodyActor* WaterBody, bool bIsFirstBody); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnEnteredWaterBody // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnExitedWaterBody(struct AFortWaterBodyActor* WaterBody, bool bIsLastBody); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.OnExitedWaterBody // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void LuredOnServer(enum class Enum_NPC_AlertLevel AlertLevel); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.LuredOnServer // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LuredInterest(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.LuredInterest // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayEnterWaterSplash(struct AFortWaterBodyActor* Water Body); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayEnterWaterSplash // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayExitWaterSplash(struct AFortWaterBodyActor* Water Body); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.PlayExitWaterSplash // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TryWaterInteractionDrown(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.TryWaterInteractionDrown // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopTestingIsInSafeZone(); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.StopTestingIsInSafeZone // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_NPC_Pawn_Parent(int32_t EntryPoint); // Function NPC_Pawn_Parent.NPC_Pawn_Parent_C.ExecuteUbergraph_NPC_Pawn_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

