// WidgetBlueprintGeneratedClass WebPurchase.WebPurchase_C
// Size: 0x488 (Inherited: 0x468)
struct UWebPurchase_C : UFortWebPurchaseScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct UCircularThrobber* Throbber; // 0x470(0x08)
	struct FDataTableRowHandle BackAction; // 0x478(0x10)

	void HandleBack(bool bPassThrough); // Function WebPurchase.WebPurchase_C.HandleBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BindDelegates(); // Function WebPurchase.WebPurchase_C.BindDelegates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function WebPurchase.WebPurchase_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_WebPurchase(int32_t EntryPoint); // Function WebPurchase.WebPurchase_C.ExecuteUbergraph_WebPurchase // (Final|UbergraphFunction) // @ game+0xda7c34
};

