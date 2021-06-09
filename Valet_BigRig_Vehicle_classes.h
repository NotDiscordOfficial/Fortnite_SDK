// BlueprintGeneratedClass Valet_BigRig_Vehicle.Valet_BigRig_Vehicle_C
// Size: 0x2518 (Inherited: 0x2484)
struct AValet_BigRig_Vehicle_C : AValet_BasicCar_Vehicle_C {
	char pad_2484[0x4]; // 0x2484(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2488(0x08)
	struct UParticleSystemComponent* SmokeLeft_FX; // 0x2490(0x08)
	struct UParticleSystemComponent* SmokeRight_FX; // 0x2498(0x08)
	struct FScalableFloat HotfixScalePontoonTickRateFront_1; // 0x24a0(0x28)
	struct FScalableFloat HotfixScalePontoonTickRateRear_1; // 0x24c8(0x28)
	int32_t MatIndex; // 0x24f0(0x04)
	char pad_24F4[0x4]; // 0x24f4(0x04)
	struct TArray<struct UMaterialInterface*> SK_Mat0_Array_0_1; // 0x24f8(0x10)
	struct TArray<struct UMaterialInterface*> SK_Mat2_Array_1; // 0x2508(0x10)

	void UserConstructionScript(); // Function Valet_BigRig_Vehicle.Valet_BigRig_Vehicle_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEnteredWaterBody(struct AFortWaterBodyActor* WaterBody); // Function Valet_BigRig_Vehicle.Valet_BigRig_Vehicle_C.OnEnteredWaterBody // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Valet_BigRig_Vehicle(int32_t EntryPoint); // Function Valet_BigRig_Vehicle.Valet_BigRig_Vehicle_C.ExecuteUbergraph_Valet_BigRig_Vehicle // (Final|UbergraphFunction) // @ game+0xda7c34
};

