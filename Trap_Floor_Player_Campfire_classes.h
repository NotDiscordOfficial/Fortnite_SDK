// BlueprintGeneratedClass Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C
// Size: 0xef8 (Inherited: 0xd50)
struct ATrap_Floor_Player_Campfire_C : ABuildingTrapFloor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd50(0x08)
	struct UParticleSystemComponent* P_Smoke; // 0xd58(0x08)
	struct UStaticMeshComponent* Wood; // 0xd60(0x08)
	struct UStaticMeshComponent* CampfirePit; // 0xd68(0x08)
	struct USceneComponent* Master; // 0xd70(0x08)
	struct UParticleSystemComponent* P_Athena_Campfire_Doused; // 0xd78(0x08)
	struct UAudioComponent* Audio; // 0xd80(0x08)
	struct UParticleSystemComponent* P_Athena_Campfire; // 0xd88(0x08)
	struct USceneComponent* PlacementSoundLocation; // 0xd90(0x08)
	struct USceneComponent* ProximityTraceOrigin; // 0xd98(0x08)
	float DarkenLogs_Lerp_2F1CB1BF43762B3942D07DA06E56DCA6; // 0xda0(0x04)
	enum class ETimelineDirection DarkenLogs__Direction_2F1CB1BF43762B3942D07DA06E56DCA6; // 0xda4(0x01)
	char pad_DA5[0x3]; // 0xda5(0x03)
	struct UTimelineComponent* DarkenLogs; // 0xda8(0x08)
	float FadeDoused_Fade_87602AFE48A3F8C64AA9BD9884FBF57E; // 0xdb0(0x04)
	enum class ETimelineDirection FadeDoused__Direction_87602AFE48A3F8C64AA9BD9884FBF57E; // 0xdb4(0x01)
	char pad_DB5[0x3]; // 0xdb5(0x03)
	struct UTimelineComponent* FadeDoused; // 0xdb8(0x08)
	struct USoundCue* Trap_Placed_Sound; // 0xdc0(0x08)
	struct USoundCue* Trap_Active_Sound; // 0xdc8(0x08)
	struct USoundCue* Trap_Fire_Sound; // 0xdd0(0x08)
	struct USoundCue* Trap_Reload_Sound; // 0xdd8(0x08)
	struct USoundCue* Trap_Explode_Sound; // 0xde0(0x08)
	bool IsActive; // 0xde8(0x01)
	char pad_DE9[0x3]; // 0xde9(0x03)
	int32_t NumTicks; // 0xdec(0x04)
	int32_t MaxTicks; // 0xdf0(0x04)
	char pad_DF4[0x4]; // 0xdf4(0x04)
	struct TArray<enum class EObjectTypeQuery> OverlapObjectTypes; // 0xdf8(0x10)
	struct FVector AOE_BoxExtents; // 0xe08(0x0c)
	char pad_E14[0x4]; // 0xe14(0x04)
	struct USoundBase* CampfireDousedSound; // 0xe18(0x08)
	struct USoundBase* WoodRemovalSound; // 0xe20(0x08)
	struct UParticleSystem* WoodRemovalFX; // 0xe28(0x08)
	struct FScalableFloat Row_MaxHeals; // 0xe30(0x28)
	struct FScalableFloat Row_DousedDuration; // 0xe58(0x28)
	struct FScalableFloat Row_TickInterval; // 0xe80(0x28)
	struct FScalableFloat Row_ShouldStack; // 0xea8(0x28)
	struct AFortPlayerPawn* HitPlayerPawn; // 0xed0(0x08)
	struct UFortQuestManager* Owning Player Quest Manager; // 0xed8(0x08)
	bool HasFiredQuest; // 0xee0(0x01)
	char pad_EE1[0x7]; // 0xee1(0x07)
	struct AFortPlayerController* Owning Player PC; // 0xee8(0x08)
	struct ABuildingGameplayActor* CampFire_BGA; // 0xef0(0x08)

	struct AActor* GetCampFireTrapInstigator(); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.GetCampFireTrapInstigator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void CheckIfTargetIsSquadmate(struct AFortPlayerPawn* Target Player); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.CheckIfTargetIsSquadmate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitCampfireEffects(); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.InitCampfireEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HealTicks(); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.HealTicks // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_IsActive(); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnRep_IsActive // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FadeDoused__FinishedFunc(); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.FadeDoused__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void FadeDoused__UpdateFunc(); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.FadeDoused__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void DarkenLogs__FinishedFunc(); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.DarkenLogs__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void DarkenLogs__UpdateFunc(); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.DarkenLogs__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnReloadEnd(); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnReloadEnd // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPlaced(); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnPlaced // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnFinishedBuilding(); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnFinishedBuilding // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Abilities.Activation.Traps.ReloadBegin(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Abilities.Activation.Traps.ActivateTrap(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnOutOfDurability(); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnOutOfDurability // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void TriggerLaunchEffects(struct AFortPlayerPawnAthena* Pawn); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.TriggerLaunchEffects // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DousedTime(); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.DousedTime // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CharLogs(); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.CharLogs // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Trap_Floor_Player_Campfire(int32_t EntryPoint); // Function Trap_Floor_Player_Campfire.Trap_Floor_Player_Campfire_C.ExecuteUbergraph_Trap_Floor_Player_Campfire // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

