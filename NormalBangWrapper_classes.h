// WidgetBlueprintGeneratedClass NormalBangWrapper.NormalBangWrapper_C
// Size: 0x33a (Inherited: 0x2a8)
struct UNormalBangWrapper_C : UFortBangWrapper_NUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a8(0x08)
	struct UWidgetAnimation* IntroSuperBang; // 0x2b0(0x08)
	struct UWidgetAnimation* Intro; // 0x2b8(0x08)
	struct UWidgetAnimation* TutorialGlow; // 0x2c0(0x08)
	struct USizeBox* BangBox; // 0x2c8(0x08)
	struct USizeBox* BigBang; // 0x2d0(0x08)
	struct USizeBox* BigBangCount; // 0x2d8(0x08)
	struct UCommonTextBlock* CommonTextBlock_1; // 0x2e0(0x08)
	struct UNamedSlot* Content; // 0x2e8(0x08)
	struct UCommonTextBlock* CountText; // 0x2f0(0x08)
	struct UWidgetSwitcher* ModeSwitcher; // 0x2f8(0x08)
	struct UImage* No-Count; // 0x300(0x08)
	struct UImage* No-Count-1; // 0x308(0x08)
	struct USizeBox* SmallBang; // 0x310(0x08)
	struct USizeBox* SmallBangCount; // 0x318(0x08)
	struct USizeBox* SuperBang; // 0x320(0x08)
	struct UCommonBorder* TutorialBorder; // 0x328(0x08)
	bool UseSmallVersion; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	int32_t Count; // 0x334(0x04)
	bool bUseSuperBangNoCount; // 0x338(0x01)
	bool ShouldSuppressBang; // 0x339(0x01)

	void SetShouldSuppressBang(bool ShouldSuppressBang); // Function NormalBangWrapper.NormalBangWrapper_C.SetShouldSuppressBang // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitialReset(); // Function NormalBangWrapper.NormalBangWrapper_C.InitialReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TriggerReset(); // Function NormalBangWrapper.NormalBangWrapper_C.TriggerReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TriggerIntro(); // Function NormalBangWrapper.NormalBangWrapper_C.TriggerIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Adjust Bang Image Translation(struct FVector2D Translation); // Function NormalBangWrapper.NormalBangWrapper_C.Adjust Bang Image Translation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Bang Icon Version(int32_t InCount); // Function NormalBangWrapper.NormalBangWrapper_C.Update Bang Icon Version // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTutorialBorderStyle(struct UCommonBorderStyle* BorderStyle); // Function NormalBangWrapper.NormalBangWrapper_C.SetTutorialBorderStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStopCallout(); // Function NormalBangWrapper.NormalBangWrapper_C.OnStopCallout // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnStartCallout(struct FName TutorialObjectiveName, enum class ETutorialType TutorialType); // Function NormalBangWrapper.NormalBangWrapper_C.OnStartCallout // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function NormalBangWrapper.NormalBangWrapper_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnBangStateChanged(bool bEnabled, int32_t Count); // Function NormalBangWrapper.NormalBangWrapper_C.OnBangStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_NormalBangWrapper(int32_t EntryPoint); // Function NormalBangWrapper.NormalBangWrapper_C.ExecuteUbergraph_NormalBangWrapper // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

