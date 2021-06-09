// WidgetBlueprintGeneratedClass CosmeticLoadoutSelector.CosmeticLoadoutSelector_C
// Size: 0x2d0 (Inherited: 0x2b0)
struct UCosmeticLoadoutSelector_C : UFortCosmeticLoadoutSelector {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b0(0x08)
	struct UBorder* Background; // 0x2b8(0x08)
	struct UCommonActionWidget* Left_InputActionDisplay; // 0x2c0(0x08)
	struct UCommonActionWidget* Right_InputActionDisplay; // 0x2c8(0x08)

	void OnLoadoutSet(int32_t Selection); // Function CosmeticLoadoutSelector.CosmeticLoadoutSelector_C.OnLoadoutSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnNumLoadoutsFound(int32_t NumLoadouts); // Function CosmeticLoadoutSelector.CosmeticLoadoutSelector_C.OnNumLoadoutsFound // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_CosmeticLoadoutSelector(int32_t EntryPoint); // Function CosmeticLoadoutSelector.CosmeticLoadoutSelector_C.ExecuteUbergraph_CosmeticLoadoutSelector // (Final|UbergraphFunction) // @ game+0xda7c34
};

