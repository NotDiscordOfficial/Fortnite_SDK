// WidgetBlueprintGeneratedClass BundleItemMiniCardWidget.BundleItemMiniCardWidget_C
// Size: 0x298 (Inherited: 0x270)
struct UBundleItemMiniCardWidget_C : UFortUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UWidgetAnimation* Show; // 0x278(0x08)
	struct UFortCosmeticItemCard_C* ItemCard; // 0x280(0x08)
	struct USoundBase* SoundOnItemCardShow; // 0x288(0x08)
	struct UFortItem* Fort Item; // 0x290(0x08)

	struct UObject* GetListItemObject(); // Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.GetListItemObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void Play Anim - Show(); // Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.Play Anim - Show // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BundleItemMiniCardWidget(int32_t EntryPoint); // Function BundleItemMiniCardWidget.BundleItemMiniCardWidget_C.ExecuteUbergraph_BundleItemMiniCardWidget // (Final|UbergraphFunction) // @ game+0xda7c34
};

