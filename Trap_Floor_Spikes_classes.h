// BlueprintGeneratedClass Trap_Floor_Spikes.Trap_Floor_Spikes_C
// Size: 0xe08 (Inherited: 0xd50)
struct ATrap_Floor_Spikes_C : ABuildingTrapFloor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd50(0x08)
	struct UStaticMeshComponent* Spike_Mesh; // 0xd58(0x08)
	struct UBoxComponent* Trigger; // 0xd60(0x08)
	struct USceneComponent* Root; // 0xd68(0x08)
	float ResetSpikes_LERP_FCB6779D4DCA9F66ECE8A7B3FDDF9459; // 0xd70(0x04)
	enum class ETimelineDirection ResetSpikes__Direction_FCB6779D4DCA9F66ECE8A7B3FDDF9459; // 0xd74(0x01)
	char pad_D75[0x3]; // 0xd75(0x03)
	struct UTimelineComponent* ResetSpikes; // 0xd78(0x08)
	float Retract_LERP_0B9D97AE4B5C790D47D67889C6EAE1CD; // 0xd80(0x04)
	enum class ETimelineDirection Retract__Direction_0B9D97AE4B5C790D47D67889C6EAE1CD; // 0xd84(0x01)
	char pad_D85[0x3]; // 0xd85(0x03)
	struct UTimelineComponent* Retract; // 0xd88(0x08)
	float Fire_LERP_31BA074043AA09D9C415BAAA81B9DCBF; // 0xd90(0x04)
	enum class ETimelineDirection Fire__Direction_31BA074043AA09D9C415BAAA81B9DCBF; // 0xd94(0x01)
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

	void ChangeToNormalMaterial(); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.ChangeToNormalMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void  ChangeToFriendlyMaterial(); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C. ChangeToFriendlyMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MaterialSweepOnSpikes(float SweepSpeed, struct FLinearColor SweepColor, float SweepExponent); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.MaterialSweepOnSpikes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetSpikePosition(float NewSpikePosition); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.SetSpikePosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Fire__FinishedFunc(); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Fire__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Fire__UpdateFunc(); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Fire__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void Retract__FinishedFunc(); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Retract__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Retract__UpdateFunc(); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Retract__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void Retract__Sounds__EventFunc(); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.Retract__Sounds__EventFunc // (BlueprintEvent) // @ game+0xda7c34
	void ResetSpikes__FinishedFunc(); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.ResetSpikes__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void ResetSpikes__UpdateFunc(); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.ResetSpikes__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnReloadEnd(); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnReloadEnd // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPlaced(); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnPlaced // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnFinishedBuilding(); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnFinishedBuilding // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Abilities.Activation.Traps.ActivateTrap(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnOutOfDurability(); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnOutOfDurability // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnWorldReady(); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnWorldReady // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnInitTeam(); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnInitTeam // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SwitchToAlternateMaterial(); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.SwitchToAlternateMaterial // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Trap_Floor_Spikes(int32_t EntryPoint); // Function Trap_Floor_Spikes.Trap_Floor_Spikes_C.ExecuteUbergraph_Trap_Floor_Spikes // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

