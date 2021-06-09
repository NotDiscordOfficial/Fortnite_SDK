// WidgetBlueprintGeneratedClass SidekickInstance.SidekickInstance_C
// Size: 0x3b4 (Inherited: 0x360)
struct USidekickInstance_C : USidekickDisplayWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x360(0x08)
	struct UImage* AvatarRoundedCorners; // 0x368(0x08)
	struct UImage* Background; // 0x370(0x08)
	struct UCommonTextBlock* BackgroundedText; // 0x378(0x08)
	struct UOverlay* BackgroundOverlay; // 0x380(0x08)
	struct UWidgetSwitcher* BackgroundSwitcher; // 0x388(0x08)
	struct UBorder* BorderMuteStatus; // 0x390(0x08)
	struct UBorder* BorderVideoStatus; // 0x398(0x08)
	struct UBorder* TalkingBorder; // 0x3a0(0x08)
	struct UImage* VideoStatus; // 0x3a8(0x08)
	enum class ESidekickVoiceChatVideoStatus CachedVideoStatus; // 0x3b0(0x01)
	bool CachedVideoPaused; // 0x3b1(0x01)
	bool CachedVideoEnabled; // 0x3b2(0x01)
	enum class ESlateVisibility BackgroundedVisibility; // 0x3b3(0x01)

	void OnAudioStatus(enum class ESidekickVoiceChatAudioStatus AudioStatus); // Function SidekickInstance.SidekickInstance_C.OnAudioStatus // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnVideoStatus(enum class ESidekickVoiceChatVideoStatus VideoStatus); // Function SidekickInstance.SidekickInstance_C.OnVideoStatus // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTalkingStatus(bool bTalking); // Function SidekickInstance.SidekickInstance_C.OnTalkingStatus // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnVideoPaused(bool bPaused); // Function SidekickInstance.SidekickInstance_C.OnVideoPaused // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SidekickInstance(int32_t EntryPoint); // Function SidekickInstance.SidekickInstance_C.ExecuteUbergraph_SidekickInstance // (Final|UbergraphFunction) // @ game+0xda7c34
};

