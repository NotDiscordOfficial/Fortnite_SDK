// AnimBlueprintGeneratedClass F_MED_Rebirth_Soldier_AnimBP.F_MED_Rebirth_Soldier_AnimBP_C
// Size: 0x18a8 (Inherited: 0x520)
struct UF_MED_Rebirth_Soldier_AnimBP_C : UCustomCharacterPartAnimInstance_Rebirth_Soldier_F {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	char pad_528[0x8]; // 0x528(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody_2; // 0x530(0x790)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xcc0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xce0(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0xd00(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xe08(0x108)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0xf10(0x790)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x16a0(0x1d8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x1878(0x30)

	void AnimGraph(struct FPoseLink AnimGraph); // Function F_MED_Rebirth_Soldier_AnimBP.F_MED_Rebirth_Soldier_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_F_MED_Rebirth_Soldier_AnimBP(int32_t EntryPoint); // Function F_MED_Rebirth_Soldier_AnimBP.F_MED_Rebirth_Soldier_AnimBP_C.ExecuteUbergraph_F_MED_Rebirth_Soldier_AnimBP // (Final|UbergraphFunction) // @ game+0xda7c34
};

