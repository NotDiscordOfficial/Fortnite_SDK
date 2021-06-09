// WidgetBlueprintGeneratedClass HousepartyMicToast.HousepartyMicToast_C
// Size: 0x2f9 (Inherited: 0x298)
struct UHousepartyMicToast_C : UFortToastWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UWidgetAnimation* Anim_SimplePopup; // 0x2a0(0x08)
	struct UImage* NotificationImage; // 0x2a8(0x08)
	struct UCommonTextBlock* Text_Description; // 0x2b0(0x08)
	struct UCommonTextBlock* Text_Title; // 0x2b8(0x08)
	struct FName M_Param_ColorA; // 0x2c0(0x08)
	struct FName M_Param_ColorB; // 0x2c8(0x08)
	struct FName M_Param_Progress; // 0x2d0(0x08)
	struct FLinearColor ColorB; // 0x2d8(0x10)
	struct FLinearColor ColorA; // 0x2e8(0x10)
	bool CollapseOnAnimationFinish; // 0x2f8(0x01)

	void PreConstruct(bool IsDesignTime); // Function HousepartyMicToast.HousepartyMicToast_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function HousepartyMicToast.HousepartyMicToast_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Popup Animation Finished(); // Function HousepartyMicToast.HousepartyMicToast_C.Popup Animation Finished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPlayOpenAnimation(); // Function HousepartyMicToast.HousepartyMicToast_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayCloseAnimation(); // Function HousepartyMicToast.HousepartyMicToast_C.OnPlayCloseAnimation // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSetToast(struct UFortUINotification* ToastNotification); // Function HousepartyMicToast.HousepartyMicToast_C.OnSetToast // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_HousepartyMicToast(int32_t EntryPoint); // Function HousepartyMicToast.HousepartyMicToast_C.ExecuteUbergraph_HousepartyMicToast // (Final|UbergraphFunction) // @ game+0xda7c34
};

