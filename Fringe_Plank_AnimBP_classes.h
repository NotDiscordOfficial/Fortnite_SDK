// AnimBlueprintGeneratedClass Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C
// Size: 0xbe0 (Inherited: 0x2c0)
struct UFringe_Plank_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2f8(0x118)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x410(0x790)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xba0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xbc0(0x20)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink AnimGraph); // Function Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Fringe_Plank_AnimBP(int32_t EntryPoint); // Function Fringe_Plank_AnimBP.Fringe_Plank_AnimBP_C.ExecuteUbergraph_Fringe_Plank_AnimBP // (Final|UbergraphFunction) // @ game+0xda7c34
};

