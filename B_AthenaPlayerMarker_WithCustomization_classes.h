// BlueprintGeneratedClass B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C
// Size: 0x600 (Inherited: 0x5b8)
struct AB_AthenaPlayerMarker_WithCustomization_C : AB_AthenaMapMarkerBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b8(0x08)
	struct AFortMapMarkerTopperActor* TopperClass; // 0x5c0(0x08)
	struct AFortMapMarkerTopperActor* TopperInstance; // 0x5c8(0x08)
	struct FTransform TopperTransform; // 0x5d0(0x30)

	void OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37(struct UObject* Loaded); // Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSetupMarker(struct FFortWorldMarkerData MarkerData); // Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnSetupMarker // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMarkerHidden(); // Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnMarkerHidden // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void UpdateTopper(); // Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.UpdateTopper // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMarkerPlaced(); // Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnMarkerPlaced // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization(int32_t EntryPoint); // Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

