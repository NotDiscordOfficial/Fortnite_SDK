// BlueprintGeneratedClass FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C
// Size: 0x800 (Inherited: 0x7e0)
struct AFortnitePartyHeroSelect_Camera_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7e0(0x08)
	struct UCameraComponent* CameraActor_1; // 0x7e8(0x08)
	bool MouseDown; // 0x7f0(0x01)
	char pad_7F1[0x7]; // 0x7f1(0x07)
	struct AFortPlayerPawn* CachedPawn; // 0x7f8(0x08)

	void HandleMousePress(); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMousePress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleMouseRelease(); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMouseRelease // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4(struct FKey Key); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0xda7c34
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3(struct FKey Key); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0xda7c34
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(struct FKey Key); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0xda7c34
	void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1(struct FKey Key); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0xda7c34
	void OnActivated(struct AFortPlayerController* PlayerController); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.OnActivated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDeactivated(struct AFortPlayerController* PlayerController); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FortnitePartyHeroSelect_Camera(int32_t EntryPoint); // Function FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ExecuteUbergraph_FortnitePartyHeroSelect_Camera // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

