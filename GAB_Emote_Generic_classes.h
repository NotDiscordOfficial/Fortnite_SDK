// BlueprintGeneratedClass GAB_Emote_Generic.GAB_Emote_Generic_C
// Size: 0xacc (Inherited: 0xa70)
struct UGAB_Emote_Generic_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa78(0x08)
	float PostTriggerCancelDelay; // 0xa80(0x04)
	bool HideReticle; // 0xa84(0x01)
	char pad_A85[0x3]; // 0xa85(0x03)
	struct FGameplayTagContainer ReticleHUDElementTags; // 0xa88(0x20)
	struct FName MontageOverrideSection; // 0xaa8(0x08)
	bool bAbilityStopped; // 0xab0(0x01)
	char pad_AB1[0x3]; // 0xab1(0x03)
	struct FName EmoteHolsterId; // 0xab4(0x08)
	bool bHolstered; // 0xabc(0x01)
	char pad_ABD[0x3]; // 0xabd(0x03)
	struct FName HUDElementVisibilityReasonName; // 0xac0(0x08)
	int32_t WaitForLoadedCount; // 0xac8(0x04)

	bool ShouldPlayFailedMontage(struct FGameplayTagContainer FailedReason); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.ShouldPlayFailedMontage // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayAbilitySpecHandle Handle, struct FGameplayTagContainer RelevantTags); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void IsMontagePlaying(struct UAnimMontage* Montage, bool Result); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.IsMontagePlaying // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ForceStopMontage(); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.ForceStopMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetReticleVisibility(bool ShouldHide); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.SetReticleVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct TSoftObjectPtr<struct UAnimMontage> GetMontageToPlay(struct UFortMontageItemDefinitionBase* EmoteAsset, enum class EFortCustomBodyType BodyType, enum class EFortCustomGender Gender); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.GetMontageToPlay // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetBodyTypeAndGender(enum class EFortCustomBodyType BodyType, enum class EFortCustomGender Gender); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.GetBodyTypeAndGender // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.K2_OnEndAbility // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Completed_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.Completed_DE7019AA4E006879EDD264899869FEE2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.Cancelled_DE7019AA4E006879EDD264899869FEE2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_DE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.Triggered_DE7019AA4E006879EDD264899869FEE2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D(struct UObject* Loaded); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_DA96775D40CD998BF2FF0085FE5AB126(struct UObject* Loaded); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.OnLoaded_DA96775D40CD998BF2FF0085FE5AB126 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnMontageStartedPlaying(); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.OnMontageStartedPlaying // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayInitialEmoteMontage(); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.PlayInitialEmoteMontage // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NonMontageAsyncAssetsReady(); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.NonMontageAsyncAssetsReady // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GAB_Emote_Generic(int32_t EntryPoint); // Function GAB_Emote_Generic.GAB_Emote_Generic_C.ExecuteUbergraph_GAB_Emote_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

