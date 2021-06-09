// WidgetBlueprintGeneratedClass TeamMemberBanner.TeamMemberBanner_C
// Size: 0xca0 (Inherited: 0xc60)
struct UTeamMemberBanner_C : UFortCampaignTeamMemberBanner {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc60(0x08)
	struct UIconTextButton_C* ButtonPartyFinder; // 0xc68(0x08)
	struct UOverlay* Connected; // 0xc70(0x08)
	struct USizeBox* Connecting; // 0xc78(0x08)
	struct UImage* Image_572; // 0xc80(0x08)
	struct UOverlay* Open; // 0xc88(0x08)
	struct UImage* OpenImage; // 0xc90(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_MemberState; // 0xc98(0x08)

	void OpenPartyFinder(); // Function TeamMemberBanner.TeamMemberBanner_C.OpenPartyFinder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleMouseHoverVisualState(bool Hover); // Function TeamMemberBanner.TeamMemberBanner_C.HandleMouseHoverVisualState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnTeamMemberConnectionStateChanged(enum class EFortMemberConnectionState NewConnectionState); // Function TeamMemberBanner.TeamMemberBanner_C.OnTeamMemberConnectionStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_TeamMemberBanner(int32_t EntryPoint); // Function TeamMemberBanner.TeamMemberBanner_C.ExecuteUbergraph_TeamMemberBanner // (Final|UbergraphFunction) // @ game+0xda7c34
};

