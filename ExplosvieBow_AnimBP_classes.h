// AnimBlueprintGeneratedClass ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C
// Size: 0x1668 (Inherited: 0x420)
struct UExplosvieBow_AnimBP_C : UFortBowWeaponAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x428(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x458(0x48)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x4a0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x4c8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x4f0(0x28)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x518(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x538(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x558(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x660(0x108)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; // 0x768(0xe8)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x850(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x900(0x80)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x980(0xb0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; // 0xa30(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xaf8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xb78(0x80)
	struct FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0xbf8(0x190)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0xd88(0xc8)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0xe50(0xe8)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0xf38(0xe8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0x1020(0xc8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x10e8(0x30)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x1118(0x18)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1130(0xa0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x11d0(0xc8)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1298(0xe8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1380(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1400(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1430(0xb0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x14e0(0xc0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x15a0(0x80)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x1620(0x48)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_D0BC44E84FB0F05DC49A24B18D5B2D51(); // Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_D0BC44E84FB0F05DC49A24B18D5B2D51 // (BlueprintEvent) // @ game+0xda7c34
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_0E1011B841DA7A109A69F18ED59C9A93(); // Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ExplosvieBow_AnimBP_AnimGraphNode_ModifyBone_0E1011B841DA7A109A69F18ED59C9A93 // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ExplosvieBow_AnimBP(int32_t EntryPoint); // Function ExplosvieBow_AnimBP.ExplosvieBow_AnimBP_C.ExecuteUbergraph_ExplosvieBow_AnimBP // (Final|UbergraphFunction) // @ game+0xda7c34
};

