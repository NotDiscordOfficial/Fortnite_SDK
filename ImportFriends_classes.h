// WidgetBlueprintGeneratedClass ImportFriends.ImportFriends_C
// Size: 0x658 (Inherited: 0x500)
struct UImportFriends_C : UFortSocialImportPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x500(0x08)
	struct UWidgetAnimation* Intro_V2; // 0x508(0x08)
	struct UWidgetAnimation* ArrowPulse; // 0x510(0x08)
	struct UWidgetAnimation* Intro; // 0x518(0x08)
	struct UCommonTextBlock* AddFriendsDescription; // 0x520(0x08)
	struct UCommonTextBlock* CommonTextBlock_1; // 0x528(0x08)
	struct UCommonTextBlock* CT_AddFriendsDescription; // 0x530(0x08)
	struct UCommonTextBlock* CT_ChangeInSettingsText; // 0x538(0x08)
	struct UCommonTextBlock* CT_LimitedTimeHeader; // 0x540(0x08)
	struct UCommonTextBlock* CT_TakenToLauncher; // 0x548(0x08)
	struct UImage* Image_2; // 0x550(0x08)
	struct UItemInfoWidget_C* ItemInfoWidget; // 0x558(0x08)
	struct USafeZone* SafeZone_1; // 0x560(0x08)
	struct UScaleBox* SBox_AddFriendButtonScaleBox; // 0x568(0x08)
	struct UScaleBox* ScaleBoxDescription; // 0x570(0x08)
	struct UScaleBox* ScaleBoxHeader; // 0x578(0x08)
	struct UFortItemDefinition* PreviewItemDef; // 0x580(0x08)
	float HeartbeatDelayIntroAnimation; // 0x588(0x04)
	bool bHasReward; // 0x58c(0x01)
	char pad_58D[0x3]; // 0x58d(0x03)
	struct FText FacebookHeader; // 0x590(0x18)
	struct FText VKHeader; // 0x5a8(0x18)
	struct FText SteamHeader; // 0x5c0(0x18)
	struct FText PlaystationHeader; // 0x5d8(0x18)
	struct FText XboxHeader; // 0x5f0(0x18)
	enum class ESocialImportPanelPlatform SocialPlatform; // 0x608(0x01)
	char pad_609[0x3]; // 0x609(0x03)
	int32_t WrapHeaderAt; // 0x60c(0x04)
	struct FText XboxDescriptionText; // 0x610(0x18)
	struct FText PSNDescriptionText; // 0x628(0x18)
	struct FText SwitchDescriptionText; // 0x640(0x18)

	void ScaleTextButton(int32_t CharThreshold, struct UScaleBox* ContainingScaleBox, struct UIconTextButton_C* Button); // Function ImportFriends.ImportFriends_C.ScaleTextButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ScaleTextboxWithWrappingWorkaround(struct UScaleBox* ContainingScaleBox, int32_t CharLimitThreshold, struct UCommonTextBlock* TargetText, int32_t WrapAtHorrizontal); // Function ImportFriends.ImportFriends_C.ScaleTextboxWithWrappingWorkaround // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleHeaderText(); // Function ImportFriends.ImportFriends_C.HandleHeaderText // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleDescriptionText(); // Function ImportFriends.ImportFriends_C.HandleDescriptionText // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function ImportFriends.ImportFriends_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPanelTypeSet(enum class ESocialImportPanelType NewType); // Function ImportFriends.ImportFriends_C.OnPanelTypeSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnIncentivizedSet(bool bIncentivized); // Function ImportFriends.ImportFriends_C.OnIncentivizedSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ImportFriends.ImportFriends_C.BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function ImportFriends.ImportFriends_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ImportFriends(int32_t EntryPoint); // Function ImportFriends.ImportFriends_C.ExecuteUbergraph_ImportFriends // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

