// BlueprintGeneratedClass GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C
// Size: 0x8a8 (Inherited: 0x7d0)
struct AGCN_Loop_Ice_Wheels_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	float Duration; // 0x7d8(0x04)
	float ExpirationTellDuration; // 0x7dc(0x04)
	struct FTimerHandle ExpireTellDelayTimer; // 0x7e0(0x08)
	struct FTimerHandle ExpirationSoundTimer; // 0x7e8(0x08)
	struct FScalableFloat DataTellDuration; // 0x7f0(0x28)
	float ExpirationSoundPeriod; // 0x818(0x04)
	float Crack; // 0x81c(0x04)
	struct TArray<struct UParticleSystemComponent*> LoopingEmitters; // 0x820(0x10)
	struct UFortCollisionAudioComponent* CollisionAudioComp; // 0x830(0x08)
	struct TArray<struct UAudioComponent*> SpawnedAudioComps; // 0x838(0x10)
	bool ShoppingCart; // 0x848(0x01)
	char pad_849[0x7]; // 0x849(0x07)
	struct TArray<struct FName> GolfSockets; // 0x850(0x10)
	struct TArray<struct FName> ShoppingSockets; // 0x860(0x10)
	struct TArray<struct FName> PlaneSockets; // 0x870(0x10)
	struct FTimerHandle Timer_SoundModulation; // 0x880(0x08)
	struct TScriptInterface<None> TargetVehicleInterface; // 0x888(0x10)
	struct TArray<struct FName> ValetSockets; // 0x898(0x10)

	void SpawnEmittersAttachedToWheels(struct TArray<struct FName> Sockets, struct USceneComponent* AttachToComponent, bool NoOffsets, struct UParticleSystem* EmitterTemplate, float ScaleMult, struct TArray<struct UParticleSystemComponent*> SpawnedEmitters1); // Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.SpawnEmittersAttachedToWheels // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BeginExpireTell(); // Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.BeginExpireTell // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ClearExpireTell(); // Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.ClearExpireTell // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExpireWarningTick(); // Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.ExpireWarningTick // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Event ModulateSound(); // Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.Event ModulateSound // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCN_Loop_Ice_Wheels(int32_t EntryPoint); // Function GCN_Loop_Ice_Wheels.GCN_Loop_Ice_Wheels_C.ExecuteUbergraph_GCN_Loop_Ice_Wheels // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

