// BlueprintGeneratedClass B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C
// Size: 0x900 (Inherited: 0x880)
struct AB_Prj_Athena_Generic_CurieFireball_Parent_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x880(0x08)
	struct UParticleSystemComponent* FireTrail; // 0x888(0x08)
	struct FVector Fire Plane Trace Offset; // 0x890(0x0c)
	float Fire Plane Spawn Offset; // 0x89c(0x04)
	struct ABuildingGameplayActor* BGAToSpawn; // 0x8a0(0x08)
	struct UParticleSystem* DesiredFireTrailParticle; // 0x8a8(0x08)
	bool DoesMeshAngleNeedAdjusted; // 0x8b0(0x01)
	bool ShouldFireSpawnWithRandomChance; // 0x8b1(0x01)
	char pad_8B2[0x2]; // 0x8b2(0x02)
	float RandomSpawnChanceWeight; // 0x8b4(0x04)
	bool ShouldSpawnFire; // 0x8b8(0x01)
	char pad_8B9[0x7]; // 0x8b9(0x07)
	struct USoundBase* FireFizzle; // 0x8c0(0x08)
	char pad_8C8[0x8]; // 0x8c8(0x08)
	struct FTransform LineTraceTransform; // 0x8d0(0x30)

	struct FTransform Line Trace for Mesh Angle(); // Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.Line Trace for Mesh Angle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void Landed In Water(); // Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.Landed In Water // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void SpawnCurieBGA(); // Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.SpawnCurieBGA // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DelaySpawnCurieBGA(); // Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.DelaySpawnCurieBGA // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent(int32_t EntryPoint); // Function B_Prj_Athena_Generic_CurieFireball_Parent.B_Prj_Athena_Generic_CurieFireball_Parent_C.ExecuteUbergraph_B_Prj_Athena_Generic_CurieFireball_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

