// WidgetBlueprintGeneratedClass BP_BannerEditorTile.BP_BannerEditorTile_C
// Size: 0xc80 (Inherited: 0xc30)
struct UBP_BannerEditorTile_C : UFortPlayerProfileBannerEditorTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc30(0x08)
	struct UImage* ColorImage; // 0xc38(0x08)
	struct UCommonWidgetSwitcherLegacy* CommonWidgetSwitcher_1; // 0xc40(0x08)
	struct UImage* IconImage; // 0xc48(0x08)
	struct UCommonLoadGuard* IconLoadGuard; // 0xc50(0x08)
	struct UImage* Image_BannerEditBorder; // 0xc58(0x08)
	struct UNormalBangWrapper_C* NormalBangWrapper; // 0xc60(0x08)
	struct UMaterialInstanceDynamic* ColorMID; // 0xc68(0x08)
	struct FMulticastInlineDelegate BannerTileBangUpdated; // 0xc70(0x10)

	void Mark Item As Seen(); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.Mark Item As Seen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Bang State(); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.Update Bang State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HandleBannerIconLoadGuardFinished(struct UObject* Object); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.HandleBannerIconLoadGuardFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnSelected(); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_BannerEditorTile(int32_t EntryPoint); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.ExecuteUbergraph_BP_BannerEditorTile // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void BannerTileBangUpdated__DelegateSignature(); // Function BP_BannerEditorTile.BP_BannerEditorTile_C.BannerTileBangUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

