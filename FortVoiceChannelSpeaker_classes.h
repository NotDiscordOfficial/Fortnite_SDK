// WidgetBlueprintGeneratedClass FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C
// Size: 0x328 (Inherited: 0x308)
struct UFortVoiceChannelSpeaker_C : UFortVoiceChannelSpeakerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x308(0x08)
	struct UWidgetAnimation* AnimateVoice; // 0x310(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0x318(0x08)
	struct UHorizontalBox* Content; // 0x320(0x08)

	void OnStyleAssigned(enum class EChannelSpeakerStyle NewStyle); // Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.OnStyleAssigned // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnAnimateTalkingChanged(bool bIsNowTalking); // Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.OnAnimateTalkingChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FortVoiceChannelSpeaker(int32_t EntryPoint); // Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.ExecuteUbergraph_FortVoiceChannelSpeaker // (Final|UbergraphFunction) // @ game+0xda7c34
};

