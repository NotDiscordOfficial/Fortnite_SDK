// BlueprintGeneratedClass ToyOptionsComponent.ToyOptionsComponent_C
// Size: 0x2c1 (Inherited: 0x220)
struct UToyOptionsComponent_C : UFortActorOptionsComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	SoftClassProperty OptionsWidgetClass; // 0x228(0x28)
	SoftClassProperty MyIslandTabList; // 0x250(0x28)
	struct AFortPlayerController* InteractingPlayer; // 0x278(0x08)
	bool bInteractSuccess; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct UObject* ClassToLoad; // 0x288(0x08)
	SoftClassProperty PropertyEditorWidgetClass; // 0x290(0x28)
	struct UUserWidget* CachedDisplayWidget; // 0x2b8(0x08)
	bool LoadingAssets; // 0x2c0(0x01)

	bool BlueprintOnLocalInteract(struct AFortPlayerPawn* InteractingPawn); // Function ToyOptionsComponent.ToyOptionsComponent_C.BlueprintOnLocalInteract // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_E8F4D2FB4AB5542DE83E50B51A402D27(struct UObject* Loaded); // Function ToyOptionsComponent.ToyOptionsComponent_C.OnLoaded_E8F4D2FB4AB5542DE83E50B51A402D27 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DisplayOptions(struct APlayerController* InteractingPlayer, SoftClassProperty WidgetClass); // Function ToyOptionsComponent.ToyOptionsComponent_C.DisplayOptions // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ToyOptionsComponent(int32_t EntryPoint); // Function ToyOptionsComponent.ToyOptionsComponent_C.ExecuteUbergraph_ToyOptionsComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

