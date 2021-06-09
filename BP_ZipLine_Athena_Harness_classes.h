// BlueprintGeneratedClass BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C
// Size: 0x314 (Inherited: 0x220)
struct ABP_ZipLine_Athena_Harness_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UParticleSystemComponent* P_Zipline_AttachedToPlayer; // 0x228(0x08)
	struct UStaticMeshComponent* SM_Zipline_Magnet; // 0x230(0x08)
	struct UArrowComponent* Arrow; // 0x238(0x08)
	struct UParticleSystemComponent* P_Zipline_Pulley_SpeedLines; // 0x240(0x08)
	struct UStaticMeshComponent* SM_Zipline_Motor; // 0x248(0x08)
	struct USceneComponent* Scene; // 0x250(0x08)
	struct UParticleSystem* SpawnFX; // 0x258(0x08)
	struct UParticleSystem* DestroyFX; // 0x260(0x08)
	struct UParticleSystem* CollideDestroyVFX; // 0x268(0x08)
	struct USoundBase* SpawnSound; // 0x270(0x08)
	struct USoundBase* UnSpawnSound; // 0x278(0x08)
	struct AFortPlayerPawn* AttachedPlayer; // 0x280(0x08)
	bool HasHitAnotherPlayer; // 0x288(0x01)
	char pad_289[0x3]; // 0x289(0x03)
	float ZiplineChimeVisualUpdate; // 0x28c(0x04)
	struct FTimerHandle ChimeTimer; // 0x290(0x08)
	struct FVector ZiplineDirection; // 0x298(0x0c)
	char pad_2A4[0x4]; // 0x2a4(0x04)
	struct USplineComponent* NewVar_1; // 0x2a8(0x08)
	struct ABP_Athena_Environmental_ZipLine_Spline_C* EnvZiplineSpline; // 0x2b0(0x08)
	float SplineRotationUpdateSeconds; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FTimerHandle MotorUpdateTimer; // 0x2c0(0x08)
	struct AFortAthenaZipline* AttachedZipline; // 0x2c8(0x08)
	bool debugOutput; // 0x2d0(0x01)
	bool IsReversingMomentum; // 0x2d1(0x01)
	bool bIsTravelingUphill; // 0x2d2(0x01)
	bool bIsTravelingDownhill; // 0x2d3(0x01)
	struct FGameplayTag GCNTag_Travel; // 0x2d4(0x08)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct USoundBase* TravelSound; // 0x2e0(0x08)
	struct FGameplayTag GCNTag_HighSpeed; // 0x2e8(0x08)
	struct FGameplayTag GCNTag_ZiplineBraking; // 0x2f0(0x08)
	bool bLoopingDownhillGCN; // 0x2f8(0x01)
	char pad_2F9[0x3]; // 0x2f9(0x03)
	struct FActiveGameplayEffectHandle DownhillTravelGE; // 0x2fc(0x08)
	bool UseMeshAttachment; // 0x304(0x01)
	char pad_305[0x3]; // 0x305(0x03)
	struct FVector CurrentDesired Zipline Offset; // 0x308(0x0c)

	void OnRep_AttachedPlayer(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.OnRep_AttachedPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Audio and VFXParams(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Update Audio and VFXParams // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Start Travel Audio(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Start Travel Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Stop Travel Audio(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Stop Travel Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HandleOnDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.HandleOnDied // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Chime Visual(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Chime Visual // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OrientMotorForZipline(struct AFortAthenaZiplineBase* Zipline, struct FVector DesiredZiplineOffset); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.OrientMotorForZipline // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RotateToZiplineDirection(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.RotateToZiplineDirection // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateMotorToSpline(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateMotorToSpline // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateParamsForAudioAndVFX(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateParamsForAudioAndVFX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cleanup On DownhillGCN(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.Cleanup On DownhillGCN // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateZiplineOffsetLocation(); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.UpdateZiplineOffsetLocation // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_ZipLine_Athena_Harness(int32_t EntryPoint); // Function BP_ZipLine_Athena_Harness.BP_ZipLine_Athena_Harness_C.ExecuteUbergraph_BP_ZipLine_Athena_Harness // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

