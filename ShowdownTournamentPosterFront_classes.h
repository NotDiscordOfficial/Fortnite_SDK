// WidgetBlueprintGeneratedClass ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C
// Size: 0x7c1 (Inherited: 0x6b8)
struct UShowdownTournamentPosterFront_C : UFortShowdownDetailView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6b8(0x08)
	struct UBorder* Border_Alert; // 0x6c0(0x08)
	struct UImage* Image_LockIcon; // 0x6c8(0x08)
	struct UImage* Image_LockIconWorldCup; // 0x6d0(0x08)
	struct UImage* Image_PosterShadow; // 0x6d8(0x08)
	struct UInvalidationBox* InvalidationBox_319; // 0x6e0(0x08)
	struct UInvalidationBox* InvalidationBox_432; // 0x6e8(0x08)
	struct UInvalidationBox* InvalidationBox_552; // 0x6f0(0x08)
	struct UInvalidationBox* InvalidationBox_677; // 0x6f8(0x08)
	struct UOverlay* OverlayEventLocked; // 0x700(0x08)
	struct UOverlay* OverlayEventLockedWorldCup; // 0x708(0x08)
	struct UShowdownPin_C* ShowdownPin; // 0x710(0x08)
	struct UVerticalBox* StandardLayout; // 0x718(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_PosterTextLayout; // 0x720(0x08)
	struct UCommonTextBlock* Text_EventAlert; // 0x728(0x08)
	struct UCommonTextBlock* TournamentDateText; // 0x730(0x08)
	struct UCommonTextBlock* TournamentDateTextWorldCup; // 0x738(0x08)
	struct UCommonTextBlock* TournamentTitle1; // 0x740(0x08)
	struct UCommonTextBlock* TournamentTitle1WorldCup; // 0x748(0x08)
	struct UCommonTextBlock* TournamentTitle2; // 0x750(0x08)
	struct UCommonTextBlock* TournamentTitle2WorldCup; // 0x758(0x08)
	struct UVerticalBox* WorldCupLayout; // 0x760(0x08)
	struct FSlateColor TitleColor; // 0x768(0x28)
	bool HiddenWhileLoading; // 0x790(0x01)
	char pad_791[0x7]; // 0x791(0x07)
	struct FSlateColor SubColor; // 0x798(0x28)
	bool HidePin; // 0x7c0(0x01)

	void GetTournamentDateText(struct FText TournamentDate); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.GetTournamentDateText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RefreshDataBP(); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.RefreshDataBP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature(); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.BndEvt__Image_PosterFront_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ShowdownTournamentPosterFront(int32_t EntryPoint); // Function ShowdownTournamentPosterFront.ShowdownTournamentPosterFront_C.ExecuteUbergraph_ShowdownTournamentPosterFront // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

