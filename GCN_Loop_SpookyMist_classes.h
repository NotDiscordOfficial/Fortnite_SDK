// BlueprintGeneratedClass GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C
// Size: 0x984 (Inherited: 0x7d0)
struct AGCN_Loop_SpookyMist_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UPostProcessComponent* PostProcess; // 0x7d8(0x08)
	float Timeline_Interaction_Fade_In_Out_Visbility_5529D6B24898E091AFB4668B43CFAB50; // 0x7e0(0x04)
	enum class ETimelineDirection Timeline_Interaction_Fade_In_Out__Direction_5529D6B24898E091AFB4668B43CFAB50; // 0x7e4(0x01)
	char pad_7E5[0x3]; // 0x7e5(0x03)
	struct UTimelineComponent* Timeline Interaction Fade In Out; // 0x7e8(0x08)
	struct AFortPlayerPawn* TargetPlayer; // 0x7f0(0x08)
	float ExpirationSoundPeriod; // 0x7f8(0x04)
	float AudioVelocityInterp; // 0x7fc(0x04)
	struct TArray<struct USkeletalMeshComponent*> PlayerSkeletalMeshes; // 0x800(0x10)
	struct FTimerHandle ExpireTellDelayTimer; // 0x810(0x08)
	struct FTimerHandle ExpirationSoundTimer; // 0x818(0x08)
	float VisbilityLevel; // 0x820(0x04)
	float WalkVisMultiplier; // 0x824(0x04)
	float SprintVisMultiplier; // 0x828(0x04)
	float MinFriendlyOpacity; // 0x82c(0x04)
	float InteractVisibility; // 0x830(0x04)
	char pad_834[0x4]; // 0x834(0x04)
	struct FScalableFloat DataDuration; // 0x838(0x28)
	struct FScalableFloat DataTellDuration; // 0x860(0x28)
	struct FScalableFloat DataWalkVisMult; // 0x888(0x28)
	struct FScalableFloat DataSprintVisMult; // 0x8b0(0x28)
	struct FScalableFloat DataFriendlyVisMult; // 0x8d8(0x28)
	struct FScalableFloat DataShadowPlaneOpacity; // 0x900(0x28)
	bool bShowExpireTell Const; // 0x928(0x01)
	char pad_929[0x3]; // 0x929(0x03)
	float Speed Ribbon Velocity Threshold Const; // 0x92c(0x04)
	struct TArray<struct UAudioComponent*> Looping Audio Components; // 0x930(0x10)
	struct UParticleSystemComponent* Attached FX Head; // 0x940(0x08)
	struct UParticleSystemComponent* Attached FX Body; // 0x948(0x08)
	struct FName Mat Parameter Name Spooky Mist Mode Const; // 0x950(0x08)
	struct FName FX Parameter Name Ribbons Const; // 0x958(0x08)
	struct FName Mat Parameter Name Flash Start TimeConst; // 0x960(0x08)
	struct FName Audio Parameter Name Velocity Const; // 0x968(0x08)
	struct FName Mat Parameter Name Movement Opacity Const; // 0x970(0x08)
	struct FName FX Parameter Name Friendly Const; // 0x978(0x08)
	float VisibilityLevel Change Speed Const; // 0x980(0x04)

	float Get Goal Visibility Level(); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Get Goal Visibility Level // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Is Player Controller Friendly(struct AController* PlayerController, bool Is Friendly Player); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Is Player Controller Friendly // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool ShouldRenderAsLocalPlayer(); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ShouldRenderAsLocalPlayer // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	float TickMovement Opacity(); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.TickMovement Opacity // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShouldSpeedRibbonsBeVisible(bool Should Show Speed Ribbons); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ShouldSpeedRibbonsBeVisible // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Get Skeletal Meshes(); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Get Skeletal Meshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Timeline Interaction Fade In Out__FinishedFunc(); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Timeline Interaction Fade In Out__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline Interaction Fade In Out__UpdateFunc(); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Timeline Interaction Fade In Out__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BeginExpireTell(); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.BeginExpireTell // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ClearExpireTell(); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ClearExpireTell // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExpireWarningTick(); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ExpireWarningTick // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Audio Tick(float Velocity); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Audio Tick // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartedInteract(); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.StartedInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EndedInteract(); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.EndedInteract // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTeamVisbility(); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.UpdateTeamVisbility // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Initialize Player Skeletal Meshes(); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Initialize Player Skeletal Meshes // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCN_Loop_SpookyMist(int32_t EntryPoint); // Function GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ExecuteUbergraph_GCN_Loop_SpookyMist // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

