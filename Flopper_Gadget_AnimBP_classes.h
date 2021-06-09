// AnimBlueprintGeneratedClass Flopper_Gadget_AnimBP.Flopper_Gadget_AnimBP_C
// Size: 0x810 (Inherited: 0x2c0)
struct UFlopper_Gadget_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x2c8(0x18)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2e0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x300(0x20)
	struct FAnimNode_Trail AnimGraphNode_Trail_2; // 0x320(0x260)
	struct FAnimNode_Trail AnimGraphNode_Trail; // 0x580(0x260)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x7e0(0x30)

	void AnimGraph(struct FPoseLink AnimGraph); // Function Flopper_Gadget_AnimBP.Flopper_Gadget_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Flopper_Gadget_AnimBP(int32_t EntryPoint); // Function Flopper_Gadget_AnimBP.Flopper_Gadget_AnimBP_C.ExecuteUbergraph_Flopper_Gadget_AnimBP // (Final|UbergraphFunction) // @ game+0xda7c34
};

