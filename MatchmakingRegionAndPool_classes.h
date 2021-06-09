// WidgetBlueprintGeneratedClass MatchmakingRegionAndPool.MatchmakingRegionAndPool_C
// Size: 0x290 (Inherited: 0x268)
struct UMatchmakingRegionAndPool_C : UMatchmakingRegionAndPoolBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x268(0x08)
	struct UCommonTextBlock* ClassicModeText; // 0x270(0x08)
	struct UWidgetSwitcher* IBMSwitcher; // 0x278(0x08)
	struct UHorizontalBox* InputRegion; // 0x280(0x08)
	struct UCommonTextBlock* RegionText; // 0x288(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function MatchmakingRegionAndPool.MatchmakingRegionAndPool_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_MatchmakingRegionAndPool(int32_t EntryPoint); // Function MatchmakingRegionAndPool.MatchmakingRegionAndPool_C.ExecuteUbergraph_MatchmakingRegionAndPool // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

