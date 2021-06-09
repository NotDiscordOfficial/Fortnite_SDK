// BlueprintGeneratedClass BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C
// Size: 0x920 (Inherited: 0x898)
struct ABGA_GenericCurieFuel_Parent_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	struct UStaticMeshComponent* Curie Mesh; // 0x8a0(0x08)
	struct USphereComponent* Sphere; // 0x8a8(0x08)
	struct UFortProjectileMovementComponent* FortProjectileMovement; // 0x8b0(0x08)
	float ActorLifespanAfterIgnition; // 0x8b8(0x04)
	char pad_8BC[0x4]; // 0x8bc(0x04)
	struct ABuildingWall* LocalWall; // 0x8c0(0x08)
	bool IgniteSelf; // 0x8c8(0x01)
	char pad_8C9[0x3]; // 0x8c9(0x03)
	float SelfFireMagnitude; // 0x8cc(0x04)
	int32_t SelfPropagationFuel; // 0x8d0(0x04)
	float SelfCurieLandscapeIgnitionRadius; // 0x8d4(0x04)
	bool ShouldFireFallWithGravity; // 0x8d8(0x01)
	bool IgniteNearbyMaterialsImmediately; // 0x8d9(0x01)
	char pad_8DA[0x2]; // 0x8da(0x02)
	float IgniteNearbyMaterialsRadius; // 0x8dc(0x04)
	float IgniteNearbyMaterialsFireMagnitude; // 0x8e0(0x04)
	int32_t IgniteNearbyMaterialsPropogationFuel; // 0x8e4(0x04)
	float IgniteNearbyMaterialsLandscapeIgnitionRadius; // 0x8e8(0x04)
	char pad_8EC[0x4]; // 0x8ec(0x04)
	struct TArray<enum class EObjectTypeQuery> IgniteMaterialsObjectTypes; // 0x8f0(0x10)
	struct UObject* IgniteMaterialsClassFilter; // 0x900(0x08)
	bool ResumeSimulation; // 0x908(0x01)
	bool CurieActive; // 0x909(0x01)
	bool CurieHitVehicle; // 0x90a(0x01)
	char pad_90B[0x5]; // 0x90b(0x05)
	struct AActor* HitActor; // 0x910(0x08)
	struct UPrimitiveComponent* HitComponent; // 0x918(0x08)

	void ShouldPlayNativeCurieFX(enum class EFortCurieNativeFXType FXType, struct FFortNativeCurieFXResponse OutResponse); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ShouldPlayNativeCurieFX // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void IgniteNearbyMaterials(struct FVector SpherePos); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.IgniteNearbyMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_ResumeSimulation(); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.OnRep_ResumeSimulation // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HitBuildingActor(struct UObject* ObjectRef, struct UPrimitiveComponent* PrimitiveObjectRef, bool Success); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HitBuildingActor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HitBuildingWall(struct UObject* ObjectRef, struct UPrimitiveComponent* PrimitiveObjectRef, bool Success); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HitBuildingWall // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HitVehicle(struct UObject* ObjectRef, struct UPrimitiveComponent* PrimitiveObjectRef, bool Success); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HitVehicle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleHits(struct UObject* ObjectRef, struct UPrimitiveComponent* PrimitiveObjectRef); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.HandleHits // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SelfIgnite(); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.SelfIgnite // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCurieActive_112B241847E303B58BF962A699068D1C(); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.OnCurieActive_112B241847E303B58BF962A699068D1C // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AttachedComponentDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.AttachedComponentDied // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BaseDied(struct AActor* DestroyedActor); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.BaseDied // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult ImpactResult, struct FVector ImpactVelocity); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnCurieElementDetached_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag ElementTag); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.OnCurieElementDetached_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BGA_GenericCurieFuel_Parent(int32_t EntryPoint); // Function BGA_GenericCurieFuel_Parent.BGA_GenericCurieFuel_Parent_C.ExecuteUbergraph_BGA_GenericCurieFuel_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

