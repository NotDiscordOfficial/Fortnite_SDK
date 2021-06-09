// WidgetBlueprintGeneratedClass ItemShopScreen.ItemShopScreen_C
// Size: 0x638 (Inherited: 0x608)
struct UItemShopScreen_C : UAthenaItemShopScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x608(0x08)
	struct UCommonBorder* NoOffersBox; // 0x610(0x08)
	struct UImage* ProgressSpinner; // 0x618(0x08)
	struct USafeZone* SafeZone_5; // 0x620(0x08)
	struct UWidgetSwitcher* Switcher_Sections; // 0x628(0x08)
	struct UVerticalBox* VerticalBox_Sections; // 0x630(0x08)

	void Construct(); // Function ItemShopScreen.ItemShopScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnSectionsEstablished(bool bEmpty); // Function ItemShopScreen.ItemShopScreen_C.OnSectionsEstablished // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnEstablishingSections(); // Function ItemShopScreen.ItemShopScreen_C.OnEstablishingSections // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemShopScreen(int32_t EntryPoint); // Function ItemShopScreen.ItemShopScreen_C.ExecuteUbergraph_ItemShopScreen // (Final|UbergraphFunction) // @ game+0xda7c34
};

