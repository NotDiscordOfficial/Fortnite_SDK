// BlueprintGeneratedClass Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C
// Size: 0xe08 (Inherited: 0xdb0)
struct ATrap_Floor_Player_Jump_Free_Direction_Pad_C : ABuildingTrapFloor_Launch {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xdb0(0x08)
	struct UBoxComponent* Trigger; // 0xdb8(0x08)
	struct UParticleSystemComponent* JumpParticleSystem; // 0xdc0(0x08)
	struct USceneComponent* Scene1; // 0xdc8(0x08)
	struct USoundCue* Trap_Placed_Sound; // 0xdd0(0x08)
	struct USoundCue* Trap_Active_Sound; // 0xdd8(0x08)
	struct USoundCue* Trap_Fire_Sound; // 0xde0(0x08)
	struct USoundCue* Trap_Reload_Sound; // 0xde8(0x08)
	struct USoundCue* Trap_Explode_Sound; // 0xdf0(0x08)
	struct UMaterialInstanceDynamic* JumpMaterial; // 0xdf8(0x08)
	float LaunchStrength; // 0xe00(0x04)
	float LaunchPitch; // 0xe04(0x04)

	struct FVector GetImpulseDirection(struct AActor* LaunchingActor); // Function Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.GetImpulseDirection // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BP_ShouldTrigger(struct TArray<struct AActor*> TouchingActors); // Function Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.BP_ShouldTrigger // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void OnReloadEnd(); // Function Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.OnReloadEnd // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPlaced(); // Function Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.OnPlaced // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnFinishedBuilding(); // Function Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.OnFinishedBuilding // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Abilities.Activation.Traps.ReloadBegin(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnOutOfDurability(); // Function Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.OnOutOfDurability // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Abilities.Activation.Traps.ActivateTrap(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Trap_Floor_Player_Jump_Free_Direction_Pad(int32_t EntryPoint); // Function Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.ExecuteUbergraph_Trap_Floor_Player_Jump_Free_Direction_Pad // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

