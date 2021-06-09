// BlueprintGeneratedClass ItemPreviewPedestal.ItemPreviewPedestal_C
// Size: 0x441 (Inherited: 0x438)
struct AItemPreviewPedestal_C : AFortCameraTargetPedestal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	bool Floor Enabled; // 0x440(0x01)

	void Remove Floor(struct AFortItemPreviewActor* Preview); // Function ItemPreviewPedestal.ItemPreviewPedestal_C.Remove Floor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnItemDisplayed(enum class EFortItemType ItemType); // Function ItemPreviewPedestal.ItemPreviewPedestal_C.OnItemDisplayed // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemPreviewPedestal(int32_t EntryPoint); // Function ItemPreviewPedestal.ItemPreviewPedestal_C.ExecuteUbergraph_ItemPreviewPedestal // (Final|UbergraphFunction) // @ game+0xda7c34
};

