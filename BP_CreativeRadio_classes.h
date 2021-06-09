// BlueprintGeneratedClass BP_CreativeRadio.BP_CreativeRadio_C
// Size: 0xd6b (Inherited: 0xd30)
struct ABP_CreativeRadio_C : ABuildingPropPlaygroundMusicPlayer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd30(0x08)
	struct UCreative_VisibleInGame_Component_C* VisibleInGameComponent; // 0xd38(0x08)
	struct UCreative_Radio_AudioToMPC_C* Creative_Radio_AudioToMPC; // 0xd40(0x08)
	struct UFortMinigameProgressComponent* FortMinigameProgress; // 0xd48(0x08)
	struct UToyOptionsComponent_C* ToyOptionsComponent; // 0xd50(0x08)
	float RadioAttenuationDistance; // 0xd58(0x04)
	float VolumeOverride; // 0xd5c(0x04)
	float CachedVolumeMultiplier; // 0xd60(0x04)
	float CachedAttenuationSetting; // 0xd64(0x04)
	bool ShouldDriveVisualization; // 0xd68(0x01)
	bool CachedShouldDriveVisualization; // 0xd69(0x01)
	bool IsMeshVisibleDuringMinigame; // 0xd6a(0x01)

	void CheckMinigameStateOnPropertyChanged(); // Function BP_CreativeRadio.BP_CreativeRadio_C.CheckMinigameStateOnPropertyChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlaybackTypeUpgradePath(); // Function BP_CreativeRadio.BP_CreativeRadio_C.PlaybackTypeUpgradePath // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateCachedAttenuationSettings(); // Function BP_CreativeRadio.BP_CreativeRadio_C.UpdateCachedAttenuationSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetAttenuationDistance(); // Function BP_CreativeRadio.BP_CreativeRadio_C.SetAttenuationDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BP_CreativeRadio.BP_CreativeRadio_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BP_CreativeRadio.BP_CreativeRadio_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void OnRep_CachedShouldDriveVisualization(); // Function BP_CreativeRadio.BP_CreativeRadio_C.OnRep_CachedShouldDriveVisualization // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_CachedAttenuationSetting(); // Function BP_CreativeRadio.BP_CreativeRadio_C.OnRep_CachedAttenuationSetting // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_CachedVolumeMultiplier(); // Function BP_CreativeRadio.BP_CreativeRadio_C.OnRep_CachedVolumeMultiplier // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPropertyChanged(); // Function BP_CreativeRadio.BP_CreativeRadio_C.OnPropertyChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_CreativeRadio.BP_CreativeRadio_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature(); // Function BP_CreativeRadio.BP_CreativeRadio_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature(); // Function BP_CreativeRadio.BP_CreativeRadio_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnWorldReady(); // Function BP_CreativeRadio.BP_CreativeRadio_C.OnWorldReady // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_CreativeRadio(int32_t EntryPoint); // Function BP_CreativeRadio.BP_CreativeRadio_C.ExecuteUbergraph_BP_CreativeRadio // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

