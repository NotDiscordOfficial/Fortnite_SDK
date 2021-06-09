// WidgetBlueprintGeneratedClass EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C
// Size: 0x518 (Inherited: 0x4b8)
struct UEventTeamMatchHistoryModal_C : UFortEventTeamMatchHistoryModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b8(0x08)
	struct UWidgetAnimation* Intro; // 0x4c0(0x08)
	struct UIconTextButton_C* CloseMainPanel; // 0x4c8(0x08)
	struct UCommonBorder* CommonBorder_1; // 0x4d0(0x08)
	struct UEventMatchHistoryTournamentInfo_C* EventMatchHistoryTournamentInfo; // 0x4d8(0x08)
	struct UImage* Image_Background; // 0x4e0(0x08)
	struct USafeZone* SafeZone_1; // 0x4e8(0x08)
	struct UWidgetSwitcher* Switcher_Content; // 0x4f0(0x08)
	struct UCommonTextBlock* Text_EventLabel; // 0x4f8(0x08)
	struct UCommonTextBlock* Text_TeamLabel; // 0x500(0x08)
	struct UCommonTextBlock* Text_WindowTittle; // 0x508(0x08)
	struct UVerticalBox* VerticalBox_2; // 0x510(0x08)

	void Set Up Match History Style(struct FFortTournamentDisplayInfo Tournament Display Info); // Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.Set Up Match History Style // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSetupMatchHistory(struct FString TournamentId, struct FString EventWindowId); // Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.OnSetupMatchHistory // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EventTeamMatchHistoryModal(int32_t EntryPoint); // Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.ExecuteUbergraph_EventTeamMatchHistoryModal // (Final|UbergraphFunction) // @ game+0xda7c34
};

