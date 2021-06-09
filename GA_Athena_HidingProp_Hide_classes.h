// BlueprintGeneratedClass GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C
// Size: 0xc28 (Inherited: 0xa70)
struct UGA_Athena_HidingProp_Hide_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa78(0x08)
	struct AB_HidingProp_C* HidingProp; // 0xa80(0x08)
	struct UAnimMontage* Enter Anim Montage; // 0xa88(0x08)
	struct FGameplayTag RustleCue; // 0xa90(0x08)
	struct FGameplayTag GC_Wobble; // 0xa98(0x08)
	struct UAnimMontage* Exit Anim Montage; // 0xaa0(0x08)
	struct FScalableFloat ExitBlockShootDelay; // 0xaa8(0x28)
	struct FRotator ControlRotation; // 0xad0(0x0c)
	char pad_ADC[0x4]; // 0xadc(0x04)
	struct UCameraModifier* CameraModifier; // 0xae0(0x08)
	struct FGameplayTagContainer TC_Quest; // 0xae8(0x20)
	struct FGameplayTagContainer TC_PlayerOwned; // 0xb08(0x20)
	struct FScalableFloat RustleMinDelay; // 0xb28(0x28)
	struct FScalableFloat RustleMaxDelay; // 0xb50(0x28)
	struct FScalableFloat RustlePerWobble; // 0xb78(0x28)
	struct AFortPlayerController* PlayerController; // 0xba0(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0xba8(0x10)
	struct TArray<struct FGameplayTag> BlockExitTags; // 0xbb8(0x10)
	struct FGameplayTagContainer HidingInPropTag; // 0xbc8(0x20)
	struct FGameplayTagContainer GettingInPropTag; // 0xbe8(0x20)
	struct FGameplayTag CurieBurningTag; // 0xc08(0x08)
	bool AllowCosmetics; // 0xc10(0x01)
	char pad_C11[0x3]; // 0xc11(0x03)
	struct FGameplayTag DisallowCosmeticsTag; // 0xc14(0x08)
	char pad_C1C[0x4]; // 0xc1c(0x04)
	struct UCameraModifier* NewVar_1; // 0xc20(0x08)

	void SetCosmeticsAllowed(bool Allowed); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.SetCosmeticsAllowed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Completed_75B60D4B43DAA553E4C21EA3D2E3AD03(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Completed_75B60D4B43DAA553E4C21EA3D2E3AD03 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_75B60D4B43DAA553E4C21EA3D2E3AD03(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Cancelled_75B60D4B43DAA553E4C21EA3D2E3AD03 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_75B60D4B43DAA553E4C21EA3D2E3AD03(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Triggered_75B60D4B43DAA553E4C21EA3D2E3AD03 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTimedOutAndDestinationReached_859E251740F1C46B914344A9FC343B19(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOutAndDestinationReached_859E251740F1C46B914344A9FC343B19 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTimedOut_859E251740F1C46B914344A9FC343B19(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOut_859E251740F1C46B914344A9FC343B19 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTimedOutAndDestinationReached_8010F4C64221E8F497C6559558420C32(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOutAndDestinationReached_8010F4C64221E8F497C6559558420C32 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTimedOut_8010F4C64221E8F497C6559558420C32(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.OnTimedOut_8010F4C64221E8F497C6559558420C32 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Added_F049BFC743FE176042ECD98641AFE2B9(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_F049BFC743FE176042ECD98641AFE2B9 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Added_35C56E354FE08855A837E0BDFB150F20(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_35C56E354FE08855A837E0BDFB150F20 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Added_CD24BC554E955808A88A5B809807A94E(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_CD24BC554E955808A88A5B809807A94E // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Added_E60D990647FDAB06895E738C7A2BAE7E(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_E60D990647FDAB06895E738C7A2BAE7E // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Added_D329D9924DF9DF1B79D0738C6CB8EBA1(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_D329D9924DF9DF1B79D0738C6CB8EBA1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Added_1D4A49874AC422976CAC2C9155DDA736(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_1D4A49874AC422976CAC2C9155DDA736 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventReceived_8C4C6D7442A0B18F41B269995833ED85(struct FGameplayEventData Payload); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.EventReceived_8C4C6D7442A0B18F41B269995833ED85 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Added_D54881A34BC79E85BE563BA220DD924D(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_D54881A34BC79E85BE563BA220DD924D // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Added_EAA3FC0B4E27CDA8B4F3289DF7EA9E90(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.Added_EAA3FC0B4E27CDA8B4F3289DF7EA9E90 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void RustleLoop(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.RustleLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void End(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.End // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_HidingProp_Hide(int32_t EntryPoint); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.ExecuteUbergraph_GA_Athena_HidingProp_Hide // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void NewEventDispatcher_0__DelegateSignature(); // Function GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

