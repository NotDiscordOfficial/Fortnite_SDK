// BlueprintGeneratedClass GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C
// Size: 0xa88 (Inherited: 0xa70)
struct UGA_Vehicle_ExitHoldEvent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa78(0x08)
	struct FGameplayTag EquippingCue; // 0xa80(0x08)

	void EventReceived_7AE1D485464AEC7EB429C3877D33AF69(struct FGameplayEventData Payload); // Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.EventReceived_7AE1D485464AEC7EB429C3877D33AF69 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventReceived_209BF560404B83EBEAA8DD8090C443AC(struct FGameplayEventData Payload); // Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.EventReceived_209BF560404B83EBEAA8DD8090C443AC // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Vehicle_ExitHoldEvent(int32_t EntryPoint); // Function GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C.ExecuteUbergraph_GA_Vehicle_ExitHoldEvent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

