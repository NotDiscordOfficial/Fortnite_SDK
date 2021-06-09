// WidgetBlueprintGeneratedClass AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C
// Size: 0xc80 (Inherited: 0xc40)
struct UAthenaMatchmakingPlayButton_C : UAthenaMatchmakingPlayButtonBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc40(0x08)
	struct UWidgetAnimation* Disabled; // 0xc48(0x08)
	struct UWidgetAnimation* PlayShine; // 0xc50(0x08)
	struct UWidgetAnimation* OnHovered; // 0xc58(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0xc60(0x08)
	struct UImage* Image_ButtonTop; // 0xc68(0x08)
	struct UImage* Image_Shadow; // 0xc70(0x08)
	struct UMatchmakingInputIndicator_C* MatchmakingInputIndicator; // 0xc78(0x08)

	void SetButtonText(struct FText InText); // Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaMatchmakingPlayButton(int32_t EntryPoint); // Function AthenaMatchmakingPlayButton.AthenaMatchmakingPlayButton_C.ExecuteUbergraph_AthenaMatchmakingPlayButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

