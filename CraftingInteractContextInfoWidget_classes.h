// WidgetBlueprintGeneratedClass CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C
// Size: 0x280 (Inherited: 0x260)
struct UCraftingInteractContextInfoWidget_C : UFortInteractContextInfoWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCommonTextBlock* ActionText; // 0x268(0x08)
	struct UImage* ItemPreviewImage; // 0x270(0x08)
	struct UMaterialExpressionTextureObjectParameter* Image; // 0x278(0x08)

	void SetCraftingPreviewImage(struct FItemAndCount ItemAndCount, struct UTexture* ItemIcon); // Function CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C.SetCraftingPreviewImage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetCraftingResult(struct UFortInteractContextInfo* ContextInfo, struct FItemAndCount CraftingResult); // Function CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C.SetCraftingResult // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetDefaultText(struct UFortInteractContextInfo* ContextInfo); // Function CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C.SetDefaultText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_5CA0AB9C4E28FABDE17BA4B37923A52F(struct UObject* Loaded); // Function CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C.OnLoaded_5CA0AB9C4E28FABDE17BA4B37923A52F // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnContextInfoUpdated(struct UFortInteractContextInfo* ContextInfo); // Function CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C.OnContextInfoUpdated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_CraftingInteractContextInfoWidget(int32_t EntryPoint); // Function CraftingInteractContextInfoWidget.CraftingInteractContextInfoWidget_C.ExecuteUbergraph_CraftingInteractContextInfoWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

