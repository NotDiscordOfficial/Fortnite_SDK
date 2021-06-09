// BlueprintGeneratedClass GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C
// Size: 0xe68 (Inherited: 0xe52)
struct UGA_Athena_Instance_PlaysetGrenadeWithTrajectory_C : UGA_Athena_PlaysetGrenadeWithTrajectory_C {
	char pad_E52[0x6]; // 0xe52(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe58(0x08)
	struct UAudioComponent* Throw Loop Sound; // 0xe60(0x08)

	void GetActivePlaysetData(struct UFortPlaysetItemDefinition* OutData); // Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.GetActivePlaysetData // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SetPlaysetData(struct AFortProjectileBase* Projectile Reference); // Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.SetPlaysetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetActivePlaysetOnPlayer(); // Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.SetActivePlaysetOnPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory(int32_t EntryPoint); // Function GA_Athena_Instance_PlaysetGrenadeWithTrajectory.GA_Athena_Instance_PlaysetGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_Instance_PlaysetGrenadeWithTrajectory // (Final|UbergraphFunction) // @ game+0xda7c34
};

