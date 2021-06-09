// BlueprintGeneratedClass ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C
// Size: 0xed0 (Inherited: 0xe00)
struct AParentBuildingContainerBlueprint_C : ABuildingContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe00(0x08)
	bool DebugWind; // 0xe08(0x01)
	char pad_E09[0x7]; // 0xe09(0x07)
	struct TArray<struct UMaterialInterface*> IntenseWindMaterialsForPreview; // 0xe10(0x10)
	struct UStaticMeshComponent* Wind Intensity Debug Mesh; // 0xe20(0x08)
	struct TArray<struct UMaterialInterface*> OriginalMaterials; // 0xe28(0x10)
	struct UMaterialInstanceDynamic* Debug_TempMaterial; // 0xe38(0x08)
	float DebugWindYaw; // 0xe40(0x04)
	float Debug Wind Intensity; // 0xe44(0x04)
	bool Set Max Actor Scale; // 0xe48(0x01)
	char pad_E49[0x3]; // 0xe49(0x03)
	float Max Scale; // 0xe4c(0x04)
	bool Disable TOD Lights and Material Emissive Values; // 0xe50(0x01)
	bool Disable Static Mesh Shadow Casting When Lights Are Active; // 0xe51(0x01)
	bool Use An Alternate Shadow Mesh When The Light is On ; // 0xe52(0x01)
	char pad_E53[0x5]; // 0xe53(0x05)
	struct UStaticMesh* AlternateShadowStaticMesh; // 0xe58(0x08)
	bool Animate Emissive and Lights Over Time; // 0xe60(0x01)
	char pad_E61[0x7]; // 0xe61(0x07)
	struct TArray<struct FLinearColor> CodeControlled_EmissiveColor; // 0xe68(0x10)
	struct TArray<float> CodeControlled_LightConeOpacity; // 0xe78(0x10)
	struct FDayPhaseFloats Light Intensity Over Time of Day ; // 0xe88(0x10)
	float Day Phase Transition Length; // 0xe98(0x04)
	struct FDayPhaseFloats Emissive Intensity Over Time of Day; // 0xe9c(0x10)
	float Volumetric Light Scattering Intensity; // 0xeac(0x04)
	bool Cast Volumetric Shadows; // 0xeb0(0x01)
	bool Animate Lights With A Curve - Disables time of day light controls; // 0xeb1(0x01)
	bool Animate Mesh MID Emissive Value with a Curve - Disables time of day light controls; // 0xeb2(0x01)
	char pad_EB3[0x5]; // 0xeb3(0x05)
	struct UCurveFloat* LightAnimationCurve; // 0xeb8(0x08)
	float CodeControlled_Animation Curve Animation Length; // 0xec0(0x04)
	int32_t CodeControlled_NumberOfMaterials; // 0xec4(0x04)
	float Random Time Scale Percent; // 0xec8(0x04)
	float CodeControlled_CurrentPlayLength; // 0xecc(0x04)

	void GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables OutVariables); // Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.GetTimeOfDayBlueprintDefaultVariables // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation); // Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.OnDayPhaseChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnSetSearched(); // Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.OnSetSearched // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Loop Animation Curve(); // Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.Loop Animation Curve // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBounceAnimationUpdate(struct FFortBounceData Data); // Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.OnBounceAnimationUpdate // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ParentBuildingContainerBlueprint(int32_t EntryPoint); // Function ParentBuildingContainerBlueprint.ParentBuildingContainerBlueprint_C.ExecuteUbergraph_ParentBuildingContainerBlueprint // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

