// AnimBlueprintGeneratedClass Pasta_Ripper_Rifle_Rifle_AnimBP.Pasta_Ripper_Rifle_Rifle_AnimBP_C
// Size: 0x521 (Inherited: 0x2c0)
struct UPasta_Ripper_Rifle_Rifle_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8(0x48)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x340(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x368(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x390(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x410(0x30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x440(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x470(0xb0)
	bool IsTargeting; // 0x520(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function Pasta_Ripper_Rifle_Rifle_AnimBP.Pasta_Ripper_Rifle_Rifle_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Pasta_Ripper_Rifle_Rifle_AnimBP.Pasta_Ripper_Rifle_Rifle_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Pasta_Ripper_Rifle_Rifle_AnimBP(int32_t EntryPoint); // Function Pasta_Ripper_Rifle_Rifle_AnimBP.Pasta_Ripper_Rifle_Rifle_AnimBP_C.ExecuteUbergraph_Pasta_Ripper_Rifle_Rifle_AnimBP // (Final|UbergraphFunction) // @ game+0xda7c34
};

