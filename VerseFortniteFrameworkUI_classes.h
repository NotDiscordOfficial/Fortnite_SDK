// Class VerseFortniteFrameworkUI.HUDControlsWidgetBase
// Size: 0x2e0 (Inherited: 0x2c8)
struct UHUDControlsWidgetBase : UFortHUDElementWidget {
	char pad_2C8[0x8]; // 0x2c8(0x08)
	struct UDynamicEntryBox* EntryBox_Mappings; // 0x2d0(0x08)
	char pad_2D8[0x8]; // 0x2d8(0x08)
};

// Class VerseFortniteFrameworkUI.VerseFortniteHUDWidgetBase
// Size: 0x2d8 (Inherited: 0x2c8)
struct UVerseFortniteHUDWidgetBase : UFortHUDElementWidget {
	char pad_2C8[0x10]; // 0x2c8(0x10)

	void OnUpdateVisibleState(bool bEnabled); // Function VerseFortniteFrameworkUI.VerseFortniteHUDWidgetBase.OnUpdateVisibleState // (Event|Public|BlueprintEvent) // @ game+0xda7c34
};

// Class VerseFortniteFrameworkUI.HUDCountDownWidget
// Size: 0x2d8 (Inherited: 0x2d8)
struct UHUDCountDownWidget : UVerseFortniteHUDWidgetBase {

	void OnStartCountDown(float SecondsRemaining, int32_t CurrentRound); // Function VerseFortniteFrameworkUI.HUDCountDownWidget.OnStartCountDown // (Event|Public|BlueprintEvent) // @ game+0xda7c34
};

// Class VerseFortniteFrameworkUI.VerseFortniteActivatableWidgetBase
// Size: 0x330 (Inherited: 0x320)
struct UVerseFortniteActivatableWidgetBase : UCommonActivatableWidget {
	char pad_320[0x10]; // 0x320(0x10)

	void OnEnabledChanged(bool bEnabled); // Function VerseFortniteFrameworkUI.VerseFortniteActivatableWidgetBase.OnEnabledChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class VerseFortniteFrameworkUI.HUDGameOverWidgetBase
// Size: 0x338 (Inherited: 0x330)
struct UHUDGameOverWidgetBase : UVerseFortniteActivatableWidgetBase {
	char pad_330[0x8]; // 0x330(0x08)

	void HandleGameOverStateChanged(struct UHUDGameOverComponentBase* GameOverComponent); // Function VerseFortniteFrameworkUI.HUDGameOverWidgetBase.HandleGameOverStateChanged // (Final|Native|Private) // @ game+0x4319b7c
	enum class EGameOverMessageType GetGameOverType(); // Function VerseFortniteFrameworkUI.HUDGameOverWidgetBase.GetGameOverType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x4319b64
};

// Class VerseFortniteFrameworkUI.HUDMapWidgetBase
// Size: 0x2d8 (Inherited: 0x2d8)
struct UHUDMapWidgetBase : UVerseFortniteHUDWidgetBase {
};

// Class VerseFortniteFrameworkUI.HUDScoreboardEntryWidgetBase
// Size: 0x2a8 (Inherited: 0x288)
struct UHUDScoreboardEntryWidgetBase : UCommonUserWidget {
	char pad_288[0x8]; // 0x288(0x08)
	struct FMulticastInlineDelegate OnScoreDataChanged; // 0x290(0x10)
	struct UHUDScoreboardEntryData* ScoreData; // 0x2a0(0x08)
};

// Class VerseFortniteFrameworkUI.HUDScoreboardWidgetBase
// Size: 0x300 (Inherited: 0x2d8)
struct UHUDScoreboardWidgetBase : UVerseFortniteHUDWidgetBase {
	struct TArray<struct UHUDScoreboardEntryData*> ScoreboardData; // 0x2d8(0x10)
	struct UCommonListView* ScoreboardListView; // 0x2e8(0x08)
	struct UCommonTextBlock* Text_CurrentRound; // 0x2f0(0x08)
	struct UCommonTextBlock* Text_NumberOfRounds; // 0x2f8(0x08)

	void OnUpdateScores(); // Function VerseFortniteFrameworkUI.HUDScoreboardWidgetBase.OnUpdateScores // (Final|Native|Protected) // @ game+0x4319d00
	void OnUpdateRounds(uint32_t CurrentRound, uint32_t NumberOfRounds); // Function VerseFortniteFrameworkUI.HUDScoreboardWidgetBase.OnUpdateRounds // (Final|Native|Protected) // @ game+0x4319c18
};

// Class VerseFortniteFrameworkUI.HUDSimpleMessageWidget
// Size: 0x2d8 (Inherited: 0x2d8)
struct UHUDSimpleMessageWidget : UVerseFortniteHUDWidgetBase {

	void OnUpdateMessage(struct FString NewMessage); // Function VerseFortniteFrameworkUI.HUDSimpleMessageWidget.OnUpdateMessage // (Event|Public|BlueprintEvent) // @ game+0xda7c34
};

// Class VerseFortniteFrameworkUI.VerseFortniteButton
// Size: 0xc28 (Inherited: 0xc20)
struct UVerseFortniteButton : UCommonButtonLegacy {
	struct FName ButtonActionName; // 0xc20(0x08)
};

