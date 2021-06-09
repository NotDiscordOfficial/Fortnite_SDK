// WidgetBlueprintGeneratedClass Creative_Background_Widget.Creative_Background_Widget_C
// Size: 0x270 (Inherited: 0x260)
struct UCreative_Background_Widget_C : UUserWidget {
	struct UBorder* Border_1; // 0x260(0x08)
	struct UTextBlock* UserText; // 0x268(0x08)

	void SetShadow(enum class EBillboardshadowDirection Shadow, float ShadowScale); // Function Creative_Background_Widget.Creative_Background_Widget_C.SetShadow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTextFont(int32_t TextFont, int32_t OutlineStrength); // Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextFont // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTextColor(struct FLinearColor TextColor); // Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTextAlignment(enum class ETextJustify Alignment); // Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTextScale(int32_t FontSize); // Function Creative_Background_Widget.Creative_Background_Widget_C.SetTextScale // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBackgroundColor(struct FLinearColor Color); // Function Creative_Background_Widget.Creative_Background_Widget_C.SetBackgroundColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetText(struct FString Text); // Function Creative_Background_Widget.Creative_Background_Widget_C.SetText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

