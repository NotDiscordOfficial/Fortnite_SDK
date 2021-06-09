// WidgetBlueprintGeneratedClass FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C
// Size: 0x349 (Inherited: 0x2f8)
struct UFriendSubscriptionToastWidget_C : UFortFriendSubscriptionToastWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f8(0x08)
	struct UImage* NotificationImage; // 0x300(0x08)
	struct UCommonRichTextBlock* Text_Hold; // 0x308(0x08)
	struct FName M_Param_ColorA; // 0x310(0x08)
	struct FName M_Param_ColorB; // 0x318(0x08)
	struct FName M_Param_Progress; // 0x320(0x08)
	struct FLinearColor ColorB; // 0x328(0x10)
	struct FLinearColor ColorA; // 0x338(0x10)
	bool CollapseOnAnimationFinish; // 0x348(0x01)

	void Construct(); // Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Popup Animation Finished(); // Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.Popup Animation Finished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPlayOpenAnimation(); // Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.OnPlayOpenAnimation // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayCloseAnimation(); // Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.OnPlayCloseAnimation // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FriendSubscriptionToastWidget(int32_t EntryPoint); // Function FriendSubscriptionToastWidget.FriendSubscriptionToastWidget_C.ExecuteUbergraph_FriendSubscriptionToastWidget // (Final|UbergraphFunction) // @ game+0xda7c34
};

