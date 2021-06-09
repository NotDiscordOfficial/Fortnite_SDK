// SolarisGeneratedClass VUI_vui_player_controller.vui_player_controller
// Size: 0x58 (Inherited: 0x28)
struct Uvui_player_controller : UObject {
	char pad_28[0x20]; // 0x28(0x20)
	struct Uvui_base* __verse_0x27BDA72C_PossessedObject; // 0x48(0x08)
	struct FDelegate __verse_0x7F7D2EB0_Possess; // 0x28(0x10)
	struct FDelegate __verse_0x52355DF6_Unpossess; // 0x38(0x10)

	void UnPossess(); // Function VUI_vui_player_controller.vui_player_controller.UnPossess // (Native|Public|BlueprintCallable) // @ game+0x43474d8
	void Possess(struct Uvui_base* __verse_0x4F5E77FF_Obj); // Function VUI_vui_player_controller.vui_player_controller.Possess // (Native|Public|BlueprintCallable) // @ game+0x4347410
	void $InitCDO(); // Function VUI_vui_player_controller.vui_player_controller.$InitCDO // (None) // @ game+0xda7c34
};

