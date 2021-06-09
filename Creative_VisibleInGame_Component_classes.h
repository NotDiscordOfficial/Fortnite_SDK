// BlueprintGeneratedClass Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C
// Size: 0x143 (Inherited: 0xb8)
struct UCreative_VisibleInGame_Component_C : UCreative_DeviceComponent_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb8(0x08)
	struct FMulticastInlineDelegate On Visibility Changed; // 0xc0(0x10)
	struct TArray<struct USceneComponent*> VisibleSceneComponents; // 0xd0(0x10)
	bool bEnableCollisionUpdates; // 0xe0(0x01)
	enum class ECollisionEnabled Default Collision Enabled State; // 0xe1(0x01)
	enum class ECollisionEnabled Collision Disabled State; // 0xe2(0x01)
	enum class EVisibleInGameState VisibleDuringPhase; // 0xe3(0x01)
	bool bResetOnComponentActivation; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct FTimerHandle RetryBindMiniGameEventsTimer; // 0xe8(0x08)
	struct TMap<struct USceneComponent*, enum class ECollisionEnabled> Collision Enabled Overrides; // 0xf0(0x50)
	enum class Enum_ForcedValueDuringGame ForcedVisibilityDuringGame; // 0x140(0x01)
	bool bUseSetHiddenInGame; // 0x141(0x01)
	bool Update Foliage on Visibility Change; // 0x142(0x01)

	void Update Foliage(); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Foliage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_ForcedVisibilityDuringGame(); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.OnRep_ForcedVisibilityDuringGame // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetForcedVisibilityDuringGame(enum class Enum_ForcedValueDuringGame NewForcedVisibilityDuringGame); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.SetForcedVisibilityDuringGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Array Visibility(struct TArray<struct USceneComponent*> Array); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Array Visibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Visibility Components with Collision(struct TMap<struct USceneComponent*, enum class ECollisionEnabled> Collision Overrides); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Set Visibility Components with Collision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Should Be Visible(bool Visible); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Should Be Visible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void OnRep_VisibleDuringPhase(); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.OnRep_VisibleDuringPhase // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Visibility Components(struct TArray<struct USceneComponent*> Scene Components); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Set Visibility Components // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool Is In Play Mode(); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Is In Play Mode // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Update Particle Component(struct UParticleSystemComponent* Particle Component, bool Visible); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Particle Component // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Audio Component(struct UAudioComponent* Audio Component, bool Visible); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Audio Component // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Primitive Component Collision(struct UPrimitiveComponent* Primitive Component, bool Visible); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Primitive Component Collision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Component Visibility(struct USceneComponent* Component, bool Visible); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Component Visibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Visiblity During Phase(enum class EVisibleInGameState New Visible During Phase); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Set Visiblity During Phase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Visibility(); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Update Visibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Get Visibility Components(struct TArray<struct USceneComponent*> Components); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Get Visibility Components // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPlayModeChangedDelegate(struct AFortMinigame* Minigame, bool bIsInPlayMode); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.OnPlayModeChangedDelegate // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Bind Minigame Events(); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.Bind Minigame Events // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMinigameStateChanged(struct AFortMinigame* Minigame, enum class EFortMinigameState MinigameState); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.OnMinigameStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Creative_VisibleInGame_Component(int32_t EntryPoint); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.ExecuteUbergraph_Creative_VisibleInGame_Component // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void On Visibility Changed__DelegateSignature(bool Visible); // Function Creative_VisibleInGame_Component.Creative_VisibleInGame_Component_C.On Visibility Changed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

