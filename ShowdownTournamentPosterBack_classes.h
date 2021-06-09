// WidgetBlueprintGeneratedClass ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C
// Size: 0x790 (Inherited: 0x6b8)
struct UShowdownTournamentPosterBack_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct UCommonTextBlock* CommonTextBlock_EventDates; // 0x6c0(0x08)
	struct UCommonTextBlock* CommonTextBlock_MetaDate; // 0x6c8(0x08)
	struct UCommonTextBlock* CommonTextBlock_MetaTitle; // 0x6d0(0x08)
	struct UCommonTextBlock* DateText; // 0x6d8(0x08)
	struct UCommonTextBlock* FlavorText; // 0x6e0(0x08)
	struct UImage* Image_FooterWatermark; // 0x6e8(0x08)
	struct UScaleBox* ScaleBoxTournamentTitle; // 0x6f0(0x08)
	struct UShowdownPin_C* ShowdownPin; // 0x6f8(0x08)
	struct USizeBox* SizeBox_Pin; // 0x700(0x08)
	struct UCommonTextBlock* TitleLine1; // 0x708(0x08)
	struct UCommonTextBlock* TitleLine2; // 0x710(0x08)
	struct UTournamentDateEntry_C* TournamentDateEntry; // 0x718(0x08)
	struct UTournamentDateEntry_C* TournamentDateEntry_C_1; // 0x720(0x08)
	struct UTournamentDateEntry_C* TournamentDateEntry_C_2; // 0x728(0x08)
	struct UTournamentDateEntry_C* TournamentDateEntry_C_3; // 0x730(0x08)
	struct UTournamentDateEntry_C* TournamentDateEntry_C_4; // 0x738(0x08)
	struct UTournamentDateEntry_C* TournamentDateEntry_C_5; // 0x740(0x08)
	struct UTournamentDateEntry_C* TournamentDateEntry_C_6; // 0x748(0x08)
	struct UTournamentDateEntry_C* TournamentDateEntry_C_7; // 0x750(0x08)
	struct UTournamentDateEntry_C* TournamentDateEntry_C_8; // 0x758(0x08)
	struct UTournamentDateEntry_C* TournamentDateEntry_C_9; // 0x760(0x08)
	struct UTournamentDateEntry_C* TournamentDateEntry_C_10; // 0x768(0x08)
	struct UTournamentDateEntry_C* TournamentDateEntry_C_11; // 0x770(0x08)
	struct UTournamentDateEntry_C* TournamentDateEntry_C_12; // 0x778(0x08)
	struct UTournamentDateEntry_C* TournamentDateEntry_C_13; // 0x780(0x08)
	struct UUniformGridPanel* UniformGridPanel_DateGrid; // 0x788(0x08)

	void GetTournamentDateText(struct FText TournamentDate); // Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.GetTournamentDateText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RefreshDataBP(); // Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void EventColorize(); // Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventPopulateEventWindowData(); // Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.EventPopulateEventWindowData // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ShowdownTournamentPosterBack(int32_t EntryPoint); // Function ShowdownTournamentPosterBack.ShowdownTournamentPosterBack_C.ExecuteUbergraph_ShowdownTournamentPosterBack // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

