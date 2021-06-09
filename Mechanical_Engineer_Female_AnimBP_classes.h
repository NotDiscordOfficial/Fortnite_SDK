// AnimBlueprintGeneratedClass Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C
// Size: 0x1390 (Inherited: 0x510)
struct UMechanical_Engineer_Female_AnimBP_C : UCustomCharacterPartAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x518(0x118)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x630(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x650(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x670(0x30)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x6a0(0x440)
	struct FAnimNode_RigidBody AnimGraphNode_RigidBody; // 0xae0(0x790)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1270(0x108)
	struct FRotator gear_rot; // 0x1378(0x0c)
	char pad_1384[0x4]; // 0x1384(0x04)
	struct USkeletalMeshComponent* skel_mesh; // 0x1388(0x08)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink AnimGraph); // Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BlueprintInitializeAnimation(); // Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP(int32_t EntryPoint); // Function Mechanical_Engineer_Female_AnimBP.Mechanical_Engineer_Female_AnimBP_C.ExecuteUbergraph_Mechanical_Engineer_Female_AnimBP // (Final|UbergraphFunction) // @ game+0xda7c34
};

