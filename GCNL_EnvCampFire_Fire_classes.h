// BlueprintGeneratedClass GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C
// Size: 0x869 (Inherited: 0x7d0)
struct AGCNL_EnvCampFire_Fire_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	float Timeline_0_NewTrack_0_6ACE24B04365BE77BA45D9886552EEB2; // 0x7d8(0x04)
	enum class ETimelineDirection Timeline_0__Direction_6ACE24B04365BE77BA45D9886552EEB2; // 0x7dc(0x01)
	char pad_7DD[0x3]; // 0x7dd(0x03)
	struct UTimelineComponent* Timeline_1; // 0x7e0(0x08)
	float StokeTimeline_NewTrack_0_574CB0A140C5FB4D93DF818152F2BE6D; // 0x7e8(0x04)
	enum class ETimelineDirection StokeTimeline__Direction_574CB0A140C5FB4D93DF818152F2BE6D; // 0x7ec(0x01)
	char pad_7ED[0x3]; // 0x7ed(0x03)
	struct UTimelineComponent* StokeTimeline; // 0x7f0(0x08)
	float Darken_Logs_Lerp_Control_8B15C9BD454B1B355EEA4D88228A7E96; // 0x7f8(0x04)
	enum class ETimelineDirection Darken_Logs__Direction_8B15C9BD454B1B355EEA4D88228A7E96; // 0x7fc(0x01)
	char pad_7FD[0x3]; // 0x7fd(0x03)
	struct UTimelineComponent* Darken Logs; // 0x800(0x08)
	struct FScalableFloat Row_TickInterval; // 0x808(0x28)
	struct FScalableFloat Row_MaxHeals; // 0x830(0x28)
	struct UNiagaraComponent* Fx Variable; // 0x858(0x08)
	struct AB_BGA_Athena_EnvCampFire_C* ParentReference; // 0x860(0x08)
	bool HasPlayed; // 0x868(0x01)

	void Darken Logs__FinishedFunc(); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.Darken Logs__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Darken Logs__UpdateFunc(); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.Darken Logs__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void StokeTimeline__FinishedFunc(); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.StokeTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void StokeTimeline__UpdateFunc(); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.StokeTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__FinishedFunc(); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__UpdateFunc(); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void StokeCheckLoop(); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.StokeCheckLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_EnvCampFire_Fire(int32_t EntryPoint); // Function GCNL_EnvCampFire_Fire.GCNL_EnvCampFire_Fire_C.ExecuteUbergraph_GCNL_EnvCampFire_Fire // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

