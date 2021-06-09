// BlueprintGeneratedClass B_Prj_CO2.B_Prj_CO2_C
// Size: 0xa70 (Inherited: 0x9a0)
struct AB_Prj_CO2_C : AFortProjectileAthena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9a0(0x08)
	struct UParticleSystemComponent* P_Foam_Prj_Trail; // 0x9a8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x9b0(0x08)
	struct FVector HitLocation; // 0x9b8(0x0c)
	float WaterTraceRadius; // 0x9c4(0x04)
	struct TArray<enum class EObjectTypeQuery> WaterTraceObjectTypes; // 0x9c8(0x10)
	float LandscapeExtinguishRadius; // 0x9d8(0x04)
	struct FHitResult LastHit; // 0x9dc(0x88)
	struct FVector HitNormal; // 0xa64(0x0c)

	void ApplyWaterInRadiusIfCurieEnabled(struct FHitResult HitResult); // Function B_Prj_CO2.B_Prj_CO2_C.ApplyWaterInRadiusIfCurieEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function B_Prj_CO2.B_Prj_CO2_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_CO2.B_Prj_CO2_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnStop(struct FHitResult Hit); // Function B_Prj_CO2.B_Prj_CO2_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function B_Prj_CO2.B_Prj_CO2_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function B_Prj_CO2.B_Prj_CO2_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_CO2(int32_t EntryPoint); // Function B_Prj_CO2.B_Prj_CO2_C.ExecuteUbergraph_B_Prj_CO2 // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

