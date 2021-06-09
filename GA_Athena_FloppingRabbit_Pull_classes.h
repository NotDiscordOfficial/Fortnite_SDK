// BlueprintGeneratedClass GA_Athena_FloppingRabbit_Pull.GA_Athena_FloppingRabbit_Pull_C
// Size: 0xb38 (Inherited: 0xa70)
struct UGA_Athena_FloppingRabbit_Pull_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawn* Target; // 0xa78(0x08)
	struct AFortPlayerPawn* Launcher; // 0xa80(0x08)
	struct AFortAIPawn* AITarget; // 0xa88(0x08)
	struct FGameplayTag T_InVehicle; // 0xa90(0x08)
	float LaunchArc; // 0xa98(0x04)
	float LaunchGrav; // 0xa9c(0x04)
	struct FScalableFloat Row_PullAmount; // 0xaa0(0x28)
	struct FScalableFloat Row_PullEnabled; // 0xac8(0x28)
	struct FScalableFloat Row_CanPullFriends; // 0xaf0(0x28)
	struct FGameplayTagContainer TC_TagsForAIToIgnoreLaunch; // 0xb18(0x20)

	void CalcLaunchValue(struct AActor* Target, struct FVector OutLaunchVelocity); // Function GA_Athena_FloppingRabbit_Pull.GA_Athena_FloppingRabbit_Pull_C.CalcLaunchValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_FloppingRabbit_Pull.GA_Athena_FloppingRabbit_Pull_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_FloppingRabbit_Pull(int32_t EntryPoint); // Function GA_Athena_FloppingRabbit_Pull.GA_Athena_FloppingRabbit_Pull_C.ExecuteUbergraph_GA_Athena_FloppingRabbit_Pull // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

