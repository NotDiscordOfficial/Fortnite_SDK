// AnimBlueprintGeneratedClass JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C
// Size: 0x2114 (Inherited: 0x380)
struct UJunkGun_LayerAnimBP_C : UFortItemLayerAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_35; // 0x388(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_19; // 0x3b8(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_34; // 0x4d0(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_18; // 0x500(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_33; // 0x618(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_17; // 0x648(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_32; // 0x760(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_31; // 0x790(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_30; // 0x7c0(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_29; // 0x7f0(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_28; // 0x820(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_27; // 0x850(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_26; // 0x880(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_25; // 0x8b0(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_24; // 0x8e0(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_23; // 0x910(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_22; // 0x940(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_21; // 0x970(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_16; // 0x9a0(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_20; // 0xab8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_15; // 0xae8(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_19; // 0xc00(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_14; // 0xc30(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_18; // 0xd48(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_13; // 0xd78(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_17; // 0xe90(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_12; // 0xec0(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_16; // 0xfd8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_11; // 0x1008(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_15; // 0x1120(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_10; // 0x1150(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_14; // 0x1268(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_9; // 0x1298(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_13; // 0x13b0(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_8; // 0x13e0(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_12; // 0x14f8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_7; // 0x1528(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_11; // 0x1640(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_6; // 0x1670(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_10; // 0x1788(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_9; // 0x17b8(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_8; // 0x17e8(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_7; // 0x1818(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_6; // 0x1848(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_5; // 0x1878(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_5; // 0x18a8(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_4; // 0x19c0(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_4; // 0x19f0(0x118)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3; // 0x1b08(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_3; // 0x1c20(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2; // 0x1c50(0x118)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1d68(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1e30(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1eb0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1ee0(0xb0)
	struct FAnimNode_Root AnimGraphNode_Root_2; // 0x1f90(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x1fc0(0x118)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x20d8(0x30)
	bool AmmoUpdateReaction; // 0x2108(0x01)
	char pad_2109[0x3]; // 0x2109(0x03)
	int32_t JunkGun_Ammo_Current; // 0x210c(0x04)
	int32_t JunkGun_Ammo_New; // 0x2110(0x04)

	void ItemUpperBody(struct FPoseLink InPoseUpperBody, struct FFortAnimInput_AdjustedAim InputParam, struct FPoseLink ItemUpperBody); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemUpperBody // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemFullBodySprint(struct FPoseLink InPoseSprint, struct FPoseLink ItemFullBodySprint); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemFullBodySprint // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemIdleAdditive(struct FPoseLink InPoseIdleAdditive, struct FPoseLink ItemIdleAdditive); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemIdleAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemCrouchTurningAdditive(struct FPoseLink ItemCrouchTurningAdditive); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemCrouchTurningAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemSlopeSliding(struct FPoseLink ItemSlopeSliding); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemSlopeSliding // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemJumpUpAdditive(struct FPoseLink ItemJumpUpAdditive); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemJumpUpAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemJumpLoopAdditive(struct FPoseLink ItemJumpLoopAdditive); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemJumpLoopAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemFallAdditive(struct FPoseLink ItemFallAdditive); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemFallAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemFallLandAdditive(struct FPoseLink ItemFallLandAdditive); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemFallLandAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemJetPackStartAdditive(struct FPoseLink ItemJetPackStartAdditive); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemJetPackStartAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemJetPackJumpAdditive(struct FPoseLink ItemJetPackJumpAdditive); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemJetPackJumpAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemZipLineStartAdditive(struct FPoseLink ItemZipLineStartAdditive); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemZipLineStartAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemFlyModeStartAdditive(struct FPoseLink ItemFlyModeStartAdditive); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemFlyModeStartAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemFlyModeLoopAdditive(struct FPoseLink ItemFlyModeLoopAdditive); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemFlyModeLoopAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemJogStartAdditive(struct FPoseLink InPoseJogStartAdditive, struct FPoseLink ItemJogStartAdditive); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemJogStartAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemJogStopAdditive(struct FPoseLink InPoseJogStopAdditive, struct FPoseLink ItemJogStopAdditive); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemJogStopAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemJogPrePivotAdditive(struct FPoseLink InPosePrePivotAdditive, struct FPoseLink ItemJogPrePivotAdditive); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemJogPrePivotAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemJogPostPivotAdditive(struct FPoseLink InPosePostPivotAdditive, struct FPoseLink ItemJogPostPivotAdditive); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemJogPostPivotAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemLowerBodyMovement(struct FPoseLink InPoseLowerBodyMovement, struct FPoseLink ItemLowerBodyMovement); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemLowerBodyMovement // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemLowerBodyLeanAdditive(struct FPoseLink InPoseLowerBodyLeanAdditive, struct FPoseLink ItemLowerBodyLeanAdditive); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemLowerBodyLeanAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemLowerBodyJogStart(struct FPoseLink InPoseLowerBodyJogStart, struct FPoseLink ItemLowerBodyJogStart); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemLowerBodyJogStart // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemLowerBodyJogStop(struct FPoseLink InPoseLowerBodyJogStop, struct FPoseLink ItemLowerBodyJogStop); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemLowerBodyJogStop // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemLowerBodyJogPrePivot(struct FPoseLink InPoseLowerBodyJogPrePivot, struct FPoseLink ItemLowerBodyJogPrePivot); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemLowerBodyJogPrePivot // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemLowerBodyJogPostPivot(struct FPoseLink InPoseLowerBodyJogPostPivot, struct FPoseLink ItemLowerBodyJogPostPivot); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemLowerBodyJogPostPivot // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemRelaxedEntry(struct FPoseLink InPoseRelaxedEntry, struct FPoseLink ItemRelaxedEntry); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemRelaxedEntry // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemSwimJumpStart(struct FPoseLink ItemSwimJumpStart); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemSwimJumpStart // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemSwimJumpStartLoop(struct FPoseLink ItemSwimJumpStartLoop); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemSwimJumpStartLoop // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemSwimJumpFallLoop(struct FPoseLink ItemSwimJumpFallLoop); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemSwimJumpFallLoop // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemSwimJumpSurfaceLoop(struct FPoseLink ItemSwimJumpSurfaceLoop); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemSwimJumpSurfaceLoop // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemSwimJumpSurfaceEnd(struct FPoseLink ItemSwimJumpSurfaceEnd); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemSwimJumpSurfaceEnd // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemSkeletalControl(struct FPoseLink InPose, struct FPoseLink ItemSkeletalControl); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemSkeletalControl // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemAimOffset(struct FPoseLink InPose_AimOffset, float AimOffsetAlpha, float Yaw, float Pitch, struct FPoseLink InPose_UpperLowerPreMeleeAO, struct FPoseLink ItemAimOffset); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemAimOffset // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemFullBodyOverride(struct FPoseLink InPoseFullBody, struct FPoseLink ItemFullBodyOverride); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemFullBodyOverride // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemPreIK(struct FPoseLink InPose_PreIK, struct FPoseLink ItemPreIK); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ItemPreIK // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void AnimGraph(struct FPoseLink AnimGraph); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AnimNotify_JunkGun_AmmoOver(); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.AnimNotify_JunkGun_AmmoOver // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_JunkGun_LayerAnimBP(int32_t EntryPoint); // Function JunkGun_LayerAnimBP.JunkGun_LayerAnimBP_C.ExecuteUbergraph_JunkGun_LayerAnimBP // (Final|UbergraphFunction) // @ game+0xda7c34
};

