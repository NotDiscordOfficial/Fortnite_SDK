// AnimBlueprintGeneratedClass Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C
// Size: 0x1351 (Inherited: 0x2c0)
struct UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x2c8(0x118)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0x3e0(0x790)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0xb70(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0xb90(0x20)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0xbb0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0xbd8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0xc00(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xc28(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xc50(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0xcd0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xd00(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xd80(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xdb0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xe30(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xe60(0xb0)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xf10(0x108)
	char pad_1018[0x8]; // 0x1018(0x08)
	struct FAnimNode_Trail AnimGraphNode_Trail; // 0x1020(0x260)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x1280(0x48)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x12c8(0x30)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x12f8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1318(0x20)
	bool OneHandGrip; // 0x1338(0x01)
	char pad_1339[0x3]; // 0x1339(0x03)
	float Trail_Alpha; // 0x133c(0x04)
	float Trail_RelaxScale; // 0x1340(0x04)
	struct FRotator GripRotation; // 0x1344(0x0c)
	bool IsTethered; // 0x1350(0x01)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink AnimGraph); // Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0xda7c34
};

