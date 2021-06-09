// WidgetBlueprintGeneratedClass PlayedBeforeSelect.PlayedBeforeSelect_C
// Size: 0x300 (Inherited: 0x2c0)
struct UPlayedBeforeSelect_C : UFortPlayedBeforeSelect {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* Intro; // 0x2c8(0x08)
	struct UCommonTextBlock* CommonTextBlock_2; // 0x2d0(0x08)
	struct UCommonTextBlock* CommonTextBlock_7; // 0x2d8(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_InviteOnly; // 0x2e0(0x08)
	struct UInviteEventTitle_C* InviteEventTitle; // 0x2e8(0x08)
	struct UWidgetSwitcher* LoginType_Switcher; // 0x2f0(0x08)
	struct USignInWidget_C* SignInWidget; // 0x2f8(0x08)

	void OnActivated_2(); // Function PlayedBeforeSelect.PlayedBeforeSelect_C.OnActivated_2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayedBeforeSelect(int32_t EntryPoint); // Function PlayedBeforeSelect.PlayedBeforeSelect_C.ExecuteUbergraph_PlayedBeforeSelect // (Final|UbergraphFunction) // @ game+0xda7c34
};

