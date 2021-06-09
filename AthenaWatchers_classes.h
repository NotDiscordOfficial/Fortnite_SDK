// WidgetBlueprintGeneratedClass AthenaWatchers.AthenaWatchers_C
// Size: 0x2f0 (Inherited: 0x2d8)
struct UAthenaWatchers_C : UAthenaWatchers {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UWidgetAnimation* OnValueChanged; // 0x2e0(0x08)
	struct UAthenaWatcherEye_C* AthenaWatcherEye; // 0x2e8(0x08)

	void SpectatorsBegan(bool bBigGroup); // Function AthenaWatchers.AthenaWatchers_C.SpectatorsBegan // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SpectatorsAdded(bool bBigGroup); // Function AthenaWatchers.AthenaWatchers_C.SpectatorsAdded // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SpectatorsEnded(); // Function AthenaWatchers.AthenaWatchers_C.SpectatorsEnded // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SpectatorRemoved(); // Function AthenaWatchers.AthenaWatchers_C.SpectatorRemoved // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SpectatorCountChanged_BP(int32_t NewCount); // Function AthenaWatchers.AthenaWatchers_C.SpectatorCountChanged_BP // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaWatchers(int32_t EntryPoint); // Function AthenaWatchers.AthenaWatchers_C.ExecuteUbergraph_AthenaWatchers // (Final|UbergraphFunction) // @ game+0xda7c34
};

