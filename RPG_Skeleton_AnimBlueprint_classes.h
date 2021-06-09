// AnimBlueprintGeneratedClass RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C
// Size: 0x358 (Inherited: 0x2c0)
struct URPG_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8(0x48)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x340(0x18)

	void AnimGraph(struct FPoseLink AnimGraph); // Function RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_RPG_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C.ExecuteUbergraph_RPG_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0xda7c34
};

