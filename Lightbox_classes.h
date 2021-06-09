// WidgetBlueprintGeneratedClass Lightbox.Lightbox_C
// Size: 0x318 (Inherited: 0x288)
struct ULightbox_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* FadeOut; // 0x290(0x08)
	struct UWidgetAnimation* FadeIn; // 0x298(0x08)
	struct UBorder* Border_Darken; // 0x2a0(0x08)
	struct UButton* ClickCatcher; // 0x2a8(0x08)
	struct UNamedSlot* Content; // 0x2b0(0x08)
	struct UBorder* Dimmer; // 0x2b8(0x08)
	struct USafeZone* SafeZone_1; // 0x2c0(0x08)
	struct UCommonVisibilityWidgetLegacy* WindowButtons; // 0x2c8(0x08)
	struct UOverlay* WindowsOverlay; // 0x2d0(0x08)
	struct Uwindowchromebuttons_C* WindowTitleBar; // 0x2d8(0x08)
	struct FMulticastInlineDelegate IntroEnded; // 0x2e0(0x10)
	struct FMulticastInlineDelegate OutroEnded; // 0x2f0(0x10)
	bool ShowWindowControlButtons; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	float DimAmount; // 0x304(0x04)
	struct FLinearColor BackgroundColor; // 0x308(0x10)

	void RemoveContent(); // Function Lightbox.Lightbox_C.RemoveContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AddContent(struct UCommonUserWidget* Content); // Function Lightbox.Lightbox_C.AddContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Outro(); // Function Lightbox.Lightbox_C.Outro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Intro(); // Function Lightbox.Lightbox_C.Intro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function Lightbox.Lightbox_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function Lightbox.Lightbox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function Lightbox.Lightbox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1(); // Function Lightbox.Lightbox_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0xda7c34
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2(); // Function Lightbox.Lightbox_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Lightbox(int32_t EntryPoint); // Function Lightbox.Lightbox_C.ExecuteUbergraph_Lightbox // (Final|UbergraphFunction) // @ game+0xda7c34
	void OutroEnded__DelegateSignature(); // Function Lightbox.Lightbox_C.OutroEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void IntroEnded__DelegateSignature(); // Function Lightbox.Lightbox_C.IntroEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

