// WidgetBlueprintGeneratedClass ArenaPersonalView.ArenaPersonalView_C
// Size: 0x728 (Inherited: 0x6f8)
struct UArenaPersonalView_C : UFortArenaPersonalDivisionView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f8(0x08)
	struct UCommonBorder* CommonBorder_ContainerBG; // 0x700(0x08)
	struct UCommonTextBlock* FunTitle; // 0x708(0x08)
	struct UHorizontalBox* HorizontalBox_DivisionProgress; // 0x710(0x08)
	struct UHorizontalBox* HorizontalBoxHype; // 0x718(0x08)
	struct UImage* Image_5; // 0x720(0x08)

	void Colorize(struct FFortTournamentDisplayInfo Color Info); // Function ArenaPersonalView.ArenaPersonalView_C.Colorize // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ArenaPersonalView(int32_t EntryPoint); // Function ArenaPersonalView.ArenaPersonalView_C.ExecuteUbergraph_ArenaPersonalView // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

