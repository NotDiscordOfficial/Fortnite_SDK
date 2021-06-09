// BlueprintGeneratedClass FN_RadialForce.FN_RadialForce_C
// Size: 0x2b0 (Inherited: 0x228)
struct AFN_RadialForce_C : AFieldSystemActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x228(0x08)
	struct UOperatorField* DistanceFadMult; // 0x230(0x08)
	struct URadialFalloff* DistanceFalloff; // 0x238(0x08)
	struct UWaveScalar* DecayScalar; // 0x240(0x08)
	struct UOperatorField* DecayMult; // 0x248(0x08)
	struct UWaveScalar* RadialFalloffWave; // 0x250(0x08)
	struct UOperatorField* RadialVecMultiplyRadialFallOff; // 0x258(0x08)
	struct URadialVector* RadialVector; // 0x260(0x08)
	float Timeline_0_Radius_CD3BE591473F9A800DF08A8AC8690190; // 0x268(0x04)
	enum class ETimelineDirection Timeline_0__Direction_CD3BE591473F9A800DF08A8AC8690190; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x270(0x08)
	float Wave Period; // 0x278(0x04)
	float Force Duration; // 0x27c(0x04)
	float Radius; // 0x280(0x04)
	float Magnitude; // 0x284(0x04)
	float PlayRate; // 0x288(0x04)
	float Scale; // 0x28c(0x04)
	float Impact Time; // 0x290(0x04)
	float Period; // 0x294(0x04)
	float WaveLength; // 0x298(0x04)
	float Time Decay; // 0x29c(0x04)
	enum class EFieldFalloffType Falloff Type; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float Expansion; // 0x2a4(0x04)
	float Impact Radius; // 0x2a8(0x04)
	float Strength; // 0x2ac(0x04)

	struct FTransform NewFunction_1(float Roll, float Scale); // Function FN_RadialForce.FN_RadialForce_C.NewFunction_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Timeline_0__FinishedFunc(); // Function FN_RadialForce.FN_RadialForce_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__UpdateFunc(); // Function FN_RadialForce.FN_RadialForce_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function FN_RadialForce.FN_RadialForce_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FN_RadialForce(int32_t EntryPoint); // Function FN_RadialForce.FN_RadialForce_C.ExecuteUbergraph_FN_RadialForce // (Final|UbergraphFunction) // @ game+0xda7c34
};

