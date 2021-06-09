// BlueprintGeneratedClass HeroesCamera_Blueprint.HeroesCamera_Blueprint_C
// Size: 0x7f8 (Inherited: 0x7e0)
struct AHeroesCamera_Blueprint_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7e0(0x08)
	bool MouseDown; // 0x7e8(0x01)
	char pad_7E9[0x7]; // 0x7e9(0x07)
	struct AFortPlayerPawn* Cached Pawn; // 0x7f0(0x08)

	void HandleMousePress(); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.HandleMousePress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleMouseRelease(); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.HandleMouseRelease // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4(struct FKey Key); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0xda7c34
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(struct FKey Key); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0xda7c34
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(struct FKey Key); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0xda7c34
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(struct FKey Key); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0xda7c34
	void OnActivated(struct AFortPlayerController* PlayerController); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.OnActivated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDeactivated(struct AFortPlayerController* PlayerController); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_HeroesCamera_Blueprint(int32_t EntryPoint); // Function HeroesCamera_Blueprint.HeroesCamera_Blueprint_C.ExecuteUbergraph_HeroesCamera_Blueprint // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

