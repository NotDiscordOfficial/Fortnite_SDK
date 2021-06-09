// AnimBlueprintGeneratedClass HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C
// Size: 0x18f8 (Inherited: 0x520)
struct UHighTower_Tapas_Axe_AnimBP_C : UCustomCharacterPartAnimInstance_HightowerTapasAxe {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x528(0x20)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x548(0x1d8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x720(0x30)
	struct FAnimNode_Trail AnimGraphNode_Trail; // 0x750(0x260)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x9b0(0x108)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xab8(0xa0)
	char pad_B58[0x8]; // 0xb58(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0xb60(0x790)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0x12f0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x1310(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x1330(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x1488(0x28)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x14b0(0x20)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x14d0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x14f8(0x28)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1520(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1628(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1648(0x20)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x1668(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x16b0(0x158)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x1808(0xc8)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x18d0(0x28)

	void AnimGraph(struct FPoseLink AnimGraph); // Function HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP(int32_t EntryPoint); // Function HighTower_Tapas_Axe_AnimBP.HighTower_Tapas_Axe_AnimBP_C.ExecuteUbergraph_HighTower_Tapas_Axe_AnimBP // (Final|UbergraphFunction) // @ game+0xda7c34
};

