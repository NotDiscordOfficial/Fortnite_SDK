// WidgetBlueprintGeneratedClass Cinematic-TeamMics.Cinematic-TeamMics_C
// Size: 0x4b0 (Inherited: 0x288)
struct UCinematic-TeamMics_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UMicIndicator_C* MicIndicator; // 0x290(0x08)
	struct UCommonWidgetSwitcherLegacy* SwitcherConnectingStranger; // 0x298(0x08)
	struct UCommonTextBlock* TextBlock_7; // 0x2a0(0x08)
	struct UCommonTextBlock* TextPlayerName; // 0x2a8(0x08)
	struct FFortTeamMemberInfo MemberInfo; // 0x2b0(0x200)

	void Update(struct FFortTeamMemberInfo UpdatedMemberInfo); // Function Cinematic-TeamMics.Cinematic-TeamMics_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function Cinematic-TeamMics.Cinematic-TeamMics_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Cinematic-TeamMics(int32_t EntryPoint); // Function Cinematic-TeamMics.Cinematic-TeamMics_C.ExecuteUbergraph_Cinematic-TeamMics // (Final|UbergraphFunction) // @ game+0xda7c34
};

