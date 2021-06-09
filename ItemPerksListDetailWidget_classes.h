// WidgetBlueprintGeneratedClass ItemPerksListDetailWidget.ItemPerksListDetailWidget_C
// Size: 0x300 (Inherited: 0x2e0)
struct UItemPerksListDetailWidget_C : UFortItemDetailElementWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UPerksList_C* PerksList; // 0x2e8(0x08)
	struct USizeBox* RootBox; // 0x2f0(0x08)
	bool ShowActiveAbilitiesOnly; // 0x2f8(0x01)
	char pad_2F9[0x3]; // 0x2f9(0x03)
	float WrapPerkTextAt; // 0x2fc(0x04)

	void SetState(enum class EFortPerksWidgetState InState, struct UFortHero* InEvolutionOption); // Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandlePostDifferentItemToDetailSet(); // Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.HandlePostDifferentItemToDetailSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemPerksListDetailWidget(int32_t EntryPoint); // Function ItemPerksListDetailWidget.ItemPerksListDetailWidget_C.ExecuteUbergraph_ItemPerksListDetailWidget // (Final|UbergraphFunction) // @ game+0xda7c34
};

