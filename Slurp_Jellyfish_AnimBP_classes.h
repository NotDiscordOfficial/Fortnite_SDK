// AnimBlueprintGeneratedClass Slurp_Jellyfish_AnimBP.Slurp_Jellyfish_AnimBP_C
// Size: 0xae0 (Inherited: 0x2c0)
struct USlurp_Jellyfish_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2c8(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2e8(0x20)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x308(0x18)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x320(0x30)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x350(0x790)

	void AnimGraph(struct FPoseLink AnimGraph); // Function Slurp_Jellyfish_AnimBP.Slurp_Jellyfish_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Slurp_Jellyfish_AnimBP(int32_t EntryPoint); // Function Slurp_Jellyfish_AnimBP.Slurp_Jellyfish_AnimBP_C.ExecuteUbergraph_Slurp_Jellyfish_AnimBP // (Final|UbergraphFunction) // @ game+0xda7c34
};

