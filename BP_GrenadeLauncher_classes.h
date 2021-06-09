// AnimBlueprintGeneratedClass BP_GrenadeLauncher.BP_GrenadeLauncher_C
// Size: 0xc0e (Inherited: 0x2c0)
struct UBP_GrenadeLauncher_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x2c8(0x80)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x348(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x368(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x470(0x20)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x490(0x48)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x4d8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x500(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x528(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x550(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x578(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x5a0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x5c8(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x5f0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x670(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x6a0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x720(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x750(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x7d0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x800(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x880(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x8b0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x930(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x960(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x9e0(0x30)
	struct FAnimNode_RefPose AnimGraphNode_IdentityPose; // 0xa10(0x18)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xa28(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xa58(0xb0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xb08(0x30)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xb38(0xc8)
	float CylinderROT; // 0xc00(0x04)
	int32_t DrumPositionCount; // 0xc04(0x04)
	bool ShouldRotateToPos1; // 0xc08(0x01)
	bool ShouldRotateToPos2; // 0xc09(0x01)
	bool ShouldRotateToPos3; // 0xc0a(0x01)
	bool ShouldRotateToPos4; // 0xc0b(0x01)
	bool ShouldRotateToPos5; // 0xc0c(0x01)
	bool ShouldRotateToPos6; // 0xc0d(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_ModifyBone_EA2975074BE60949C2769EB733D75B15(); // Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_ModifyBone_EA2975074BE60949C2769EB733D75B15 // (BlueprintEvent) // @ game+0xda7c34
	void AnimNotify_RotateDrum(); // Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.AnimNotify_RotateDrum // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_GrenadeLauncher(int32_t EntryPoint); // Function BP_GrenadeLauncher.BP_GrenadeLauncher_C.ExecuteUbergraph_BP_GrenadeLauncher // (Final|UbergraphFunction) // @ game+0xda7c34
};

