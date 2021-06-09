// WidgetBlueprintGeneratedClass LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C
// Size: 0xc68 (Inherited: 0xc28)
struct ULiveStreamMenuButtonToggle_C : ULiveStreamMenuToggleButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc28(0x08)
	struct UWidgetAnimation* Hover; // 0xc30(0x08)
	struct UImage* Art; // 0xc38(0x08)
	struct UImage* ButtonBacking; // 0xc40(0x08)
	struct UCommonTextBlock* ButtonText; // 0xc48(0x08)
	struct UOverlay* IconBox; // 0xc50(0x08)
	struct ULiveViolator_C* LiveViolator; // 0xc58(0x08)
	struct UImage* Spikes_2; // 0xc60(0x08)

	void RefreshButton(bool IsLiveStreamEnabled); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.RefreshButton // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_LiveStreamMenuButtonToggle(int32_t EntryPoint); // Function LiveStreamMenuButtonToggle.LiveStreamMenuButtonToggle_C.ExecuteUbergraph_LiveStreamMenuButtonToggle // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

