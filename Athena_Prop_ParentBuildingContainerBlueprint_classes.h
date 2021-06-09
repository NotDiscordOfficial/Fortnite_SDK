// BlueprintGeneratedClass Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C
// Size: 0xd70 (Inherited: 0xc90)
struct AAthena_Prop_ParentBuildingContainerBlueprint_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc90(0x08)
	bool DebugWind; // 0xc98(0x01)
	char pad_C99[0x7]; // 0xc99(0x07)
	struct TArray<struct UMaterialInterface*> IntenseWindMaterialsForPreview; // 0xca0(0x10)
	struct UStaticMeshComponent* Wind Intensity Debug Mesh; // 0xcb0(0x08)
	struct TArray<struct UMaterialInterface*> OriginalMaterials; // 0xcb8(0x10)
	struct UMaterialInstanceDynamic* Debug_TempMaterial; // 0xcc8(0x08)
	float DebugWindYaw; // 0xcd0(0x04)
	float Debug Wind Intensity; // 0xcd4(0x04)
	bool Set Max Actor Scale; // 0xcd8(0x01)
	char pad_CD9[0x3]; // 0xcd9(0x03)
	float Max Scale; // 0xcdc(0x04)
	bool Disable TOD Lights and Material Emissive Values; // 0xce0(0x01)
	bool Disable Static Mesh Shadow Casting When Lights Are Active; // 0xce1(0x01)
	bool Use An Alternate Shadow Mesh When The Light is On ; // 0xce2(0x01)
	char pad_CE3[0x5]; // 0xce3(0x05)
	struct UStaticMesh* AlternateShadowStaticMesh; // 0xce8(0x08)
	bool Animate Emissive and Lights Over Time; // 0xcf0(0x01)
	char pad_CF1[0x7]; // 0xcf1(0x07)
	struct TArray<struct FLinearColor> CodeControlled_EmissiveColor; // 0xcf8(0x10)
	struct TArray<float> CodeControlled_LightConeOpacity; // 0xd08(0x10)
	struct FDayPhaseFloats Light Intensity Over Time of Day ; // 0xd18(0x10)
	float Day Phase Transition Length; // 0xd28(0x04)
	struct FDayPhaseFloats Emissive Intensity Over Time of Day; // 0xd2c(0x10)
	float Volumetric Light Scattering Intensity; // 0xd3c(0x04)
	bool Cast Volumetric Shadows; // 0xd40(0x01)
	bool Animate Lights With A Curve - Disables time of day light controls; // 0xd41(0x01)
	bool Animate Mesh MID Emissive Value with a Curve - Disables time of day light controls; // 0xd42(0x01)
	char pad_D43[0x5]; // 0xd43(0x05)
	struct UCurveFloat* LightAnimationCurve; // 0xd48(0x08)
	float CodeControlled_Animation Curve Animation Length; // 0xd50(0x04)
	int32_t CodeControlled_NumberOfMaterials; // 0xd54(0x04)
	struct TArray<float> NewVar_1; // 0xd58(0x10)
	float Random Time Scale Percent; // 0xd68(0x04)
	float CodeControlled_CurrentPlayLength; // 0xd6c(0x04)

	void GetTimeOfDayBlueprintDefaultVariables(struct FTimeOfDayBlueprintDefaultVariables OutVariables); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.GetTimeOfDayBlueprintDefaultVariables // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnDayPhaseChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Loop Animation Curve(); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.Loop Animation Curve // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBounceAnimationUpdate(struct FFortBounceData Data); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnBounceAnimationUpdate // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnSetSearched(); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnSetSearched // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint(int32_t EntryPoint); // Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

