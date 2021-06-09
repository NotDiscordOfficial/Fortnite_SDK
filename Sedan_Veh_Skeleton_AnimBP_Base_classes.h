// AnimBlueprintGeneratedClass Sedan_Veh_Skeleton_AnimBP_Base.Sedan_Veh_Skeleton_AnimBP_Base_C
// Size: 0x2f45 (Inherited: 0x450)
struct USedan_Veh_Skeleton_AnimBP_Base_C : UFortGoatVehicleAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x458(0x30)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x488(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_19; // 0x4a8(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_18; // 0x5b0(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_17; // 0x6b8(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_16; // 0x7c0(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_15; // 0x8c8(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_14; // 0x9d0(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_13; // 0xad8(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_12; // 0xbe0(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_11; // 0xce8(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10; // 0xdf0(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9; // 0xef8(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; // 0x1000(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0x1108(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1210(0x20)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x1230(0x18)
	char pad_1248[0x8]; // 0x1248(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody_3; // 0x1250(0x790)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0x19e0(0x108)
	char pad_1AE8[0x8]; // 0x1ae8(0x08)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody_2; // 0x1af0(0x790)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x2280(0x790)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x2a10(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x2b18(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x2c20(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x2d28(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x2e30(0x108)
	float triggerTrunk; // 0x2f38(0x04)
	float TriggerMirrorL; // 0x2f3c(0x04)
	float TriggerMirrorR; // 0x2f40(0x04)
	bool HasTireMod; // 0x2f44(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function Sedan_Veh_Skeleton_AnimBP_Base.Sedan_Veh_Skeleton_AnimBP_Base_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Sedan_Veh_Skeleton_AnimBP_Base.Sedan_Veh_Skeleton_AnimBP_Base_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Sedan_Veh_Skeleton_AnimBP_Base(int32_t EntryPoint); // Function Sedan_Veh_Skeleton_AnimBP_Base.Sedan_Veh_Skeleton_AnimBP_Base_C.ExecuteUbergraph_Sedan_Veh_Skeleton_AnimBP_Base // (Final|UbergraphFunction) // @ game+0xda7c34
};

