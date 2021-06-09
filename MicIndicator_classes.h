// WidgetBlueprintGeneratedClass MicIndicator.MicIndicator_C
// Size: 0x2da (Inherited: 0x2b0)
struct UMicIndicator_C : UFortMicIndicatorWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UOverlay* 01-NotSpeaking; // 0x2b8(0x08)
	struct UOverlay* 02-Speaking; // 0x2c0(0x08)
	struct UOverlay* 03-Muted; // 0x2c8(0x08)
	struct UWidgetSwitcher* MicStateSwitcher; // 0x2d0(0x08)
	bool bIsMuted; // 0x2d8(0x01)
	bool bIsTalking; // 0x2d9(0x01)

	void OnPlayerTalkingChanged(bool bIsTalking); // Function MicIndicator.MicIndicator_C.OnPlayerTalkingChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayerMuted(bool bIsMuted); // Function MicIndicator.MicIndicator_C.OnPlayerMuted // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_MicIndicator(int32_t EntryPoint); // Function MicIndicator.MicIndicator_C.ExecuteUbergraph_MicIndicator // (Final|UbergraphFunction) // @ game+0xda7c34
};

