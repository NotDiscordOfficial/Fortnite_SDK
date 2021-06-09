// WidgetBlueprintGeneratedClass BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C
// Size: 0x3b0 (Inherited: 0x340)
struct UBP_BattlePassUnlockAnim_C : UAthenaUpgradedPreMessage {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UWidgetAnimation* UnlockSequence; // 0x348(0x08)
	struct UWidgetAnimation* Intro; // 0x350(0x08)
	struct UImage* Backing; // 0x358(0x08)
	struct UHorizontalBox* HeaderContainer; // 0x360(0x08)
	struct UImage* Icon; // 0x368(0x08)
	struct UImage* Image_60; // 0x370(0x08)
	struct UImage* Image_89; // 0x378(0x08)
	struct UImage* Image_90; // 0x380(0x08)
	struct UImage* Image_91; // 0x388(0x08)
	struct UImage* Image_92; // 0x390(0x08)
	struct UImage* Image_93; // 0x398(0x08)
	struct UImage* Image_94; // 0x3a0(0x08)
	struct USoundBase* SoundOnPlayIntro; // 0x3a8(0x08)

	void BP_OnActivated(); // Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayIntro(); // Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.PlayIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnIntroAnimationFinished(); // Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.OnIntroAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_BattlePassUnlockAnim(int32_t EntryPoint); // Function BP_BattlePassUnlockAnim.BP_BattlePassUnlockAnim_C.ExecuteUbergraph_BP_BattlePassUnlockAnim // (Final|UbergraphFunction) // @ game+0xda7c34
};

