// BlueprintGeneratedClass GCN_RezIn.GCN_RezIn_C
// Size: 0x5c4 (Inherited: 0x458)
struct AGCN_RezIn_C : AFortGameplayCueNotify_BurstLatent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	float TFX_ResOutCharacterMesh_LightIntensity_81C5527F43A6972D94623590BA582E8C; // 0x460(0x04)
	float TFX_ResOutCharacterMesh_ZHeightParam_81C5527F43A6972D94623590BA582E8C; // 0x464(0x04)
	float TFX_ResOutCharacterMesh_TransitionParam_81C5527F43A6972D94623590BA582E8C; // 0x468(0x04)
	enum class ETimelineDirection TFX_ResOutCharacterMesh__Direction_81C5527F43A6972D94623590BA582E8C; // 0x46c(0x01)
	char pad_46D[0x3]; // 0x46d(0x03)
	struct UTimelineComponent* TFX_ResOutCharacterMesh; // 0x470(0x08)
	float TFX_GlowCharacterMesh_EmissiveWarp_9EA15145493A8F1A5915938D5529A028; // 0x478(0x04)
	enum class ETimelineDirection TFX_GlowCharacterMesh__Direction_9EA15145493A8F1A5915938D5529A028; // 0x47c(0x01)
	char pad_47D[0x3]; // 0x47d(0x03)
	struct UTimelineComponent* TFX_GlowCharacterMesh; // 0x480(0x08)
	bool DEBUG_ANIMATION; // 0x488(0x01)
	bool SpawnDrone; // 0x489(0x01)
	char pad_48A[0x6]; // 0x48a(0x06)
	struct ABP_TeleportationDrone_C* Teleportation Drone; // 0x490(0x08)
	float Teleport_Bot_AnimPlayRate; // 0x498(0x04)
	float Teleport Bot Lifespan; // 0x49c(0x04)
	struct UPointLightComponent* Teleportation Point Light; // 0x4a0(0x08)
	struct FVector Teleportation Light Offset; // 0x4a8(0x0c)
	struct FLinearColor Teleportation Light Color; // 0x4b4(0x10)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> DissolveMIDs; // 0x4c8(0x10)
	struct UMaterialInterface* Mat Chracter Dissolve; // 0x4d8(0x08)
	struct APlayerPawn_Athena_C* Pawn; // 0x4e0(0x08)
	struct TSet<struct USkeletalMeshComponent*> Dissolve; // 0x4e8(0x50)
	struct FName Socket Mesh Top; // 0x538(0x08)
	float Max Light Intensity; // 0x540(0x04)
	struct FName Socket Mesh Bottom; // 0x544(0x08)
	char pad_54C[0x4]; // 0x54c(0x04)
	struct TArray<struct USkeletalMeshComponent*> Meshes to Dissolve; // 0x550(0x10)
	struct ABP_TeleportationDrone_C* Drone; // 0x560(0x08)
	bool DEBUG_CHILDCOMPONENTS; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct TArray<struct UFXSystemComponent*> Particle Components; // 0x570(0x10)
	struct UNiagaraComponent* Spawned Teleport VFX; // 0x580(0x08)
	struct UNiagaraSystem* Teleport In Visual Effect; // 0x588(0x08)
	struct FName Teleport In VFX Attach Point Name; // 0x590(0x08)
	int32_t Cur Dissolve Setup Attempt; // 0x598(0x04)
	int32_t AmountOfTimesToAttemptRestoreMats; // 0x59c(0x04)
	bool Spawn VFX Attached; // 0x5a0(0x01)
	char pad_5A1[0x3]; // 0x5a1(0x03)
	float Dissolve Timeline Playrate; // 0x5a4(0x04)
	float Glow Timeline Playrate; // 0x5a8(0x04)
	char pad_5AC[0x4]; // 0x5ac(0x04)
	struct UNiagaraSystem* Drone Visual Effect; // 0x5b0(0x08)
	bool DEBUG_TESTJANUSFX; // 0x5b8(0x01)
	char pad_5B9[0x3]; // 0x5b9(0x03)
	struct FName Drone VFX Attach Point; // 0x5bc(0x08)

	void Spawn Drone VFX(); // Function GCN_RezIn.GCN_RezIn_C.Spawn Drone VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Timelines' Playrates(); // Function GCN_RezIn.GCN_RezIn_C.Set Timelines' Playrates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Spawn Teleport In VFX(); // Function GCN_RezIn.GCN_RezIn_C.Spawn Teleport In VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Restore Character Materials(bool Fully Completed); // Function GCN_RezIn.GCN_RezIn_C.Restore Character Materials // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Clean-Up Teleportation Light(); // Function GCN_RezIn.GCN_RezIn_C.Clean-Up Teleportation Light // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Spawn Teleportation Light(); // Function GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Light // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Spawn Teleportation Drone(); // Function GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Drone // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Stop Looping Audio(); // Function GCN_RezIn.GCN_RezIn_C.Stop Looping Audio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TFX_GlowCharacterMesh__FinishedFunc(); // Function GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void TFX_GlowCharacterMesh__UpdateFunc(); // Function GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void TFX_ResOutCharacterMesh__FinishedFunc(); // Function GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void TFX_ResOutCharacterMesh__UpdateFunc(); // Function GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnBurstGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_RezIn.GCN_RezIn_C.OnBurstGeneric // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xda7c34
	void Pre-Sequence Change(); // Function GCN_RezIn.GCN_RezIn_C.Pre-Sequence Change // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Additional Niagara Parameters on Spawned FX(struct UNiagaraComponent* Spawned Teleport In FX); // Function GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameters on Spawned FX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Additional Niagara Parameter on Drone FX(struct UNiagaraComponent* Drone FX); // Function GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameter on Drone FX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCN_RezIn(int32_t EntryPoint); // Function GCN_RezIn.GCN_RezIn_C.ExecuteUbergraph_GCN_RezIn // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

