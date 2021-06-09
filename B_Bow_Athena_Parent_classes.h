// BlueprintGeneratedClass B_Bow_Athena_Parent.B_Bow_Athena_Parent_C
// Size: 0x1558 (Inherited: 0x13c0)
struct AB_Bow_Athena_Parent_C : AB_Ranged_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13c0(0x08)
	struct UAudioComponent* Charge_AudioComponent; // 0x13c8(0x08)
	struct UAudioComponent* FullCharge_AudioComponent; // 0x13d0(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0x13d8(0x08)
	bool ReachedMaxCharge; // 0x13e0(0x01)
	bool ReachedMinCharge; // 0x13e1(0x01)
	bool Charging; // 0x13e2(0x01)
	char pad_13E3[0x5]; // 0x13e3(0x05)
	struct AFortProjectileBase* Prj_Dummy; // 0x13e8(0x08)
	struct AFortProjectileBase* DummyProjectile; // 0x13f0(0x08)
	float DummyExtent; // 0x13f8(0x04)
	float DummyMaxSpeed; // 0x13fc(0x04)
	float ProjectileVelocity; // 0x1400(0x04)
	float DummyFriction; // 0x1404(0x04)
	float DummyBouncieness; // 0x1408(0x04)
	float DummyGravity; // 0x140c(0x04)
	float DummyTimeStep; // 0x1410(0x04)
	enum class ECollisionChannel DummyCollisionChannel; // 0x1414(0x01)
	char pad_1415[0x3]; // 0x1415(0x03)
	struct FScalableFloat Row_MaxProjectileSpeed; // 0x1418(0x28)
	struct AActor* TrajectoryClass; // 0x1440(0x08)
	struct ABP_ProjectileTrajectory_Bow_Generic_C* BowTrajectory; // 0x1448(0x08)
	struct FTimerHandle Timer_UpdateTrajectorySpline; // 0x1450(0x08)
	bool IsBowEquipped; // 0x1458(0x01)
	char pad_1459[0x7]; // 0x1459(0x07)
	struct USoundBase* LowTensionFire; // 0x1460(0x08)
	struct USoundBase* NormalTensionFire; // 0x1468(0x08)
	struct USoundBase* FullTensionFire; // 0x1470(0x08)
	struct USoundBase* FullTensionFireP1; // 0x1478(0x08)
	struct USoundBase* LowTensionFireP1; // 0x1480(0x08)
	struct USoundBase* NormalTensionFireP1; // 0x1488(0x08)
	struct UParticleSystem* FX_AdditionalFire; // 0x1490(0x08)
	struct UParticleSystem* FX_FullyCharge; // 0x1498(0x08)
	struct USoundBase* Sound_OnCharge; // 0x14a0(0x08)
	struct UNiagaraSystem* NS_AdditionalFire; // 0x14a8(0x08)
	struct UNiagaraSystem* NS_FullyCHarge; // 0x14b0(0x08)
	struct UFXSystemComponent* FX_FullyCharged; // 0x14b8(0x08)
	struct USoundBase* Sound_OnFullyCharged; // 0x14c0(0x08)
	struct FHitResult Calculate Spline Hit Result; // 0x14c8(0x88)
	struct FName TrajectoryCollisionProfile; // 0x1550(0x08)

	void SpawnFullyChargedFX(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.SpawnFullyChargedFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct USoundBase* GetChargedWeaponFireSound(enum class EFortWeaponSoundState Channel, bool bSecondaryFire); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.GetChargedWeaponFireSound // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	struct USoundBase* GetFireSoundToPlay(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.GetFireSoundToPlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetMaxChargeReachedAndPlayAudio(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.SetMaxChargeReachedAndPlayAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopDrawAudio(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.StopDrawAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartDrawAudio(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.StartDrawAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupProjectileVariables(struct FVector StartLocation, struct FVector InitialVelocity, float ProjectileVelocity, struct FRotator OutRotation); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.SetupProjectileVariables // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void CalculateVelocity(float Velocity); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.CalculateVelocity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void CalculateTrajectorySpline(struct FHitResult CalculateSplineHitResult); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.CalculateTrajectorySpline // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetDummyVariables(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.SetDummyVariables // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupTrajectoryProjectile(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.SetupTrajectoryProjectile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnReachedMinCharge(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.OnReachedMinCharge // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnStartCharge(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.OnStartCharge // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void EndOfCharge(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.EndOfCharge // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnUnEquip(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnChargeDown(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.OnChargeDown // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnChargeUp(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.OnChargeUp // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnEndCharge(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.OnEndCharge // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ResetCharge(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.ResetCharge // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void IncreaseDrawStrength(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.IncreaseDrawStrength // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponAttached(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnReachedMaxCharge(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.OnReachedMaxCharge // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void DeactivateFullyChargedFX(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.DeactivateFullyChargedFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRemoteClientReachedMaxCharge(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.OnRemoteClientReachedMaxCharge // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnRemoteClientReachedMinCharge(); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.OnRemoteClientReachedMinCharge // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Bow_Athena_Parent(int32_t EntryPoint); // Function B_Bow_Athena_Parent.B_Bow_Athena_Parent_C.ExecuteUbergraph_B_Bow_Athena_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

