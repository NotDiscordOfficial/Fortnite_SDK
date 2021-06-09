// AnimBlueprintGeneratedClass WrapBandages_Prop_AnimBP.WrapBandages_Prop_AnimBP_C
// Size: 0x700 (Inherited: 0x360)
struct UWrapBandages_Prop_AnimBP_C : UFortItemAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x368(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x398(0x80)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x418(0x48)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x460(0xb0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x510(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x668(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x690(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x6b8(0x48)

	void AnimGraph(struct FPoseLink AnimGraph); // Function WrapBandages_Prop_AnimBP.WrapBandages_Prop_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_WrapBandages_Prop_AnimBP(int32_t EntryPoint); // Function WrapBandages_Prop_AnimBP.WrapBandages_Prop_AnimBP_C.ExecuteUbergraph_WrapBandages_Prop_AnimBP // (Final|UbergraphFunction) // @ game+0xda7c34
};

