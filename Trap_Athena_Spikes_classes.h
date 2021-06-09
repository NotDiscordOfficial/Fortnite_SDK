// BlueprintGeneratedClass Trap_Athena_Spikes.Trap_Athena_Spikes_C
// Size: 0xe74 (Inherited: 0xd50)
struct ATrap_Athena_Spikes_C : ABuildingTrap {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd50(0x08)
	struct UStaticMeshComponent* Spike_Mesh; // 0xd58(0x08)
	struct UBoxComponent* Trigger; // 0xd60(0x08)
	struct USceneComponent* Root; // 0xd68(0x08)
	float ResetSpikes_LERP_D054F7574E7A1041A552A5805E6C81D1; // 0xd70(0x04)
	enum class ETimelineDirection ResetSpikes__Direction_D054F7574E7A1041A552A5805E6C81D1; // 0xd74(0x01)
	char pad_D75[0x3]; // 0xd75(0x03)
	struct UTimelineComponent* ResetSpikes; // 0xd78(0x08)
	float Retract_LERP_714CAEE5449A32850D6231AEDA918B58; // 0xd80(0x04)
	enum class ETimelineDirection Retract__Direction_714CAEE5449A32850D6231AEDA918B58; // 0xd84(0x01)
	char pad_D85[0x3]; // 0xd85(0x03)
	struct UTimelineComponent* Retract; // 0xd88(0x08)
	float Fire_LERP_630B749B437E5CB83CB49287CC92E385; // 0xd90(0x04)
	enum class ETimelineDirection Fire__Direction_630B749B437E5CB83CB49287CC92E385; // 0xd94(0x01)
	char pad_D95[0x3]; // 0xd95(0x03)
	struct UTimelineComponent* Fire; // 0xd98(0x08)
	struct USoundCue* Place_Trap_Sound; // 0xda0(0x08)
	struct USoundCue* Trap_Active_Sound; // 0xda8(0x08)
	struct USoundCue* Reload_Sound; // 0xdb0(0x08)
	struct USoundCue* Trap_Explode_Sound; // 0xdb8(0x08)
	struct USoundCue* Trap_Fire_Sound; // 0xdc0(0x08)
	float SpikeRestingScale; // 0xdc8(0x04)
	float SpikeActiveScale; // 0xdcc(0x04)
	float SpikeHoldOnFireLength; // 0xdd0(0x04)
	char pad_DD4[0x4]; // 0xdd4(0x04)
	struct UMaterialInstanceDynamic* SpikesMID; // 0xdd8(0x08)
	float SweepExponent; // 0xde0(0x04)
	struct FLinearColor SweepColor; // 0xde4(0x10)
	float SweepSpeed; // 0xdf4(0x04)
	struct UMaterialInterface* FriendlyTrapMaterial; // 0xdf8(0x08)
	struct UMaterialInterface* NormalSpikeMaterial; // 0xe00(0x08)
	bool bPlayFewerSounds; // 0xe08(0x01)
	char pad_E09[0x7]; // 0xe09(0x07)
	struct FFortPortableSoftParticles DeathParticle_Marshalled; // 0xe10(0x58)
	struct FRotator Trap Particle Placement Rotation; // 0xe68(0x0c)

	void ChangeToNormalMaterial(); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ChangeToNormalMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void  ChangeToFriendlyMaterial(); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C. ChangeToFriendlyMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MaterialSweepOnSpikes(float SweepSpeed, struct FLinearColor SweepColor, float SweepExponent); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.MaterialSweepOnSpikes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetSpikePosition(float NewSpikePosition); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.SetSpikePosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Fire__FinishedFunc(); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Fire__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Fire__UpdateFunc(); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Fire__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void Retract__FinishedFunc(); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Retract__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Retract__UpdateFunc(); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Retract__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void Retract__Sounds__EventFunc(); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Retract__Sounds__EventFunc // (BlueprintEvent) // @ game+0xda7c34
	void ResetSpikes__FinishedFunc(); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ResetSpikes__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void ResetSpikes__UpdateFunc(); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ResetSpikes__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_8E622EE64F2AF153BE7162BA1D8EBCC1(struct UObject* Loaded); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnLoaded_8E622EE64F2AF153BE7162BA1D8EBCC1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_8A9D6DF7414FFDD42BE9FCB155F39B4D(struct UObject* Loaded); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnLoaded_8A9D6DF7414FFDD42BE9FCB155F39B4D // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnReloadEnd(); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnReloadEnd // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPlaced(); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnPlaced // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnFinishedBuilding(); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnFinishedBuilding // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Abilities.Activation.Traps.ActivateTrap(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnOutOfDurability(); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnOutOfDurability // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnWorldReady(); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnWorldReady // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnInitTeam(); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnInitTeam // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Trap_Athena_Spikes(int32_t EntryPoint); // Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ExecuteUbergraph_Trap_Athena_Spikes // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

