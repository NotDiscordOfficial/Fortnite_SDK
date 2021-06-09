// BlueprintGeneratedClass GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C
// Size: 0xae8 (Inherited: 0xa70)
struct UGA_WilliePete_PlayerLaunch_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawnAthena* OwningPawn; // 0xa78(0x08)
	struct UAnimMontage* ExitMontage; // 0xa80(0x08)
	struct FScalableFloat LaunchHeightValue; // 0xa88(0x28)
	struct AB_HidingProp_WilliePete_C* WilliePeteLauncher; // 0xab0(0x08)
	struct FGameplayTagContainer PlayerLaunchTag; // 0xab8(0x20)
	struct UGameplayEffect* GE_WilliePete_PlayerLaunch_ApplyGC; // 0xad8(0x08)
	struct AFortPlayerPawnAthena* TeleportExitPlayer; // 0xae0(0x08)

	void StructureTraceLoop(); // Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.StructureTraceLoop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BreakBlockingStructure(struct AActor* HitActor); // Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.BreakBlockingStructure // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62(struct FGameplayTag NotifyTag); // Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62(struct FGameplayTag NotifyTag); // Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCancelled_A0F03A1445141EA659E282AFE77CEA62(struct FGameplayTag NotifyTag); // Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnCancelled_A0F03A1445141EA659E282AFE77CEA62 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInterrupted_A0F03A1445141EA659E282AFE77CEA62(struct FGameplayTag NotifyTag); // Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnInterrupted_A0F03A1445141EA659E282AFE77CEA62 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBlendOut_A0F03A1445141EA659E282AFE77CEA62(struct FGameplayTag NotifyTag); // Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnBlendOut_A0F03A1445141EA659E282AFE77CEA62 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCompleted_A0F03A1445141EA659E282AFE77CEA62(struct FGameplayTag NotifyTag); // Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnCompleted_A0F03A1445141EA659E282AFE77CEA62 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Redeploy Glider(); // Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.Redeploy Glider // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void End Skydive(struct FHitResult Hit); // Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.End Skydive // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ActorHit(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult Hit); // Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.ActorHit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_WilliePete_PlayerLaunch(int32_t EntryPoint); // Function GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.ExecuteUbergraph_GA_WilliePete_PlayerLaunch // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

