// WidgetBlueprintGeneratedClass CareerScreen.CareerScreen_C
// Size: 0x511 (Inherited: 0x4d0)
struct UCareerScreen_C : UAthenaCareerScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	struct UWidgetSwitcher* FeatDisplaySwitcher; // 0x4d8(0x08)
	struct UImage* GradOvr; // 0x4e0(0x08)
	struct UCommonRichTextBlock* NoAchievementMessage; // 0x4e8(0x08)
	struct UCommonTextBlock* SeasonHeadingTextLabel; // 0x4f0(0x08)
	struct UWidgetSwitcher* Switcher; // 0x4f8(0x08)
	struct FDataTableRowHandle Input_ReplayCinematic; // 0x500(0x10)
	bool AutoPlayVideo; // 0x510(0x01)

	void ReplayCinematic(bool PassThrough); // Function CareerScreen.CareerScreen_C.ReplayCinematic // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayCinematic(); // Function CareerScreen.CareerScreen_C.PlayCinematic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowFeats(bool bHasCompletedFeats); // Function CareerScreen.CareerScreen_C.ShowFeats // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function CareerScreen.CareerScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInitialized(); // Function CareerScreen.CareerScreen_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_CareerScreen(int32_t EntryPoint); // Function CareerScreen.CareerScreen_C.ExecuteUbergraph_CareerScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

