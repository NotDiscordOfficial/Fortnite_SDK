// AnimBlueprintGeneratedClass Semi_Truck_Veh_AnimBP_Base.Semi_Truck_Veh_AnimBP_Base_C
// Size: 0x35c1 (Inherited: 0x450)
struct USemi_Truck_Veh_AnimBP_Base_C : UFortGoatVehicleAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x458(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_18; // 0x478(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_17; // 0x580(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_16; // 0x688(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_15; // 0x790(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_14; // 0x898(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_13; // 0x9a0(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_12; // 0xaa8(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_11; // 0xbb0(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10; // 0xcb8(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9; // 0xdc0(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; // 0xec8(0x108)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xfd0(0x30)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1000(0x20)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x1020(0x18)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0x1038(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0x1140(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x1248(0x108)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody_4; // 0x1350(0x790)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody_3; // 0x1ae0(0x790)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody_2; // 0x2270(0x790)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x2a00(0x790)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x3190(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x3298(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x33a0(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x34a8(0x108)
	float triggerLadder; // 0x35b0(0x04)
	float TriggerMirrorL; // 0x35b4(0x04)
	float TriggerMirrorR; // 0x35b8(0x04)
	float MiddleAxleAdjust; // 0x35bc(0x04)
	bool HasTireMod; // 0x35c0(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function Semi_Truck_Veh_AnimBP_Base.Semi_Truck_Veh_AnimBP_Base_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Semi_Truck_Veh_AnimBP_Base_AnimGraphNode_ModifyBone_7B814FBA4BE584CC554BBCBC712BA9A9(); // Function Semi_Truck_Veh_AnimBP_Base.Semi_Truck_Veh_AnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Semi_Truck_Veh_AnimBP_Base_AnimGraphNode_ModifyBone_7B814FBA4BE584CC554BBCBC712BA9A9 // (BlueprintEvent) // @ game+0xda7c34
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Semi_Truck_Veh_AnimBP_Base.Semi_Truck_Veh_AnimBP_Base_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Semi_Truck_Veh_AnimBP_Base(int32_t EntryPoint); // Function Semi_Truck_Veh_AnimBP_Base.Semi_Truck_Veh_AnimBP_Base_C.ExecuteUbergraph_Semi_Truck_Veh_AnimBP_Base // (Final|UbergraphFunction) // @ game+0xda7c34
};

