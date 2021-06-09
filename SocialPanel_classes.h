// WidgetBlueprintGeneratedClass SocialPanel.SocialPanel_C
// Size: 0x4f8 (Inherited: 0x4c8)
struct USocialPanel_C : UFortSocialPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c8(0x08)
	struct UWidgetAnimation* OnOpened; // 0x4d0(0x08)
	struct UImage* Image_Back; // 0x4d8(0x08)
	struct ULightbox_C* Lightbox; // 0x4e0(0x08)
	struct USafeZone* SafeZone_1; // 0x4e8(0x08)
	struct USocialPanel_TopBarExtension_C* SocialPanel_TopBarExtension; // 0x4f0(0x08)

	void Play Panel Animation Sound(); // Function SocialPanel.SocialPanel_C.Play Panel Animation Sound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ClosePanelAfterAnimation(); // Function SocialPanel.SocialPanel_C.ClosePanelAfterAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FEventReply OnMouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function SocialPanel.SocialPanel_C.OnMouseButtonDown_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function SocialPanel.SocialPanel_C.BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ClosePanel(); // Function SocialPanel.SocialPanel_C.ClosePanel // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleOutroEnded(); // Function SocialPanel.SocialPanel_C.HandleOutroEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBeginOutro(); // Function SocialPanel.SocialPanel_C.OnBeginOutro // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnBeginIntro(); // Function SocialPanel.SocialPanel_C.OnBeginIntro // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleIntroEnded(); // Function SocialPanel.SocialPanel_C.HandleIntroEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function SocialPanel.SocialPanel_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SocialPanel(int32_t EntryPoint); // Function SocialPanel.SocialPanel_C.ExecuteUbergraph_SocialPanel // (Final|UbergraphFunction) // @ game+0xda7c34
};

