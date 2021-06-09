// WidgetBlueprintGeneratedClass LocalUserEntry.LocalUserEntry_C
// Size: 0xcd8 (Inherited: 0xc70)
struct ULocalUserEntry_C : UFortLocalUserEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc70(0x08)
	struct UWidgetAnimation* Hovered; // 0xc78(0x08)
	struct UBorder* Border_OnlineStatusIndicator; // 0xc80(0x08)
	struct UFortMobileImage* FortMobileImage_enforzer; // 0xc88(0x08)
	struct UImage* Image_MicIcon; // 0xc90(0x08)
	struct UBorder* LocalUserEntryBorder; // 0xc98(0x08)
	struct UFortMobileImage* SettingsIcon; // 0xca0(0x08)
	struct FLinearColor Online; // 0xca8(0x10)
	struct FLinearColor Offline; // 0xcb8(0x10)
	struct FLinearColor Away; // 0xcc8(0x10)

	void HandleOnlineIndicatorView(enum class ELocalUserOnlineStatus InLocalUserOnlineStatus); // Function LocalUserEntry.LocalUserEntry_C.HandleOnlineIndicatorView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function LocalUserEntry.LocalUserEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function LocalUserEntry.LocalUserEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnOnlineStatusChanged(enum class ELocalUserOnlineStatus OnlineStatus); // Function LocalUserEntry.LocalUserEntry_C.OnOnlineStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_LocalUserEntry(int32_t EntryPoint); // Function LocalUserEntry.LocalUserEntry_C.ExecuteUbergraph_LocalUserEntry // (Final|UbergraphFunction) // @ game+0xda7c34
};

