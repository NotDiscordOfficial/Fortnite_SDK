// WidgetBlueprintGeneratedClass Donut_ComicBubble.Donut_ComicBubble_C
// Size: 0x2ac (Inherited: 0x260)
struct UDonut_ComicBubble_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Close; // 0x268(0x08)
	struct UWidgetAnimation* Open; // 0x270(0x08)
	struct UBorder* Border_ComicBubble; // 0x278(0x08)
	struct UCommonRichTextBlock* RichText_Dialogue; // 0x280(0x08)
	float DialogueTime; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FText DialogueText; // 0x290(0x18)
	bool bUseAlternateImage; // 0x2a8(0x01)
	bool bUseDownArrow; // 0x2a9(0x01)
	bool bWhiteBubble; // 0x2aa(0x01)
	bool DownArrowSelection; // 0x2ab(0x01)

	void StartExistingDialogue(); // Function Donut_ComicBubble.Donut_ComicBubble_C.StartExistingDialogue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetNewDialogue(struct FText NewText, float DisplayTime); // Function Donut_ComicBubble.Donut_ComicBubble_C.SetNewDialogue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void IntroFinished(); // Function Donut_ComicBubble.Donut_ComicBubble_C.IntroFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function Donut_ComicBubble.Donut_ComicBubble_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void DialogueTimeOut(); // Function Donut_ComicBubble.Donut_ComicBubble_C.DialogueTimeOut // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDialogueFinished(); // Function Donut_ComicBubble.Donut_ComicBubble_C.OnDialogueFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartDialogueSequence(); // Function Donut_ComicBubble.Donut_ComicBubble_C.StartDialogueSequence // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function Donut_ComicBubble.Donut_ComicBubble_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Donut_ComicBubble(int32_t EntryPoint); // Function Donut_ComicBubble.Donut_ComicBubble_C.ExecuteUbergraph_Donut_ComicBubble // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

