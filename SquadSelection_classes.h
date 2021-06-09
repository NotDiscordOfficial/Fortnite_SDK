// WidgetBlueprintGeneratedClass SquadSelection.SquadSelection_C
// Size: 0x3b8 (Inherited: 0x3a0)
struct USquadSelection_C : UFortSquadSelectionMenu {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a0(0x08)
	struct UCloseButton_C* Mobile_CloseButton; // 0x3a8(0x08)
	struct USafeZone* SafeZone_1; // 0x3b0(0x08)

	void OnLocalPlayerParticipationChanged(bool bIsParticipating); // Function SquadSelection.SquadSelection_C.OnLocalPlayerParticipationChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SquadSelection.SquadSelection_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SquadSelection(int32_t EntryPoint); // Function SquadSelection.SquadSelection_C.ExecuteUbergraph_SquadSelection // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

