// AnimBlueprintGeneratedClass DBNO_Carried.DBNO_Carried_C
// Size: 0x2801 (Inherited: 0x1c20)
struct UDBNO_Carried_C : UFortPlayerAnimInstance_DBNOCarried {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1c20(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x1c28(0x30)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1c58(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x1c78(0x108)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1d80(0x108)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1e88(0x80)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1f08(0xc8)
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; // 0x1fd0(0x1e0)
	struct FAnimNode_LinkedAnimGraph AnimGraphNode_SubInstance; // 0x21b0(0xa0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2250(0x20)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2270(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2298(0x28)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x22c0(0x50)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x2310(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2340(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x23c0(0x30)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x23f0(0x50)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2440(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x2470(0xb0)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x2520(0xc8)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x25e8(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x2740(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x2768(0x28)
	enum class EFortPlayerAnimBodyType __CustomProperty_my_animbodytype_BC9172D64300E6A13C48509FE2988A40; // 0x2790(0x01)
	enum class EFortCustomGender __CustomProperty_my_gender_BC9172D64300E6A13C48509FE2988A40; // 0x2791(0x01)
	bool Carried; // 0x2792(0x01)
	char pad_2793[0x5]; // 0x2793(0x05)
	struct APlayerPawn_Athena_C* CarrierPawn; // 0x2798(0x08)
	struct UFortPlayerAnimInstance* CarrierAnimBP; // 0x27a0(0x08)
	struct FVector LHandIKLocation; // 0x27a8(0x0c)
	struct FRotator LHandIKRotation; // 0x27b4(0x0c)
	struct FVector TempAttachLocation; // 0x27c0(0x0c)
	struct FRotator TempAttachRotation; // 0x27cc(0x0c)
	float SubAnimPhysicsWeight; // 0x27d8(0x04)
	bool IsBeingDropped; // 0x27dc(0x01)
	char pad_27DD[0x3]; // 0x27dd(0x03)
	float DropMontagePosition; // 0x27e0(0x04)
	char pad_27E4[0x4]; // 0x27e4(0x04)
	struct UAnimMontage* CarrierDropMontage; // 0x27e8(0x08)
	struct UAnimMontage* CarrierPickupMontage; // 0x27f0(0x08)
	bool IsBeingPickedUp; // 0x27f8(0x01)
	char pad_27F9[0x3]; // 0x27f9(0x03)
	float PickupMontagePosition; // 0x27fc(0x04)
	bool TransitionFromPickupToIdle; // 0x2800(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function DBNO_Carried.DBNO_Carried_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ApplyAdditive_56B19EE040BEEBC25D674F8DC99831B9(); // Function DBNO_Carried.DBNO_Carried_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ApplyAdditive_56B19EE040BEEBC25D674F8DC99831B9 // (BlueprintEvent) // @ game+0xda7c34
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ModifyBone_59E069244645BEF22808AB9196186F3F(); // Function DBNO_Carried.DBNO_Carried_C.EvaluateGraphExposedInputs_ExecuteUbergraph_DBNO_Carried_AnimGraphNode_ModifyBone_59E069244645BEF22808AB9196186F3F // (BlueprintEvent) // @ game+0xda7c34
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function DBNO_Carried.DBNO_Carried_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BlueprintInitializeAnimation(); // Function DBNO_Carried.DBNO_Carried_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_DBNO_Carried(int32_t EntryPoint); // Function DBNO_Carried.DBNO_Carried_C.ExecuteUbergraph_DBNO_Carried // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

