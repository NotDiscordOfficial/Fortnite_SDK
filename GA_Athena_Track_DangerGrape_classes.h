// BlueprintGeneratedClass GA_Athena_Track_DangerGrape.GA_Athena_Track_DangerGrape_C
// Size: 0xab0 (Inherited: 0xa70)
struct UGA_Athena_Track_DangerGrape_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct TArray<struct AActor*> SpawnedDecoys; // 0xa78(0x10)
	struct FScalableFloat MaxActorsInWorld; // 0xa88(0x28)

	void OnRep_SnowmenActors(); // Function GA_Athena_Track_DangerGrape.GA_Athena_Track_DangerGrape_C.OnRep_SnowmenActors // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventReceived_CECFA813476EFF4163BB1EAFBFD4E985(struct FGameplayEventData Payload); // Function GA_Athena_Track_DangerGrape.GA_Athena_Track_DangerGrape_C.EventReceived_CECFA813476EFF4163BB1EAFBFD4E985 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventReceived_13B4A7014CFACBC3914C3BA737F355B3(struct FGameplayEventData Payload); // Function GA_Athena_Track_DangerGrape.GA_Athena_Track_DangerGrape_C.EventReceived_13B4A7014CFACBC3914C3BA737F355B3 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_Track_DangerGrape.GA_Athena_Track_DangerGrape_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Track_DangerGrape.GA_Athena_Track_DangerGrape_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void On Possesed Pawn Died(); // Function GA_Athena_Track_DangerGrape.GA_Athena_Track_DangerGrape_C.On Possesed Pawn Died // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_Track_DangerGrape(int32_t EntryPoint); // Function GA_Athena_Track_DangerGrape.GA_Athena_Track_DangerGrape_C.ExecuteUbergraph_GA_Athena_Track_DangerGrape // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

