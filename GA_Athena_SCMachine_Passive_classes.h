// BlueprintGeneratedClass GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C
// Size: 0xa8c (Inherited: 0xa70)
struct UGA_Athena_SCMachine_Passive_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawnAthena* PlayerPawn; // 0xa78(0x08)
	struct FVector SpawnZOffset; // 0xa80(0x0c)

	void Check Resurrection Active(bool bEnabled); // Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.Check Resurrection Active // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SaveOutPlayer(); // Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.SaveOutPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Spawn(); // Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.Spawn // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleOnFortPlayerDied(struct AFortPlayerPawnAthena* FortPlayerPawnAthena); // Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.HandleOnFortPlayerDied // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_SCMachine_Passive(int32_t EntryPoint); // Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.ExecuteUbergraph_GA_Athena_SCMachine_Passive // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

