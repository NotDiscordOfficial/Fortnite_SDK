// BlueprintGeneratedClass WindManager.WindManager_C
// Size: 0x560 (Inherited: 0x460)
struct AWindManager_C : AFortWindManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UStaticMeshComponent* EmptyStaticMesh; // 0x468(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x470(0x08)
	float SmallerRenderTargetOrthoWidth; // 0x478(0x04)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct TArray<struct AActor*> External Test Actor; // 0x480(0x10)
	struct TArray<struct AFortStaticMeshActor*> World Terrain Meshes; // 0x490(0x10)
	struct FVector Camera Height Offset; // 0x4a0(0x0c)
	float Particle Z Offset; // 0x4ac(0x04)
	bool Is Water Interaction Enabled; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct TArray<struct FStaticMeshMaterialArrayCombo> WorldStaticMeshArray; // 0x4b8(0x10)
	struct FArrayOfWaterMeshWaterBlueprintPairs Array Of Water Assets; // 0x4c8(0x10)
	struct TArray<struct UStaticMesh*> PrototypicalStaticMeshes; // 0x4d8(0x10)
	int32_t Current Water Mesh Index; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
	struct TArray<struct FFlowMapMaterials> WaterVectorMatToDefaultMaterialPairing; // 0x4f0(0x10)
	bool MaterialPairingFound; // 0x500(0x01)
	char pad_501[0x3]; // 0x501(0x03)
	struct FLinearColor WorldBoundsMinMax; // 0x504(0x10)
	char pad_514[0x4]; // 0x514(0x04)
	struct UMaterialInterface* Black Scene Capture Material; // 0x518(0x08)
	struct FBox Max level bounds - used to isolate the level from the vista; // 0x520(0x1c)
	char pad_53C[0x4]; // 0x53c(0x04)
	struct TArray<struct UStaticMeshComponent*> StormCylinderMeshes; // 0x540(0x10)
	bool Storm Cyl Mesh Match; // 0x550(0x01)
	char pad_551[0x3]; // 0x551(0x03)
	int32_t Wind Cyl Mesh Array Match Index; // 0x554(0x04)
	float Delta Wind Falloff in World Units; // 0x558(0x04)
	struct FFortWindImpulseHandle NewVar_2; // 0x55c(0x04)

	void Find Matching Wind Mesh Index And Write Bool(struct FVector Wind location, bool Storm Cyl Mesh Match, int32_t Wind Cyl Mesh Array Match Index); // Function WindManager.WindManager_C.Find Matching Wind Mesh Index And Write Bool // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetWindMatVariables(struct UMaterialInstanceDynamic* Mid, bool Set AnimatedCylinderCenter, struct FVector AnimatedCylinderCenter, bool Set Animating Wind Magnitude, float Animating Wind Magnitude, bool Set Static Wind Magnitude, float Static Wind Magnitude, bool Set CylinderCenter, struct FVector CylinderCenter, bool Set WindVector, struct FVector WindVector, bool Set WindCrossVector, struct FVector WindCrossVector, bool Set OverallOuterRadius, float OverallOuterRadius, bool Set OverallInnerRadius, float OverallInnerRadius, bool Set Wind Still 0 or Animating 1, float Wind Still 0 or Animating 1, bool Set Circular Shader?, float Circular Shader?, bool NewParam); // Function WindManager.WindManager_C.SetWindMatVariables // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateWindDeltaCyl(float Static Cylinder Outer Radius, float Duration, struct UMaterialInstanceDynamic* Mid, bool Is Wind Circular?); // Function WindManager.WindManager_C.UpdateWindDeltaCyl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RemoveWindCylinder(struct FFortWindImpulseCylinder WindImpulseCylinder); // Function WindManager.WindManager_C.RemoveWindCylinder // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateStormWindCylinder(struct FFortWindImpulseCylinder Wind Impulse, struct FFortWindImpulseCylinderDelta Wind Delta); // Function WindManager.WindManager_C.UpdateStormWindCylinder // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FVector Calculate Camera Position(float Scale, struct USceneCaptureComponent2D* Scene Capture); // Function WindManager.WindManager_C.Calculate Camera Position // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function WindManager.WindManager_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnWindImpulseCylinderDeath(struct FFortWindImpulseCylinder WindImpulseCylinder); // Function WindManager.WindManager_C.OnWindImpulseCylinderDeath // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnWindImpulseCylinderDeltaComplete(struct FFortWindImpulseCylinder WindImpulseCylinder); // Function WindManager.WindManager_C.OnWindImpulseCylinderDeltaComplete // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnWindImpulseCylinderCreation(struct FFortWindImpulseCylinder WindImpulseCylinder, struct FFortWindImpulseCylinderDelta WindImpulseCylinderDelta); // Function WindManager.WindManager_C.OnWindImpulseCylinderCreation // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void SpawnTestWind(float Radius, float ImpulseMagnitude); // Function WindManager.WindManager_C.SpawnTestWind // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Play Water Splash Particle System At Location(struct FTransform Particle Transform); // Function WindManager.WindManager_C.Play Water Splash Particle System At Location // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AddWindParticleSystemComponent(struct UParticleSystemComponent* ParticleSystemComponent); // Function WindManager.WindManager_C.AddWindParticleSystemComponent // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Register player for render to texture purposes(struct UPrimitiveComponent* Effect Water Interaction FX, struct UPrimitiveComponent* Gameplay Wind INteraction Effects); // Function WindManager.WindManager_C.Register player for render to texture purposes // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Add Wind Component(struct UPrimitiveComponent* InComponent); // Function WindManager.WindManager_C.Add Wind Component // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function WindManager.WindManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Update Test(float NewMagnitude); // Function WindManager.WindManager_C.Update Test // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Add Render To Texture Particle(struct UParticleSystem* EmitterTemplate, struct FTransform InTransform); // Function WindManager.WindManager_C.Add Render To Texture Particle // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_WindManager(int32_t EntryPoint); // Function WindManager.WindManager_C.ExecuteUbergraph_WindManager // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

