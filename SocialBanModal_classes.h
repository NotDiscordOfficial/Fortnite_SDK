// WidgetBlueprintGeneratedClass SocialBanModal.SocialBanModal_C
// Size: 0x4f0 (Inherited: 0x468)
struct USocialBanModal_C : UFortSocialBanModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UCommonTextBlock* disclaimer; // 0x470(0x08)
	struct UCommonTextBlock* disclaimer_2; // 0x478(0x08)
	struct UCommonTextBlock* disclaimer_3; // 0x480(0x08)
	struct UImage* Image_Severe; // 0x488(0x08)
	struct ULightbox_C* Lightbox_52; // 0x490(0x08)
	struct UCommonWidgetSwitcherLegacy* Switcher_Message; // 0x498(0x08)
	struct UCommonTextBlock* Title; // 0x4a0(0x08)
	struct UCommonTextBlock* Title_2; // 0x4a8(0x08)
	struct UImage* Triangles_2; // 0x4b0(0x08)
	struct UImage* Triangles_3; // 0x4b8(0x08)
	struct UImage* Triangles_4; // 0x4c0(0x08)
	struct UVerticalBox* VBox_Banned; // 0x4c8(0x08)
	struct UVerticalBox* VBox_Warned; // 0x4d0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_SeverityImage; // 0x4d8(0x08)
	struct FMulticastInlineDelegate OnCloseSucceeded; // 0x4e0(0x10)

	void OnDisplayModeSet(bool bIsBanned); // Function SocialBanModal.SocialBanModal_C.OnDisplayModeSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SocialBanModal(int32_t EntryPoint); // Function SocialBanModal.SocialBanModal_C.ExecuteUbergraph_SocialBanModal // (Final|UbergraphFunction) // @ game+0xda7c34
	void OnCloseSucceeded__DelegateSignature(); // Function SocialBanModal.SocialBanModal_C.OnCloseSucceeded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

