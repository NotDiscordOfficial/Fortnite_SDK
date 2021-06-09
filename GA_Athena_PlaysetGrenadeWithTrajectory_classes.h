// BlueprintGeneratedClass GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C
// Size: 0xe52 (Inherited: 0xe2c)
struct UGA_Athena_PlaysetGrenadeWithTrajectory_C : UGA_Athena_UtilityGrenade_WithTrajectory_C {
	char pad_E2C[0x4]; // 0xe2c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe30(0x08)
	struct ABP_ProjectileTrajectory_C* ProjectileTrajectoryRed; // 0xe38(0x08)
	struct AActor* RedIndicatorClass; // 0xe40(0x08)
	struct UFortPlaysetItemDefinition* DefaultPlayset; // 0xe48(0x08)
	bool bShouldNotThrow; // 0xe50(0x01)
	bool CanConsume; // 0xe51(0x01)

	void DestroyProjectileTrajectory(); // Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.DestroyProjectileTrajectory // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CalculateRotation(struct UFortPlaysetItemDefinition* Playset, struct FRotator Rotation, struct FRotator NewRotation); // Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.CalculateRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetActivePlaysetOnPlayer(); // Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.SetActivePlaysetOnPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetPlaysetData(struct AFortProjectileBase* Projectile Reference); // Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.SetPlaysetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetActivePlaysetData(struct UFortPlaysetItemDefinition* OutData); // Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.GetActivePlaysetData // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupDummyProjectileRed(); // Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.SetupDummyProjectileRed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTrajectorySpline(); // Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.UpdateTrajectorySpline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void CleanupTrajectoryDisplay(); // Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.CleanupTrajectoryDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Server_SpawnProjectile(struct FVector Location, struct FRotator Direction); // Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.Server_SpawnProjectile // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitTrajectoryVariables(); // Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.InitTrajectoryVariables // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AthenaProjectileSpawned(struct AFortProjectileBase* ProjectileReference); // Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.AthenaProjectileSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnAbilityInputReleased(); // Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.OnAbilityInputReleased // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_PlaysetGrenadeWithTrajectory(int32_t EntryPoint); // Function GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C.ExecuteUbergraph_GA_Athena_PlaysetGrenadeWithTrajectory // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

