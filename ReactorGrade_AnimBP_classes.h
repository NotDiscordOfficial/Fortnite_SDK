// AnimBlueprintGeneratedClass ReactorGrade_AnimBP.ReactorGrade_AnimBP_C
// Size: 0x3c0 (Inherited: 0x2c0)
struct UReactorGrade_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2f8(0x48)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x340(0x80)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ReactorGrade_AnimBP.ReactorGrade_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ReactorGrade_AnimBP(int32_t EntryPoint); // Function ReactorGrade_AnimBP.ReactorGrade_AnimBP_C.ExecuteUbergraph_ReactorGrade_AnimBP // (Final|UbergraphFunction) // @ game+0xda7c34
};

