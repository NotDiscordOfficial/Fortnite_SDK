// WidgetBlueprintGeneratedClass SocialButton.SocialButton_C
// Size: 0xcb0 (Inherited: 0xc40)
struct USocialButton_C : UFortSocialButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc40(0x08)
	struct UWidgetAnimation* Indentifier_Outro; // 0xc48(0x08)
	struct UWidgetAnimation* Indentifier_Intro; // 0xc50(0x08)
	struct UWidgetAnimation* Hover_Grow; // 0xc58(0x08)
	struct UWidgetAnimation* Hover_Bounce; // 0xc60(0x08)
	struct UWidgetAnimation* Hover; // 0xc68(0x08)
	struct UFortPlayerBanner* Banner_MemberBanner; // 0xc70(0x08)
	struct UImage* ButtonBacking; // 0xc78(0x08)
	struct UBorder* IconColor; // 0xc80(0x08)
	struct UFortMobileImage* Image_FriendIcon; // 0xc88(0x08)
	struct UImage* Image_LeaderIcon; // 0xc90(0x08)
	struct UBorder* NumFriendsColor; // 0xc98(0x08)
	struct UImage* PlayerIdentifier_Bkg; // 0xca0(0x08)
	struct USizeBox* VariableSize; // 0xca8(0x08)

	void Construct(); // Function SocialButton.SocialButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function SocialButton.SocialButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function SocialButton.SocialButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SocialButton(int32_t EntryPoint); // Function SocialButton.SocialButton_C.ExecuteUbergraph_SocialButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

