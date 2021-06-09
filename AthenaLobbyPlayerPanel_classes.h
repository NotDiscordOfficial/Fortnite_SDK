// WidgetBlueprintGeneratedClass AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C
// Size: 0x7b0 (Inherited: 0x528)
struct UAthenaLobbyPlayerPanel_C : UAthenaLobbyPlayerPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UHorizontalBox* BattlePassRow; // 0x530(0x08)
	struct UBorder* Border_1; // 0x538(0x08)
	struct FFortTeamMemberInfo TeamMemberInfo; // 0x540(0x200)
	struct FMulticastInlineDelegate OnGadgetsClicked; // 0x740(0x10)
	struct FText AddFriendText; // 0x750(0x18)
	struct FText AcceptInviteText; // 0x768(0x18)
	struct FText SentInviteText; // 0x780(0x18)
	struct FText AcceptedInviteText; // 0x798(0x18)

	struct FEventReply OnMouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnMouseButtonDown_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnHasBattlePassUpdated(bool bHasBattlePass); // Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnHasBattlePassUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnFriendStatusUpdated(enum class EFortFriendRequestStatus FriendRequestStatus); // Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnFriendStatusUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnIsMutedUpdated(bool bIsMuted); // Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnIsMutedUpdated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaLobbyPlayerPanel(int32_t EntryPoint); // Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.ExecuteUbergraph_AthenaLobbyPlayerPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnGadgetsClicked__DelegateSignature(); // Function AthenaLobbyPlayerPanel.AthenaLobbyPlayerPanel_C.OnGadgetsClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

