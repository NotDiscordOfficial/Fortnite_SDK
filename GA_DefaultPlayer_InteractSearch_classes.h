// BlueprintGeneratedClass GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C
// Size: 0xba0 (Inherited: 0xa70)
struct UGA_DefaultPlayer_InteractSearch_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa78(0x08)
	struct FGameplayTag RefillGasTankTag; // 0xa80(0x08)
	struct FFortGameplayAbilityMontageInfo RefillGasTankMontage; // 0xa88(0x58)
	struct FGameplayTag CatchFireflyTag; // 0xae0(0x08)
	struct FFortGameplayAbilityMontageInfo FireflyCatchMontage; // 0xae8(0x58)
	struct FFortGameplayAbilityMontageInfo RefillVehicleFuelMontage; // 0xb40(0x58)
	struct FGameplayTag GasCanRefillVehicleTag; // 0xb98(0x08)

	void EndInteractSearch(); // Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.EndInteractSearch // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartInteractSearch(); // Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.StartInteractSearch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.K2_OnEndAbility // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Completed_B697D9B445CA2BFDB1328D93C33FBCF3(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Completed_B697D9B445CA2BFDB1328D93C33FBCF3 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_B697D9B445CA2BFDB1328D93C33FBCF3(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Triggered_B697D9B445CA2BFDB1328D93C33FBCF3 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Completed_72217B3542CE776DEDDBB3A7B5D6D343(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Completed_72217B3542CE776DEDDBB3A7B5D6D343 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_72217B3542CE776DEDDBB3A7B5D6D343(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Cancelled_72217B3542CE776DEDDBB3A7B5D6D343 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_72217B3542CE776DEDDBB3A7B5D6D343(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Triggered_72217B3542CE776DEDDBB3A7B5D6D343 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Completed_6A38D93A428260E68695388965BFA176(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Completed_6A38D93A428260E68695388965BFA176 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_6A38D93A428260E68695388965BFA176(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Cancelled_6A38D93A428260E68695388965BFA176 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_6A38D93A428260E68695388965BFA176(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Triggered_6A38D93A428260E68695388965BFA176 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Completed_5EB1B64344DD00ABFE41E2857DC3FB38(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Completed_5EB1B64344DD00ABFE41E2857DC3FB38 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancelled_5EB1B64344DD00ABFE41E2857DC3FB38(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Cancelled_5EB1B64344DD00ABFE41E2857DC3FB38 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Triggered_5EB1B64344DD00ABFE41E2857DC3FB38(struct FGameplayAbilityTargetDataHandle TargetData, struct FGameplayTag ApplicationTag); // Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Triggered_5EB1B64344DD00ABFE41E2857DC3FB38 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_DefaultPlayer_InteractSearch(int32_t EntryPoint); // Function GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.ExecuteUbergraph_GA_DefaultPlayer_InteractSearch // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

