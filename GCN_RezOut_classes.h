// BlueprintGeneratedClass GCN_RezOut.GCN_RezOut_C
// Size: 0x5e1 (Inherited: 0x458)
struct AGCN_RezOut_C : AFortGameplayCueNotify_BurstLatent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x458(0x08)
	float TFX_ResOutCharacterMesh_LightIntensity_E9C2D3554642468472CCCFA609A39FBC; // 0x460(0x04)
	float TFX_ResOutCharacterMesh_ZHeightParam_E9C2D3554642468472CCCFA609A39FBC; // 0x464(0x04)
	float TFX_ResOutCharacterMesh_TransitionParam_E9C2D3554642468472CCCFA609A39FBC; // 0x468(0x04)
	enum class ETimelineDirection TFX_ResOutCharacterMesh__Direction_E9C2D3554642468472CCCFA609A39FBC; // 0x46c(0x01)
	char pad_46D[0x3]; // 0x46d(0x03)
	struct UTimelineComponent* TFX_ResOutCharacterMesh; // 0x470(0x08)
	float TFX_GlowCharacterMesh_EmissiveWarp_39A37BC9407CF090A09ABDA5A488F776; // 0x478(0x04)
	enum class ETimelineDirection TFX_GlowCharacterMesh__Direction_39A37BC9407CF090A09ABDA5A488F776; // 0x47c(0x01)
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
	struct UNiagaraComponent* Spawned Death VFX; // 0x580(0x08)
	struct UNiagaraSystem* Dissolve Visual Effect; // 0x588(0x08)
	struct FName Dissolve VFX Spawn Point Name; // 0x590(0x08)
	struct UAnimMontage* Base Elimination Montage; // 0x598(0x08)
	struct UAnimMontage* DBNO Elimination Montage; // 0x5a0(0x08)
	struct UAnimMontage* Skydiving Elimination Montage; // 0x5a8(0x08)
	struct UAnimMontage* Swimming Elimination Montage; // 0x5b0(0x08)
	struct UAnimMontage* DBNO Swimming Elimination Montage; // 0x5b8(0x08)
	bool Spawn VFX Attached; // 0x5c0(0x01)
	char pad_5C1[0x3]; // 0x5c1(0x03)
	float Dissolve Timeline Playrate; // 0x5c4(0x04)
	float Glow Timeline Playrate; // 0x5c8(0x04)
	bool DEBUG_REMOVESPAWNVFX; // 0x5cc(0x01)
	bool DEBUG_REMOVESPAWNEDPOINTLIGHT; // 0x5cd(0x01)
	char pad_5CE[0x2]; // 0x5ce(0x02)
	struct UNiagaraSystem* Drone Visual Effect; // 0x5d0(0x08)
	struct FName Drone VFX Attach Point; // 0x5d8(0x08)
	bool DEBUG_FXSYSTEMCOMPONENTS; // 0x5e0(0x01)

	void Spawn Drone VFX(); // Function GCN_RezOut.GCN_RezOut_C.Spawn Drone VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Timeline Playrates(); // Function GCN_RezOut.GCN_RezOut_C.Set Timeline Playrates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Dissolve Material Setup(); // Function GCN_RezOut.GCN_RezOut_C.Dissolve Material Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Spawn Dissolve VFX(); // Function GCN_RezOut.GCN_RezOut_C.Spawn Dissolve VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Clean-Up Teleportation Light(); // Function GCN_RezOut.GCN_RezOut_C.Clean-Up Teleportation Light // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Spawn Teleportation Light(); // Function GCN_RezOut.GCN_RezOut_C.Spawn Teleportation Light // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Spawn Teleportation Drone(); // Function GCN_RezOut.GCN_RezOut_C.Spawn Teleportation Drone // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Stop Looping Audio(); // Function GCN_RezOut.GCN_RezOut_C.Stop Looping Audio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Play Elmination AnimMontage(); // Function GCN_RezOut.GCN_RezOut_C.Play Elmination AnimMontage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TFX_GlowCharacterMesh__FinishedFunc(); // Function GCN_RezOut.GCN_RezOut_C.TFX_GlowCharacterMesh__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void TFX_GlowCharacterMesh__UpdateFunc(); // Function GCN_RezOut.GCN_RezOut_C.TFX_GlowCharacterMesh__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void TFX_ResOutCharacterMesh__FinishedFunc(); // Function GCN_RezOut.GCN_RezOut_C.TFX_ResOutCharacterMesh__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void TFX_ResOutCharacterMesh__UpdateFunc(); // Function GCN_RezOut.GCN_RezOut_C.TFX_ResOutCharacterMesh__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnBurstGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCN_RezOut.GCN_RezOut_C.OnBurstGeneric // (Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0xda7c34
	void Pre-Sequence Change(); // Function GCN_RezOut.GCN_RezOut_C.Pre-Sequence Change // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Additional Niagara Parameters on Spawned FX(struct UNiagaraComponent* Spawned Death FX); // Function GCN_RezOut.GCN_RezOut_C.Set Additional Niagara Parameters on Spawned FX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Additional Niagara Parameters on Drone FX(struct UNiagaraComponent* Drone FX); // Function GCN_RezOut.GCN_RezOut_C.Set Additional Niagara Parameters on Drone FX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCN_RezOut(int32_t EntryPoint); // Function GCN_RezOut.GCN_RezOut_C.ExecuteUbergraph_GCN_RezOut // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

