// AnimBlueprintGeneratedClass Llama_Roaster_AnimBP.Llama_Roaster_AnimBP_C
// Size: 0xa31 (Inherited: 0x2c0)
struct ULlama_Roaster_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x2c8(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3d0(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x3f0(0x108)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x4f8(0x48)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x540(0xa0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x5e0(0x30)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x610(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x6d8(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x758(0x80)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x7d8(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x8e0(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x900(0x108)
	bool IsFiring; // 0xa08(0x01)
	char pad_A09[0x3]; // 0xa09(0x03)
	float BarrelRotation; // 0xa0c(0x04)
	struct FRotator BarrelROT; // 0xa10(0x0c)
	float Max_Overheat; // 0xa1c(0x04)
	float Overheat_Value; // 0xa20(0x04)
	struct FRotator Overheat_FlapRot; // 0xa24(0x0c)
	bool IsOverheated; // 0xa30(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function Llama_Roaster_AnimBP.Llama_Roaster_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Llama_Roaster_AnimBP.Llama_Roaster_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Llama_Roaster_AnimBP(int32_t EntryPoint); // Function Llama_Roaster_AnimBP.Llama_Roaster_AnimBP_C.ExecuteUbergraph_Llama_Roaster_AnimBP // (Final|UbergraphFunction) // @ game+0xda7c34
};

