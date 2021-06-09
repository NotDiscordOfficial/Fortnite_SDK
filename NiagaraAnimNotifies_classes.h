// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// Size: 0x90 (Inherited: 0x38)
struct UAnimNotify_PlayNiagaraEffect : UAnimNotify {
	struct UNiagaraSystem* Template; // 0x38(0x08)
	struct FVector LocationOffset; // 0x40(0x0c)
	struct FRotator RotationOffset; // 0x4c(0x0c)
	struct FVector Scale; // 0x58(0x0c)
	bool bAbsoluteScale; // 0x64(0x01)
	char pad_65[0x1b]; // 0x65(0x1b)
	char Attached : 1; // 0x80(0x01)
	char pad_80_1 : 7; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FName SocketName; // 0x84(0x08)
	char pad_8C[0x4]; // 0x8c(0x04)

	struct UFXSystemComponent* GetSpawnedEffect(); // Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x1dd3108
};

// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// Size: 0x60 (Inherited: 0x30)
struct UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState {
	struct UNiagaraSystem* Template; // 0x30(0x08)
	struct FName SocketName; // 0x38(0x08)
	struct FVector LocationOffset; // 0x40(0x0c)
	struct FRotator RotationOffset; // 0x4c(0x0c)
	bool bDestroyAtEnd; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	struct UFXSystemComponent* GetSpawnedEffect(struct UMeshComponent* MeshComp); // Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect.GetSpawnedEffect // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x1f7a200
};

// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
// Size: 0xc0 (Inherited: 0x60)
struct UAnimNotifyState_TimedNiagaraEffectAdvanced : UAnimNotifyState_TimedNiagaraEffect {
	bool bEnableNormalizedNotifyProgress; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FName NotifyProgressUserParameter; // 0x64(0x08)
	char pad_6C[0x54]; // 0x6c(0x54)

	float GetNotifyProgress(struct UMeshComponent* MeshComp); // Function NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress // (Final|Native|Public|BlueprintCallable|Const) // @ game+0x3c9a8e0
};

