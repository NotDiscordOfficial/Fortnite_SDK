// WidgetBlueprintGeneratedClass LoadingSubGameContentModal.LoadingSubGameContentModal_C
// Size: 0x3b1 (Inherited: 0x368)
struct ULoadingSubGameContentModal_C : UFortLoadingOnDemandContentModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UWidgetAnimation* Outro; // 0x370(0x08)
	struct UWidgetAnimation* Intro; // 0x378(0x08)
	struct UCommonTextBlock* CommonTextBlock_Title; // 0x380(0x08)
	struct UProgressBar* DownloadingProgressBar; // 0x388(0x08)
	struct ULightbox_C* Lightbox; // 0x390(0x08)
	struct UVerticalBox* Modal_VertBox; // 0x398(0x08)
	struct UCommonTextBlock* Text_Content; // 0x3a0(0x08)
	struct UCommonTextBlock* Text_Progress; // 0x3a8(0x08)
	bool HasPlayedAnim; // 0x3b0(0x01)

	void OnUpdatedProgress(float Percent); // Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnUpdatedProgress // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInitialized(); // Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SetCancelButtonText(struct FText InText); // Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.SetCancelButtonText // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnAnimationFinished // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_LoadingSubGameContentModal(int32_t EntryPoint); // Function LoadingSubGameContentModal.LoadingSubGameContentModal_C.ExecuteUbergraph_LoadingSubGameContentModal // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

