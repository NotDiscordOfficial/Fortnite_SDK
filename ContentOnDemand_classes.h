// WidgetBlueprintGeneratedClass ContentOnDemand.ContentOnDemand_C
// Size: 0x320 (Inherited: 0x2f0)
struct UContentOnDemand_C : UFortContentOnDemand {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2f0(0x08)
	struct UWidgetAnimation* Intro; // 0x2f8(0x08)
	struct UWidgetAnimation* Outro; // 0x300(0x08)
	struct UImage* Check; // 0x308(0x08)
	struct UCommonTextBlock* Text_Downloaded; // 0x310(0x08)
	struct UCommonTextBlock* Text_Downloading; // 0x318(0x08)

	void OnUpdatedState(int32_t NumActiveDownloads, int32_t NumErrors); // Function ContentOnDemand.ContentOnDemand_C.OnUpdatedState // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInitialized(); // Function ContentOnDemand.ContentOnDemand_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ContentOnDemand(int32_t EntryPoint); // Function ContentOnDemand.ContentOnDemand_C.ExecuteUbergraph_ContentOnDemand // (Final|UbergraphFunction) // @ game+0xda7c34
};

