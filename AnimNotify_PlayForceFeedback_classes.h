// BlueprintGeneratedClass AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C
// Size: 0x54 (Inherited: 0x38)
struct UAnimNotify_PlayForceFeedback_C : UAnimNotify {
	struct UForceFeedbackEffect* ForceFeedbackTemplate; // 0x38(0x08)
	struct UForceFeedbackEffect* ForceFeedbackFarTemplate; // 0x40(0x08)
	bool bPlayAtWorldLocation; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float InnerRadius; // 0x4c(0x04)
	float OuterRadius; // 0x50(0x04)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function AnimNotify_PlayForceFeedback.AnimNotify_PlayForceFeedback_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
};

