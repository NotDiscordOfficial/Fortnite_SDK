// AnimBlueprintGeneratedClass BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C
// Size: 0x21d0 (Inherited: 0x3f0)
struct UBadgerBangsLayerAnimBP_C : UFortItemLayerAnimInstance_FullLocomotion {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_35; // 0x3f8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_19; // 0x428(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_34; // 0x540(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_18; // 0x570(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_33; // 0x688(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_17; // 0x6b8(0x118)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_16; // 0x7d0(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_32; // 0x8e8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_15; // 0x918(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_31; // 0xa30(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xa60(0x80)
	struct FAnimNode_Root AnimGraphNode_Root_30; // 0xae0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xb10(0x80)
	struct FAnimNode_Root AnimGraphNode_Root_29; // 0xb90(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xbc0(0x80)
	struct FAnimNode_Root AnimGraphNode_Root_28; // 0xc40(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xc70(0x80)
	struct FAnimNode_Root AnimGraphNode_Root_27; // 0xcf0(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_14; // 0xd20(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_26; // 0xe38(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_13; // 0xe68(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_25; // 0xf80(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_12; // 0xfb0(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_24; // 0x10c8(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_23; // 0x10f8(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_22; // 0x1128(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_21; // 0x1158(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_20; // 0x1188(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_19; // 0x11b8(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_18; // 0x11e8(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_17; // 0x1218(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_16; // 0x1248(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_15; // 0x1278(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_14; // 0x12a8(0x30)
	struct FAnimNode_Root AnimGraphNode_Root_13; // 0x12d8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_11; // 0x1308(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_12; // 0x1420(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_10; // 0x1450(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_11; // 0x1568(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_9; // 0x1598(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_10; // 0x16b0(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_8; // 0x16e0(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_9; // 0x17f8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_7; // 0x1828(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_8; // 0x1940(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_6; // 0x1970(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_7; // 0x1a88(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_5; // 0x1ab8(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_6; // 0x1bd0(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_4; // 0x1c00(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_5; // 0x1d18(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3; // 0x1d48(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_4; // 0x1e60(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2; // 0x1e90(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_3; // 0x1fa8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x1fd8(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_2; // 0x20f0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2120(0x80)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x21a0(0x30)

	void ItemPreIK(struct FPoseLink InPose_PreIK, struct FPoseLink ItemPreIK); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemPreIK // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemFullBodyOverride(struct FPoseLink InPoseFullBody, struct FPoseLink ItemFullBodyOverride); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemFullBodyOverride // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemAimOffset(struct FPoseLink InPose_AimOffset, float AimOffsetAlpha, float Yaw, float Pitch, struct FPoseLink InPose_UpperLowerPreMeleeAO, struct FPoseLink ItemAimOffset); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemAimOffset // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemSkeletalControl(struct FPoseLink InPose, struct FPoseLink ItemSkeletalControl); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSkeletalControl // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemSwimJumpSurfaceEnd(struct FPoseLink ItemSwimJumpSurfaceEnd); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSwimJumpSurfaceEnd // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemSwimJumpSurfaceLoop(struct FPoseLink ItemSwimJumpSurfaceLoop); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSwimJumpSurfaceLoop // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemSwimJumpFallLoop(struct FPoseLink ItemSwimJumpFallLoop); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSwimJumpFallLoop // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemSwimJumpStartLoop(struct FPoseLink ItemSwimJumpStartLoop); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSwimJumpStartLoop // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemUpperBody(struct FPoseLink InPoseUpperBody, struct FFortAnimInput_AdjustedAim InputParam, struct FPoseLink ItemUpperBody); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemUpperBody // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemFullBodySprint(struct FPoseLink InPoseSprint, struct FPoseLink ItemFullBodySprint); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemFullBodySprint // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemIdleAdditive(struct FPoseLink InPoseIdleAdditive, struct FPoseLink ItemIdleAdditive); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemIdleAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemCrouchTurningAdditive(struct FPoseLink ItemCrouchTurningAdditive); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemCrouchTurningAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemSlopeSliding(struct FPoseLink ItemSlopeSliding); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSlopeSliding // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemJumpUpAdditive(struct FPoseLink ItemJumpUpAdditive); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJumpUpAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemJumpLoopAdditive(struct FPoseLink ItemJumpLoopAdditive); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJumpLoopAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemFallAdditive(struct FPoseLink ItemFallAdditive); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemFallAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemFallLandAdditive(struct FPoseLink ItemFallLandAdditive); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemFallLandAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemJetPackStartAdditive(struct FPoseLink ItemJetPackStartAdditive); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJetPackStartAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemJetPackJumpAdditive(struct FPoseLink ItemJetPackJumpAdditive); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJetPackJumpAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemZipLineStartAdditive(struct FPoseLink ItemZipLineStartAdditive); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemZipLineStartAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemFlyModeStartAdditive(struct FPoseLink ItemFlyModeStartAdditive); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemFlyModeStartAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemFlyModeLoopAdditive(struct FPoseLink ItemFlyModeLoopAdditive); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemFlyModeLoopAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemJogStartAdditive(struct FPoseLink InPoseJogStartAdditive, struct FPoseLink ItemJogStartAdditive); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJogStartAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemJogStopAdditive(struct FPoseLink InPoseJogStopAdditive, struct FPoseLink ItemJogStopAdditive); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJogStopAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemJogPrePivotAdditive(struct FPoseLink InPosePrePivotAdditive, struct FPoseLink ItemJogPrePivotAdditive); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJogPrePivotAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemJogPostPivotAdditive(struct FPoseLink InPosePostPivotAdditive, struct FPoseLink ItemJogPostPivotAdditive); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemJogPostPivotAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemLowerBodyMovement(struct FPoseLink InPoseLowerBodyMovement, struct FPoseLink ItemLowerBodyMovement); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemLowerBodyMovement // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemLowerBodyLeanAdditive(struct FPoseLink InPoseLowerBodyLeanAdditive, struct FPoseLink ItemLowerBodyLeanAdditive); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemLowerBodyLeanAdditive // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemLowerBodyJogStart(struct FPoseLink InPoseLowerBodyJogStart, struct FPoseLink ItemLowerBodyJogStart); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemLowerBodyJogStart // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemLowerBodyJogStop(struct FPoseLink InPoseLowerBodyJogStop, struct FPoseLink ItemLowerBodyJogStop); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemLowerBodyJogStop // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemLowerBodyJogPrePivot(struct FPoseLink InPoseLowerBodyJogPrePivot, struct FPoseLink ItemLowerBodyJogPrePivot); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemLowerBodyJogPrePivot // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemLowerBodyJogPostPivot(struct FPoseLink InPoseLowerBodyJogPostPivot, struct FPoseLink ItemLowerBodyJogPostPivot); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemLowerBodyJogPostPivot // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemRelaxedEntry(struct FPoseLink InPoseRelaxedEntry, struct FPoseLink ItemRelaxedEntry); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemRelaxedEntry // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void ItemSwimJumpStart(struct FPoseLink ItemSwimJumpStart); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ItemSwimJumpStart // (HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void AnimGraph(struct FPoseLink AnimGraph); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BadgerBangsLayerAnimBP(int32_t EntryPoint); // Function BadgerBangsLayerAnimBP.BadgerBangsLayerAnimBP_C.ExecuteUbergraph_BadgerBangsLayerAnimBP // (Final|UbergraphFunction) // @ game+0xda7c34
};

