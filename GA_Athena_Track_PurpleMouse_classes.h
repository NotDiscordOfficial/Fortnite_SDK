// BlueprintGeneratedClass GA_Athena_Track_PurpleMouse.GA_Athena_Track_PurpleMouse_C
// Size: 0xa98 (Inherited: 0xa70)
struct UGA_Athena_Track_PurpleMouse_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa78(0x08)
	struct FGameplayTag TrackGroupTag; // 0xa80(0x08)
	struct TArray<struct AActor*> ProxMineActors; // 0xa88(0x10)

	void EventReceived_739900834D974D726220CC9B70F2219C(struct FGameplayEventData Payload); // Function GA_Athena_Track_PurpleMouse.GA_Athena_Track_PurpleMouse_C.EventReceived_739900834D974D726220CC9B70F2219C // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_Track_PurpleMouse.GA_Athena_Track_PurpleMouse_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Track_PurpleMouse.GA_Athena_Track_PurpleMouse_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayerDeath(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function GA_Athena_Track_PurpleMouse.GA_Athena_Track_PurpleMouse_C.OnPlayerDeath // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMinigameChanged(); // Function GA_Athena_Track_PurpleMouse.GA_Athena_Track_PurpleMouse_C.OnMinigameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_Track_PurpleMouse(int32_t EntryPoint); // Function GA_Athena_Track_PurpleMouse.GA_Athena_Track_PurpleMouse_C.ExecuteUbergraph_GA_Athena_Track_PurpleMouse // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

