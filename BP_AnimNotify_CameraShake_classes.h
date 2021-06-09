// BlueprintGeneratedClass BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C
// Size: 0x45 (Inherited: 0x38)
struct UBP_AnimNotify_CameraShake_C : UAnimNotify {
	struct UMatineeCameraShake* Shake BP; // 0x38(0x08)
	float Shake Scale; // 0x40(0x04)
	enum class ECameraShakePlaySpace Shake Space; // 0x44(0x01)

	bool Received_Notify(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation); // Function BP_AnimNotify_CameraShake.BP_AnimNotify_CameraShake_C.Received_Notify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
};

