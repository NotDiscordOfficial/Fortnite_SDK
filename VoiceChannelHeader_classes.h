// WidgetBlueprintGeneratedClass VoiceChannelHeader.VoiceChannelHeader_C
// Size: 0x360 (Inherited: 0x350)
struct UVoiceChannelHeader_C : UFortVoiceChannelHeaderEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct UVerticalBox* VBox_ActiveChannelExtras; // 0x358(0x08)

	void PreConstruct(bool IsDesignTime); // Function VoiceChannelHeader.VoiceChannelHeader_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateVisuals(bool bIsActive, bool bIsListening); // Function VoiceChannelHeader.VoiceChannelHeader_C.OnUpdateVisuals // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_VoiceChannelHeader(int32_t EntryPoint); // Function VoiceChannelHeader.VoiceChannelHeader_C.ExecuteUbergraph_VoiceChannelHeader // (Final|UbergraphFunction) // @ game+0xda7c34
};

