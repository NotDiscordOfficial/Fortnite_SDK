// AnimBlueprintGeneratedClass Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C
// Size: 0xf40 (Inherited: 0x510)
struct UBucket_Old_Gadget_Skeleton_AnimBP_C : UCustomCharacterPartAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	char pad_518[0x8]; // 0x518(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x520(0x790)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xcb0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xcd0(0x20)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0xcf0(0x118)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xe08(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xe38(0x108)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink AnimGraph); // Function Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP(int32_t EntryPoint); // Function Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C.ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP // (Final|UbergraphFunction) // @ game+0xda7c34
};

