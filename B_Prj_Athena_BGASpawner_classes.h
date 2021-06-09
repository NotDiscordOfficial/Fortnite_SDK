// BlueprintGeneratedClass B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C
// Size: 0x900 (Inherited: 0x880)
struct AB_Prj_Athena_BGASpawner_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x880(0x08)
	struct TArray<struct AActor*> FoundBuildingOnDied; // 0x888(0x10)
	bool bResumeSimulation; // 0x898(0x01)
	char pad_899[0x3]; // 0x899(0x03)
	float MinDistanceToKnock; // 0x89c(0x04)
	float MaxLaunchPower; // 0x8a0(0x04)
	char pad_8A4[0x4]; // 0x8a4(0x04)
	struct UAudioComponent* BeatAudioComponent; // 0x8a8(0x08)
	int32_t BeatMultiplierForStart; // 0x8b0(0x04)
	int32_t BeatsPerLoop; // 0x8b4(0x04)
	int32_t CurrentBeatInTheLoop; // 0x8b8(0x04)
	float MinLaunchPower; // 0x8bc(0x04)
	struct AActor* BGAToSpawn; // 0x8c0(0x08)
	struct USoundBase* SoundActivate; // 0x8c8(0x08)
	struct FVector SpawnScale; // 0x8d0(0x0c)
	float SpawnPosOffsetAlongNormal; // 0x8dc(0x04)
	float SpawnPosZOffsetInWater; // 0x8e0(0x04)
	bool Spawned; // 0x8e4(0x01)
	bool SpawnOnCollision; // 0x8e5(0x01)
	char pad_8E6[0x2]; // 0x8e6(0x02)
	float MinDotWithUp; // 0x8e8(0x04)
	bool DontSpawnOnVehicles; // 0x8ec(0x01)
	char pad_8ED[0x3]; // 0x8ed(0x03)
	struct USoundBase* Splash Sound; // 0x8f0(0x08)
	struct AActor* SpawnedBGA; // 0x8f8(0x08)

	void CheckForWater_(struct FVector CurrPos, struct AActor* HitActor, struct FVector PosAboveWater); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.CheckForWater_ // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetClosestPoint(struct UPrimitiveComponent* Component, struct FVector StartingPoint, struct FVector Point); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.GetClosestPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	struct AActor* SpawnBGA_(struct FVector Normal, struct AActor* HitActor, struct UPrimitiveComponent* HitComp, struct FVector Pos, bool FromWater); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.SpawnBGA_ // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool WillBounceOffTarget(struct FHitResult Hit); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.WillBounceOffTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Held Water Impact(); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.Held Water Impact // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_Athena_BGASpawner(int32_t EntryPoint); // Function B_Prj_Athena_BGASpawner.B_Prj_Athena_BGASpawner_C.ExecuteUbergraph_B_Prj_Athena_BGASpawner // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

