// WidgetBlueprintGeneratedClass AthenaBannerSelectModal.AthenaBannerSelectModal_C
// Size: 0x4c8 (Inherited: 0x490)
struct UAthenaBannerSelectModal_C : UFortBannerSelectModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UCommonBorder* BorderTouch; // 0x498(0x08)
	struct UBP_LocalPlayerBannerEditor_C* BP_LocalPlayerBannerEditor; // 0x4a0(0x08)
	struct ULightbox_C* Lightbox; // 0x4a8(0x08)
	struct UScaleBox* ScaleBox_Banner; // 0x4b0(0x08)
	struct FDataTableRowHandle CloseAction; // 0x4b8(0x10)

	struct FEventReply On_BorderTouch_MouseButtonDown_1(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.On_BorderTouch_MouseButtonDown_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Setup Input Action Handlers(); // Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Setup Input Action Handlers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleCloseAction(bool PassThrough); // Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.HandleCloseAction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature(struct FName IconId, struct FName ColorId); // Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeactivated(); // Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Close(); // Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaBannerSelectModal(int32_t EntryPoint); // Function AthenaBannerSelectModal.AthenaBannerSelectModal_C.ExecuteUbergraph_AthenaBannerSelectModal // (Final|UbergraphFunction) // @ game+0xda7c34
};

