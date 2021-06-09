// BlueprintGeneratedClass _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C
// Size: 0x283 (Inherited: 0x220)
struct A_WaterMeshBlueprintMaster_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* CollisionMesh1; // 0x228(0x08)
	struct UStaticMeshComponent* CollisionMesh2; // 0x230(0x08)
	struct UStaticMeshComponent* CollisionMesh4; // 0x238(0x08)
	struct UStaticMeshComponent* CollisionMesh3; // 0x240(0x08)
	struct UStaticMeshComponent* StaticMesh1; // 0x248(0x08)
	int32_t Number of Collision Meshes; // 0x250(0x04)
	bool FlipFlow; // 0x254(0x01)
	bool NoFlow; // 0x255(0x01)
	char pad_256[0x2]; // 0x256(0x02)
	struct UMaterialInterface* FlippedMaterial; // 0x258(0x08)
	int32_t Current Characters Personal Water Counter; // 0x260(0x04)
	bool Water Interactions; // 0x264(0x01)
	bool Entering True Exiting False; // 0x265(0x01)
	char pad_266[0x2]; // 0x266(0x02)
	struct APlayerPawn_Generic_Parent_C* ExternalActor; // 0x268(0x08)
	struct UStaticMeshComponent* Internal Mesh; // 0x270(0x08)
	bool Continue; // 0x278(0x01)
	char pad_279[0x3]; // 0x279(0x03)
	float Minimum time between splashes; // 0x27c(0x04)
	bool ShowTestMesh; // 0x280(0x01)
	bool HasExecutedConstuctionScript; // 0x281(0x01)
	bool Is Deep Water Asset?; // 0x282(0x01)

	void Construction(); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Construction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Handle Water Penetration Components And Arrays(bool In T Out F, struct AActor* Touching Actor, struct UStaticMeshComponent* Touching Volume); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Handle Water Penetration Components And Arrays // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Find Placement on water mesh surfaces(struct FTransform Traced Transform, struct FVector VelocityVector, bool Trace Hit); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Find Placement on water mesh surfaces // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupMeshCollisionVolumes(struct UStaticMeshComponent* StaticMeshComponent, int32_t Target Int); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.SetupMeshCollisionVolumes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Construct // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph__WaterMeshBlueprintMaster(int32_t EntryPoint); // Function _WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ExecuteUbergraph__WaterMeshBlueprintMaster // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

