// SolarisGeneratedClass VerseFortnite_hud_count_down_message_component.hud_count_down_message_component
// Size: 0x168 (Inherited: 0x128)
struct Uhud_count_down_message_component : UHUDCountDownComponentBase {
	char pad_128[0x20]; // 0x128(0x20)
	struct FDelegate __verse_0x09DD745C_Hide; // 0x148(0x10)
	struct FDelegate __verse_0xFD651BB8_SetCurrentRound; // 0x138(0x10)
	struct FDelegate __verse_0xB2E4C427_SetWidget; // 0x158(0x10)
	struct FDelegate __verse_0x8DFC355C_ShowCountDown; // 0x128(0x10)

	void ShowCountDown(int32_t __verse_0x2D912F7F_SecondsToCount); // Function VerseFortnite_hud_count_down_message_component.hud_count_down_message_component.ShowCountDown // (Native|Public|BlueprintCallable) // @ game+0x430ba00
	void SetWidget(struct FString __verse_0xDA518CA3_PathToAsset); // Function VerseFortnite_hud_count_down_message_component.hud_count_down_message_component.SetWidget // (Native|Public|BlueprintCallable) // @ game+0x430b970
	void SetCurrentRound(int32_t __verse_0xD4740F71_CurrentRound); // Function VerseFortnite_hud_count_down_message_component.hud_count_down_message_component.SetCurrentRound // (Native|Public|BlueprintCallable) // @ game+0x430b900
	void Hide(); // Function VerseFortnite_hud_count_down_message_component.hud_count_down_message_component.Hide // (Native|Public|BlueprintCallable) // @ game+0x430b84c
	void $InitCDO(); // Function VerseFortnite_hud_count_down_message_component.hud_count_down_message_component.$InitCDO // (None) // @ game+0xda7c34
};

