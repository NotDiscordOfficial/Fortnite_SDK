// WidgetBlueprintGeneratedClass SubscriptionBulletPointWidget.SubscriptionBulletPointWidget_C
// Size: 0x2fa (Inherited: 0x2a8)
struct USubscriptionBulletPointWidget_C : UFortSubscriptionBulletPointWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UWidgetAnimation* Intro; // 0x2b0(0x08)
	struct UOverlay* Asterisk; // 0x2b8(0x08)
	struct UOverlay* CheckMark; // 0x2c0(0x08)
	struct UCommonVisibilitySwitcher* DisclaimerIndicatorSwitcher; // 0x2c8(0x08)
	struct UImage* Image_3; // 0x2d0(0x08)
	struct UImage* Image_4; // 0x2d8(0x08)
	struct UImage* Star_Bullet; // 0x2e0(0x08)
	struct UBorder* Text_Color; // 0x2e8(0x08)
	struct UBorder* Text_Details_Color; // 0x2f0(0x08)
	bool DelayShineSwipe; // 0x2f8(0x01)
	bool Highlighted; // 0x2f9(0x01)

	void SetIntroStartState(); // Function SubscriptionBulletPointWidget.SubscriptionBulletPointWidget_C.SetIntroStartState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetIntroEndState(); // Function SubscriptionBulletPointWidget.SubscriptionBulletPointWidget_C.SetIntroEndState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartIntroAnim(); // Function SubscriptionBulletPointWidget.SubscriptionBulletPointWidget_C.StartIntroAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetMaterialColors(); // Function SubscriptionBulletPointWidget.SubscriptionBulletPointWidget_C.SetMaterialColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBulletPointInfoSet(); // Function SubscriptionBulletPointWidget.SubscriptionBulletPointWidget_C.OnBulletPointInfoSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SubscriptionBulletPointWidget(int32_t EntryPoint); // Function SubscriptionBulletPointWidget.SubscriptionBulletPointWidget_C.ExecuteUbergraph_SubscriptionBulletPointWidget // (Final|UbergraphFunction) // @ game+0xda7c34
};

