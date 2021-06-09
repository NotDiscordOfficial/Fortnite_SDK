// AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
// Size: 0x918 (Inherited: 0x410)
struct UBlueprint_Paper_VIM_C : UFortAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone_4; // 0x418(0x128)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone_3; // 0x540(0x128)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone_2; // 0x668(0x128)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone; // 0x790(0x128)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x8b8(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x8d8(0x30)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x908(0x10)

	void AnimGraph(struct FPoseLink AnimGraph); // Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Blueprint_Paper_VIM(int32_t EntryPoint); // Function Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.ExecuteUbergraph_Blueprint_Paper_VIM // (Final|UbergraphFunction) // @ game+0xda7c34
};

