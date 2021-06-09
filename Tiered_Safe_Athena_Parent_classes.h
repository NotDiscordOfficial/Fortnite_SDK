// BlueprintGeneratedClass Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C
// Size: 0xedd (Inherited: 0xe00)
struct ATiered_Safe_Athena_Parent_C : ABuildingContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe00(0x08)
	struct UParticleSystemComponent* P_Loot_Chest_Aura_Athena; // 0xe08(0x08)
	struct UStaticMeshComponent* S_Chest_SmokeSheet; // 0xe10(0x08)
	struct UPointLightComponent* TreasureLight; // 0xe18(0x08)
	struct UAudioComponent* Chest_Ambient_Sound; // 0xe20(0x08)
	float Timeline_0_Time_396046034CABC1528CF338A149138331; // 0xe28(0x04)
	enum class ETimelineDirection Timeline_0__Direction_396046034CABC1528CF338A149138331; // 0xe2c(0x01)
	char pad_E2D[0x3]; // 0xe2d(0x03)
	struct UTimelineComponent* Timeline_1; // 0xe30(0x08)
	float MobileSelectedTL_LerpInteactoIcon_0B00BD1F4FF6CFBAD690D4AA66867AA5; // 0xe38(0x04)
	float MobileSelectedTL_LerpObject_0B00BD1F4FF6CFBAD690D4AA66867AA5; // 0xe3c(0x04)
	enum class ETimelineDirection MobileSelectedTL__Direction_0B00BD1F4FF6CFBAD690D4AA66867AA5; // 0xe40(0x01)
	char pad_E41[0x7]; // 0xe41(0x07)
	struct UTimelineComponent* MobileSelectedTL; // 0xe48(0x08)
	float MobileOnInteractTL_LERP_7EBF522744343C22AB6D13B401F9E612; // 0xe50(0x04)
	enum class ETimelineDirection MobileOnInteractTL__Direction_7EBF522744343C22AB6D13B401F9E612; // 0xe54(0x01)
	char pad_E55[0x3]; // 0xe55(0x03)
	struct UTimelineComponent* MobileOnInteractTL; // 0xe58(0x08)
	struct UParticleSystemComponent* Loot_Effect; // 0xe60(0x08)
	struct USoundBase* SpecialChestOpenSound; // 0xe68(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> MIDs; // 0xe70(0x10)
	float MobileWiggleAmount; // 0xe80(0x04)
	float ChestChimeVisualUpdate; // 0xe84(0x04)
	struct UMaterialInterface* MobileInteractionMaterial; // 0xe88(0x08)
	struct UStaticMeshComponent* MobileInteractIcon; // 0xe90(0x08)
	struct FVector MobileInteractIconLocation; // 0xe98(0x0c)
	struct FVector MobileInteractIconScale; // 0xea4(0x0c)
	struct USoundBase* Open Chest Sound; // 0xeb0(0x08)
	struct UParticleSystem* P_Loot_Chest_Opened_FX; // 0xeb8(0x08)
	struct UParticleSystemComponent* NewVar_1; // 0xec0(0x08)
	struct UParticleSystemComponent* NewVar_2; // 0xec8(0x08)
	struct UParticleSystem* Galileo_Chest_Open_FX; // 0xed0(0x08)
	float OpenFX_Rotation; // 0xed8(0x04)
	bool EnableAudioIndicator; // 0xedc(0x01)

	void OnSetCustomDepthStencilValue(struct TArray<struct UPrimitiveComponent*> PrimComponents, bool bUseCustomDepth, int32_t StencilValue, bool bOutConsume); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.OnSetCustomDepthStencilValue // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetVisibleMobileInteractIcon(bool Visible); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.SetVisibleMobileInteractIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetMaxAudibleDistance(float Max Distance); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.GetMaxAudibleDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void CleanupWiggleMIDs(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.CleanupWiggleMIDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CreateMobileMIDs(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.CreateMobileMIDs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void SetLightVisibility(bool Visible); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.SetLightVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MobileOnInteractTL__FinishedFunc(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.MobileOnInteractTL__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void MobileOnInteractTL__UpdateFunc(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.MobileOnInteractTL__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void MobileSelectedTL__FinishedFunc(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.MobileSelectedTL__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void MobileSelectedTL__UpdateFunc(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.MobileSelectedTL__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__FinishedFunc(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__UpdateFunc(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnLoot(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.OnLoot // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnSetSearched(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.OnSetSearched // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Mobile_Outline_On(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.Mobile_Outline_On // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Mobile_Outline_Off(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.Mobile_Outline_Off // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Mobile_OnInteract(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.Mobile_OnInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Mobile_OnDisconnect(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.Mobile_OnDisconnect // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EnableBacchusHighlight(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.EnableBacchusHighlight // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void DisableBacchusHighlight(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.DisableBacchusHighlight // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnBeginSearch(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.OnBeginSearch // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void HideChestOpenableCosmetics(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.HideChestOpenableCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DetermineVFXRotation(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.DetermineVFXRotation // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnChestOpenVFX(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.SpawnChestOpenVFX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayChestOpeningTimeline(); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.PlayChestOpeningTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Tiered_Safe_Athena_Parent(int32_t EntryPoint); // Function Tiered_Safe_Athena_Parent.Tiered_Safe_Athena_Parent_C.ExecuteUbergraph_Tiered_Safe_Athena_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

