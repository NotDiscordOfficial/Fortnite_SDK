// BlueprintGeneratedClass AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C
// Size: 0x90 (Inherited: 0x30)
struct UAnimNotifyState_AttachAsset_C : UAnimNotifyState {
	struct FAssetAttachment Attachment; // 0x30(0x30)
	struct UAnimSequence* Animation; // 0x60(0x08)
	bool Looping; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float PlayRate; // 0x6c(0x04)
	struct FGameplayTagContainer DoNotAttachTagContainer; // 0x70(0x20)

	bool Received_NotifyEnd(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyEnd // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	bool Received_NotifyBegin(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, float TotalDuration); // Function AnimNotifyState_AttachAsset.AnimNotifyState_AttachAsset_C.Received_NotifyBegin // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
};

