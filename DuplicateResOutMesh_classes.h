// BlueprintGeneratedClass DuplicateResOutMesh.DuplicateResOutMesh_C
// Size: 0x34c (Inherited: 0x220)
struct ADuplicateResOutMesh_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	float CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1; // 0x230(0x04)
	float CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1; // 0x234(0x04)
	float CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1; // 0x238(0x04)
	enum class ETimelineDirection CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	struct UTimelineComponent* CharacterSpawnInTimeline; // 0x240(0x08)
	struct USkeletalMeshComponent* Skeletal Mesh Duplicate; // 0x248(0x08)
	bool Gun True; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	float BoundsRadius; // 0x254(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> MIDArray; // 0x258(0x10)
	struct FVector World location for the dissolve location; // 0x268(0x0c)
	char pad_274[0x4]; // 0x274(0x04)
	struct UMaterialInstanceDynamic* Current MID; // 0x278(0x08)
	float Head Space; // 0x280(0x04)
	float Leg Space; // 0x284(0x04)
	struct UPointLightComponent* Spawn Light; // 0x288(0x08)
	float light intensity; // 0x290(0x04)
	int32_t Number of Base skeletal mesh materials; // 0x294(0x04)
	float FirstPassComplete; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct TArray<struct USkeletalMeshComponent*> ExternalSkeletalMeshComponent; // 0x2a0(0x10)
	struct FTransform Box Local Transform; // 0x2b0(0x30)
	float Timeline Play Length; // 0x2e0(0x04)
	bool TeleportOut?; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	struct AActor* ExternalActor; // 0x2e8(0x08)
	struct TArray<struct USkeletalMeshComponent*> InternalSkeletalMeshComponents; // 0x2f0(0x10)
	int32_t CurrentMeshMidIndex; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	struct USkeletalMeshComponent* External Base Mesh Component; // 0x308(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> ExternalMidArray; // 0x310(0x10)
	struct USkeletalMeshComponent* ExternalRootMeshComponent; // 0x320(0x08)
	struct TArray<struct UMaterialInterface*> ListOfMaterialsExemptFromReparenting; // 0x328(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Original_MIDs; // 0x338(0x10)
	int32_t Increment_End; // 0x348(0x04)

	void RestoreInProgressRes(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.RestoreInProgressRes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Store Original Material for Teleport In(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.Store Original Material for Teleport In // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void External Mesh Masked Setup(struct TArray<struct USkeletalMeshComponent*> External Mesh Component Array, struct TArray<struct UMaterialInstanceDynamic*> Corrected Mid Array); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.External Mesh Masked Setup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ProcessSpawnInTimeline(float ZHeight, float LightIntensity); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.ProcessSpawnInTimeline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Make internal mids and append external and intermal mids to mid array(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.Make internal mids and append external and intermal mids to mid array // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Make and slave internal meshes(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.Make and slave internal meshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Spawn  Light(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.Spawn  Light // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Find Bounds(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.Find Bounds // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void initializeExternalSkeletalMeshArray(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.initializeExternalSkeletalMeshArray // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CharacterSpawnInTimeline__FinishedFunc(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void CharacterSpawnInTimeline__UpdateFunc(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void UpdateExternalParameters(struct TArray<struct UMaterialInstanceDynamic*> MID Array, struct TArray<struct USkeletalMeshComponent*> External Mesh Component Array); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.UpdateExternalParameters // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_DuplicateResOutMesh(int32_t EntryPoint); // Function DuplicateResOutMesh.DuplicateResOutMesh_C.ExecuteUbergraph_DuplicateResOutMesh // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

