// AnimBlueprintGeneratedClass Junk_Gun_Rifle_AnimBP.Junk_Gun_Rifle_AnimBP_C
// Size: 0x146a (Inherited: 0x2c0)
struct UJunk_Gun_Rifle_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x2c8(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x2f0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x370(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x3a0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x420(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_5; // 0x450(0xb0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x500(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x5a0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x620(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_4; // 0x650(0xb0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; // 0x700(0xc8)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x7c8(0x48)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x810(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x838(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x860(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x888(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x8b0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x8d8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x900(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x928(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x950(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x978(0x28)
	struct FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x9a0(0x18)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x9b8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x9e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0xa68(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0xa98(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0xb18(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xb48(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0xbc8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xbf8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xc78(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0xca8(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xd58(0x80)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xdd8(0x30)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0xe08(0xc8)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xed0(0x48)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xf18(0xa0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0xfb8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xfe0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x1008(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x1088(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x10b8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x1138(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x1168(0xb0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1218(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x12e0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1360(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1390(0xb0)
	int32_t Ammo; // 0x1440(0x04)
	char pad_1444[0x4]; // 0x1444(0x04)
	struct UAnimSequence* AmmoAnim; // 0x1448(0x08)
	bool Harvesting; // 0x1450(0x01)
	char pad_1451[0x3]; // 0x1451(0x03)
	float JitterSpeed; // 0x1454(0x04)
	float Delta Time X; // 0x1458(0x04)
	char pad_145C[0x4]; // 0x145c(0x04)
	struct UAnimSequenceBase* JitterAnim; // 0x1460(0x08)
	bool Ammo Update Reaction; // 0x1468(0x01)
	bool PlayOutro; // 0x1469(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function Junk_Gun_Rifle_AnimBP.Junk_Gun_Rifle_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_45A1AE104F3D6405E916E2A8B973DC17(); // Function Junk_Gun_Rifle_AnimBP.Junk_Gun_Rifle_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_45A1AE104F3D6405E916E2A8B973DC17 // (BlueprintEvent) // @ game+0xda7c34
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_2292127C46F371909D59FCA3A99270E2(); // Function Junk_Gun_Rifle_AnimBP.Junk_Gun_Rifle_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_2292127C46F371909D59FCA3A99270E2 // (BlueprintEvent) // @ game+0xda7c34
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_A8A285C84DDCB49500F3EDB847B231BB(); // Function Junk_Gun_Rifle_AnimBP.Junk_Gun_Rifle_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_A8A285C84DDCB49500F3EDB847B231BB // (BlueprintEvent) // @ game+0xda7c34
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_2BA4C96546AC88D7FAD1DD84A2DE4C44(); // Function Junk_Gun_Rifle_AnimBP.Junk_Gun_Rifle_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_2BA4C96546AC88D7FAD1DD84A2DE4C44 // (BlueprintEvent) // @ game+0xda7c34
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_016AB0D347FB0DA3ABEA168EFD0213F9(); // Function Junk_Gun_Rifle_AnimBP.Junk_Gun_Rifle_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_016AB0D347FB0DA3ABEA168EFD0213F9 // (BlueprintEvent) // @ game+0xda7c34
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_E5743AFD48490F1E94AC0785AEEE53FE(); // Function Junk_Gun_Rifle_AnimBP.Junk_Gun_Rifle_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_E5743AFD48490F1E94AC0785AEEE53FE // (BlueprintEvent) // @ game+0xda7c34
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_0C7E96F14A744EC35C5478B84EC4D646(); // Function Junk_Gun_Rifle_AnimBP.Junk_Gun_Rifle_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_0C7E96F14A744EC35C5478B84EC4D646 // (BlueprintEvent) // @ game+0xda7c34
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_D0E58B544094E43F587A67BB3494F951(); // Function Junk_Gun_Rifle_AnimBP.Junk_Gun_Rifle_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_D0E58B544094E43F587A67BB3494F951 // (BlueprintEvent) // @ game+0xda7c34
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Junk_Gun_Rifle_AnimBP.Junk_Gun_Rifle_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_C3E7CE614153B79E6A238487073EE50C(); // Function Junk_Gun_Rifle_AnimBP.Junk_Gun_Rifle_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_C3E7CE614153B79E6A238487073EE50C // (BlueprintEvent) // @ game+0xda7c34
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_E1D822DC40DEED4FD9DF26A7BAE8AB9C(); // Function Junk_Gun_Rifle_AnimBP.Junk_Gun_Rifle_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Junk_Gun_Rifle_AnimBP_AnimGraphNode_TransitionResult_E1D822DC40DEED4FD9DF26A7BAE8AB9C // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Junk_Gun_Rifle_AnimBP(int32_t EntryPoint); // Function Junk_Gun_Rifle_AnimBP.Junk_Gun_Rifle_AnimBP_C.ExecuteUbergraph_Junk_Gun_Rifle_AnimBP // (Final|UbergraphFunction) // @ game+0xda7c34
};

