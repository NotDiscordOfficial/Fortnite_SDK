// WidgetBlueprintGeneratedClass TournamentDateEntry.TournamentDateEntry_C
// Size: 0x710 (Inherited: 0x6b8)
struct UTournamentDateEntry_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct UCommonBorder* CommonBorder_DateContent; // 0x6c0(0x08)
	struct UCommonTextBlock* CommonTextBlock_Date; // 0x6c8(0x08)
	struct UCommonTextBlock* CommonTextBlock_Time; // 0x6d0(0x08)
	struct UCommonTextBlock* CommonTextBlock_Title; // 0x6d8(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_EntryType; // 0x6e0(0x08)
	struct UImage* Image_Strkethrough; // 0x6e8(0x08)
	bool isTitle; // 0x6f0(0x01)
	char pad_6F1[0x7]; // 0x6f1(0x07)
	struct FText Title; // 0x6f8(0x18)

	void PreConstruct(bool IsDesignTime); // Function TournamentDateEntry.TournamentDateEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void EventColor(struct FFortTournamentDisplayInfo showdownData); // Function TournamentDateEntry.TournamentDateEntry_C.EventColor // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RefreshDataBP(); // Function TournamentDateEntry.TournamentDateEntry_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_TournamentDateEntry(int32_t EntryPoint); // Function TournamentDateEntry.TournamentDateEntry_C.ExecuteUbergraph_TournamentDateEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

