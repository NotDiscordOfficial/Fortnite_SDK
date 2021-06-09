// WidgetBlueprintGeneratedClass BattlePassPurchaseDetailsScreen.BattlePassPurchaseDetailsScreen_C
// Size: 0x450 (Inherited: 0x320)
struct UBattlePassPurchaseDetailsScreen_C : UCommonActivatableWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* OnLogoIntro; // 0x328(0x08)
	struct UWidgetAnimation* FadeToSubs_Smoother; // 0x330(0x08)
	struct UWidgetAnimation* FadeBacktoBP; // 0x338(0x08)
	struct UWidgetAnimation* SetActivatedState; // 0x340(0x08)
	struct UWidgetAnimation* ShowComicBubble_Landing; // 0x348(0x08)
	struct UWidgetAnimation* ReverseShowPurchaseConfirmation; // 0x350(0x08)
	struct UWidgetAnimation* OnShowPurchaseConfirmation_Final; // 0x358(0x08)
	struct UWidgetAnimation* ShowComicBubble_Confirmation; // 0x360(0x08)
	struct UWidgetAnimation* ShowCallouts; // 0x368(0x08)
	struct UFortLazyImage* BottomImage; // 0x370(0x08)
	struct UFortLazyImage* CenterLeftImage; // 0x378(0x08)
	struct UFortLazyImage* CenterRightImage; // 0x380(0x08)
	struct UFortLazyImage* CenterTopLeftImage; // 0x388(0x08)
	struct UFortLazyImage* CenterTopRightImage; // 0x390(0x08)
	struct UCommonRichTextBlock* CommonRichTextBlock_164; // 0x398(0x08)
	struct UImage* Copy; // 0x3a0(0x08)
	struct UDonut_ComicBubble_C* Donut_ComicBubble_Confirmation; // 0x3a8(0x08)
	struct UDonut_ComicBubble_C* Donut_ComicBubble_Landing; // 0x3b0(0x08)
	struct UImage* Glow; // 0x3b8(0x08)
	struct UImage* Image_2; // 0x3c0(0x08)
	struct USizeBox* LargeTriangles; // 0x3c8(0x08)
	struct UImage* LargeTriangles_Left; // 0x3d0(0x08)
	struct UImage* LargeTriangles_Right; // 0x3d8(0x08)
	struct UImage* OrangeTri; // 0x3e0(0x08)
	struct UImage* OrangeTri_2; // 0x3e8(0x08)
	struct USafeZone* SafeZone_1; // 0x3f0(0x08)
	struct UImage* Shadow; // 0x3f8(0x08)
	struct USizeBox* SmallTriangles; // 0x400(0x08)
	struct UImage* SmallTriangles_Left; // 0x408(0x08)
	struct UImage* SmallTriangles_Right; // 0x410(0x08)
	struct UVerticalBox* TagsVB; // 0x418(0x08)
	struct UFortLazyImage* TopLeftImage; // 0x420(0x08)
	struct UFortLazyImage* TopRightImage; // 0x428(0x08)
	struct UImage* YellowTri; // 0x430(0x08)
	struct UImage* YellowTri_2; // 0x438(0x08)
	struct UWidgetAnimation* BPTransitionAnim; // 0x440(0x08)
	struct UAudioComponent* IntroSound; // 0x448(0x08)

	void OnScreenIntro(); // Function BattlePassPurchaseDetailsScreen.BattlePassPurchaseDetailsScreen_C.OnScreenIntro // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetImageBrushMaterials(); // Function BattlePassPurchaseDetailsScreen.BattlePassPurchaseDetailsScreen_C.SetImageBrushMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AnimateBackToNormalState(); // Function BattlePassPurchaseDetailsScreen.BattlePassPurchaseDetailsScreen_C.AnimateBackToNormalState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideFinalPurchaseConfirmation(); // Function BattlePassPurchaseDetailsScreen.BattlePassPurchaseDetailsScreen_C.HideFinalPurchaseConfirmation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowFinalPurchaseConfirmation(); // Function BattlePassPurchaseDetailsScreen.BattlePassPurchaseDetailsScreen_C.ShowFinalPurchaseConfirmation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TriggerSubsTransition(); // Function BattlePassPurchaseDetailsScreen.BattlePassPurchaseDetailsScreen_C.TriggerSubsTransition // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function BattlePassPurchaseDetailsScreen.BattlePassPurchaseDetailsScreen_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function BattlePassPurchaseDetailsScreen.BattlePassPurchaseDetailsScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void IntroAudio(); // Function BattlePassPurchaseDetailsScreen.BattlePassPurchaseDetailsScreen_C.IntroAudio // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function BattlePassPurchaseDetailsScreen.BattlePassPurchaseDetailsScreen_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BattlePassPurchaseDetailsScreen(int32_t EntryPoint); // Function BattlePassPurchaseDetailsScreen.BattlePassPurchaseDetailsScreen_C.ExecuteUbergraph_BattlePassPurchaseDetailsScreen // (Final|UbergraphFunction) // @ game+0xda7c34
};

