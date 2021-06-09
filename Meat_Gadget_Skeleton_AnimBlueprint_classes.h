// AnimBlueprintGeneratedClass Meat_Gadget_Skeleton_AnimBlueprint.Meat_Gadget_Skeleton_AnimBlueprint_C
// Size: 0xc80 (Inherited: 0x2c0)
struct UMeat_Gadget_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x2f8(0x118)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x410(0x790)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xba0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xbc0(0x20)
	struct FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0xbe0(0xa0)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink AnimGraph); // Function Meat_Gadget_Skeleton_AnimBlueprint.Meat_Gadget_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Meat_Gadget_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function Meat_Gadget_Skeleton_AnimBlueprint.Meat_Gadget_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Meat_Gadget_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0xda7c34
};

