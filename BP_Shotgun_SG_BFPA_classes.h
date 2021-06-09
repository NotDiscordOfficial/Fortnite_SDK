// AnimBlueprintGeneratedClass BP_Shotgun_SG_BFPA.BP_Shotgun_SG_BFPA_C
// Size: 0x358 (Inherited: 0x2c0)
struct UBP_Shotgun_SG_BFPA_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8(0x48)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x340(0x18)

	void AnimGraph(struct FPoseLink AnimGraph); // Function BP_Shotgun_SG_BFPA.BP_Shotgun_SG_BFPA_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_Shotgun_SG_BFPA(int32_t EntryPoint); // Function BP_Shotgun_SG_BFPA.BP_Shotgun_SG_BFPA_C.ExecuteUbergraph_BP_Shotgun_SG_BFPA // (Final|UbergraphFunction) // @ game+0xda7c34
};

