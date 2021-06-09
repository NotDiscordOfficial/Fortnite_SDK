// WidgetBlueprintGeneratedClass PerkTierWidgetNew.PerkTierWidgetNew_C
// Size: 0x2fd (Inherited: 0x2d0)
struct UPerkTierWidgetNew_C : UFortPerkTierWidget_NUI {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UVerticalBox* PerkList; // 0x2d8(0x08)
	struct UPerkWidgetNew_C* PerkWidgetNew; // 0x2e0(0x08)
	struct UPerkWidgetNew_C* PerkWidgetNew_84; // 0x2e8(0x08)
	struct UPerkWidgetNew_C* PerkWidgetNew_154; // 0x2f0(0x08)
	bool bIncludeName; // 0x2f8(0x01)
	bool bFirstPerkDone; // 0x2f9(0x01)
	bool bIncludeDescription; // 0x2fa(0x01)
	bool bUseLegacyFixedSizeIcons; // 0x2fb(0x01)
	enum class EFortBrushSize IconSize; // 0x2fc(0x01)

	void InitializeSettings(bool bIncludeName, bool bIncludeDescription, bool bUseLegacyFixedSizeIcons, enum class EFortBrushSize IconSize, struct FFortUIPerkTier FortPerkTier); // Function PerkTierWidgetNew.PerkTierWidgetNew_C.InitializeSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function PerkTierWidgetNew.PerkTierWidgetNew_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnGeneratePerk(struct FFortUIPerk Perk, struct UFortPerkWidget_NUI* PerkWidget); // Function PerkTierWidgetNew.PerkTierWidgetNew_C.OnGeneratePerk // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PerkTierWidgetNew(int32_t EntryPoint); // Function PerkTierWidgetNew.PerkTierWidgetNew_C.ExecuteUbergraph_PerkTierWidgetNew // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

