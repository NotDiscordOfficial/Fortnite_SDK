// AnimBlueprintGeneratedClass BP_PDW.BP_PDW_C
// Size: 0x358 (Inherited: 0x2c0)
struct UBP_PDW_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x2f8(0x18)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x310(0x48)

	void AnimGraph(struct FPoseLink AnimGraph); // Function BP_PDW.BP_PDW_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_PDW(int32_t EntryPoint); // Function BP_PDW.BP_PDW_C.ExecuteUbergraph_BP_PDW // (Final|UbergraphFunction) // @ game+0xda7c34
};

