// WidgetBlueprintGeneratedClass SidekickOverlay.SidekickOverlay_C
// Size: 0x3f0 (Inherited: 0x3e0)
struct USidekickOverlay_C : USidekickOverlay {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* Image_236; // 0x3e8(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function SidekickOverlay.SidekickOverlay_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnInitialized(); // Function SidekickOverlay.SidekickOverlay_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SidekickOverlay(int32_t EntryPoint); // Function SidekickOverlay.SidekickOverlay_C.ExecuteUbergraph_SidekickOverlay // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

