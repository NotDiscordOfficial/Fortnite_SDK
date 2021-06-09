// WidgetBlueprintGeneratedClass PlayerBannedModal.PlayerBannedModal_C
// Size: 0x582 (Inherited: 0x490)
struct UPlayerBannedModal_C : UFortPlayerBanned {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UTextBlock* BanMessage; // 0x498(0x08)
	struct UIconTextButton_C* CloseButton; // 0x4a0(0x08)
	struct UCommonTextBlock* disclaimer; // 0x4a8(0x08)
	struct UImage* Image_Severe; // 0x4b0(0x08)
	struct ULightbox_C* Lightbox; // 0x4b8(0x08)
	struct UTextBlock* TimeRemaining; // 0x4c0(0x08)
	struct UCommonTextBlock* Title; // 0x4c8(0x08)
	struct UImage* Triangles_2; // 0x4d0(0x08)
	struct UImage* Triangles_3; // 0x4d8(0x08)
	struct UImage* Triangles_4; // 0x4e0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_SeverityImage; // 0x4e8(0x08)
	bool AckSucceeded; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct FText BanInformation; // 0x4f8(0x18)
	struct FMulticastInlineDelegate OnCloseSucceeded; // 0x510(0x10)
	int32_t TryCount; // 0x520(0x04)
	bool bIsWarning; // 0x524(0x01)
	char pad_525[0x3]; // 0x525(0x03)
	struct FMcpBanInfo McpBanInfo; // 0x528(0x40)
	struct FText BanType; // 0x568(0x18)
	bool bIsCompetitiveBan; // 0x580(0x01)
	bool bIsTeamingWithCheaterBan; // 0x581(0x01)

	void HandleCloseAttempted(); // Function PlayerBannedModal.PlayerBannedModal_C.HandleCloseAttempted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RemoveModal(); // Function PlayerBannedModal.PlayerBannedModal_C.RemoveModal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FText BanEnumToText(enum class EPlayerBanReasons Index, struct FString ExploitProgramName, enum class EPlayerCompetitiveBanReasons Competitive Ban Reason, bool bIsCompetitiveBan); // Function PlayerBannedModal.PlayerBannedModal_C.BanEnumToText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBanAck(bool Success); // Function PlayerBannedModal.PlayerBannedModal_C.OnBanAck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateTimeRemaining(struct FText Time); // Function PlayerBannedModal.PlayerBannedModal_C.UpdateTimeRemaining // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DisableButton(bool DisableButton); // Function PlayerBannedModal.PlayerBannedModal_C.DisableButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateText(struct FText Title, struct FText Content); // Function PlayerBannedModal.PlayerBannedModal_C.UpdateText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function PlayerBannedModal.PlayerBannedModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function PlayerBannedModal.PlayerBannedModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayerBannedModal(int32_t EntryPoint); // Function PlayerBannedModal.PlayerBannedModal_C.ExecuteUbergraph_PlayerBannedModal // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnCloseSucceeded__DelegateSignature(); // Function PlayerBannedModal.PlayerBannedModal_C.OnCloseSucceeded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

