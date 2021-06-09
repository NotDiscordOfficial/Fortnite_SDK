// WidgetBlueprintGeneratedClass GameFeatureStatus.GameFeatureStatus_C
// Size: 0x3a8 (Inherited: 0x348)
struct UGameFeatureStatus_C : UAthenaGameFeatureStatus {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Downloading_Error; // 0x350(0x08)
	struct UWidgetAnimation* Downloading; // 0x358(0x08)
	struct UImage* Image_ErrorIcon; // 0x360(0x08)
	struct UImage* Image_Pause; // 0x368(0x08)
	struct UWidgetSwitcher* Switcher_ProgressOrError; // 0x370(0x08)
	struct FLinearColor Progress; // 0x378(0x10)
	struct FLinearColor Error; // 0x388(0x10)
	struct FLinearColor Paused; // 0x398(0x10)

	void HandleStatusChanged(enum class EAthenaGameFeatureStatus CurrentStatus); // Function GameFeatureStatus.GameFeatureStatus_C.HandleStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStatusChanged(enum class EAthenaGameFeatureStatus NewStatus); // Function GameFeatureStatus.GameFeatureStatus_C.OnStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GameFeatureStatus(int32_t EntryPoint); // Function GameFeatureStatus.GameFeatureStatus_C.ExecuteUbergraph_GameFeatureStatus // (Final|UbergraphFunction) // @ game+0xda7c34
};

