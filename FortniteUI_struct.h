// Enum FortniteUI.EFortItemCooldownType
enum class EFortItemCooldownType : uint8 {
	None,
	AmmoRegeneration,
	ItemActivation,
	WeaponReloading,
	Death,
	AthenaWeaponFireCooldown,
	AbilitySetActivateByInputAbility,
	EFortItemCooldownType_MAX,
};

// Enum FortniteUI.EFortUIFeatureStateReason
enum class EFortUIFeatureStateReason : uint8 {
	Default,
	Tutorial,
	ContentInstall,
	AccountRestrictions,
	Platform,
	SeasonOrEventNotActive,
	NoPlayerController,
	UnexpectedFeature,
	Invalid,
	EFortUIFeatureStateReason_MAX,
};

// Enum FortniteUI.EFortUIFeatureState
enum class EFortUIFeatureState : uint8 {
	Enabled,
	Disabled,
	Hidden,
	Invalid,
	EFortUIFeatureState_MAX,
};

// Enum FortniteUI.EFortUIFeature
enum class EFortUIFeature : uint8 {
	ShowHome,
	ShowPlay,
	ShowCommand,
	ShowHeros,
	ShowSquads,
	ShowArmory,
	ShowLocker,
	ShowSkillTree,
	ShowStore,
	ShowQuests,
	ShowMainStore,
	ShowContextHelpMenu,
	ShowCampaign,
	ShowActiveBoost,
	ShowJournal,
	ShowPartyBar,
	ShowChatWindow,
	ShowFriendsMenu,
	ShowObjectives,
	ShowRatingIconsInTopbar,
	ShowAntiAddictionMessage,
	ShowMinorShutdownMessage,
	ShowHealthWarningScreen,
	ShowSimplifiedHUD,
	LargeHeaderFooterButtons,
	ShowAthenaFavoriting,
	ShowAthenaItemRandomization,
	ShowBattlePass,
	ShowNewBattlePass,
	ShowDynamicBattlePass,
	ShowBattlePassFAQ,
	ShowReplays,
	ShowProfileStatsUI,
	ShowAthenaItemShop,
	ShowNewAthenaItemShop,
	ShowAthenaCataba,
	ShowShowdown,
	ShowSpecialEvent,
	ShowSpatialUI,
	ShowAccountBoosts,
	ShowCustomerSupport,
	ShowGlobalChat,
	ShowEULA,
	ShowEndOfZoneCinematic,
	ShowOnboardingCinematics,
	ShowFounderBannerIcons,
	ShowCurrentRegionInLobby,
	ShowPrerollLlamas,
	EnableFoundersDailyRewards,
	EnableTwitchIntegration,
	EnableMatchmakingRegionSetting,
	EnableLanguageSetting,
	EnableFriendCodeSetting,
	EnableEarlyAccessLoadingScreenBanner,
	EnableAlterationModifications,
	EnableSchematicRarityUpgrade,
	EnableMissionActivationVote,
	EnableLtmRetrieveTheData,
	EnableUpgradesVideos,
	ShowPreviewTestTab,
	Max_None,
	EFortUIFeature_MAX,
};

// Enum FortniteUI.EFlagStatus
enum class EFlagStatus : uint8 {
	FlagPresent,
	FlagNotPresent,
	EFlagStatus_MAX,
};

// Enum FortniteUI.EInputPriority
enum class EInputPriority : uint8 {
	Normal,
	Menu,
	Chat,
	Modal,
	Confirmation,
	Error,
	HUD,
	EInputPriority_MAX,
};

// Enum FortniteUI.EFortInputMode
enum class EFortInputMode : uint8 {
	Frontend,
	InGame,
	InGameCursor,
	EFortInputMode_MAX,
};

// Enum FortniteUI.EFortUrlType
enum class EFortUrlType : uint8 {
	NormalWebLink,
	AccountCreationLink,
	HelpLink,
	EULALink,
	EFortUrlType_MAX,
};

// Enum FortniteUI.EFortHitPointModificationReason
enum class EFortHitPointModificationReason : uint8 {
	Invalid,
	InitalSet,
	AutoRegen,
	ItemRegen,
	DamageOverTime,
	DamageReceived,
	EFortHitPointModificationReason_MAX,
};

// Enum FortniteUI.EFortBuildingInteraction
enum class EFortBuildingInteraction : uint8 {
	None,
	Build,
	Repair,
	Upgrade,
	Edit,
	BeingModified,
	ConfirmEdit,
	Creative,
	EFortBuildingInteraction_MAX,
};

// Enum FortniteUI.EFortBuildingHealthDisplayRule
enum class EFortBuildingHealthDisplayRule : uint8 {
	Never,
	Allowed,
	Always,
	EFortBuildingHealthDisplayRule_MAX,
};

// Enum FortniteUI.EItemDisassembleRestrictionReason
enum class EItemDisassembleRestrictionReason : uint8 {
	InnatelyCannotDisassemble,
	ItemWasGifted,
	EItemDisassembleRestrictionReason_MAX,
};

// Enum FortniteUI.EItemRecyclingRestrictionReason
enum class EItemRecyclingRestrictionReason : uint8 {
	InnatelyUnrecyclable,
	IsSlottedGroundOperative,
	MissingCatalyst,
	ItemOutOnExpedition,
	InUseByCrafting,
	MulchingNotAllowed,
	IsSlottedAttributeWorker,
	EItemRecyclingRestrictionReason_MAX,
};

// Enum FortniteUI.EItemRecyclingWarning
enum class EItemRecyclingWarning : uint8 {
	HighLevel,
	HighRarity,
	CanSlotInCollectionBook,
	EItemRecyclingWarning_MAX,
};

// Enum FortniteUI.EConversionControlKeyRequest
enum class EConversionControlKeyRequest : uint8 {
	AllKeys,
	NonConsumableKeys,
	ConsumableKeys,
	EConversionControlKeyRequest_MAX,
};

// Enum FortniteUI.EVaultItemLimitStatus
enum class EVaultItemLimitStatus : uint8 {
	WellBelowCapacity,
	NearCapacity,
	AtCapacity,
	OverCapacity,
	EVaultItemLimitStatus_MAX,
};

// Enum FortniteUI.EFortUISpecialEvents
enum class EFortUISpecialEvents : uint8 {
	NoEvent,
	FritTemp,
	EFortUISpecialEvents_MAX,
};

// Enum FortniteUI.EFortTutorialGlowType
enum class EFortTutorialGlowType : uint8 {
	None,
	Look,
	Click,
	EFortTutorialGlowType_MAX,
};

// Enum FortniteUI.EFortBangSize
enum class EFortBangSize : uint8 {
	XXS,
	XS,
	S,
	M,
	L,
	XL,
	EFortBangSize_MAX,
};

// Enum FortniteUI.EFortUIState
enum class EFortUIState : uint8 {
	Invalid,
	Login,
	JoinServer,
	SubgameSelect,
	FrontEnd,
	InGame_Custom,
	UNUSED,
	InGame_STW,
	Cinematic,
	InGame_BR,
	AthenaSpectator,
	Replay,
	InGame_STW_Custom,
	MAX,
};

// Enum FortniteUI.EFortStoreState
enum class EFortStoreState : uint8 {
	Error,
	Closed,
	CardPackStore,
	CurrencyStore,
	WebPayment,
	PurchaseOpen,
	PackOpen,
	CardEnter,
	CardBackReveal,
	CardFlip,
	CardFrontReveal,
	CardExit,
	SummaryAdd,
	PackDestroy,
	Summary,
	PresentChoice,
	ChoiceMade,
	SummaryAddTransition,
	MAX_None,
	EFortStoreState_MAX,
};

// Enum FortniteUI.EPostGameHUDMode
enum class EPostGameHUDMode : uint8 {
	None,
	AllHidden,
	Spectating,
	AllHiddenExceptXP,
	EPostGameHUDMode_MAX,
};

// Enum FortniteUI.EPostGameClickCatcherMode
enum class EPostGameClickCatcherMode : uint8 {
	Catch_None,
	Catch_MobileOnly,
	Catch_MouseOnly,
	Catch_All,
	Catch_MAX,
};

// Enum FortniteUI.EFortFrontEndFeatureStateReason
enum class EFortFrontEndFeatureStateReason : uint8 {
	Default,
	NoHeroes,
	Tutorial,
	BROnly,
	NoPlayerController,
	UnexpectedFeature,
	Invalid,
	EFortFrontEndFeatureStateReason_MAX,
};

// Enum FortniteUI.EFortFrontEndFeatureState
enum class EFortFrontEndFeatureState : uint8 {
	Enabled,
	Disabled,
	Hidden,
	Invalid,
	EFortFrontEndFeatureState_MAX,
};

// Enum FortniteUI.EFortFrontEndFeature
enum class EFortFrontEndFeature : uint8 {
	ShowHomeBase,
	ShowHeroList,
	ShowVault,
	ShowStore,
	PlayZone,
	ShowDailyRewards,
	ShowHeroSelect,
	RecruitHero,
	ShowHomeBaseOverview,
	STWArmory_Transform,
	STWArmory_CollectionBook,
	MAX_None,
	EFortFrontEndFeature_MAX,
};

// Enum FortniteUI.EActivatePanelOption
enum class EActivatePanelOption : uint8 {
	Show,
	Hide,
	PlatformDefault,
	EActivatePanelOption_MAX,
};

// Enum FortniteUI.EFortPlayerPowerRatingType
enum class EFortPlayerPowerRatingType : uint8 {
	Auto,
	Campaign,
	Phoenix,
	Max_None,
	EFortPlayerPowerRatingType_MAX,
};

// Enum FortniteUI.EGridSortKind
enum class EGridSortKind : uint8 {
	None,
	ByNumber,
	ByString,
	ByNumberThenString,
	ByStringThenNumber,
	EGridSortKind_MAX,
};

// Enum FortniteUI.EFortItemInspectionMode
enum class EFortItemInspectionMode : uint8 {
	Overview,
	Details,
	View,
	Evolution,
	Upgrade,
	UpgradeRarity,
	Promotion,
	EFortItemInspectionMode_MAX,
};

// Enum FortniteUI.EFortItemCardSize
enum class EFortItemCardSize : uint8 {
	XXS,
	XS,
	Wide_S,
	S,
	M,
	L,
	XL,
	XXL,
	EFortItemCardSize_MAX,
};

// Enum FortniteUI.EFortCollectionBookPopupButtonType
enum class EFortCollectionBookPopupButtonType : uint8 {
	Invalid,
	SelectItem,
	Preview,
	Purchase,
	Unslot,
	Back,
	EFortCollectionBookPopupButtonType_MAX,
};

// Enum FortniteUI.ECollectionBookSectionNavTarget
enum class ECollectionBookSectionNavTarget : uint8 {
	SlotSelect,
	SlotPicker,
	ECollectionBookSectionNavTarget_MAX,
};

// Enum FortniteUI.EViewerNavigationDirection
enum class EViewerNavigationDirection : uint8 {
	Previous,
	Next,
	EViewerNavigationDirection_MAX,
};

// Enum FortniteUI.EHeroLoadoutSlotType
enum class EHeroLoadoutSlotType : uint8 {
	CommanderSlot,
	TeamPerkSlot,
	CrewSlot,
	GadgetSlot,
	EHeroLoadoutSlotType_MAX,
};

// Enum FortniteUI.ESquadSlotSortType
enum class ESquadSlotSortType : uint8 {
	ByRating,
	ByLevel,
	ByRarity,
	ByBonus,
	ByMatch,
	ESquadSlotSortType_MAX,
};

// Enum FortniteUI.EAvailableSquadSlotsListEntryState
enum class EAvailableSquadSlotsListEntryState : uint8 {
	Detailed,
	Simplified,
	EAvailableSquadSlotsListEntryState_MAX,
};

// Enum FortniteUI.EBattleMapTimelineWidgetState
enum class EBattleMapTimelineWidgetState : uint8 {
	None,
	HasNext,
	HasPrevious,
	IsInReplay,
	CanBeScrubbed,
	IsStreaming,
	Invalid,
	EBattleMapTimelineWidgetState_MAX,
};

// Enum FortniteUI.ECountdownDisplay
enum class ECountdownDisplay : uint8 {
	EventEndTime,
	ChallengeUnlockTime,
	ChallengeBundleUnlockTime,
	UnlockAlreadySet,
	MAX,
};

// Enum FortniteUI.EChallengeInfoPage
enum class EChallengeInfoPage : uint8 {
	PartyAssist,
	Daily,
	Suggested,
	Contextual,
	Selected,
	EChallengeInfoPage_MAX,
};

// Enum FortniteUI.EChallengeListSection
enum class EChallengeListSection : uint8 {
	SpecialOffers,
	CompletionRewards,
	AllChallenges,
	FreeChallenges,
	PaidChallenges,
	Objectives,
	EChallengeListSection_MAX,
};

// Enum FortniteUI.EAthenaChallengeTimerState
enum class EAthenaChallengeTimerState : uint8 {
	Hidden,
	WeeksRemaining,
	DaysRemaining,
	HoursRemaining,
	MinutesRemaining,
	Urgent,
	EAthenaChallengeTimerState_MAX,
};

// Enum FortniteUI.ELocationEntryState
enum class ELocationEntryState : uint8 {
	Found,
	NotFound,
	Unused,
	ELocationEntryState_MAX,
};

// Enum FortniteUI.EAthenaConfirmationResult
enum class EAthenaConfirmationResult : uint8 {
	Confirmed,
	Declined,
	Canceled,
	Max_NONE,
	EAthenaConfirmationResult_MAX,
};

// Enum FortniteUI.EEquippedWeaponDisplay
enum class EEquippedWeaponDisplay : uint8 {
	None,
	Resource,
	Magazine,
	Utility,
	Chargeable,
	EEquippedWeaponDisplay_MAX,
};

// Enum FortniteUI.EAthenaEventMatchInfoSortMethod
enum class EAthenaEventMatchInfoSortMethod : uint8 {
	Eliminations,
	Place,
	Count,
	EAthenaEventMatchInfoSortMethod_MAX,
};

// Enum FortniteUI.EAthenaGameFeatureStatus
enum class EAthenaGameFeatureStatus : uint8 {
	InProgress,
	ProgressPaused,
	ErrorOccured,
	EAthenaGameFeatureStatus_MAX,
};

// Enum FortniteUI.EAthenaPlayerActionAlert
enum class EAthenaPlayerActionAlert : uint8 {
	PlayerDown,
	PlayerKill,
	EnteredStorm,
	NewZebulonDrone,
	NewZebulonDroneYou,
	EAthenaPlayerActionAlert_MAX,
};

// Enum FortniteUI.EViolatorIntensity
enum class EViolatorIntensity : uint8 {
	Low,
	Medium,
	High,
	EViolatorIntensity_MAX,
};

// Enum FortniteUI.EItemShopTileSize
enum class EItemShopTileSize : uint8 {
	Mini,
	Small,
	Normal,
	DoubleWide,
	TripleWide,
	Max,
};

// Enum FortniteUI.EItemShopCurrency
enum class EItemShopCurrency : uint8 {
	VBucks,
	RealMOney,
	EItemShopCurrency_MAX,
};

// Enum FortniteUI.EFortAthenaPlaylist
enum class EFortAthenaPlaylist : uint8 {
	AthenaSolo,
	AthenaDuo,
	AthenaSquad,
	EFortAthenaPlaylist_MAX,
};

// Enum FortniteUI.EAthenaLockerInfoRestrictionWarning
enum class EAthenaLockerInfoRestrictionWarning : uint8 {
	UnsatisfiedExclusiveItem,
	LockedEmote,
	CosmeticRestriction,
	Unknown,
	EAthenaLockerInfoRestrictionWarning_MAX,
};

// Enum FortniteUI.EAtheaMapTabType
enum class EAtheaMapTabType : uint8 {
	Invalid,
	Quest,
	Map,
	Collection,
	EAtheaMapTabType_MAX,
};

// Enum FortniteUI.EFortMarkerActions
enum class EFortMarkerActions : uint8 {
	None,
	Cancel,
	Confirm,
	EFortMarkerActions_MAX,
};

// Enum FortniteUI.EAthenaNewsStyle
enum class EAthenaNewsStyle : uint8 {
	None,
	SpecialEvent,
	SpecialEvent2,
	EAthenaNewsStyle_MAX,
};

// Enum FortniteUI.EAthenaNewsEntryType
enum class EAthenaNewsEntryType : uint8 {
	Text,
	Item,
	Website,
	NavigateToTab,
	Challenge,
	Playlist,
	Setting,
	SpatialScreen,
	SmallNews,
	NavigateToBattlePassSubPage,
	Invalid,
	EAthenaNewsEntryType_MAX,
};

// Enum FortniteUI.EPurchaseButtonsMode
enum class EPurchaseButtonsMode : uint8 {
	Default,
	ClaimSubscriptionRewards,
	SubscriptionPaymentError,
	SubscriptionBlockedBenefits,
	EPurchaseButtonsMode_MAX,
};

// Enum FortniteUI.EPassOfferSelected
enum class EPassOfferSelected : uint8 {
	BattlePass,
	Subscription,
	Max_None,
	EPassOfferSelected_MAX,
};

// Enum FortniteUI.EHealthBarType
enum class EHealthBarType : uint8 {
	Health,
	Shield,
	Stamina,
	VehicleHealth,
	SignalInStorm,
	EHealthBarType_MAX,
};

// Enum FortniteUI.EBPStatus
enum class EBPStatus : uint8 {
	UnpurchasedBP,
	PurchasedBP,
	EBPStatus_MAX,
};

// Enum FortniteUI.EPunchType
enum class EPunchType : uint8 {
	Horizontal,
	Vertical,
	EPunchType_MAX,
};

// Enum FortniteUI.EPunchCardLocation
enum class EPunchCardLocation : uint8 {
	NONE,
	HUD,
	Map,
	EndGame,
	Lobby,
	EPunchCardLocation_MAX,
};

// Enum FortniteUI.EAthenaSquadListUpdateType
enum class EAthenaSquadListUpdateType : uint8 {
	None,
	CanResurrect,
	FindResurrectChip,
	EAthenaSquadListUpdateType_MAX,
};

// Enum FortniteUI.ERespawnUIState
enum class ERespawnUIState : uint8 {
	Hidden,
	ShowRespawnEnabled,
	ShowRespawnDisabled,
	ERespawnUIState_MAX,
};

// Enum FortniteUI.ESpectatorBuildCountType
enum class ESpectatorBuildCountType : uint8 {
	BuildCount,
	Wood,
	Stone,
	Metal,
	ESpectatorBuildCountType_MAX,
};

// Enum FortniteUI.ESpectatorMapPlayerListState
enum class ESpectatorMapPlayerListState : uint8 {
	Default,
	Irrelevant,
	Eliminated,
	ESpectatorMapPlayerListState_MAX,
};

// Enum FortniteUI.EAthenaSpectatorNameplateDetailState
enum class EAthenaSpectatorNameplateDetailState : uint8 {
	High,
	Low,
	Arrow,
	Off,
	EAthenaSpectatorNameplateDetailState_MAX,
};

// Enum FortniteUI.EAthenaSpectatorNameplateDistanceState
enum class EAthenaSpectatorNameplateDistanceState : uint8 {
	Near,
	MidDistance,
	FurtherThanMaxDistance,
	EAthenaSpectatorNameplateDistanceState_MAX,
};

// Enum FortniteUI.ESpectatorPlayerListSortMethod
enum class ESpectatorPlayerListSortMethod : uint8 {
	SquadId,
	PlayerName,
	Eliminations,
	EventScore,
	State,
	Count,
	ESpectatorPlayerListSortMethod_MAX,
};

// Enum FortniteUI.EStormSurgeThresholdType
enum class EStormSurgeThresholdType : uint8 {
	None,
	Above,
	Below,
	Equal,
	EStormSurgeThresholdType_MAX,
};

// Enum FortniteUI.EOptionalFlowSteps
enum class EOptionalFlowSteps : uint8 {
	TryShowMobileGuidedTutorial,
	TryPlayTrailer,
	TryShowMOTDs,
	TryShowNormalBanModal,
	TryShowSocialBanModal,
	TryShowMFAModal,
	TryShowCrossplayDialog,
	TryShowSocialImport,
	TryShowSurveys,
	TryShowFireModeModal,
	TryShowBadMatchPopup,
	TryShowMobileInGameAppRating,
	TryShowSamsungSensorWarning,
	TryShowBattlePassPurchaseScreen,
	TryPushGiftingScreen,
	TryPushMessagingScreen,
	TryGoToBattlePassTab,
	EOptionalFlowSteps_MAX,
};

// Enum FortniteUI.EFrontendVisibilityMode
enum class EFrontendVisibilityMode : uint8 {
	Normal,
	HideTopTabsOnly,
	HideTopTabsOnlyWithoutBottomBar,
	OnlyBottom,
	OnlyTop,
	OnlyTitleBar,
	Empty,
	EFrontendVisibilityMode_MAX,
};

// Enum FortniteUI.EWinConditionParentType
enum class EWinConditionParentType : uint8 {
	None,
	Desktop,
	Mobile,
	EWinConditionParentType_MAX,
};

// Enum FortniteUI.EComboSlotType
enum class EComboSlotType : uint8 {
	Primary,
	Secondary,
	Combo,
	Creative,
	COUNT,
	EComboSlotType_MAX,
};

// Enum FortniteUI.EBacchusSignalQuality
enum class EBacchusSignalQuality : uint8 {
	None,
	Low,
	Medium,
	High,
	EBacchusSignalQuality_MAX,
};

// Enum FortniteUI.EBattleLabAlertType
enum class EBattleLabAlertType : uint8 {
	QuestComplete,
	QuestGranted,
	Reward,
	EBattleLabAlertType_MAX,
};

// Enum FortniteUI.EBattlePassInputs
enum class EBattlePassInputs : uint8 {
	Back,
	ViewItem,
	PreviewAction,
	ReplayTrailer,
	ShowAbout,
	BulkBuyRewards,
	ShowAboutCustomization,
	COUNT,
	EBattlePassInputs_MAX,
};

// Enum FortniteUI.EBattlePassPurchaseButtonLayout
enum class EBattlePassPurchaseButtonLayout : uint8 {
	Normal,
	Bundle,
	Normal_PaysForSelf,
	EBattlePassPurchaseButtonLayout_MAX,
};

// Enum FortniteUI.ERewardPageType
enum class ERewardPageType : uint8 {
	Reward,
	Quest,
	Bonus,
	MAX,
};

// Enum FortniteUI.EBattlePassCurrencyType
enum class EBattlePassCurrencyType : uint8 {
	BattleStar,
	CustomSkin,
	TOTAL_CURRENCIES,
	EBattlePassCurrencyType_MAX,
};

// Enum FortniteUI.EBattlePassFeatures
enum class EBattlePassFeatures : uint8 {
	None,
	BuyBattlePass,
	GiftBattlePass,
	BuySubscription,
	ViewDetails,
	WatchVideo,
	ShowAbout,
	PurchaseResources,
	EBattlePassFeatures_MAX,
};

// Enum FortniteUI.EBattlePassView
enum class EBattlePassView : uint8 {
	None,
	LandingPage,
	RewardOverview,
	ItemDetails,
	BulkBuyRewards,
	CharacterCustomizer,
	BonusRewards,
	Quests,
	EBattlePassView_MAX,
};

// Enum FortniteUI.ECobaltStatusTeam
enum class ECobaltStatusTeam : uint8 {
	Ally,
	Enemy,
	MAX,
};

// Enum FortniteUI.EBracketNodeState
enum class EBracketNodeState : uint8 {
	LocalTeam,
	EnemyTeam,
	Neutral,
	EBracketNodeState_MAX,
};

// Enum FortniteUI.ESurvivalObjectiveIconState
enum class ESurvivalObjectiveIconState : uint8 {
	None,
	Spawned,
	Destroyed,
	ESurvivalObjectiveIconState_MAX,
};

// Enum FortniteUI.EDiscoCaptureUIState
enum class EDiscoCaptureUIState : uint8 {
	None,
	Hidden,
	Dance,
	Capturing,
	Contested,
	EDiscoCaptureUIState_MAX,
};

// Enum FortniteUI.EDiscoScoreProgressTypes
enum class EDiscoScoreProgressTypes : uint8 {
	None,
	ProgressSoundMild,
	ProgressSoundMedium,
	ProgressSoundStrong,
	CountdownSoundNormal,
	CountdownSoundStrong,
	EDiscoScoreProgressTypes_MAX,
};

// Enum FortniteUI.EDiscoCaptureProgressState
enum class EDiscoCaptureProgressState : uint8 {
	None,
	AllyProgress,
	EnemyProgress,
	EDiscoCaptureProgressState_MAX,
};

// Enum FortniteUI.EDiscoCaptureIconState
enum class EDiscoCaptureIconState : uint8 {
	None,
	Hidden,
	Neutral,
	AllyCaptured,
	EnemyCaptured,
	EDiscoCaptureIconState_MAX,
};

// Enum FortniteUI.EFortDonutIdleGameObject
enum class EFortDonutIdleGameObject : uint8 {
	UnsetObject,
	Tree,
	Mound,
	SmallMound,
	JumpPad,
	Torch,
	PeelMonster,
	Chimichanga,
	Arm,
	EFortDonutIdleGameObject_MAX,
};

// Enum FortniteUI.EEndOfMatchQuestCategoryType
enum class EEndOfMatchQuestCategoryType : uint8 {
	Completed,
	InProgress,
	EEndOfMatchQuestCategoryType_MAX,
};

// Enum FortniteUI.UFortActivatableVideoEvents
enum class UFortActivatableVideoEvents : uint8 {
	Finished,
	Skipped,
	UFortActivatableVideoEvents_MAX,
};

// Enum FortniteUI.UFortActivatableVideoPanelEvents
enum class UFortActivatableVideoPanelEvents : uint8 {
	Finished,
	Skipped,
	UFortActivatableVideoPanelEvents_MAX,
};

// Enum FortniteUI.EFortAlterationOptionType
enum class EFortAlterationOptionType : uint8 {
	Upgrade,
	Replacement,
	Max_NONE,
	EFortAlterationOptionType_MAX,
};

// Enum FortniteUI.EFortAlterationWidgetState
enum class EFortAlterationWidgetState : uint8 {
	Normal,
	Upgrade,
	Evolution,
	EFortAlterationWidgetState_MAX,
};

// Enum FortniteUI.EFillDisableReason
enum class EFillDisableReason : uint8 {
	Enabled,
	FillDisabledOnPlaylist,
	NotPartyLeader,
	AlreadyMatchmaking,
	PartyTooSmall,
	PartyTooBig,
	InactiveTournament,
	NoSplitscreen,
	EFillDisableReason_MAX,
};

// Enum FortniteUI.EServerAccessSetting
enum class EServerAccessSetting : uint8 {
	Invalid,
	FriendsOfCurrentPlayers,
	LeaderInviteOnly,
	EServerAccessSetting_MAX,
};

// Enum FortniteUI.ESpectatorQueueType
enum class ESpectatorQueueType : uint8 {
	Invalid,
	Player,
	BroadcastSpectator,
	ESpectatorQueueType_MAX,
};

// Enum FortniteUI.ESquadFillSetting
enum class ESquadFillSetting : uint8 {
	Invalid,
	Fill,
	NoFill,
	ESquadFillSetting_MAX,
};

// Enum FortniteUI.ETutorialButtonInteractionType
enum class ETutorialButtonInteractionType : uint8 {
	Click,
	Press,
	ETutorialButtonInteractionType_MAX,
};

// Enum FortniteUI.EHighlightType
enum class EHighlightType : uint8 {
	ESquareHighlight,
	ECircleHighlight_Big,
	ECircleHighlight_Small,
	EHighlightType_MAX,
};

// Enum FortniteUI.EFortAthenaTutorialScreenExtraWidget
enum class EFortAthenaTutorialScreenExtraWidget : uint8 {
	None,
	DragToTurn,
	Completed,
	Count,
	EFortAthenaTutorialScreenExtraWidget_MAX,
};

// Enum FortniteUI.EFortAthenaTutorialSubstep
enum class EFortAthenaTutorialSubstep : uint8 {
	ScreenSwipeToLook,
	ScreenFindMarker,
	ScreenUseLeftStick,
	ScreenMoveToBuilding,
	ScreenJump,
	ScreenCrouch,
	ScreenReachMarker,
	ScreenUsePickaxe,
	ScreenReachPickUp,
	ScreenPickUpItems,
	ScreenEquipItem,
	ScreenShootTargets,
	ScreenReload,
	ScreenReachLocation,
	ScreenDefendYourself,
	ScreenHealthAlert,
	ScreenDestroyEnemies,
	ScreenCollectLoot,
	ScreenUseMedkit,
	ScreenUseShield,
	ScreenShieldInfo,
	ScreenLookForChest,
	ScreenChestFound,
	ScreenSelectBuildMode,
	ScreenShowMaterials,
	ScreenShowBuildPieces,
	ScreenSelectStairs,
	ScreenPlaceStairs,
	ScreenReachChest,
	ScreenExitBuildMode,
	ScreenLootChest,
	ScreenCollectLootChest,
	ScreenEquipRifle,
	ScreenUseScope,
	ScreenShootTargetsScoping,
	ScreenCompleted,
	HealingInterrupted,
	Count,
	EFortAthenaTutorialSubstep_MAX,
};

// Enum FortniteUI.EFortAthenaTutorialStep
enum class EFortAthenaTutorialStep : uint8 {
	Look,
	Move,
	Harvest,
	Pickup,
	Shoot,
	Ambush,
	Heal,
	Build,
	Chest,
	Scoping,
	Completed,
	Count,
	EFortAthenaTutorialStep_MAX,
};

// Enum FortniteUI.EFuelTankState
enum class EFuelTankState : uint8 {
	Empty,
	LowFuel,
	RegularFuel,
	EFuelTankState_MAX,
};

// Enum FortniteUI.EFortMemberConnectionState
enum class EFortMemberConnectionState : uint8 {
	Open,
	Connecting,
	Connected,
	Invalid,
	EFortMemberConnectionState_MAX,
};

// Enum FortniteUI.ECollectionBookRewardStatus
enum class ECollectionBookRewardStatus : uint8 {
	Unknown,
	Available,
	Claimed,
	ECollectionBookRewardStatus_MAX,
};

// Enum FortniteUI.ECollectionBookPrimaryNavTarget
enum class ECollectionBookPrimaryNavTarget : uint8 {
	Overview,
	SectionTileView,
	ECollectionBookPrimaryNavTarget_MAX,
};

// Enum FortniteUI.EColorPickerColorRepresentation
enum class EColorPickerColorRepresentation : uint8 {
	HSV,
	RGB,
	Max_NONE,
	EColorPickerColorRepresentation_MAX,
};

// Enum FortniteUI.EColorPickerType
enum class EColorPickerType : uint8 {
	Swatches,
	CustomColor,
	Both,
	EColorPickerType_MAX,
};

// Enum FortniteUI.ELeaderboardDisplayType
enum class ELeaderboardDisplayType : uint8 {
	Default,
	Floating,
	ELeaderboardDisplayType_MAX,
};

// Enum FortniteUI.EFortLoadoutCardType
enum class EFortLoadoutCardType : uint8 {
	Items,
	RandomTile,
	AddTile,
	AddPreviewItems,
	Blank,
	EFortLoadoutCardType_MAX,
};

// Enum FortniteUI.EFortCosmeticLoadoutScreenMode
enum class EFortCosmeticLoadoutScreenMode : uint8 {
	Browse,
	Save,
	EFortCosmeticLoadoutScreenMode_MAX,
};

// Enum FortniteUI.EFortCreativeItemType
enum class EFortCreativeItemType : uint8 {
	Chest,
	Item,
	Collection,
	SubItems,
	EFortCreativeItemType_MAX,
};

// Enum FortniteUI.EFortCreativeIslandLinkCategory
enum class EFortCreativeIslandLinkCategory : uint8 {
	Default,
	Favorite,
	Published,
	Recent,
	EFortCreativeIslandLinkCategory_MAX,
};

// Enum FortniteUI.EFortCreativeIslandLinkValidationResult
enum class EFortCreativeIslandLinkValidationResult : uint8 {
	Unknown,
	Success,
	IslandNotFound,
	InvalidKeyTooShort,
	InvalidKeyTooLong,
	InvalidKeyCharacters,
	IneligibleParty,
	IslandPrivate,
	EFortCreativeIslandLinkValidationResult_MAX,
};

// Enum FortniteUI.EFortCreativeIslandSelectTabType
enum class EFortCreativeIslandSelectTabType : uint8 {
	IslandCode,
	ListView,
	EFortCreativeIslandSelectTabType_MAX,
};

// Enum FortniteUI.EFortContentBrowserQuickbarState
enum class EFortContentBrowserQuickbarState : uint8 {
	Disabled,
	Creative,
	Primary,
	Trap,
	EFortContentBrowserQuickbarState_MAX,
};

// Enum FortniteUI.EFortCreativeServerPrivacySetting
enum class EFortCreativeServerPrivacySetting : uint8 {
	Unknown,
	Private,
	Public,
	EFortCreativeServerPrivacySetting_MAX,
};

// Enum FortniteUI.EFortDefenderSlotType
enum class EFortDefenderSlotType : uint8 {
	Invalid,
	Defender,
	Weapon,
	EFortDefenderSlotType_MAX,
};

// Enum FortniteUI.EDynamicEntryPatternDirection
enum class EDynamicEntryPatternDirection : uint8 {
	FirstToLast,
	LastToFirst,
	EDynamicEntryPatternDirection_MAX,
};

// Enum FortniteUI.DateFormat
enum class DateFormat : uint8 {
	CountdownTextual,
	CountdownNumeric,
	CountdownNumUnder12Hours,
	Date,
	DateFormat_MAX,
};

// Enum FortniteUI.EFortExpeditionListSort
enum class EFortExpeditionListSort : uint8 {
	ByRating,
	ByDuration,
	ByName,
	EFortExpeditionListSort_MAX,
};

// Enum FortniteUI.EShareButtonType
enum class EShareButtonType : uint8 {
	IOS,
	Android,
	Generic,
	EShareButtonType_MAX,
};

// Enum FortniteUI.EFrontEndRewardType
enum class EFrontEndRewardType : uint8 {
	Mission,
	Quest,
	EpicNewQuest,
	Expedition,
	CollectionBook,
	MissionAlert,
	DifficultyIncrease,
	GiftBox,
	ItemCache,
	PhoenixLevelUp,
	EFrontEndRewardType_MAX,
};

// Enum FortniteUI.ESelectionState
enum class ESelectionState : uint8 {
	Unselected,
	Selected,
	CannotGift,
	ESelectionState_MAX,
};

// Enum FortniteUI.EFortHeroPerkDisplayType
enum class EFortHeroPerkDisplayType : uint8 {
	CommanderPerk,
	TeamPerk,
	ClassPerk,
	StandardPerk,
	Max_None,
	EFortHeroPerkDisplayType_MAX,
};

// Enum FortniteUI.EFortSupportPerkWidgetState
enum class EFortSupportPerkWidgetState : uint8 {
	Normal,
	Upgrade,
	Evolution,
	EFortSupportPerkWidgetState_MAX,
};

// Enum FortniteUI.ECenterPopupMessageStateEnum
enum class ECenterPopupMessageStateEnum : uint8 {
	NotVisible,
	WaitingForOutpostOwner,
	ECenterPopupMessageStateEnum_MAX,
};

// Enum FortniteUI.EBuildingFocusType
enum class EBuildingFocusType : uint8 {
	Contextual,
	Interactable,
	Normal,
	Count,
	EBuildingFocusType_MAX,
};

// Enum FortniteUI.EContextPositionPlatform
enum class EContextPositionPlatform : uint8 {
	NonMobile,
	Mobile,
	EContextPositionPlatform_MAX,
};

// Enum FortniteUI.EFortItemCountStyle
enum class EFortItemCountStyle : uint8 {
	StackCount,
	OverrideCount,
	StackCountOverOverride,
	EFortItemCountStyle_MAX,
};

// Enum FortniteUI.EFortItemManagementMode
enum class EFortItemManagementMode : uint8 {
	Details,
	Comparison,
	Mulch,
	EFortItemManagementMode_MAX,
};

// Enum FortniteUI.EPresentationMode
enum class EPresentationMode : uint8 {
	ItemList,
	VariantList,
	EPresentationMode_MAX,
};

// Enum FortniteUI.EItemContextAction
enum class EItemContextAction : uint8 {
	Equip,
	GoToBattlePassRewards,
	GoToBattlePassCustomization,
	Count,
	EItemContextAction_MAX,
};

// Enum FortniteUI.ESceneTransitionType
enum class ESceneTransitionType : uint8 {
	NoTransition,
	Clockwise,
	CounterClockwise,
	ESceneTransitionType_MAX,
};

// Enum FortniteUI.EFortKeybindForcedHoldStatus
enum class EFortKeybindForcedHoldStatus : uint8 {
	NoForcedHold,
	ForcedHold,
	NeverShowHold,
	EFortKeybindForcedHoldStatus_MAX,
};

// Enum FortniteUI.EFortLegacySlateWidget
enum class EFortLegacySlateWidget : uint8 {
	None,
	Minimap,
	MAX,
};

// Enum FortniteUI.ELocalUserOnlineStatus
enum class ELocalUserOnlineStatus : uint8 {
	Online,
	Offline,
	Away,
	ExtendedAway,
	DoNotDisturb,
	Chat,
	ELocalUserOnlineStatus_MAX,
};

// Enum FortniteUI.EFortLoginInteraction
enum class EFortLoginInteraction : uint8 {
	Begin,
	PlayedBefore,
	CredentialSelect,
	NamePassword,
	RedirectEpicAccount,
	AccountNotFound,
	CreateDisplayName,
	MultiFactorAuth,
	EULA,
	AccountLink,
	AccountPinLink,
	WebLogin,
	WebAccountCreation,
	AgeGate,
	EFortLoginInteraction_MAX,
};

// Enum FortniteUI.EFortModifiedStatus
enum class EFortModifiedStatus : uint8 {
	IsDefault,
	IsModified,
	Unsupported,
	EFortModifiedStatus_MAX,
};

// Enum FortniteUI.EFortMaterialProgressBarSectionOverflowBehavior
enum class EFortMaterialProgressBarSectionOverflowBehavior : uint8 {
	PreserveValues,
	ReverseCollapse,
	EFortMaterialProgressBarSectionOverflowBehavior_MAX,
};

// Enum FortniteUI.EFortMaterialProgressBarSectionColorNumber
enum class EFortMaterialProgressBarSectionColorNumber : uint8 {
	Color1,
	Color2,
	EFortMaterialProgressBarSectionColorNumber_MAX,
};

// Enum FortniteUI.EFortMaterialProgressBarSection
enum class EFortMaterialProgressBarSection : uint8 {
	Primary,
	Secondary,
	Tertiary,
	Negative,
	MAX_PROGRESS_BAR_SECTIONS,
	EFortMaterialProgressBarSection_MAX,
};

// Enum FortniteUI.EFortMissionActivationWidgetState
enum class EFortMissionActivationWidgetState : uint8 {
	Default,
	StartObjective,
	IncreaseDifficulty,
	Invalid,
	EFortMissionActivationWidgetState_MAX,
};

// Enum FortniteUI.EActionBindingComparisonType
enum class EActionBindingComparisonType : uint8 {
	NoneBound,
	AnyBound,
	AllBound,
	EActionBindingComparisonType_MAX,
};

// Enum FortniteUI.ETagComparisonType
enum class ETagComparisonType : uint8 {
	HasAny,
	HasAll,
	HasNone,
	ETagComparisonType_MAX,
};

// Enum FortniteUI.EFortFortMobileShareButtonOS
enum class EFortFortMobileShareButtonOS : uint8 {
	Android,
	iOS,
	EFortFortMobileShareButtonOS_MAX,
};

// Enum FortniteUI.EModalContainerSlot
enum class EModalContainerSlot : uint8 {
	Top,
	Middle,
	Bottom,
	Background,
	Max,
};

// Enum FortniteUI.EFortMtxOfferDisplaySize
enum class EFortMtxOfferDisplaySize : uint8 {
	Small,
	Medium,
	Large,
	EFortMtxOfferDisplaySize_MAX,
};

// Enum FortniteUI.EFortMtxStoreOfferType
enum class EFortMtxStoreOfferType : uint8 {
	FoundersPack,
	CurrencyPack,
	Unknown,
	Max_None,
	EFortMtxStoreOfferType_MAX,
};

// Enum FortniteUI.EFortNotificationEntryCompletionStatus
enum class EFortNotificationEntryCompletionStatus : uint8 {
	New,
	Active,
	Completed,
	MAX,
};

// Enum FortniteUI.ESettingType
enum class ESettingType : uint8 {
	None,
	Header,
	WindowMode,
	DisplayResolution,
	FrameRateLimit,
	VideoQuality,
	ThreeDResolution,
	ViewDistance,
	Shadows,
	AntiAliasing,
	Textures,
	Effects,
	PostProcessing,
	VSync,
	MotionBlur,
	ShowGrass,
	MobileFPSType,
	ShowFPS,
	AllowLowPower,
	AllowVideoPlayback,
	AllowDynamicResolution,
	AllowMultithreadedRendering,
	RenderingAPI,
	UseGPUCrashDebugging,
	RegionHeader,
	Language,
	Region,
	MouseSensitivityYaw,
	MouseSensitivityPitch,
	MouseSensitivityMultiplierForAircraft,
	TouchDragSensitivity,
	ControllerLookSensitivityYaw,
	ControllerLookSensitivityPitch,
	MouseTargetingMultiplier,
	MouseScopedMultiplier,
	GamepadTargetingMultiplier,
	GamepadScopedMultiplier,
	GamepadBuildingMultiplier,
	GamepadEditModeMultiplier,
	TouchLookAccelerationMultiplier,
	TouchDragTargetingSensitivity,
	TouchDragScopedSensitivity,
	TouchBuildingMultiplier,
	TouchEditModeMultiplier,
	TouchVerticalSensitivity,
	InvertPitch,
	InvertYaw,
	InvertPitchForMotion,
	InvertPitchForAircraftPrimary,
	InvertPitchForAircraftSecondary,
	InvertYawForMotion,
	GyroEnabled,
	GyroYawAxis,
	GyroSensitivity,
	GyroTargetingSensitivity,
	GyroScopedSensitivity,
	GyroHarvestingToolSensitivity,
	SafeZone,
	AnonymousMode,
	AnonymousCharacterMode,
	HideOtherPlayerNames,
	HiddenMatchmakingDelay,
	AutoJoinGameVoiceChannel,
	ShowVoiceIndicators,
	HUDScale,
	ShowViewerCount,
	FirstPersonCamera,
	PeripheralLighting,
	PingPlaceDangerMarkerWhenTargeting,
	ShowGlobalChat,
	ConsoleUnlockedFPS,
	ToggleSprint,
	SprintByDefault,
	SprintCancelsReload,
	TapInteract,
	InWorldInteract,
	ToggleTargeting,
	HoldToSwapPickup,
	AutoEquipBetterItems,
	EquipFirstBuildingPieceWhenSwappingQuickbars,
	EquipFirstBuildingPieceWhenSwappingQuickbarsAthena,
	DisablePreEditsWhenPlacingBuilding,
	AimAssist,
	EditModeAimAssist,
	TouchEdit,
	EditConfirmOnRelease,
	QuickEdit,
	TurboBuild,
	CreativeTurboDelete,
	AutoChangeMaterial,
	GamepadAutoRun,
	CrossplayPreference,
	AutoOpenDoors,
	AutoPickupWeapons,
	AutoPickupWeaponsConsolePC,
	AutoSortConsumablesToRight,
	EnableTryBuildOnFocus,
	EditButtonHoldTime,
	AccessoriesHeader,
	ForceFeedback,
	ContextTutorial,
	ReplayRecording,
	ReplayRecordingLargeTeams,
	ReplayRecordingCreativeMode,
	UsePowerSavingMode,
	ShadowPlayHighlights,
	ShowTemperature,
	BuildingPossession,
	GammaValue,
	MusicVolume,
	SoundFXVolume,
	DialogVolume,
	VoiceChatVolume,
	CinematicsVolume,
	Subtitles,
	Quality,
	VoiceChat,
	PushToTalk,
	ProximityVoiceChat,
	VoiceChatInputDevice,
	VoiceChatOutputDevice,
	AllowBackgroundAudio,
	ColorBlindMode,
	ColorBlindStrength,
	IgnoreGamepadInput,
	LockPrimaryInputMethodToMouse,
	EnableRudderControl,
	RudderDeadZone,
	RudderMaxThrottle,
	VisualizeSoundEffects,
	VisualizeSoundEffectsHeader,
	MoveStickDeadZone,
	LookStickDeadZone,
	LookSensitivityPreset,
	LookSensitivityPresetAds,
	LookBuildModeMultiplier,
	LookEditModeMultiplier,
	UseAdvancedOptions,
	LookHorizontalSpeed,
	LookVerticalSpeed,
	LookHorizontalSpeedAds,
	LookVerticalSpeedAds,
	LookHorizontalBoostSpeed,
	LookVerticalBoostSpeed,
	LookBoostAccelerationTime,
	LookHorizontalBoostSpeedAds,
	LookVerticalBoostSpeedAds,
	LookBoostAccelerationTimeAds,
	InstantBoostWhenBuilding,
	LookEaseTime,
	LookInputCurve,
	AimAssistStrength,
	UseLegacyControls,
	PlayerSurveysAllowed,
	NotifyWhenPlaying,
	LocalNotifications,
	FireMode,
	COUNT,
	ESettingType_MAX,
};

// Enum FortniteUI.ESettingTab
enum class ESettingTab : uint8 {
	None,
	Video,
	Game,
	GameUI,
	Brightness,
	Audio,
	Accessibility,
	Input,
	MouseAndKeyboard,
	Controller,
	ControllerSensitivity,
	TouchAndMotion,
	Account,
	CreativeWorld,
	CreativePlayer,
	ESettingTab_MAX,
};

// Enum FortniteUI.EParentalControlsViewState
enum class EParentalControlsViewState : uint8 {
	Invalid,
	EnterPin,
	AskToEnableControls,
	VerifyEmail,
	SetupEmail,
	SetupPin,
	DisplaySettings,
	DisableParentalControls,
	AskToReEnable,
	ReEnabling,
	EParentalControlsViewState_MAX,
};

// Enum FortniteUI.EFortPerksWidgetState
enum class EFortPerksWidgetState : uint8 {
	Normal,
	Upgrade,
	Evolution,
	EFortPerksWidgetState_MAX,
};

// Enum FortniteUI.ESaveProfileForBanners
enum class ESaveProfileForBanners : uint8 {
	SaveTheWorld,
	BattleRoyale,
	ESaveProfileForBanners_MAX,
};

// Enum FortniteUI.EFortPlayerSurveyAggregateOp
enum class EFortPlayerSurveyAggregateOp : uint8 {
	Sum,
	Max,
};

// Enum FortniteUI.EFortPlayerSurveyAthenaSeasonStat
enum class EFortPlayerSurveyAthenaSeasonStat : uint8 {
	XP,
	Level,
	BookXP,
	BookLevel,
	EFortPlayerSurveyAthenaSeasonStat_MAX,
};

// Enum FortniteUI.EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType
enum class EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType : uint8 {
	Unknown,
	ChoiceButton,
	EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType_MAX,
};

// Enum FortniteUI.EFortPlayerSurveyCMSDataAggregateOp
enum class EFortPlayerSurveyCMSDataAggregateOp : uint8 {
	s,
	mx,
	EFortPlayerSurveyCMSDataAggregateOp_MAX,
};

// Enum FortniteUI.EFortPlayerSurveyCMSDataAthenaSeasonStat
enum class EFortPlayerSurveyCMSDataAthenaSeasonStat : uint8 {
	sx,
	sl,
	bx,
	bl,
	EFortPlayerSurveyCMSDataAthenaSeasonStat_MAX,
};

// Enum FortniteUI.EFortPlayerSurveyCMSDataBinaryComparisonOp
enum class EFortPlayerSurveyCMSDataBinaryComparisonOp : uint8 {
	e,
	n,
	l,
	g,
	le,
	ge,
	EFortPlayerSurveyCMSDataBinaryComparisonOp_MAX,
};

// Enum FortniteUI.EFortPlayerSurveyCMSDataGameMode
enum class EFortPlayerSurveyCMSDataGameMode : uint8 {
	c,
	a,
	pc,
	EFortPlayerSurveyCMSDataGameMode_MAX,
};

// Enum FortniteUI.EFortPlayerSurveyCMSDataGameplayTagQueryExprType
enum class EFortPlayerSurveyCMSDataGameplayTagQueryExprType : uint8 {
	n,
	s,
	a,
	EFortPlayerSurveyCMSDataGameplayTagQueryExprType_MAX,
};

// Enum FortniteUI.EFortPlayerSurveyCMSDataPlaylistCategory
enum class EFortPlayerSurveyCMSDataPlaylistCategory : uint8 {
	a,
	s,
	d,
	q,
	lt,
	c,
	pl,
	EFortPlayerSurveyCMSDataPlaylistCategory_MAX,
};

// Enum FortniteUI.EFortPlayerSurveyCMSDataPresentationStyle
enum class EFortPlayerSurveyCMSDataPresentationStyle : uint8 {
	standard,
	rating,
	EFortPlayerSurveyCMSDataPresentationStyle_MAX,
};

// Enum FortniteUI.EFortPlayerSurveyCMSDataQuestState
enum class EFortPlayerSurveyCMSDataQuestState : uint8 {
	i,
	a,
	co,
	cl,
	EFortPlayerSurveyCMSDataQuestState_MAX,
};

// Enum FortniteUI.EFortPlayerSurveyCMSDataRelativeSurveyKeyType
enum class EFortPlayerSurveyCMSDataRelativeSurveyKeyType : uint8 {
	s,
	a,
	o,
	EFortPlayerSurveyCMSDataRelativeSurveyKeyType_MAX,
};

// Enum FortniteUI.EFortPlayerSurveyCMSDataTrigger
enum class EFortPlayerSurveyCMSDataTrigger : uint8 {
	rm,
	EFortPlayerSurveyCMSDataTrigger_MAX,
};

// Enum FortniteUI.EFortPlayerSurveyPlaylistCategory
enum class EFortPlayerSurveyPlaylistCategory : uint8 {
	All,
	Solo,
	Duo,
	Squad,
	LTM,
	Creative,
	Playground,
	EFortPlayerSurveyPlaylistCategory_MAX,
};

// Enum FortniteUI.EFortPlayerSurveyQuestionType
enum class EFortPlayerSurveyQuestionType : uint8 {
	SingleChoice,
	MultipleChoice,
	Rating,
	EFortPlayerSurveyQuestionType_MAX,
};

// Enum FortniteUI.EFortPlayerSurveyResponseChoiceType
enum class EFortPlayerSurveyResponseChoiceType : uint8 {
	CheckBox,
	Radio,
	EFortPlayerSurveyResponseChoiceType_MAX,
};

// Enum FortniteUI.EFortPlayerSurveyTrigger
enum class EFortPlayerSurveyTrigger : uint8 {
	Invalid,
	Any,
	ReturnToMainMenu,
	EFortPlayerSurveyTrigger_MAX,
};

// Enum FortniteUI.EPostGameScreenContinueBehavior
enum class EPostGameScreenContinueBehavior : uint8 {
	Next,
	Previous,
	EPostGameScreenContinueBehavior_MAX,
};

// Enum FortniteUI.EPurchaseReturnStep
enum class EPurchaseReturnStep : uint8 {
	ItemSelection,
	ReasonSelection,
	FinalSubmission,
	EPurchaseReturnStep_MAX,
};

// Enum FortniteUI.ECalloutNavigationDirection
enum class ECalloutNavigationDirection : uint8 {
	Previous,
	Next,
	ECalloutNavigationDirection_MAX,
};

// Enum FortniteUI.EFortRadialControllingStick
enum class EFortRadialControllingStick : uint8 {
	Right,
	Left,
	EFortRadialControllingStick_MAX,
};

// Enum FortniteUI.ERedeemCodeFailureReason
enum class ERedeemCodeFailureReason : uint8 {
	InvalidCode,
	CodeAlreadyUsed,
	AlreadyHasAccess,
	FailedToGetItem,
	Unknown,
	ERedeemCodeFailureReason_MAX,
};

// Enum FortniteUI.EFortRewardItemType
enum class EFortRewardItemType : uint8 {
	RewardedBadges,
	MissedBadges,
	RewardedItems,
	RewardedAccountItems,
	EFortRewardItemType_MAX,
};

// Enum FortniteUI.EFortServerBrowserAction
enum class EFortServerBrowserAction : uint8 {
	BattleLabServerCreate,
	PlaygroundServerCreate,
	CreativeServerCreate,
	Play,
	CreativeIslandCode,
	CreativeDiscovery,
	EFortServerBrowserAction_MAX,
};

// Enum FortniteUI.EFortServerItemIneligibleReason
enum class EFortServerItemIneligibleReason : uint8 {
	None,
	PartyTooBig,
	PartyTooSmall,
	NotPartyLeader,
	MatchmakingAlready,
	NotSupportedByLeto,
	InvalidData,
	EFortServerItemIneligibleReason_MAX,
};

// Enum FortniteUI.EFortSettingGameVisibility
enum class EFortSettingGameVisibility : uint8 {
	None,
	Campaign,
	Athena,
	EFortSettingGameVisibility_MAX,
};

// Enum FortniteUI.EFortShowdownPinState
enum class EFortShowdownPinState : uint8 {
	None,
	Locked,
	Unlocked,
	EFortShowdownPinState_MAX,
};

// Enum FortniteUI.EFortEventWindowEligibility
enum class EFortEventWindowEligibility : uint8 {
	Unknown,
	Public,
	Private,
	Locked,
	EFortEventWindowEligibility_MAX,
};

// Enum FortniteUI.EFortShowdownEventState
enum class EFortShowdownEventState : uint8 {
	Unknown,
	FutureTBD,
	FutureScheduled,
	FutureNext,
	Live,
	LiveParticipating,
	LiveNotParticipating,
	Completed,
	CompletedParticipated,
	CompletedNotPartipated,
	Cancelled,
	EFortShowdownEventState_MAX,
};

// Enum FortniteUI.EFortShowdownMatchType
enum class EFortShowdownMatchType : uint8 {
	Unknown,
	Solo,
	Duos,
	Squads,
	EFortShowdownMatchType_MAX,
};

// Enum FortniteUI.EFortDateTimeStyle
enum class EFortDateTimeStyle : uint8 {
	Default,
	Short,
	Medium,
	Long,
	Full,
	EFortDateTimeStyle_MAX,
};

// Enum FortniteUI.ERadialOrderingMode
enum class ERadialOrderingMode : uint8 {
	CounterClockwise,
	Clockwise,
	Cardinal,
	Custom,
	ERadialOrderingMode_MAX,
};

// Enum FortniteUI.ECardinalPoint
enum class ECardinalPoint : uint8 {
	E,
	NE,
	N,
	NW,
	W,
	SW,
	S,
	SE,
	None,
	ECardinalPoint_MAX,
};

// Enum FortniteUI.ESocialImportPanelType
enum class ESocialImportPanelType : uint8 {
	Athena,
	SaveTheWorld,
	ESocialImportPanelType_MAX,
};

// Enum FortniteUI.EFriendLinkShareButtonType
enum class EFriendLinkShareButtonType : uint8 {
	IOS,
	Android,
	Generic,
	EFriendLinkShareButtonType_MAX,
};

// Enum FortniteUI.EListHeaderType
enum class EListHeaderType : uint8 {
	TeamMember,
	PartyMember,
	JoinableParty,
	PlatformOnlineFriend,
	McpOnlineFriend,
	OfflineFriend,
	Blocked,
	FriendInvite,
	SuggestedFriend,
	RecentPlayer,
	SearchResults,
	JoinRequests,
	Invalid,
	EListHeaderType_MAX,
};

// Enum FortniteUI.EFortSquadSlottingRestrictionReason
enum class EFortSquadSlottingRestrictionReason : uint8 {
	ItemIsInInventoryOverflow,
	MandatorySlotWouldBeEmptied,
	ItemIsOnActiveExpedition,
	HeroRequiresMissingGameplayTag,
	HeroAlreadyEquippedInLoadout,
	EFortSquadSlottingRestrictionReason_MAX,
};

// Enum FortniteUI.EPauseType
enum class EPauseType : uint8 {
	NoPause,
	Rare,
	New,
	NewAndRare,
	EPauseType_MAX,
};

// Enum FortniteUI.ECardPackPurchaseError
enum class ECardPackPurchaseError : uint8 {
	PendingServerConfirmation,
	CannotAffordItem,
	NoneLeft,
	PurchaseAlreadyPending,
	NoConnection,
	ECardPackPurchaseError_MAX,
};

// Enum FortniteUI.ESubgameTileType
enum class ESubgameTileType : uint8 {
	Campaign,
	Athena,
	Creative,
	ESubgameTileType_MAX,
};

// Enum FortniteUI.ESubgameLoadFromCMS
enum class ESubgameLoadFromCMS : uint8 {
	DoNotLoadFromCMS,
	LoadImageFromCMS,
	ESubgameLoadFromCMS_MAX,
};

// Enum FortniteUI.ESubscriptionCancellability
enum class ESubscriptionCancellability : uint8 {
	NotCancellable,
	CancellabeOnPlatform,
	CancellableAnywhere,
	ESubscriptionCancellability_MAX,
};

// Enum FortniteUI.EFortUISurvivorSquadMatchType
enum class EFortUISurvivorSquadMatchType : uint8 {
	Multi,
	Single,
	Summary,
	Max_None,
	EFortUISurvivorSquadMatchType_MAX,
};

// Enum FortniteUI.ETouchState
enum class ETouchState : uint8 {
	None,
	WaitingForStart,
	Started,
	Active,
	COUNT,
	ETouchState_MAX,
};

// Enum FortniteUI.EFortControlType
enum class EFortControlType : uint8 {
	None,
	CameraAndMovement,
	Picking,
	COUNT,
	EFortControlType_MAX,
};

// Enum FortniteUI.EFortTouchControlRegion
enum class EFortTouchControlRegion : uint8 {
	MovePlayer,
	RotateCamera,
	NoRegion,
	COUNT,
	EFortTouchControlRegion_MAX,
};

// Enum FortniteUI.ETournmentPosterViolatorState
enum class ETournmentPosterViolatorState : uint8 {
	Hidden,
	Live,
	Countdown,
	Info,
	ETournmentPosterViolatorState_MAX,
};

// Enum FortniteUI.EFortNamedBundle
enum class EFortNamedBundle : uint8 {
	Menu,
	MenuCampaign,
	MenuAthena,
	Zone,
	ZoneCampaign,
	ZoneAthena,
	Client,
	ClientCampaign,
	ClientAthena,
	EFortNamedBundle_MAX,
};

// Enum FortniteUI.EFortReturnToFrontendBehavior
enum class EFortReturnToFrontendBehavior : uint8 {
	NotSpecified,
	HomeScreen,
	MapScreen,
	MapScreenWithAutoLaunch,
	MapScreenWithMinimalAutoLaunch,
	EFortReturnToFrontendBehavior_MAX,
};

// Enum FortniteUI.ELetoDisplayMode
enum class ELetoDisplayMode : uint8 {
	PrimaryOnly,
	SingleToggle,
	Simultaneous,
	ELetoDisplayMode_MAX,
};

// Enum FortniteUI.EFortUINavigationOp
enum class EFortUINavigationOp : uint8 {
	PopContentStack,
	FeatureSwitch,
	NavigateToSkillTree,
	NavigateToSquadSlot,
	NavigateToQuest,
	NavigateToItemManagement,
	NavigateToExpeditions,
	NavigateToCollectionBook,
	None,
	EFortUINavigationOp_MAX,
};

// Enum FortniteUI.EFortLoginStage
enum class EFortLoginStage : uint8 {
	Begin,
	SplashScreen,
	UpdateCheck,
	SignIn,
	PostSignin,
	SafeZoneEditor,
	Benchmark,
	RejoinCheck,
	LoadingAthenaProfile,
	HealthWarning,
	WaitingForDynamicContent,
	Complete,
	EFortLoginStage_MAX,
};

// Enum FortniteUI.EFortLoginDisplay
enum class EFortLoginDisplay : uint8 {
	LoginStatus,
	SplashScreen,
	SignIn,
	SafeZoneEditor,
	HealthWarning,
	EFortLoginDisplay_MAX,
};

// Enum FortniteUI.EFortLoginAccountType
enum class EFortLoginAccountType : uint8 {
	None,
	EpicAccount,
	Facebook,
	Google,
	PSN,
	XBLive,
	Erebus,
	EFortLoginAccountType_MAX,
};

// Enum FortniteUI.EPlayerReportReasons
enum class EPlayerReportReasons : uint8 {
	None,
	Communication,
	Offensive,
	AFK,
	IgnoringObjective,
	Harassment,
	Exploiting,
	TradeScam,
	CommunicationsAbuse,
	OffensiveName,
	TeamingUpWithEnemies,
	InappropriateContent,
	ExploitingOrHacking,
	Harassment_Threatening,
	Harassment_Annoying,
	Harassment_Selling,
	Harassment_Verbal,
	Harassment_GameBehavior,
	EPlayerReportReasons_MAX,
};

// Enum FortniteUI.EFortComparisonType
enum class EFortComparisonType : uint8 {
	None,
	HigherValue,
	LowerValue,
	Upgrade,
	EFortComparisonType_MAX,
};

// Enum FortniteUI.EFortClampState
enum class EFortClampState : uint8 {
	NoClamp,
	MinClamp,
	MaxClamp,
	EFortClampState_MAX,
};

// Enum FortniteUI.EFortBuffState
enum class EFortBuffState : uint8 {
	NoChange,
	Better,
	Worse,
	EFortBuffState_MAX,
};

// Enum FortniteUI.EFortStatValueDisplayType
enum class EFortStatValueDisplayType : uint8 {
	BasicPaired,
	BasicSingle,
	Unique,
	ElementalFire,
	ElementalIce,
	ElementalElectric,
	EFortStatValueDisplayType_MAX,
};

// Enum FortniteUI.EFortAnimSpeed
enum class EFortAnimSpeed : uint8 {
	Instant,
	Fast,
	Normal,
	EFortAnimSpeed_MAX,
};

// Enum FortniteUI.EFortSocialPanelTab
enum class EFortSocialPanelTab : uint8 {
	PartyInvitations,
	Friends,
	RecentPlayers,
	Max,
};

// Enum FortniteUI.EFortSocialPanelType
enum class EFortSocialPanelType : uint8 {
	Join,
	Invite,
	Max,
};

// Enum FortniteUI.EModalContainerSize
enum class EModalContainerSize : uint8 {
	ExtraSmall,
	Small,
	Medium,
	Large,
	Max,
};

// Enum FortniteUI.ENotificationType
enum class ENotificationType : uint8 {
	Basic,
	Friends,
	ENotificationType_MAX,
};

// Enum FortniteUI.ENotificationResult
enum class ENotificationResult : uint8 {
	Confirmed,
	Declined,
	Unknown,
	ENotificationResult_MAX,
};

// Enum FortniteUI.EFortInventoryContext
enum class EFortInventoryContext : uint8 {
	Game,
	Lobby,
	FrontEnd,
	Pickup,
	EFortInventoryContext_MAX,
};

// Enum FortniteUI.EFortToastType
enum class EFortToastType : uint8 {
	Default,
	Subdued,
	Impactful,
	EFortToastType_MAX,
};

// Enum FortniteUI.EUpgradeInfoImageSize
enum class EUpgradeInfoImageSize : uint8 {
	Small,
	Large,
	EUpgradeInfoImageSize_MAX,
};

// Enum FortniteUI.EChannelSpeakerStyle
enum class EChannelSpeakerStyle : uint8 {
	InGame,
	InLobby,
	OutOfClient,
	Max,
};

// Enum FortniteUI.EHeistExitCraftIconState
enum class EHeistExitCraftIconState : uint8 {
	None,
	Incoming,
	Spawned,
	Exited,
	EHeistExitCraftIconState_MAX,
};

// Enum FortniteUI.EHeistBlingIconState
enum class EHeistBlingIconState : uint8 {
	None,
	SupplyDrop,
	PickupItem,
	CarriedEnemy,
	CarriedAlly,
	EHeistBlingIconState_MAX,
};

// Enum FortniteUI.EHeistExitCraftUIState
enum class EHeistExitCraftUIState : uint8 {
	None,
	OnTheWay,
	Incoming,
	Arrived,
	EHeistExitCraftUIState_MAX,
};

// Enum FortniteUI.ENumericalIndicatorActionType
enum class ENumericalIndicatorActionType : uint8 {
	Adding,
	Removing,
	Nothing,
	ENumericalIndicatorActionType_MAX,
};

// Enum FortniteUI.ELinkAcrossSimpleAction
enum class ELinkAcrossSimpleAction : uint8 {
	AddToAll,
	RemovedFromAll,
	Custom,
	Nothing,
	ELinkAcrossSimpleAction_MAX,
};

// Enum FortniteUI.EHUDLayoutToolPopupType
enum class EHUDLayoutToolPopupType : uint8 {
	Warning,
	Generic,
	EHUDLayoutToolPopupType_MAX,
};

// Enum FortniteUI.EHUDLayoutToolTextInputPopupType
enum class EHUDLayoutToolTextInputPopupType : uint8 {
	Rename,
	ImportLayoutID,
	EHUDLayoutToolTextInputPopupType_MAX,
};

// Enum FortniteUI.EHUDLayoutToolToasterType
enum class EHUDLayoutToolToasterType : uint8 {
	Success,
	Failure,
	LocalFailure,
	CloudFailure,
	EHUDLayoutToolToasterType_MAX,
};

// Enum FortniteUI.ELiveStreamStandaloneBlocked
enum class ELiveStreamStandaloneBlocked : uint8 {
	StreamInWorldActive,
	ELiveStreamStandaloneBlocked_MAX,
};

// Enum FortniteUI.EMatchmakingInputSource
enum class EMatchmakingInputSource : uint8 {
	Local,
	Remote,
	Pool,
	EMatchmakingInputSource_MAX,
};

// Enum FortniteUI.ESpectatorLeaderboardEntryType
enum class ESpectatorLeaderboardEntryType : uint8 {
	ScoreWithEndScore,
	NoEndScore,
	Time,
	Invalid,
	ESpectatorLeaderboardEntryType_MAX,
};

// Enum FortniteUI.EMinigameCaptureObjectiveIconState
enum class EMinigameCaptureObjectiveIconState : uint8 {
	NotCaptured,
	Captured,
	EMinigameCaptureObjectiveIconState_MAX,
};

// Enum FortniteUI.EFortPlayerFeedbackFlags
enum class EFortPlayerFeedbackFlags : uint8 {
	SubscreenFlow_ForceDisplayFreeText,
	SubscreenFlow_IncludeScreenshotSubscreen,
	DoNotDisplay_SaveTheWorld,
	DoNotDisplay_Athena,
	DoNotDisplay_Creative,
	Submit_TryDisplayBlockUser,
	Submit_TryDisplayCommunityRulesURL,
	Filter_AddSidekick,
	Filter_OnlySidekick,
	EFortPlayerFeedbackFlags_MAX,
};

// Enum FortniteUI.EPlayerFeedback_EpicQAState
enum class EPlayerFeedback_EpicQAState : uint8 {
	SignInPage,
	SigningInFailed,
	SigningIn,
	SelectBugComponent,
	EPlayerFeedback_MAX,
};

// Enum FortniteUI.EPlayerFeedbackSubmitState
enum class EPlayerFeedbackSubmitState : uint8 {
	Start,
	Submitting,
	SubmitFailed,
	SubmitSucceeded,
	EPlayerFeedbackSubmitState_MAX,
};

// Enum FortniteUI.EFortPrioritizedWidgetInterruptedBehavior
enum class EFortPrioritizedWidgetInterruptedBehavior : uint8 {
	RemainInQueue,
	Drop,
	EFortPrioritizedWidgetInterruptedBehavior_MAX,
};

// Enum FortniteUI.EFortPrioritizedWidgetContestedBehavior
enum class EFortPrioritizedWidgetContestedBehavior : uint8 {
	QueueBehind,
	StompOther,
	EFortPrioritizedWidgetContestedBehavior_MAX,
};

// Enum FortniteUI.EFortPrioritizedWidgetPriority
enum class EFortPrioritizedWidgetPriority : uint8 {
	Priority_1,
	Priority_2,
	Priority_3,
	Priority_4,
	Priority_5,
	Priority_6,
	NumberOfPrios,
};

// Enum FortniteUI.ECooldownTrackingType
enum class ECooldownTrackingType : uint8 {
	Cue,
	AbilityCooldownTags,
	COUNT,
	ECooldownTrackingType_MAX,
};

// Enum FortniteUI.ESidekickVoiceChatVideoContentType
enum class ESidekickVoiceChatVideoContentType : uint8 {
	Default,
	Screencast,
	ESidekickVoiceChatVideoContentType_MAX,
};

// Enum FortniteUI.ESidekickVoiceChatVideoStatus
enum class ESidekickVoiceChatVideoStatus : uint8 {
	Enabled,
	Disabled,
	NetworkDisabled,
	BackgroundDisabled,
	ESidekickVoiceChatVideoStatus_MAX,
};

// Enum FortniteUI.ESidekickVoiceChatAudioStatus
enum class ESidekickVoiceChatAudioStatus : uint8 {
	Enabled,
	Disabled,
	ESidekickVoiceChatAudioStatus_MAX,
};

// Enum FortniteUI.ESpatialCustomizationRoomState
enum class ESpatialCustomizationRoomState : uint8 {
	None,
	CategorySelection,
	CustomizationSelection,
	ESpatialCustomizationRoomState_MAX,
};

// Enum FortniteUI.ESpatialCustomizationCategoryState
enum class ESpatialCustomizationCategoryState : uint8 {
	LockedByBattlePass,
	LockedByChallenge,
	LockedByChallengeCompletion,
	UnlockAvailable,
	UnlockUsed,
	Max_NONE,
	ESpatialCustomizationCategoryState_MAX,
};

// Enum FortniteUI.ESpatialStyleCharacterUnlockPrerequisite
enum class ESpatialStyleCharacterUnlockPrerequisite : uint8 {
	BattlepassPurchase,
	BattlepassLevel,
	ESpatialStyleCharacterUnlockPrerequisite_MAX,
};

// Enum FortniteUI.ESubscriptionDisclaimerState
enum class ESubscriptionDisclaimerState : uint8 {
	None,
	Asterisk,
	Received,
	ESubscriptionDisclaimerState_MAX,
};

// Enum FortniteUI.ETDMScoreProgressTypes
enum class ETDMScoreProgressTypes : uint8 {
	None,
	ProgressSoundMild,
	ProgressSoundMedium,
	ProgressSoundStrong,
	CountdownSoundNormal,
	CountdownSoundStrong,
	ETDMScoreProgressTypes_MAX,
};

// Enum FortniteUI.EFortEarnedSubRewardType
enum class EFortEarnedSubRewardType : uint8 {
	XP,
	Bars,
	EFortEarnedSubRewardType_MAX,
};

// ScriptStruct FortniteUI.FortTabListRegistrationInfo
// Size: 0xc8 (Inherited: 0x00)
struct FFortTabListRegistrationInfo {
	struct FName TabNameID; // 0x00(0x08)
	bool bHidden; // 0x08(0x01)
	bool bAllowedInZone; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FFortTabButtonLabelInfo TabLabelInfo; // 0x10(0xa0)
	struct UCommonButtonLegacy* TabButtonType; // 0xb0(0x08)
	struct UCommonUserWidget* TabContentType; // 0xb8(0x08)
	struct UWidget* CreatedTabContentWidget; // 0xc0(0x08)
};

// ScriptStruct FortniteUI.FortTabButtonLabelInfo
// Size: 0xa0 (Inherited: 0x00)
struct FFortTabButtonLabelInfo {
	struct FText DisplayName; // 0x00(0x18)
	struct FSlateBrush IconBrush; // 0x18(0x88)
};

// ScriptStruct FortniteUI.AthenaWinnerInfo
// Size: 0x20 (Inherited: 0x00)
struct FAthenaWinnerInfo {
	struct FString BigNameWinnerName; // 0x00(0x10)
	struct TArray<struct FString> WinnerNames; // 0x10(0x10)
};

// ScriptStruct FortniteUI.FortBackendVersion
// Size: 0x98 (Inherited: 0x00)
struct FFortBackendVersion {
	char pad_0[0x98]; // 0x00(0x98)
};

// ScriptStruct FortniteUI.FortUIFeatureStruct
// Size: 0x18 (Inherited: 0x00)
struct FFortUIFeatureStruct {
	enum class EFortUIFeatureState CurrentState; // 0x00(0x01)
	enum class EFortUIFeatureState ForcedState; // 0x01(0x01)
	enum class EFortUIFeatureStateReason ForcedStateReason; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FMulticastInlineDelegate ChangeDelegate; // 0x08(0x10)
};

// ScriptStruct FortniteUI.FortFocusedBuildingInfo
// Size: 0x38 (Inherited: 0x00)
struct FFortFocusedBuildingInfo {
	bool bIsInteractable; // 0x00(0x01)
	bool bCanBePlayerEdited; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FVector IndicatorRelativeLocation; // 0x04(0x0c)
	enum class EFortBuildingHealthDisplayRule HealthDisplayRule; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float MaxHealth; // 0x14(0x04)
	bool bIsAnyTrapAttached; // 0x18(0x01)
	bool bIsTrapAttachedFacingPlayer; // 0x19(0x01)
	bool bIsPreviewTrapAttached; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	float AttachedTrapMaxDurability; // 0x1c(0x04)
	enum class EFortBuildingInteraction InteractionType; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t InteractionCost; // 0x24(0x04)
	enum class EFortResourceType BuildingMaterial; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FName QuickEditClass; // 0x2c(0x08)
	bool bIsPlayerBuilt; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct FortniteUI.FortHUDState
// Size: 0x04 (Inherited: 0x00)
struct FFortHUDState {
	char bInBuildMode : 1; // 0x00(0x01)
	char bInCombatMode : 1; // 0x00(0x01)
	char bInEditMode : 1; // 0x00(0x01)
	char bInCreativeMode : 1; // 0x00(0x01)
	char bInBattleLabMode : 1; // 0x00(0x01)
	char bIsParachuteOpen : 1; // 0x00(0x01)
	char bIsFreeFalling : 1; // 0x00(0x01)
	char bInLockedBus : 1; // 0x00(0x01)
	char bInUnlockedBus : 1; // 0x01(0x01)
	char bOnTargeting : 1; // 0x01(0x01)
	char bOnUsingScopeTargeting : 1; // 0x01(0x01)
	char bOnCanTarget : 1; // 0x01(0x01)
	char bOnCanUseScopeTargeting : 1; // 0x01(0x01)
	char bOnCanUseSecondaryAbility : 1; // 0x01(0x01)
	char bCanOpenChute : 1; // 0x01(0x01)
	char bCrouching : 1; // 0x01(0x01)
	char bDBNO : 1; // 0x02(0x01)
	char bIsControllingRCPawn : 1; // 0x02(0x01)
	char bIsInVehicle : 1; // 0x02(0x01)
	char bIsDrivingVehicle : 1; // 0x02(0x01)
	char bCanSwapSeats : 1; // 0x02(0x01)
	char bIsCarryingDBNO : 1; // 0x02(0x01)
	char bIsCarryingHeldObject : 1; // 0x02(0x01)
	char bIsZiplining : 1; // 0x02(0x01)
	char bIsCreativeFlying : 1; // 0x03(0x01)
	char pad_3_1 : 7; // 0x03(0x01)
};

// ScriptStruct FortniteUI.FortItemListFilter
// Size: 0x18 (Inherited: 0x00)
struct FFortItemListFilter {
	struct FString SearchText; // 0x00(0x10)
	enum class EFortInventoryFilter FilterType; // 0x10(0x01)
	bool bInStorageVault; // 0x11(0x01)
	bool bIncludeVaultOverflow; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct FortniteUI.FortUIPerk
// Size: 0x98 (Inherited: 0x00)
struct FFortUIPerk {
	struct FFortSpecializationSlot SpecializationSlot; // 0x00(0x88)
	struct UFortHero* Hero; // 0x88(0x08)
	enum class EFortItemTier Tier; // 0x90(0x01)
	enum class EFortSupportBonusType SupportBonusType; // 0x91(0x01)
	bool bIsTierPerk; // 0x92(0x01)
	bool bIsUpgrade; // 0x93(0x01)
	bool bIsEvolution; // 0x94(0x01)
	bool bIsEvolutionBranch; // 0x95(0x01)
	char pad_96[0x2]; // 0x96(0x02)
};

// ScriptStruct FortniteUI.FortAttributeModifierDisplayData
// Size: 0xc0 (Inherited: 0x00)
struct FFortAttributeModifierDisplayData {
	struct FGameplayAttribute Attribute; // 0x00(0x38)
	float Value; // 0x38(0x04)
	enum class EGameplayModOp ModifierType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FGameplayTagRequirements SourceTags; // 0x40(0x40)
	struct FGameplayTagRequirements TargetTags; // 0x80(0x40)
};

// ScriptStruct FortniteUI.FortUIStatStyle
// Size: 0xc0 (Inherited: 0x00)
struct FFortUIStatStyle {
	struct FText Name; // 0x00(0x18)
	struct FText HighestText; // 0x18(0x18)
	struct FSlateBrush Icon; // 0x30(0x88)
	enum class ECommonNumericType NumericType; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float MinimalNotableValue; // 0xbc(0x04)
};

// ScriptStruct FortniteUI.FortStateStyle
// Size: 0x350 (Inherited: 0x00)
struct FFortStateStyle {
	struct FFortMultiSizeBrush Brush; // 0x00(0x330)
	struct FLinearColor PrimaryColor; // 0x330(0x10)
	struct FLinearColor SecondaryColor; // 0x340(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyConditionsContextLegacy
// Size: 0x28 (Inherited: 0x00)
struct FFortPlayerSurveyConditionsContextLegacy {
	char pad_0[0x8]; // 0x00(0x08)
	struct UPlayer* Player; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
	struct UFortPlayerSurveyContext* Context; // 0x20(0x08)
};

// ScriptStruct FortniteUI.FortAthenaItemManagementInventoryFilterTabLabelInfo
// Size: 0xc8 (Inherited: 0xa0)
struct FFortAthenaItemManagementInventoryFilterTabLabelInfo : FFortTabButtonLabelInfo {
	struct FName FilterTabNameId; // 0xa0(0x08)
	bool bAllowEmptySlotItem; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FText EmptyFilterDisplay; // 0xb0(0x18)
};

// ScriptStruct FortniteUI.FortPostGameScreenConfig
// Size: 0x04 (Inherited: 0x00)
struct FFortPostGameScreenConfig {
	enum class EPostGameClickCatcherMode ClickCatcherState; // 0x00(0x01)
	enum class EPostGameHUDMode PostGameHUDMode; // 0x01(0x01)
	bool bSohwCinematicBars; // 0x02(0x01)
	bool bShowPlacementOverlay; // 0x03(0x01)
};

// ScriptStruct FortniteUI.PrimaryContentSetup
// Size: 0x01 (Inherited: 0x00)
struct FPrimaryContentSetup {
	bool ShowBottomBar; // 0x00(0x01)
};

// ScriptStruct FortniteUI.CardPackOffer
// Size: 0x78 (Inherited: 0x00)
struct FCardPackOffer {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	int32_t MtxPrice; // 0x30(0x04)
	enum class ECatalogSaleType SaleType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct FText SaleText; // 0x38(0x18)
	int32_t Price; // 0x50(0x04)
	int32_t RegularPrice; // 0x54(0x04)
	struct UFortAccountItemDefinition* CurrencyType; // 0x58(0x08)
	int32_t QuantityRemaining; // 0x60(0x04)
	bool bTimedOffer; // 0x64(0x01)
	char pad_65[0x13]; // 0x65(0x13)
};

// ScriptStruct FortniteUI.UINavigationData
// Size: 0x30 (Inherited: 0x00)
struct FUINavigationData {
	struct FText DisplayName; // 0x00(0x18)
	struct UObject* ObjectData; // 0x18(0x08)
	struct FName IdData; // 0x20(0x08)
	int32_t IntData; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct FortniteUI.FortReceivedItemLootInfo
// Size: 0xc8 (Inherited: 0x00)
struct FFortReceivedItemLootInfo {
	struct FFortItemHeaderInformation HeaderInformation; // 0x00(0x98)
	struct UFortItem* GeneratedItemInstance; // 0x98(0x08)
	struct UFortItemDefinition* ItemDef; // 0xa0(0x08)
	struct FString TemplateId; // 0xa8(0x10)
	int32_t Quantity; // 0xb8(0x04)
	char pad_BC[0xc]; // 0xbc(0x0c)
};

// ScriptStruct FortniteUI.GridSortKey
// Size: 0x18 (Inherited: 0x00)
struct FGridSortKey {
	float Number; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString String; // 0x08(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyAnswerWidgetDataTableEntry
// Size: 0x58 (Inherited: 0x00)
struct FFortPlayerSurveyAnswerWidgetDataTableEntry {
	struct TMap<enum class EFortPlayerSurveyQuestionPresentationStyle, struct UFortPlayerSurveyAnswerWidgetBase*> WidgetClassMap; // 0x00(0x50)
	struct UFortPlayerSurveyAnswerWidgetBase* FallbackWidgetClass; // 0x50(0x08)
};

// ScriptStruct FortniteUI.FortSettingsFilterState
// Size: 0x3b8 (Inherited: 0x00)
struct FFortSettingsFilterState {
	bool bIncludeDisabled; // 0x00(0x01)
	bool bIncludeHidden; // 0x01(0x01)
	bool bIncludeResetable; // 0x02(0x01)
	bool bIncludeNestedPages; // 0x03(0x01)
	char pad_4[0x394]; // 0x04(0x394)
	struct TArray<struct UFortSetting*> SettingRootList; // 0x398(0x10)
	struct TArray<struct UFortSetting*> SettingWhiteList; // 0x3a8(0x10)
};

// ScriptStruct FortniteUI.FortSimpleWidgetAnimations
// Size: 0x38 (Inherited: 0x00)
struct FFortSimpleWidgetAnimations {
	struct FName Name; // 0x00(0x08)
	bool bIsEnabled; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FFortSimpleWidgetAnimation> Targets; // 0x10(0x10)
	struct FMulticastInlineDelegate OnAnimationsFinished; // 0x20(0x10)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct FortniteUI.FortSimpleWidgetAnimation
// Size: 0x70 (Inherited: 0x00)
struct FFortSimpleWidgetAnimation {
	struct FName TargetName; // 0x00(0x08)
	struct UCurveVector* Translation; // 0x08(0x08)
	struct UCurveVector* Scale; // 0x10(0x08)
	struct UCurveFloat* Alpha; // 0x18(0x08)
	bool bResetOnFinish; // 0x20(0x01)
	bool bShouldAnimateTranslation; // 0x21(0x01)
	bool bShouldAnimateScale; // 0x22(0x01)
	bool bShouldAnimateAlpha; // 0x23(0x01)
	char pad_24[0x14]; // 0x24(0x14)
	struct UWorld* World; // 0x38(0x08)
	char pad_40[0x30]; // 0x40(0x30)
};

// ScriptStruct FortniteUI.SquadSlotSortTypes
// Size: 0x10 (Inherited: 0x00)
struct FSquadSlotSortTypes {
	struct TArray<enum class ESquadSlotSortType> SortTypes; // 0x00(0x10)
};

// ScriptStruct FortniteUI.AthenaRewardTracker
// Size: 0x14 (Inherited: 0x00)
struct FAthenaRewardTracker {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct FortniteUI.TimerDisplayData
// Size: 0x38 (Inherited: 0x00)
struct FTimerDisplayData {
	struct FLinearColor BrushColor; // 0x00(0x10)
	struct FText TimeRemainingDisplayText; // 0x10(0x18)
	struct FLinearColor TextColor; // 0x28(0x10)
};

// ScriptStruct FortniteUI.GlyphAllUpdateTransitions
// Size: 0x18 (Inherited: 0x00)
struct FGlyphAllUpdateTransitions {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct FortniteUI.GlyphUpdateTransition
// Size: 0x0c (Inherited: 0x00)
struct FGlyphUpdateTransition {
	int32_t Count; // 0x00(0x04)
	float MinTimeOffset; // 0x04(0x04)
	float MaxTimeOffset; // 0x08(0x04)
};

// ScriptStruct FortniteUI.RewardCategoryTabData
// Size: 0x38 (Inherited: 0x00)
struct FRewardCategoryTabData {
	struct UObject* TabDisplayAsset; // 0x00(0x08)
	struct FText DisplayName; // 0x08(0x18)
	struct FGameplayTag IncludeTag; // 0x20(0x08)
	struct FGameplayTag ExcludeTag; // 0x28(0x08)
	bool bDefaultEntry; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct FortniteUI.AthenaChallengeListVisualOptions
// Size: 0x0c (Inherited: 0x00)
struct FAthenaChallengeListVisualOptions {
	bool bHideHeaders; // 0x00(0x01)
	bool bHideCompletionRewards; // 0x01(0x01)
	bool bHideQuestRewards; // 0x02(0x01)
	bool bUseCompactActionInfo; // 0x03(0x01)
	bool bHideLockedQuests; // 0x04(0x01)
	bool bHideCompletedQuests; // 0x05(0x01)
	bool bShowOnlyCurentBundleLevelChallenges; // 0x06(0x01)
	bool bSortCompletedToEnd; // 0x07(0x01)
	int32_t PreviewBundleLevel; // 0x08(0x04)
};

// ScriptStruct FortniteUI.AthenaCollectionScreenContainerTabInfo
// Size: 0x68 (Inherited: 0x00)
struct FAthenaCollectionScreenContainerTabInfo {
	struct FText TabTitle; // 0x00(0x18)
	struct TSoftObjectPtr<struct UObject> TabIcon; // 0x18(0x28)
	SoftClassProperty TabClass; // 0x40(0x28)
};

// ScriptStruct FortniteUI.MutatorAddedWidgets
// Size: 0x10 (Inherited: 0x00)
struct FMutatorAddedWidgets {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct FortniteUI.AthenaInventoryDropStackSizeRow
// Size: 0x30 (Inherited: 0x08)
struct FAthenaInventoryDropStackSizeRow : FTableRowBase {
	struct FGameplayTagContainer ItemTags; // 0x08(0x20)
	int32_t StackSize; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct FortniteUI.AthenaInventoryItemStatBoundsRow
// Size: 0x48 (Inherited: 0x08)
struct FAthenaInventoryItemStatBoundsRow : FTableRowBase {
	struct FGameplayTagContainer ItemTags; // 0x08(0x20)
	struct FStatBound Damage; // 0x28(0x08)
	struct FStatBound FireRate; // 0x30(0x08)
	struct FStatBound MagazineSize; // 0x38(0x08)
	struct FStatBound ReloadTime; // 0x40(0x08)
};

// ScriptStruct FortniteUI.StatBound
// Size: 0x08 (Inherited: 0x00)
struct FStatBound {
	float Minimum; // 0x00(0x04)
	float Maximum; // 0x04(0x04)
};

// ScriptStruct FortniteUI.AthenaCustomizationParams
// Size: 0x48 (Inherited: 0x00)
struct FAthenaCustomizationParams {
	enum class EAthenaCustomizationCategory Category; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t CategorySubslotIndex; // 0x04(0x04)
	struct FText CategoryDisplayName; // 0x08(0x18)
	struct FText ItemDisplayTypeName; // 0x20(0x18)
	bool bAllowUnownedItems; // 0x38(0x01)
	bool bOneItemPerSlot; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct UMaterialInstance* OverrideSlotImage; // 0x40(0x08)
};

// ScriptStruct FortniteUI.AthenaItemShopReloadMtxInfo
// Size: 0xb8 (Inherited: 0x00)
struct FAthenaItemShopReloadMtxInfo {
	struct TArray<struct FName> StaticStorefrontNames; // 0x00(0x10)
	struct TArray<struct FName> DynamicStorefrontNames; // 0x10(0x10)
	struct FName IncrementalStorefrontName; // 0x20(0x08)
	struct FString DynamicOtherOptionOfferId; // 0x28(0x10)
	int32_t MaxMtxQuantityToShowDynamicReloadMtx; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	SoftClassProperty StaticReloadMtxScreenClass; // 0x40(0x28)
	SoftClassProperty DynamicReloadMtxScreenClass; // 0x68(0x28)
	SoftClassProperty ReloadMtxIntroModalPopupClass; // 0x90(0x28)
};

// ScriptStruct FortniteUI.AthenaItemShopSectionData
// Size: 0x48 (Inherited: 0x00)
struct FAthenaItemShopSectionData {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct FortniteUI.PlaylistFilter
// Size: 0x18 (Inherited: 0x00)
struct FPlaylistFilter {
	struct UDataTable* PlaylistsData; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct FortniteUI.LeaderboardFilter
// Size: 0x20 (Inherited: 0x18)
struct FLeaderboardFilter : FPlaylistFilter {
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct FortniteUI.AthenaLeaderboardData
// Size: 0x40 (Inherited: 0x08)
struct FAthenaLeaderboardData : FTableRowBase {
	enum class EFortAthenaPlaylist Playlist; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FName PlaylistName; // 0x0c(0x08)
	enum class ECommonInputType InputType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<struct FAthenaPlaylistLeaderboardData> Stats; // 0x18(0x10)
	bool bExcludePlaylistNames; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FString> PlaylistNames; // 0x30(0x10)
};

// ScriptStruct FortniteUI.AthenaPlaylistLeaderboardData
// Size: 0x68 (Inherited: 0x00)
struct FAthenaPlaylistLeaderboardData {
	struct FName StatId; // 0x00(0x08)
	struct FText StatDisplayName; // 0x08(0x18)
	struct FText TabDisplayName; // 0x20(0x18)
	struct FText RowDisplayName; // 0x38(0x18)
	struct FString BaseGameplayTag; // 0x50(0x10)
	bool bIsGlobal; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct FortniteUI.LevelEffectsData
// Size: 0x50 (Inherited: 0x00)
struct FLevelEffectsData {
	int32_t MinPlayerLevel; // 0x00(0x04)
	struct FLinearColor ContentColor; // 0x04(0x10)
	struct FLinearColor OutlineColor; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
	struct TSoftObjectPtr<struct UObject> FlameDisplayObject; // 0x28(0x28)
};

// ScriptStruct FortniteUI.SelectedChallengesData
// Size: 0x20 (Inherited: 0x00)
struct FSelectedChallengesData {
	char pad_0[0x10]; // 0x00(0x10)
	bool bIsCompleted; // 0x10(0x01)
	bool bIsLocked; // 0x11(0x01)
	bool bHasIconOverride; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	float Progress; // 0x14(0x04)
	int32_t NumObjectivesCompleted; // 0x18(0x04)
	int32_t NumObjectives; // 0x1c(0x04)
};

// ScriptStruct FortniteUI.AthenaMapScreenContainerTabInfo
// Size: 0x70 (Inherited: 0x00)
struct FAthenaMapScreenContainerTabInfo {
	struct FText TabTitle; // 0x00(0x18)
	struct TSoftObjectPtr<struct UObject> TabIcon; // 0x18(0x28)
	SoftClassProperty TabClass; // 0x40(0x28)
	bool bDefaultFrontendActiveTab; // 0x68(0x01)
	bool bDefaultInGameActiveTab; // 0x69(0x01)
	enum class EAtheaMapTabType TabType; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
};

// ScriptStruct FortniteUI.AthenaEmergencyNotice
// Size: 0x40 (Inherited: 0x00)
struct FAthenaEmergencyNotice {
	struct FString Title; // 0x00(0x10)
	struct FString Body; // 0x10(0x10)
	char pad_20[0x20]; // 0x20(0x20)
};

// ScriptStruct FortniteUI.AthenaMessageEntry
// Size: 0x50 (Inherited: 0x00)
struct FAthenaMessageEntry {
	struct FString Title; // 0x00(0x10)
	struct FString Body; // 0x10(0x10)
	struct FString Image; // 0x20(0x10)
	struct FString Type; // 0x30(0x10)
	struct FString AdSpace; // 0x40(0x10)
};

// ScriptStruct FortniteUI.AthenaMOTDBase
// Size: 0xc0 (Inherited: 0x00)
struct FAthenaMOTDBase {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EAthenaNewsEntryType EntryType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Title; // 0x10(0x10)
	struct FString Body; // 0x20(0x10)
	struct TArray<struct FImageRef> Images; // 0x30(0x10)
	struct TArray<struct FImageRef> TileImages; // 0x40(0x10)
	struct FColor CustomDarkColor; // 0x50(0x04)
	struct FColor CustomLightColor; // 0x54(0x04)
	struct FString AdSpace; // 0x58(0x10)
	struct FString TabTitleOverride; // 0x68(0x10)
	struct FString ButtonTextOverride; // 0x78(0x10)
	bool bHasCustomColor; // 0x88(0x01)
	char pad_89[0x37]; // 0x89(0x37)
};

// ScriptStruct FortniteUI.ImageRef
// Size: 0x18 (Inherited: 0x00)
struct FImageRef {
	int32_t Width; // 0x00(0x04)
	int32_t Height; // 0x04(0x04)
	struct FString URL; // 0x08(0x10)
};

// ScriptStruct FortniteUI.NavigateToBattlePassSubPageMOTD
// Size: 0xe8 (Inherited: 0xc0)
struct FNavigateToBattlePassSubPageMOTD : FAthenaMOTDBase {
	char pad_C0[0x28]; // 0xc0(0x28)
};

// ScriptStruct FortniteUI.PlaylistMOTD
// Size: 0xd0 (Inherited: 0xc0)
struct FPlaylistMOTD : FAthenaMOTDBase {
	char pad_C0[0x10]; // 0xc0(0x10)
};

// ScriptStruct FortniteUI.SpatialScreenMOTD
// Size: 0xd0 (Inherited: 0xc0)
struct FSpatialScreenMOTD : FAthenaMOTDBase {
	char pad_C0[0x10]; // 0xc0(0x10)
};

// ScriptStruct FortniteUI.WebsiteMOTD
// Size: 0xe0 (Inherited: 0xc0)
struct FWebsiteMOTD : FAthenaMOTDBase {
	char pad_C0[0x20]; // 0xc0(0x20)
};

// ScriptStruct FortniteUI.ChallengeMOTD
// Size: 0xd0 (Inherited: 0xc0)
struct FChallengeMOTD : FAthenaMOTDBase {
	char pad_C0[0x10]; // 0xc0(0x10)
};

// ScriptStruct FortniteUI.SettingsMOTD
// Size: 0xe0 (Inherited: 0xc0)
struct FSettingsMOTD : FAthenaMOTDBase {
	char pad_C0[0x20]; // 0xc0(0x20)
};

// ScriptStruct FortniteUI.NavigateToTabMOTD
// Size: 0xd8 (Inherited: 0xc0)
struct FNavigateToTabMOTD : FAthenaMOTDBase {
	char pad_C0[0x18]; // 0xc0(0x18)
};

// ScriptStruct FortniteUI.ItemMOTD
// Size: 0xd8 (Inherited: 0xc0)
struct FItemMOTD : FAthenaMOTDBase {
	char pad_C0[0x18]; // 0xc0(0x18)
};

// ScriptStruct FortniteUI.SmallNewsMOTD
// Size: 0xc0 (Inherited: 0xc0)
struct FSmallNewsMOTD : FAthenaMOTDBase {
};

// ScriptStruct FortniteUI.FortResurrectionUIData
// Size: 0x03 (Inherited: 0x00)
struct FFortResurrectionUIData {
	bool bResurrectionChipAvailable; // 0x00(0x01)
	bool bResurrectionChipPickedUp; // 0x01(0x01)
	bool bResurrectionChipRebooting; // 0x02(0x01)
};

// ScriptStruct FortniteUI.StatGroupData
// Size: 0xb0 (Inherited: 0x00)
struct FStatGroupData {
	struct FText GroupName; // 0x00(0x18)
	struct FSlateBrush Group; // 0x18(0x88)
	float Value; // 0xa0(0x04)
	float ChartValue; // 0xa4(0x04)
	float ChartOrigionalValue; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct FortniteUI.AthenaReplayBrowserRowData
// Size: 0x40 (Inherited: 0x00)
struct FAthenaReplayBrowserRowData {
	struct FString Name; // 0x00(0x10)
	struct FDateTime Date; // 0x10(0x08)
	float Length; // 0x18(0x04)
	int32_t Rank; // 0x1c(0x04)
	int32_t NumPlayers; // 0x20(0x04)
	int32_t Eliminations; // 0x24(0x04)
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct FortniteUI.AthenaTeamDisplayInfo
// Size: 0x88 (Inherited: 0x00)
struct FAthenaTeamDisplayInfo {
	struct TSoftObjectPtr<struct UObject> Icon; // 0x00(0x28)
	struct TSoftObjectPtr<struct UObject> Ribbon; // 0x28(0x28)
	struct FText Name; // 0x50(0x18)
	struct FLinearColor TextColor; // 0x68(0x10)
	struct FLinearColor PedestalColor; // 0x78(0x10)
};

// ScriptStruct FortniteUI.MarkerLargeIndicatorType
// Size: 0x10 (Inherited: 0x00)
struct FMarkerLargeIndicatorType {
	struct UMaterialInterface* MarkerMaterial; // 0x00(0x08)
	struct FVector2D ImageSize; // 0x08(0x08)
};

// ScriptStruct FortniteUI.AthenaTeamCountSlotData
// Size: 0x38 (Inherited: 0x00)
struct FAthenaTeamCountSlotData {
	struct FText TeamNameText; // 0x00(0x18)
	struct FText TeamCountText; // 0x18(0x18)
	bool bIsMyTeam; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct FortniteUI.FortTopBarTabButtonInfo
// Size: 0xe8 (Inherited: 0x00)
struct FFortTopBarTabButtonInfo {
	struct FName TabId; // 0x00(0x08)
	struct FString CalendarEventName; // 0x08(0x10)
	struct FText DisplayName; // 0x18(0x18)
	struct FSlateBrush IconBrush; // 0x30(0x88)
	enum class EFortUIFeature LinkedUIFeature; // 0xb8(0x01)
	enum class EFortBangType BangType; // 0xb9(0x01)
	bool bForceImage; // 0xba(0x01)
	bool bPrimaryPlayerOnly; // 0xbb(0x01)
	bool bInteractAnalytic; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	SoftClassProperty OverrideTabWidget; // 0xc0(0x28)
};

// ScriptStruct FortniteUI.AthenaVariantFilterSet
// Size: 0x10 (Inherited: 0x00)
struct FAthenaVariantFilterSet {
	struct TArray<struct FAthenaVariantFilterTabInfo_Primary> PrimaryTabs; // 0x00(0x10)
};

// ScriptStruct FortniteUI.AthenaVariantFilterTabInfo_Primary
// Size: 0x78 (Inherited: 0x00)
struct FAthenaVariantFilterTabInfo_Primary {
	struct FAthenaVariantFilterTabInfo PrimaryTab; // 0x00(0x68)
	struct TArray<struct FAthenaVariantFilterTabInfo> SubTabs; // 0x68(0x10)
};

// ScriptStruct FortniteUI.AthenaVariantFilterTabInfo
// Size: 0x68 (Inherited: 0x00)
struct FAthenaVariantFilterTabInfo {
	struct TSoftObjectPtr<struct UObject> Icon; // 0x00(0x28)
	struct FText Label; // 0x28(0x18)
	struct FGameplayTagContainer IncludedVariantChannels; // 0x40(0x20)
	float ZoomLevel; // 0x60(0x04)
	bool bDisableScrollBox; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// ScriptStruct FortniteUI.WinConditionPlacementDataMapWrapper
// Size: 0x50 (Inherited: 0x00)
struct FWinConditionPlacementDataMapWrapper {
	struct TMap<enum class EHUDMessagePlacement, struct FWinConditionPlacementData> Data; // 0x00(0x50)
};

// ScriptStruct FortniteUI.WinConditionPlacementData
// Size: 0x14 (Inherited: 0x00)
struct FWinConditionPlacementData {
	struct FMargin Padding; // 0x00(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x10(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct FortniteUI.BarrierObjectState
// Size: 0x10 (Inherited: 0x00)
struct FBarrierObjectState {
	struct AAthenaBarrierObjective* ObjectiveActor; // 0x00(0x08)
	char TeamNum; // 0x08(0x01)
	enum class EBarrierFoodTeam FoodTeam; // 0x09(0x01)
	enum class EBarrierObjectiveDamageState DamageState; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct FortniteUI.BattleLabDisplayData
// Size: 0x68 (Inherited: 0x00)
struct FBattleLabDisplayData {
	struct FText TitleText; // 0x00(0x18)
	struct FText DescriptionText; // 0x18(0x18)
	enum class EBattleLabAlertType AlertType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t RewardCount; // 0x34(0x04)
	int32_t RewardCountTotal; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TSoftObjectPtr<struct UTexture2D> MainIconTexture; // 0x40(0x28)
};

// ScriptStruct FortniteUI.TrackCategoryUI
// Size: 0x50 (Inherited: 0x00)
struct FTrackCategoryUI {
	struct FTrackCategory TrackData; // 0x00(0x48)
	int32_t LastSelectedIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct FortniteUI.BattlePassPageData
// Size: 0x08 (Inherited: 0x00)
struct FBattlePassPageData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct FortniteUI.BattlePassCharacterPreviewDisplayData
// Size: 0x10 (Inherited: 0x00)
struct FBattlePassCharacterPreviewDisplayData {
	struct UAthenaCharacterItemDefinition* CharacterItemDef; // 0x00(0x08)
	struct UMaterialInstance* PreviewMaterial; // 0x08(0x08)
};

// ScriptStruct FortniteUI.PreviewUnlockData
// Size: 0xb0 (Inherited: 0x00)
struct FPreviewUnlockData {
	struct FPreviewUnlockRewardData InstantRewards; // 0x00(0x30)
	struct FPreviewUnlockRewardData EarnedRewards; // 0x30(0x30)
	struct FText ChapterNumberText; // 0x60(0x18)
	struct FText SeasonNumberText; // 0x78(0x18)
	struct FText SummaryText; // 0x90(0x18)
	bool bPaysForSelf; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct FortniteUI.PreviewUnlockRewardData
// Size: 0x30 (Inherited: 0x00)
struct FPreviewUnlockRewardData {
	int32_t Currency; // 0x00(0x04)
	int32_t NumAdditionalRewards; // 0x04(0x04)
	int32_t TotalRewards; // 0x08(0x04)
	int32_t NumCharacters; // 0x0c(0x04)
	struct TArray<struct FPreviewRewardData> Characters; // 0x10(0x10)
	struct TArray<struct FPreviewRewardData> AdditionalRewards; // 0x20(0x10)
};

// ScriptStruct FortniteUI.PreviewRewardData
// Size: 0x88 (Inherited: 0x00)
struct FPreviewRewardData {
	char pad_0[0x88]; // 0x00(0x88)
};

// ScriptStruct FortniteUI.RewardPreviewParams
// Size: 0x48 (Inherited: 0x00)
struct FRewardPreviewParams {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct FortniteUI.FortPhoenixSeasonDisplayInfoMapRow
// Size: 0x20 (Inherited: 0x08)
struct FFortPhoenixSeasonDisplayInfoMapRow : FTableRowBase {
	struct FString EventFlagName; // 0x08(0x10)
	struct UFortPhoenixSeasonDisplayInfo* DisplayInfo; // 0x18(0x08)
};

// ScriptStruct FortniteUI.AthenaBossHealthData
// Size: 0x30 (Inherited: 0x00)
struct FAthenaBossHealthData {
	bool bVisible; // 0x00(0x01)
	bool bShowShields; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FText Name; // 0x08(0x18)
	int32_t Health; // 0x20(0x04)
	int32_t HealthMax; // 0x24(0x04)
	int32_t Shields; // 0x28(0x04)
	int32_t ShieldsMax; // 0x2c(0x04)
};

// ScriptStruct FortniteUI.AthenaSubscriptionInfo
// Size: 0x308 (Inherited: 0x00)
struct FAthenaSubscriptionInfo {
	struct FAthenaSubscriptionMonthlyRewards CurrentRewards; // 0x00(0x110)
	struct FAthenaSubscriptionMonthlyRewards NextRewards; // 0x110(0x110)
	struct FAthenaSubscriptionPurchaseDetails PurchaseSubscriptionDetails; // 0x220(0xa8)
	struct FText SubscriptionDisclaimer; // 0x2c8(0x18)
	struct FText BlockedBenefitsNotice; // 0x2e0(0x18)
	struct FSubscriptionModals SubModals; // 0x2f8(0x10)
};

// ScriptStruct FortniteUI.SubscriptionModals
// Size: 0x10 (Inherited: 0x00)
struct FSubscriptionModals {
	struct TArray<struct FSubscriptionModalInfo> Modals; // 0x00(0x10)
};

// ScriptStruct FortniteUI.SubscriptionModalInfo
// Size: 0x38 (Inherited: 0x00)
struct FSubscriptionModalInfo {
	struct FString ModalId; // 0x00(0x10)
	enum class EAppStore PlatformId; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FText> Entries; // 0x18(0x10)
	struct FString QrCodeImage; // 0x28(0x10)
};

// ScriptStruct FortniteUI.AthenaSubscriptionPurchaseDetails
// Size: 0xa8 (Inherited: 0x00)
struct FAthenaSubscriptionPurchaseDetails {
	struct FText SkinTitle; // 0x00(0x18)
	struct FText SkinDescription; // 0x18(0x18)
	struct FText MtxTitle; // 0x30(0x18)
	struct FText MtxDescription; // 0x48(0x18)
	struct FText BattlepassTitle; // 0x60(0x18)
	struct FText BattlepassDescription; // 0x78(0x18)
	int32_t BattlepassRefund; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FSubscriptionBulletPoints AdditionalBulletPoints; // 0x98(0x10)
};

// ScriptStruct FortniteUI.SubscriptionBulletPoints
// Size: 0x10 (Inherited: 0x00)
struct FSubscriptionBulletPoints {
	struct TArray<struct FSubscriptionBulletPoint> BulletPoints; // 0x00(0x10)
};

// ScriptStruct FortniteUI.SubscriptionBulletPoint
// Size: 0x50 (Inherited: 0x00)
struct FSubscriptionBulletPoint {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct FString IncludedCountries; // 0x30(0x10)
	struct TArray<struct FString> IncludedPlatforms; // 0x40(0x10)
};

// ScriptStruct FortniteUI.AthenaSubscriptionMonthlyRewards
// Size: 0x110 (Inherited: 0x00)
struct FAthenaSubscriptionMonthlyRewards {
	struct FString SkinImageURL; // 0x00(0x10)
	struct FText SkinTitle; // 0x10(0x18)
	bool bSkinImageTakeOver; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FText MtxTitle; // 0x30(0x18)
	struct FString BattlepassImageURL; // 0x48(0x10)
	struct FString BattlepassTileImageURL; // 0x58(0x10)
	struct FText BattlepassTitle; // 0x68(0x18)
	struct FText BattlepassDescription; // 0x80(0x18)
	struct FString ColorA; // 0x98(0x10)
	struct FString ColorB; // 0xa8(0x10)
	struct FString ColorC; // 0xb8(0x10)
	struct FString ItemShopTileImageURL; // 0xc8(0x10)
	struct FText ItemShopTileViolatorText; // 0xd8(0x18)
	enum class EViolatorIntensity ItemShopTileViolatorIntensity; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FDateTime CrewPackDateOverride; // 0xf8(0x08)
	struct TArray<struct FAthenaCrewPackItem> CrewPackItems; // 0x100(0x10)
};

// ScriptStruct FortniteUI.AthenaCrewPackItem
// Size: 0x28 (Inherited: 0x00)
struct FAthenaCrewPackItem {
	struct FString TemplateId; // 0x00(0x10)
	struct FString OfferTag; // 0x10(0x10)
	int32_t Quantity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct FortniteUI.AthenaSubscriptionExpectedRewards
// Size: 0x160 (Inherited: 0x110)
struct FAthenaSubscriptionExpectedRewards : FAthenaSubscriptionMonthlyRewards {
	enum class EMcpSubscriptionState SubscriptionState; // 0x110(0x01)
	char pad_111[0x17]; // 0x111(0x17)
	struct FText SkinDescription; // 0x128(0x18)
	struct FText MtxDescription; // 0x140(0x18)
	bool bUsingNextSkin; // 0x158(0x01)
	bool bUsingNextBattlepassImage; // 0x159(0x01)
	bool bUsingNextBattlepassTexts; // 0x15a(0x01)
	bool bUsingNextSkinTileImage; // 0x15b(0x01)
	char pad_15C[0x4]; // 0x15c(0x04)
};

// ScriptStruct FortniteUI.AthenaShopSection
// Size: 0x80 (Inherited: 0x00)
struct FAthenaShopSection {
	struct FName SectionId; // 0x00(0x08)
	struct FText SectionDisplayName; // 0x08(0x18)
	bool bSortOffersByOwnership; // 0x20(0x01)
	bool bShowIneligibleOffers; // 0x21(0x01)
	bool bShowIneligibleOffersIfGiftable; // 0x22(0x01)
	bool bShowTimer; // 0x23(0x01)
	bool bEnableToastNotification; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	int32_t LandingPriority; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FDynamicBackground SectionBackground; // 0x30(0x48)
	bool bHidden; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct FortniteUI.DynamicBackground
// Size: 0x48 (Inherited: 0x00)
struct FDynamicBackground {
	struct FString _title; // 0x00(0x10)
	struct FString __locale; // 0x10(0x10)
	enum class EDynamicBackgroudKey Key; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString BackgroundImage; // 0x28(0x10)
	struct FString Stage; // 0x38(0x10)
};

// ScriptStruct FortniteUI.AthenaShopCarouselItem
// Size: 0x68 (Inherited: 0x00)
struct FAthenaShopCarouselItem {
	struct FText PreviewTitle; // 0x00(0x18)
	struct FText FullTitle; // 0x18(0x18)
	struct FString TileImage; // 0x30(0x10)
	struct FString VideoString; // 0x40(0x10)
	struct FString OfferId; // 0x50(0x10)
	int32_t LandingPriority; // 0x60(0x04)
	enum class EItemShopNavigationAction Action; // 0x64(0x01)
	bool bHidden; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
};

// ScriptStruct FortniteUI.CmsJsonMessages
// Size: 0x298 (Inherited: 0x00)
struct FCmsJsonMessages {
	struct FString _title; // 0x00(0x10)
	struct FString _locale; // 0x10(0x10)
	struct FShowdownTournamentSource TournamentInformation; // 0x20(0x30)
	struct FKoreanCafeSource KoreanCafe; // 0x50(0x30)
	struct FSubgameScreenSource SubGameInfo; // 0x80(0x1e8)
	struct FCreativeAdSource CreativeAds; // 0x268(0x30)
};

// ScriptStruct FortniteUI.CreativeAdSource
// Size: 0x30 (Inherited: 0x00)
struct FCreativeAdSource {
	struct FString _title; // 0x00(0x10)
	struct FString __locale; // 0x10(0x10)
	struct FCreativeAdJsonObject Ad_Info; // 0x20(0x10)
};

// ScriptStruct FortniteUI.CreativeAdJsonObject
// Size: 0x10 (Inherited: 0x00)
struct FCreativeAdJsonObject {
	struct TArray<struct FCreativeAdData> Ads; // 0x00(0x10)
};

// ScriptStruct FortniteUI.CreativeAdData
// Size: 0x68 (Inherited: 0x00)
struct FCreativeAdData {
	struct FString Header; // 0x00(0x10)
	struct FString Sub_Header; // 0x10(0x10)
	struct FString Description; // 0x20(0x10)
	struct FString Creator_Name; // 0x30(0x10)
	struct FString Island_Code; // 0x40(0x10)
	enum class EFortCreativeAdType Ad_Type; // 0x50(0x01)
	enum class EFortCreativeAdColorPreset Ad_Color_Preset; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct FString Image; // 0x58(0x10)
};

// ScriptStruct FortniteUI.SubgameScreenSource
// Size: 0x1e8 (Inherited: 0x00)
struct FSubgameScreenSource {
	struct FString _title; // 0x00(0x10)
	struct FString __locale; // 0x10(0x10)
	struct FSubgameDisplayData Creative; // 0x20(0x98)
	struct FSubgameDisplayData SaveTheWorld; // 0xb8(0x98)
	struct FSubgameDisplayData BattleRoyale; // 0x150(0x98)
};

// ScriptStruct FortniteUI.SubgameDisplayData
// Size: 0x98 (Inherited: 0x00)
struct FSubgameDisplayData {
	struct FText Title; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct FText SpecialMessage; // 0x30(0x18)
	struct FText StandardMessageLine1; // 0x48(0x18)
	struct FText StandardMessageLine2; // 0x60(0x18)
	struct FString Image; // 0x78(0x10)
	struct FLinearColor Color; // 0x88(0x10)
};

// ScriptStruct FortniteUI.KoreanCafeSource
// Size: 0x30 (Inherited: 0x00)
struct FKoreanCafeSource {
	struct FString _title; // 0x00(0x10)
	struct FString __locale; // 0x10(0x10)
	struct FKoreanCafeJsonObject Cafe_Info; // 0x20(0x10)
};

// ScriptStruct FortniteUI.KoreanCafeJsonObject
// Size: 0x10 (Inherited: 0x00)
struct FKoreanCafeJsonObject {
	struct TArray<struct FKoreanCafeData> Cafes; // 0x00(0x10)
};

// ScriptStruct FortniteUI.KoreanCafeData
// Size: 0x38 (Inherited: 0x00)
struct FKoreanCafeData {
	struct FGameplayTag Korean_Cafe; // 0x00(0x08)
	struct FText Korean_Cafe_Header; // 0x08(0x18)
	struct FText Korean_Cafe_Description; // 0x20(0x18)
};

// ScriptStruct FortniteUI.ShowdownTournamentSource
// Size: 0x30 (Inherited: 0x00)
struct FShowdownTournamentSource {
	struct FShowdownTournamentJsonObject Tournament_Info; // 0x00(0x10)
	struct FString _title; // 0x10(0x10)
	struct FString _locale; // 0x20(0x10)
};

// ScriptStruct FortniteUI.ShowdownTournamentJsonObject
// Size: 0x10 (Inherited: 0x00)
struct FShowdownTournamentJsonObject {
	struct TArray<struct FShowdownTournamentData> Tournaments; // 0x00(0x10)
};

// ScriptStruct FortniteUI.ShowdownTournamentData
// Size: 0x1f8 (Inherited: 0x00)
struct FShowdownTournamentData {
	struct FString Tournament_Display_Id; // 0x00(0x10)
	struct FText Title_Line_2; // 0x10(0x18)
	struct FText Title_Line_3; // 0x28(0x18)
	struct FText Schedule_Info; // 0x40(0x18)
	struct FString Poster_Front_Image; // 0x58(0x10)
	struct FString Poster_Back_Image; // 0x68(0x10)
	struct FText Flavor_Description; // 0x78(0x18)
	struct FText Details_Description; // 0x90(0x18)
	struct FText Short_Format_Title; // 0xa8(0x18)
	struct FText Long_Format_Title; // 0xc0(0x18)
	struct FText Background_Title; // 0xd8(0x18)
	int32_t Pin_Score_Requirement; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FText Pin_Earned_Text; // 0xf8(0x18)
	struct FLinearColor Base_Color; // 0x110(0x10)
	struct FLinearColor Primary_Color; // 0x120(0x10)
	struct FLinearColor Secondary_Color; // 0x130(0x10)
	struct FLinearColor Highlight_Color; // 0x140(0x10)
	struct FLinearColor Title_Color; // 0x150(0x10)
	struct FLinearColor Shadow_Color; // 0x160(0x10)
	struct FLinearColor Background_Left_Color; // 0x170(0x10)
	struct FLinearColor Background_Right_Color; // 0x180(0x10)
	struct FLinearColor Background_Text_Color; // 0x190(0x10)
	struct FLinearColor Poster_Fade_Color; // 0x1a0(0x10)
	struct FString Playlist_Tile_Image; // 0x1b0(0x10)
	struct FString Loading_Screen_Image; // 0x1c0(0x10)
	struct FString Style_Info_Id; // 0x1d0(0x10)
	struct FString Alert_Text; // 0x1e0(0x10)
	enum class EFortTournamentAlertType AlertType; // 0x1f0(0x01)
	char pad_1F1[0x7]; // 0x1f1(0x07)
};

// ScriptStruct FortniteUI.DynamicBackgroundsSource
// Size: 0x40 (Inherited: 0x00)
struct FDynamicBackgroundsSource {
	struct FString _title; // 0x00(0x10)
	struct FString __locale; // 0x10(0x10)
	struct FString LastModified; // 0x20(0x10)
	struct FDynamicBackgrounds Backgrounds; // 0x30(0x10)
};

// ScriptStruct FortniteUI.DynamicBackgrounds
// Size: 0x10 (Inherited: 0x00)
struct FDynamicBackgrounds {
	struct TArray<struct FDynamicBackground> Backgrounds; // 0x00(0x10)
};

// ScriptStruct FortniteUI.CobaltPlayerPortraitIndexInfo
// Size: 0x10 (Inherited: 0x00)
struct FCobaltPlayerPortraitIndexInfo {
	struct TArray<int32_t> PortraitIndexArray; // 0x00(0x10)
};

// ScriptStruct FortniteUI.SurvivalObjectiveText
// Size: 0x10 (Inherited: 0x00)
struct FSurvivalObjectiveText {
	struct TArray<struct FString> SafezoneStateText; // 0x00(0x10)
};

// ScriptStruct FortniteUI.SurvivalObjectiveIconData
// Size: 0x10 (Inherited: 0x00)
struct FSurvivalObjectiveIconData {
	int32_t IconIndex; // 0x00(0x04)
	enum class ESurvivalObjectiveIconState IconState; // 0x04(0x01)
	enum class ESurvivalObjectiveIconState PrevIconState; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FName SpecialActorID; // 0x08(0x08)
};

// ScriptStruct FortniteUI.DiscoCaptureUIData
// Size: 0x40 (Inherited: 0x00)
struct FDiscoCaptureUIData {
	enum class EDiscoCaptureUIState CurrDisplayState; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AAthenaCapturePoint* CapturePoint; // 0x08(0x08)
	struct AFortPlayerPawnAthena* CurrPawn; // 0x10(0x08)
	struct UMaterialInstanceDynamic* CurrMID; // 0x18(0x08)
	float FillAmount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FText DisplayText; // 0x28(0x18)
};

// ScriptStruct FortniteUI.DiscoTeamScoreData
// Size: 0x20 (Inherited: 0x00)
struct FDiscoTeamScoreData {
	struct FText CurrScoreText; // 0x00(0x18)
	float CurrScorePercent; // 0x18(0x04)
	int32_t CurrScore; // 0x1c(0x04)
};

// ScriptStruct FortniteUI.DiscoCaptureIconData
// Size: 0x10 (Inherited: 0x00)
struct FDiscoCaptureIconData {
	enum class EDiscoCaptureIconState CurrIconState; // 0x00(0x01)
	enum class EDiscoCaptureProgressState CurrProgressState; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float CurrCapturePercent; // 0x04(0x04)
	struct AAthenaCapturePoint* CapturePoint; // 0x08(0x08)
};

// ScriptStruct FortniteUI.QuestRecapData
// Size: 0x14 (Inherited: 0x00)
struct FQuestRecapData {
	struct TWeakObjectPtr<struct UFortQuestItem> QuestItem; // 0x00(0x08)
	int32_t LastKnownMcpValue; // 0x08(0x04)
	int32_t AchivedCount; // 0x0c(0x04)
	int32_t RequiredCount; // 0x10(0x04)
};

// ScriptStruct FortniteUI.VideoWidgetConfig
// Size: 0x40 (Inherited: 0x00)
struct FVideoWidgetConfig {
	struct UFortStreamMediaSource* StreamingMediaSource; // 0x00(0x08)
	struct FName VideoString; // 0x08(0x08)
	struct FName VideoDisplayDataID; // 0x10(0x08)
	struct FName FallbackVideoID; // 0x18(0x08)
	bool bCheckAutoPlay; // 0x20(0x01)
	bool bForceAutoPlay; // 0x21(0x01)
	bool bStreamingEnabled; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
	struct FString VideoUID; // 0x28(0x10)
	bool bShouldBeModal; // 0x38(0x01)
	bool bUseSkipBoundaries; // 0x39(0x01)
	bool bHoldToSkip; // 0x3a(0x01)
	bool bFadeFromWhite; // 0x3b(0x01)
	bool bAllowSkipping; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct FortniteUI.VideoConfig_Mono
// Size: 0x60 (Inherited: 0x00)
struct FVideoConfig_Mono {
	struct UFortStreamMediaSource* StreamingMediaSource; // 0x00(0x08)
	struct FName VideoString; // 0x08(0x08)
	struct FName StreamingVideoID; // 0x10(0x08)
	struct FName FallbackVideoID; // 0x18(0x08)
	struct FString ProdLinkID; // 0x20(0x10)
	struct FString GamedevLinkID; // 0x30(0x10)
	bool bIsAutoPlay; // 0x40(0x01)
	bool bForceAutoPlay; // 0x41(0x01)
	bool bStreamingEnabled; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
	struct FString VideoUID; // 0x48(0x10)
	bool bShouldBeModal; // 0x58(0x01)
	bool bUseSkipBoundaries; // 0x59(0x01)
	bool bKairosPlayer; // 0x5a(0x01)
	bool bHoldToSkip; // 0x5b(0x01)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct FortniteUI.FortAthenaStandaloneTutorialStepInfo
// Size: 0x10 (Inherited: 0x00)
struct FFortAthenaStandaloneTutorialStepInfo {
	struct TArray<struct FFortAthenaTutorialScreenInfo> StepScreenInfo; // 0x00(0x10)
};

// ScriptStruct FortniteUI.FortAthenaTutorialScreenInfo
// Size: 0xd0 (Inherited: 0x00)
struct FFortAthenaTutorialScreenInfo {
	enum class EFortAthenaTutorialSubstep Substep; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D TextPromptPosition; // 0x04(0x08)
	struct FVector2D TextPromptPosition_AthenaHUD; // 0x0c(0x08)
	struct FAnchors TextPromptAnchors; // 0x14(0x10)
	struct FAnchors TextPromptAnchors_AthenaHUD; // 0x24(0x10)
	char pad_34[0x4]; // 0x34(0x04)
	struct FText TextPromptText_Touch; // 0x38(0x18)
	struct FText TextPromptText_Gamepad; // 0x50(0x18)
	struct FText TextPromptText_TouchLegacy; // 0x68(0x18)
	struct FDataTableRowHandle ActionWidget_DataTableRow; // 0x80(0x10)
	struct TArray<struct FName> KeybindWidget_NameArray; // 0x90(0x10)
	struct TArray<struct FName> KeybindWidget_GamepadNameArray; // 0xa0(0x10)
	bool ForceSingleInputKeybind; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TArray<struct FFortAthenaTutorialHighlightInfo> HighlightInfo; // 0xb8(0x10)
	bool DisplayNextButton; // 0xc8(0x01)
	bool DisplayTextPromptTarget; // 0xc9(0x01)
	enum class EFortAthenaTutorialScreenExtraWidget ExtraWidget; // 0xca(0x01)
	char pad_CB[0x5]; // 0xcb(0x05)
};

// ScriptStruct FortniteUI.FortAthenaTutorialHighlightInfo
// Size: 0x50 (Inherited: 0x00)
struct FFortAthenaTutorialHighlightInfo {
	struct FGameplayTag WidgetToHighlight; // 0x00(0x08)
	struct FGameplayTag ItemHighlightTag; // 0x08(0x08)
	struct FMargin HighlightMargin; // 0x10(0x10)
	SoftClassProperty HighlightWidgetOverride; // 0x20(0x28)
	bool bIsLegacyHighlight; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct FortniteUI.FortAthenaTutorialStandaloneStepInfo
// Size: 0xd8 (Inherited: 0x00)
struct FFortAthenaTutorialStandaloneStepInfo {
	enum class EFortAthenaTutorial_StandaloneStep StandaloneStep; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FFortAthenaTutorialScreenInfo StepScreenInfo; // 0x08(0xd0)
};

// ScriptStruct FortniteUI.FortAthenaTutorialStepInfo
// Size: 0x18 (Inherited: 0x00)
struct FFortAthenaTutorialStepInfo {
	enum class EFortAthenaTutorialStep TutorialStep; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FFortAthenaTutorialScreenInfo> StepScreenInfo; // 0x08(0x10)
};

// ScriptStruct FortniteUI.FortBattlePassVideoAnnotation
// Size: 0x20 (Inherited: 0x00)
struct FFortBattlePassVideoAnnotation {
	float StartTime; // 0x00(0x04)
	float EndTime; // 0x04(0x04)
	struct FVector2D ScreenPosition; // 0x08(0x08)
	int32_t EntryAngle; // 0x10(0x04)
	float EntryMagnitude; // 0x14(0x04)
	struct UFortItemDefinition* RewardItemDefinition; // 0x18(0x08)
};

// ScriptStruct FortniteUI.ItemPreviewSettings
// Size: 0x58 (Inherited: 0x00)
struct FItemPreviewSettings {
	struct UFortAccountItemDefinition* ItemToView; // 0x00(0x08)
	int32_t SubslotIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FGameplayTagContainer PreviewExcludedTags; // 0x10(0x20)
	int32_t ItemVariantPreviewIndex; // 0x30(0x04)
	bool bHasEtherealBackground; // 0x34(0x01)
	char pad_35[0xb]; // 0x35(0x0b)
	struct TArray<struct FVaultVariantOverrideOption> VariantOverrides; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct FortniteUI.VaultVariantOverrideOption
// Size: 0x28 (Inherited: 0x00)
struct FVaultVariantOverrideOption {
	struct FGameplayTag VariantChannelOverride; // 0x00(0x08)
	struct FGameplayTag VariantTagOverride; // 0x08(0x08)
	struct FString CustomDataPayload; // 0x10(0x10)
	struct UFortItemDefinition* OptionalItemVariantIsUsedFor; // 0x20(0x08)
};

// ScriptStruct FortniteUI.FortConfirmationButtonInfo
// Size: 0x10 (Inherited: 0x00)
struct FFortConfirmationButtonInfo {
	struct UCommonButtonLegacy* Button; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct FortniteUI.CachedIslandsGroup
// Size: 0x28 (Inherited: 0x00)
struct FCachedIslandsGroup {
	struct TArray<struct UFortCreativeIslandLink*> IslandLinks; // 0x00(0x10)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct FortniteUI.FortCreativeItemListCategoryData
// Size: 0x10 (Inherited: 0x08)
struct FFortCreativeItemListCategoryData : FTableRowBase {
	enum class ECreativeItemCategory Category; // 0x08(0x01)
	enum class EFortItemCardSize CardSize; // 0x09(0x01)
	bool bCollapseCardBorderPad; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct FortniteUI.ItemListCategoryArray
// Size: 0x28 (Inherited: 0x00)
struct FItemListCategoryArray {
	struct TArray<struct FFortItemEntry> ItemList; // 0x00(0x10)
	struct FText CategoryTitle; // 0x10(0x18)
};

// ScriptStruct FortniteUI.FortWeightedObject
// Size: 0x10 (Inherited: 0x00)
struct FFortWeightedObject {
	struct UObject* Object; // 0x00(0x08)
	int32_t Weight; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FortniteUI.FortItemListOptionBucket
// Size: 0x20 (Inherited: 0x00)
struct FFortItemListOptionBucket {
	char pad_0[0x8]; // 0x00(0x08)
	int32_t ItemIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UFortItemListOptionProxy*> ItemOptionData; // 0x10(0x10)
};

// ScriptStruct FortniteUI.RarityArray
// Size: 0x10 (Inherited: 0x00)
struct FRarityArray {
	struct TArray<struct UFortItemDefinition*> Items; // 0x00(0x10)
};

// ScriptStruct FortniteUI.OptionsReleaseInfo
// Size: 0x08 (Inherited: 0x00)
struct FOptionsReleaseInfo {
	enum class ESettingType SettingType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ReleaseVersion; // 0x04(0x04)
};

// ScriptStruct FortniteUI.FortCreativeServerDisplayOption
// Size: 0x40 (Inherited: 0x08)
struct FFortCreativeServerDisplayOption : FTableRowBase {
	struct TSoftObjectPtr<struct UTexture> Image; // 0x08(0x28)
	struct FLinearColor Color; // 0x30(0x10)
};

// ScriptStruct FortniteUI.FortDailyRewardsData
// Size: 0x18 (Inherited: 0x00)
struct FFortDailyRewardsData {
	int32_t CurrentLoginDays; // 0x00(0x04)
	bool bCanClaim; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct FFortDailyRewardsScheduleData> Schedules; // 0x08(0x10)
};

// ScriptStruct FortniteUI.FortDailyRewardsScheduleData
// Size: 0x98 (Inherited: 0x00)
struct FFortDailyRewardsScheduleData {
	struct FText ScheduleTitle; // 0x00(0x18)
	struct FText ScheduleDescription; // 0x18(0x18)
	struct FText ScheduleItemDescription; // 0x30(0x18)
	struct FText ScheduleEpicItemDescription; // 0x48(0x18)
	int32_t WeekOffset; // 0x60(0x04)
	int32_t RewardsGiven; // 0x64(0x04)
	int32_t RewardsAllowed; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FFortDailyRewardsItemData> CalendarItems; // 0x70(0x10)
	struct TArray<struct FFortDailyRewardsItemData> HighValueItems; // 0x80(0x10)
	bool ClaimedToday; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct FortniteUI.FortDailyRewardsItemData
// Size: 0x10 (Inherited: 0x00)
struct FFortDailyRewardsItemData {
	struct UFortItem* RewardItem; // 0x00(0x08)
	int32_t RewardDay; // 0x08(0x04)
	bool IsCurrentReward; // 0x0c(0x01)
	bool IsClaimed; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct FortniteUI.FortPickerSubCategoryIdentifier
// Size: 0x20 (Inherited: 0x00)
struct FFortPickerSubCategoryIdentifier {
	struct FGameplayTag Tag; // 0x00(0x08)
	struct FText Name; // 0x08(0x18)
};

// ScriptStruct FortniteUI.FortPickerCategory
// Size: 0x28 (Inherited: 0x00)
struct FFortPickerCategory {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct FortniteUI.FortLeaderboardRequestIds
// Size: 0x20 (Inherited: 0x00)
struct FFortLeaderboardRequestIds {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct FortniteUI.ExpeditionTabInfo
// Size: 0xa8 (Inherited: 0x00)
struct FExpeditionTabInfo {
	struct FName TabNameID; // 0x00(0x08)
	struct FFortTabButtonLabelInfo TabLabelInfo; // 0x08(0xa0)
};

// ScriptStruct FortniteUI.ConsumedCriteriaData
// Size: 0x18 (Inherited: 0x00)
struct FConsumedCriteriaData {
	float PowerMod; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FName> CriteriaNames; // 0x08(0x10)
};

// ScriptStruct FortniteUI.ViewVaultItemsParams
// Size: 0x18 (Inherited: 0x00)
struct FViewVaultItemsParams {
	struct TArray<struct UFortItemDefinition*> ItemsToView; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct FortniteUI.FortFrontEndFeatureStruct
// Size: 0x18 (Inherited: 0x00)
struct FFortFrontEndFeatureStruct {
	enum class EFortFrontEndFeatureState CurrentState; // 0x00(0x01)
	enum class EFortFrontEndFeatureState ForcedState; // 0x01(0x01)
	enum class EFortFrontEndFeatureStateReason ForcedStateReason; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FMulticastInlineDelegate ChangeDelegate; // 0x08(0x10)
};

// ScriptStruct FortniteUI.UnlockableVariantPreviewInfo
// Size: 0x28 (Inherited: 0x00)
struct FUnlockableVariantPreviewInfo {
	bool bIsValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SetNumber; // 0x04(0x04)
	int32_t SetCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText UnlockCondition; // 0x10(0x18)
};

// ScriptStruct FortniteUI.FortMissionDetails
// Size: 0x170 (Inherited: 0x00)
struct FFortMissionDetails {
	enum class EFortTheaterMapTileType TileType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText TheaterDisplayName; // 0x08(0x18)
	struct FText MissionName; // 0x20(0x18)
	struct FText MissionDescription; // 0x38(0x18)
	bool bIsGroupContent; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct UFortMissionGenerator* MissionDefinition; // 0x58(0x08)
	struct FText ZoneName; // 0x60(0x18)
	struct FText ZoneDescription; // 0x78(0x18)
	struct FText RegionThemeName; // 0x90(0x18)
	struct TSoftObjectPtr<struct USlateBrushAsset> RegionThemeIcon; // 0xa8(0x28)
	struct FText DifficultyName; // 0xd0(0x18)
	struct TArray<struct FFortMissionRewardInfo> MissionRewards; // 0xe8(0x10)
	struct FTimespan AvailableTime; // 0xf8(0x08)
	enum class ERatingsEnforcementType RatingsEnforcement; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	int32_t RequiredBaseRating; // 0x104(0x04)
	int32_t RecommendedBaseRating; // 0x108(0x04)
	int32_t MaxBaseRating; // 0x10c(0x04)
	int32_t ContentDifficultyLevel; // 0x110(0x04)
	bool bIsOnboarding; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	int32_t LootLevel; // 0x118(0x04)
	bool bOverrideConningText; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct FText ConningOverrideText; // 0x120(0x18)
	struct FString TheaterUniqueId; // 0x138(0x10)
	struct UFortCloudSaveItemDefinition* AssociatedCloudSaveItemDefinition; // 0x148(0x08)
	struct TArray<struct UFortGameplayModifierItemDefinition*> GameplayModifiers; // 0x150(0x10)
	struct TArray<struct FText> Objectives; // 0x160(0x10)
};

// ScriptStruct FortniteUI.FortMissionRewardInfo
// Size: 0xb0 (Inherited: 0x00)
struct FFortMissionRewardInfo {
	struct FSlateBrush Icon; // 0x00(0x88)
	struct FText DisplayName; // 0x88(0x18)
	struct UFortItem* Item; // 0xa0(0x08)
	bool bIsMissionAlertReward; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// ScriptStruct FortniteUI.NotificationWidgetClass
// Size: 0x20 (Inherited: 0x00)
struct FNotificationWidgetClass {
	struct UFortNotificationEntry* NotificationWidgetClass; // 0x00(0x08)
	int32_t InitialPoolSize; // 0x08(0x04)
	bool bCanIncreasePoolSizeAtRunTime; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct UFortNotificationEntry*> WidgetPool; // 0x10(0x10)
};

// ScriptStruct FortniteUI.GiftingErrorText
// Size: 0x38 (Inherited: 0x00)
struct FGiftingErrorText {
	enum class EOfferPurchaseError GiftingError; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText ErrorTitle; // 0x08(0x18)
	struct FText ErrorDesc; // 0x20(0x18)
};

// ScriptStruct FortniteUI.FortHeroLoadoutHeroPickerTabConfiguration
// Size: 0xb0 (Inherited: 0x00)
struct FFortHeroLoadoutHeroPickerTabConfiguration {
	struct FFortItemFilterDefinition Filter; // 0x00(0x60)
	struct FFortItemSorterDefinition Sorter; // 0x60(0x50)
};

// ScriptStruct FortniteUI.FortItemSorterDefinition
// Size: 0x50 (Inherited: 0x00)
struct FFortItemSorterDefinition {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct FortniteUI.FortItemFilterDefinition
// Size: 0x60 (Inherited: 0x00)
struct FFortItemFilterDefinition {
	struct TArray<enum class EFortItemType> ItemTypeFilters; // 0x00(0x10)
	char pad_10[0x40]; // 0x10(0x40)
	bool bRequiresItemDetails; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct FortniteUI.FortInGamePerkDisplayData
// Size: 0x10 (Inherited: 0x00)
struct FFortInGamePerkDisplayData {
	enum class EFortHeroPerkDisplayType PerkDisplayType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Index; // 0x04(0x04)
	int32_t Row; // 0x08(0x04)
	int32_t Column; // 0x0c(0x04)
};

// ScriptStruct FortniteUI.FortHeroNamesData
// Size: 0x38 (Inherited: 0x08)
struct FFortHeroNamesData : FTableRowBase {
	struct FString FirstName; // 0x08(0x10)
	struct FString NickName; // 0x18(0x10)
	struct FString LastName; // 0x28(0x10)
};

// ScriptStruct FortniteUI.FortItemDelta
// Size: 0x10 (Inherited: 0x00)
struct FFortItemDelta {
	struct UFortItemDefinition* ItemDefinition; // 0x00(0x08)
	int32_t BaseAmount; // 0x08(0x04)
	int32_t DeltaAmount; // 0x0c(0x04)
};

// ScriptStruct FortniteUI.FortBasicMissionInfo
// Size: 0x390 (Inherited: 0x00)
struct FFortBasicMissionInfo {
	struct FText MissionName; // 0x00(0x18)
	struct FFortMultiSizeBrush MissionIcons; // 0x18(0x330)
	struct FText TheaterName; // 0x348(0x18)
	struct FText DifficultyName; // 0x360(0x18)
	struct UMediaSource* EndOfMissionMediaSource; // 0x378(0x08)
	struct UMediaSource* EndOfMissionMediaSourceStreamed; // 0x380(0x08)
	bool bSkipEndOfMissionVideo; // 0x388(0x01)
	bool bIsGroupContent; // 0x389(0x01)
	char pad_38A[0x6]; // 0x38a(0x06)
};

// ScriptStruct FortniteUI.ContextPosition
// Size: 0x10 (Inherited: 0x00)
struct FContextPosition {
	enum class EContextPositionPlatform Platform; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FVector2D Position; // 0x04(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x0c(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
};

// ScriptStruct FortniteUI.FortActionBeingUnbound
// Size: 0x0c (Inherited: 0x00)
struct FFortActionBeingUnbound {
	struct FName ActionName; // 0x00(0x08)
	int32_t InputIndex; // 0x08(0x04)
};

// ScriptStruct FortniteUI.ItemDefinitionChangedStruct
// Size: 0x10 (Inherited: 0x00)
struct FItemDefinitionChangedStruct {
	struct FMulticastInlineDelegate ChangeDelegate; // 0x00(0x10)
};

// ScriptStruct FortniteUI.FortItemCard_XXS_ItemInstance_Configuration
// Size: 0x30 (Inherited: 0x00)
struct FFortItemCard_XXS_ItemInstance_Configuration {
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x00(0x30)
};

// ScriptStruct FortniteUI.FortItemCard_StackCountBlock_Configuration
// Size: 0x30 (Inherited: 0x00)
struct FFortItemCard_StackCountBlock_Configuration {
	bool bShowShorthandStackCount; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	SoftClassProperty TextStyle; // 0x08(0x28)
};

// ScriptStruct FortniteUI.FortItemCard_XS_TransformKey_Configuration
// Size: 0x48 (Inherited: 0x00)
struct FFortItemCard_XS_TransformKey_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x10(0x30)
	struct FVector2D TransformKeyIconSize; // 0x40(0x08)
};

// ScriptStruct FortniteUI.FortItemCard_XS_ItemInstance_Configuration
// Size: 0x230 (Inherited: 0x00)
struct FFortItemCard_XS_ItemInstance_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FMargin PowerRatingBlockPadding; // 0x10(0x10)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock; // 0x20(0x1a8)
	struct FVector2D BookmarkImageSize; // 0x1c8(0x08)
	struct FMargin TraitBoxPadding; // 0x1d0(0x10)
	struct FVector2D FirstTraitSize; // 0x1e0(0x08)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x1e8(0x30)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter; // 0x218(0x14)
	char pad_22C[0x4]; // 0x22c(0x04)
};

// ScriptStruct FortniteUI.FortItemCard_DurabilityMeter_Configuration
// Size: 0x14 (Inherited: 0x00)
struct FFortItemCard_DurabilityMeter_Configuration {
	float MeterThickness; // 0x00(0x04)
	struct FMargin MeterPadding; // 0x04(0x10)
};

// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_Configuration
// Size: 0xf8 (Inherited: 0x00)
struct FFortItemCard_PowerRatingBlock_Configuration {
	char pad_0[0x8]; // 0x00(0x08)
	struct FSlateBrush MoonbeamBorderBrush; // 0x08(0x88)
	struct FMargin MoonbeamBorderExteriorPadding; // 0x90(0x10)
	struct FMargin MoonbeamBorderPadding; // 0xa0(0x10)
	struct FMargin CustomRatingInternalPadding; // 0xb0(0x10)
	struct FVector2D CustomRatingIconSize; // 0xc0(0x08)
	SoftClassProperty CustomRatingTextStyle; // 0xc8(0x28)
	struct FVector2D ComparisonIndicatorSize; // 0xf0(0x08)
};

// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_ItemInstance_Configuration
// Size: 0x1a8 (Inherited: 0xf8)
struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration : FFortItemCard_PowerRatingBlock_Configuration {
	struct FSlateBrush PowerRatingIconBrush; // 0xf8(0x88)
	SoftClassProperty PowerRatingTextStyle; // 0x180(0x28)
};

// ScriptStruct FortniteUI.FortItemCard_XS_PersonnelAndSchematics_Configuration
// Size: 0x34 (Inherited: 0x00)
struct FFortItemCard_XS_PersonnelAndSchematics_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FVector2D BookmarkImageSize; // 0x10(0x08)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder; // 0x18(0x14)
	struct FVector2D AvailableUpgradeIconSize; // 0x2c(0x08)
};

// ScriptStruct FortniteUI.FortItemCard_DetailAreaBorder_Configuration
// Size: 0x14 (Inherited: 0x00)
struct FFortItemCard_DetailAreaBorder_Configuration {
	float MinimumHeight; // 0x00(0x04)
	struct FMargin Padding; // 0x04(0x10)
};

// ScriptStruct FortniteUI.FortItemCard_S_TransformKey_Configuration
// Size: 0x48 (Inherited: 0x00)
struct FFortItemCard_S_TransformKey_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x10(0x30)
	struct FVector2D TransformKeyIconSize; // 0x40(0x08)
};

// ScriptStruct FortniteUI.FortItemCard_S_ItemInstance_Configuration
// Size: 0x248 (Inherited: 0x00)
struct FFortItemCard_S_ItemInstance_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FMargin PowerRatingBlockPadding; // 0x10(0x10)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock; // 0x20(0x1a8)
	struct FVector2D BookmarkImageSize; // 0x1c8(0x08)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x1d0(0x30)
	struct FMargin TraitBoxPadding; // 0x200(0x10)
	struct FVector2D FirstTraitSize; // 0x210(0x08)
	struct FMargin TierMeterPadding; // 0x218(0x10)
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x228(0x0c)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter; // 0x234(0x14)
};

// ScriptStruct FortniteUI.FortItemCard_TierMeter_Configuration
// Size: 0x0c (Inherited: 0x00)
struct FFortItemCard_TierMeter_Configuration {
	struct FVector2D PipSize; // 0x00(0x08)
	float InterPipPadding; // 0x08(0x04)
};

// ScriptStruct FortniteUI.FortItemCard_S_PersonnelAndSchematics_Configuration
// Size: 0x370 (Inherited: 0x00)
struct FFortItemCard_S_PersonnelAndSchematics_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock; // 0x10(0x258)
	struct FVector2D BookmarkImageSize; // 0x268(0x08)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate; // 0x270(0x98)
	struct FVector2D ClassIconSize; // 0x308(0x08)
	struct FVector2D LeadSurvivorTypeIconSize; // 0x310(0x08)
	struct FVector2D FirstIconSlotSize; // 0x318(0x08)
	float PaddingBetweenIconSlots; // 0x320(0x04)
	struct FVector2D SecondIconSlotSize; // 0x324(0x08)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon; // 0x32c(0x08)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder; // 0x334(0x14)
	struct FFortItemCard_LevelMeter_Configuration LevelMeter; // 0x348(0x14)
	float TierMeterLeftPadding; // 0x35c(0x04)
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x360(0x0c)
	char pad_36C[0x4]; // 0x36c(0x04)
};

// ScriptStruct FortniteUI.FortItemCard_LevelMeter_Configuration
// Size: 0x14 (Inherited: 0x00)
struct FFortItemCard_LevelMeter_Configuration {
	float MeterThickness; // 0x00(0x04)
	struct FMargin MeterPadding; // 0x04(0x10)
};

// ScriptStruct FortniteUI.FortItemCard_DefenderWeaponTypeIcon_Configuration
// Size: 0x08 (Inherited: 0x00)
struct FFortItemCard_DefenderWeaponTypeIcon_Configuration {
	struct FVector2D IconConstraints; // 0x00(0x08)
};

// ScriptStruct FortniteUI.FortItemCard_NameplateBorder_Configuration
// Size: 0x98 (Inherited: 0x00)
struct FFortItemCard_NameplateBorder_Configuration {
	struct FMargin Padding; // 0x00(0x10)
	struct FSlateBrush Brush; // 0x10(0x88)
};

// ScriptStruct FortniteUI.FortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration
// Size: 0x258 (Inherited: 0xf8)
struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration : FFortItemCard_PowerRatingBlock_Configuration {
	struct FSlateBrush PersonnelPowerRatingIconBrush; // 0xf8(0x88)
	SoftClassProperty PersonnelPowerRatingTextStyle; // 0x180(0x28)
	struct FSlateBrush SchematicPowerRatingIconBrush; // 0x1a8(0x88)
	SoftClassProperty SchematicPowerRatingTextStyle; // 0x230(0x28)
};

// ScriptStruct FortniteUI.FortItemCard_M_TransformKey_Configuration
// Size: 0x48 (Inherited: 0x00)
struct FFortItemCard_M_TransformKey_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x10(0x30)
	struct FVector2D TransformKeyIconSize; // 0x40(0x08)
};

// ScriptStruct FortniteUI.FortItemCard_M_ItemInstance_Configuration
// Size: 0x258 (Inherited: 0x00)
struct FFortItemCard_M_ItemInstance_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FMargin PowerRatingBlockPadding; // 0x10(0x10)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock; // 0x20(0x1a8)
	struct FVector2D BookmarkImageSize; // 0x1c8(0x08)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x1d0(0x30)
	struct FMargin TraitBoxPadding; // 0x200(0x10)
	struct FVector2D FirstTraitSize; // 0x210(0x08)
	float PaddingBetweenTraitIcons; // 0x218(0x04)
	struct FVector2D SecondTraitSize; // 0x21c(0x08)
	struct FMargin TierMeterPadding; // 0x224(0x10)
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x234(0x0c)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter; // 0x240(0x14)
	char pad_254[0x4]; // 0x254(0x04)
};

// ScriptStruct FortniteUI.FortItemCard_M_PersonnelAndSchematics_Configuration
// Size: 0x370 (Inherited: 0x00)
struct FFortItemCard_M_PersonnelAndSchematics_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock; // 0x10(0x258)
	struct FVector2D BookmarkImageSize; // 0x268(0x08)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate; // 0x270(0x98)
	struct FVector2D ClassIconSize; // 0x308(0x08)
	struct FVector2D LeadSurvivorTypeIconSize; // 0x310(0x08)
	struct FVector2D FirstIconSlotSize; // 0x318(0x08)
	float PaddingBetweenIconSlots; // 0x320(0x04)
	struct FVector2D SecondIconSlotSize; // 0x324(0x08)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon; // 0x32c(0x08)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder; // 0x334(0x14)
	struct FFortItemCard_LevelMeter_Configuration LevelMeter; // 0x348(0x14)
	float TierMeterLeftPadding; // 0x35c(0x04)
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x360(0x0c)
	char pad_36C[0x4]; // 0x36c(0x04)
};

// ScriptStruct FortniteUI.FortItemCard_L_TransformKey_Configuration
// Size: 0x48 (Inherited: 0x00)
struct FFortItemCard_L_TransformKey_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x10(0x30)
	struct FVector2D TransformKeyIconSize; // 0x40(0x08)
};

// ScriptStruct FortniteUI.FortItemCard_L_ItemInstance_Configuration
// Size: 0x258 (Inherited: 0x00)
struct FFortItemCard_L_ItemInstance_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FMargin PowerRatingBlockPadding; // 0x10(0x10)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock; // 0x20(0x1a8)
	struct FVector2D BookmarkImageSize; // 0x1c8(0x08)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x1d0(0x30)
	struct FMargin TraitBoxPadding; // 0x200(0x10)
	struct FVector2D FirstTraitSize; // 0x210(0x08)
	float PaddingBetweenTraitIcons; // 0x218(0x04)
	struct FVector2D SecondTraitSize; // 0x21c(0x08)
	struct FMargin TierMeterPadding; // 0x224(0x10)
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x234(0x0c)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter; // 0x240(0x14)
	char pad_254[0x4]; // 0x254(0x04)
};

// ScriptStruct FortniteUI.FortItemCard_L_PersonnelAndSchematics_Configuration
// Size: 0x370 (Inherited: 0x00)
struct FFortItemCard_L_PersonnelAndSchematics_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock; // 0x10(0x258)
	struct FVector2D BookmarkImageSize; // 0x268(0x08)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate; // 0x270(0x98)
	struct FVector2D ClassIconSize; // 0x308(0x08)
	struct FVector2D LeadSurvivorTypeIconSize; // 0x310(0x08)
	struct FVector2D FirstIconSlotSize; // 0x318(0x08)
	float PaddingBetweenIconSlots; // 0x320(0x04)
	struct FVector2D SecondIconSlotSize; // 0x324(0x08)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon; // 0x32c(0x08)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder; // 0x334(0x14)
	struct FFortItemCard_LevelMeter_Configuration LevelMeter; // 0x348(0x14)
	float TierMeterLeftPadding; // 0x35c(0x04)
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x360(0x0c)
	char pad_36C[0x4]; // 0x36c(0x04)
};

// ScriptStruct FortniteUI.FortItemCard_XL_TransformKey_Configuration
// Size: 0x48 (Inherited: 0x00)
struct FFortItemCard_XL_TransformKey_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x10(0x30)
	struct FVector2D TransformKeyIconSize; // 0x40(0x08)
};

// ScriptStruct FortniteUI.FortItemCard_XL_ItemInstance_Configuration
// Size: 0x258 (Inherited: 0x00)
struct FFortItemCard_XL_ItemInstance_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FMargin PowerRatingBlockPadding; // 0x10(0x10)
	struct FFortItemCard_PowerRatingBlock_ItemInstance_Configuration PowerRatingBlock; // 0x20(0x1a8)
	struct FVector2D BookmarkImageSize; // 0x1c8(0x08)
	struct FFortItemCard_StackCountBlock_Configuration StackCountBlock; // 0x1d0(0x30)
	struct FMargin TraitBoxPadding; // 0x200(0x10)
	struct FVector2D FirstTraitSize; // 0x210(0x08)
	float PaddingBetweenTraitIcons; // 0x218(0x04)
	struct FVector2D SecondTraitSize; // 0x21c(0x08)
	struct FMargin TierMeterPadding; // 0x224(0x10)
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x234(0x0c)
	struct FFortItemCard_DurabilityMeter_Configuration DurabilityMeter; // 0x240(0x14)
	char pad_254[0x4]; // 0x254(0x04)
};

// ScriptStruct FortniteUI.FortItemCard_XL_PersonnelAndSchematics_Configuration
// Size: 0x3f8 (Inherited: 0x00)
struct FFortItemCard_XL_PersonnelAndSchematics_Configuration {
	struct FMargin BackgroundPadding; // 0x00(0x10)
	struct FFortItemCard_PowerRatingBlock_PersonnelAndSchematics_Configuration PowerRatingBlock; // 0x10(0x258)
	struct FVector2D BookmarkImageSize; // 0x268(0x08)
	struct FFortItemCard_NameplateBorder_Configuration Nameplate; // 0x270(0x98)
	SoftClassProperty ItemNameTextStyle; // 0x308(0x28)
	struct FVector2D LeadSurvivorTypeIconSize; // 0x330(0x08)
	struct FVector2D FirstIconSlotSize; // 0x338(0x08)
	float PaddingBetweenIconSlots; // 0x340(0x04)
	struct FVector2D SecondIconSlotSize; // 0x344(0x08)
	struct FFortItemCard_DefenderWeaponTypeIcon_Configuration DefenderWeaponTypeIcon; // 0x34c(0x08)
	struct FFortItemCard_DetailAreaBorder_Configuration DetailAreaBorder; // 0x354(0x14)
	float RarityNameTextLeftPadding; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
	SoftClassProperty RarityNameTextStyle; // 0x370(0x28)
	float ClassIconImageLeftPadding; // 0x398(0x04)
	struct FVector2D ClassIconSize; // 0x39c(0x08)
	float PaddingBetweenClassIconAndName; // 0x3a4(0x04)
	SoftClassProperty ClassNameTextStyle; // 0x3a8(0x28)
	float TierMeterLeftPadding; // 0x3d0(0x04)
	struct FFortItemCard_TierMeter_Configuration TierMeter; // 0x3d4(0x0c)
	struct FMargin IconSlotOverNameplatePadding; // 0x3e0(0x10)
	struct FVector2D IconSlotOverNameplateSize; // 0x3f0(0x08)
};

// ScriptStruct FortniteUI.FortRefundDescriptionsData
// Size: 0x40 (Inherited: 0x08)
struct FFortRefundDescriptionsData : FTableRowBase {
	struct FString SearchString; // 0x08(0x10)
	struct FString TargetReleaseVersion; // 0x18(0x10)
	struct FText RefundDescriptionText; // 0x28(0x18)
};

// ScriptStruct FortniteUI.FortItemListViewConfig
// Size: 0xc0 (Inherited: 0x00)
struct FFortItemListViewConfig {
	char pad_0[0xc0]; // 0x00(0xc0)
};

// ScriptStruct FortniteUI.FortItemManagementInventoryFilterTabLabelInfo
// Size: 0xa8 (Inherited: 0xa0)
struct FFortItemManagementInventoryFilterTabLabelInfo : FFortTabButtonLabelInfo {
	struct FName FilterTabNameId; // 0xa0(0x08)
};

// ScriptStruct FortniteUI.ItemPresentationRestrictionData
// Size: 0x40 (Inherited: 0x00)
struct FItemPresentationRestrictionData {
	struct FText HeaderText; // 0x00(0x18)
	struct TSoftObjectPtr<struct UObject> Icon; // 0x18(0x28)
};

// ScriptStruct FortniteUI.InterpolatedTransitionCamera
// Size: 0x40 (Inherited: 0x00)
struct FInterpolatedTransitionCamera {
	struct FTransform CameraTransform; // 0x00(0x30)
	float FieldOfView; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct FortniteUI.SceneTransitionOptions
// Size: 0x01 (Inherited: 0x00)
struct FSceneTransitionOptions {
	enum class ESceneTransitionType TRANSITION; // 0x00(0x01)
};

// ScriptStruct FortniteUI.FortItemEntryPreviewData
// Size: 0x08 (Inherited: 0x00)
struct FFortItemEntryPreviewData {
	int32_t Quantity; // 0x00(0x04)
	enum class EFortItemInspectionMode InspectMode; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct FortniteUI.MeasuredText
// Size: 0x28 (Inherited: 0x00)
struct FMeasuredText {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct FortniteUI.OfferGroup
// Size: 0x18 (Inherited: 0x00)
struct FOfferGroup {
	struct FString Name; // 0x00(0x10)
	int32_t MaxNumberToShow; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct FortniteUI.FortMaterialProgressBarSectionInfo
// Size: 0x40 (Inherited: 0x00)
struct FFortMaterialProgressBarSectionInfo {
	struct FFortMaterialProgressBarSectionStyle SectionStyle; // 0x00(0x3c)
	float Percent; // 0x3c(0x04)
};

// ScriptStruct FortniteUI.FortMaterialProgressBarSectionStyle
// Size: 0x3c (Inherited: 0x00)
struct FFortMaterialProgressBarSectionStyle {
	bool bGradientBar; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName BarParamName; // 0x04(0x08)
	struct FName BarColorOneParamName; // 0x0c(0x08)
	struct FName BarColorTwoParamName; // 0x14(0x08)
	struct FLinearColor BarColorOne; // 0x1c(0x10)
	struct FLinearColor BarColorTwo; // 0x2c(0x10)
};

// ScriptStruct FortniteUI.ActionBindingIconPicker
// Size: 0x18 (Inherited: 0x00)
struct FActionBindingIconPicker {
	struct TArray<struct FName> ActionNames; // 0x00(0x10)
	struct UPaperSprite* Sprite; // 0x10(0x08)
};

// ScriptStruct FortniteUI.ActionBindingVisibility
// Size: 0x18 (Inherited: 0x00)
struct FActionBindingVisibility {
	struct TArray<struct FName> ActionNames; // 0x00(0x10)
	enum class EActionBindingComparisonType ComparisonType; // 0x10(0x01)
	enum class ESlateVisibility Visibility; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct FortniteUI.GameplayMessageVisibility
// Size: 0x0c (Inherited: 0x00)
struct FGameplayMessageVisibility {
	struct FEventMessageTag EventMessageTag; // 0x00(0x08)
	enum class ESlateVisibility MessageReceivedVisibility; // 0x08(0x01)
	enum class ESlateVisibility MessageStateClearedVisibility; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct FortniteUI.IconPicker
// Size: 0x28 (Inherited: 0x00)
struct FIconPicker {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	struct UPaperSprite* Sprite; // 0x20(0x08)
};

// ScriptStruct FortniteUI.TagVisibility
// Size: 0x28 (Inherited: 0x00)
struct FTagVisibility {
	struct FGameplayTagContainer Tags; // 0x00(0x20)
	enum class ETagComparisonType ComparisonType; // 0x20(0x01)
	enum class ESlateVisibility Visibility; // 0x21(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct FortniteUI.FortMobileContextFilter
// Size: 0x40 (Inherited: 0x00)
struct FFortMobileContextFilter {
	struct FGameplayTagContainer ShownInContexts; // 0x00(0x20)
	struct FGameplayTagContainer HiddenInContexts; // 0x20(0x20)
};

// ScriptStruct FortniteUI.FortMobileHUDContextLayout
// Size: 0x20 (Inherited: 0x00)
struct FFortMobileHUDContextLayout {
	char pad_0[0x10]; // 0x00(0x10)
	struct UFortMobileHUDContextModel* HUDContextModel; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct FortniteUI.FortMobileHUDContextModelExtension
// Size: 0x28 (Inherited: 0x00)
struct FFortMobileHUDContextModelExtension {
	struct FGameplayTag ContextLayoutTag; // 0x00(0x08)
	struct FGameplayTagContainer UseableHUDWidgetTags; // 0x08(0x20)
};

// ScriptStruct FortniteUI.FortMobileHUDLayoutProfile
// Size: 0x30 (Inherited: 0x00)
struct FFortMobileHUDLayoutProfile {
	struct FText ProfileName; // 0x00(0x18)
	struct TArray<struct FFortMobileHUDContextLayout> ContextLayouts; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct FortniteUI.UserAction
// Size: 0x18 (Inherited: 0x00)
struct FUserAction {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString ActionName; // 0x08(0x10)
};

// ScriptStruct FortniteUI.UserSelectProfileAction
// Size: 0x98 (Inherited: 0x18)
struct FUserSelectProfileAction : FUserAction {
	struct FFortMobileHUDProfileBase PreviousProfile; // 0x18(0x40)
	struct FFortMobileHUDProfileBase NewProfile; // 0x58(0x40)
};

// ScriptStruct FortniteUI.UserRenameAction
// Size: 0x38 (Inherited: 0x18)
struct FUserRenameAction : FUserAction {
	struct FString PreviousName; // 0x18(0x10)
	struct FString NewName; // 0x28(0x10)
};

// ScriptStruct FortniteUI.UserGenericAction
// Size: 0x58 (Inherited: 0x18)
struct FUserGenericAction : FUserAction {
	struct FFortMobileHUDProfileBase ActiveProfile; // 0x18(0x40)
};

// ScriptStruct FortniteUI.FortMobileHUDWidgetLayout
// Size: 0x40 (Inherited: 0x00)
struct FFortMobileHUDWidgetLayout {
	struct FAnchorData LayoutData; // 0x00(0x28)
	int32_t ZOrder; // 0x28(0x04)
	char pad_2C[0x14]; // 0x2c(0x14)
};

// ScriptStruct FortniteUI.HUDWidgetBehaviorExtensionsRegistryEntry
// Size: 0x18 (Inherited: 0x00)
struct FHUDWidgetBehaviorExtensionsRegistryEntry {
	struct FGameplayTag HUDWidgetBehaviorTag; // 0x00(0x08)
	struct TArray<struct UFortMobileHUDWidgetBehaviorExtension*> HUDWidgetBehaviorExtensions; // 0x08(0x10)
};

// ScriptStruct FortniteUI.HUDWidgetSchemaInitializer
// Size: 0x10 (Inherited: 0x00)
struct FHUDWidgetSchemaInitializer {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct FortniteUI.HUDWidgetBehaviorRegistryEntry
// Size: 0x18 (Inherited: 0x00)
struct FHUDWidgetBehaviorRegistryEntry {
	struct FGameplayTag HUDWidgetBehaviorTag; // 0x00(0x08)
	struct FGameplayTag HUDWidgetOverrideTag; // 0x08(0x08)
	struct UHUDWidgetBehavior* HUDWidgetBehaviorClass; // 0x10(0x08)
};

// ScriptStruct FortniteUI.HUDWidgetRegistryEntry
// Size: 0x40 (Inherited: 0x00)
struct FHUDWidgetRegistryEntry {
	struct FGameplayTag HUDWidgetTag; // 0x00(0x08)
	bool bIsMandatory; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float MandatoryOnScreenPercent; // 0x0c(0x04)
	int32_t MaximumAmountOfInstances; // 0x10(0x04)
	int32_t ZOrder; // 0x14(0x04)
	struct UFortMobileHUDElement* HUDWidgetClass; // 0x18(0x08)
	struct UFortMobileHUDElementProxy* HUDWidgetProxyClass; // 0x20(0x08)
	struct UHUDLayoutToolV2_WidgetPreview* HUDWidgetPreviewClass; // 0x28(0x08)
	struct TArray<struct UFortMobileHUDWidgetCustomPropertyModel*> CustomPropertyModels; // 0x30(0x10)
};

// ScriptStruct FortniteUI.FortModalContainerSizeEntry
// Size: 0x1c (Inherited: 0x00)
struct FFortModalContainerSizeEntry {
	float AbsoluteWidth; // 0x00(0x04)
	float TopPercent; // 0x04(0x04)
	float MiddlePercent; // 0x08(0x04)
	float BottomPercent; // 0x0c(0x04)
	float VerticalPadding; // 0x10(0x04)
	float HorizontalPadding; // 0x14(0x04)
	float ContentPadding; // 0x18(0x04)
};

// ScriptStruct FortniteUI.FortMtxGradient
// Size: 0x20 (Inherited: 0x00)
struct FFortMtxGradient {
	struct FLinearColor Start; // 0x00(0x10)
	struct FLinearColor Stop; // 0x10(0x10)
};

// ScriptStruct FortniteUI.FortMtxDetailsAttribute
// Size: 0x30 (Inherited: 0x00)
struct FFortMtxDetailsAttribute {
	struct FText Name; // 0x00(0x18)
	struct FText Value; // 0x18(0x18)
};

// ScriptStruct FortniteUI.FortUIPerkTier
// Size: 0x18 (Inherited: 0x00)
struct FFortUIPerkTier {
	struct UFortHeroSpecialization* HeroSpecialization; // 0x00(0x08)
	struct UFortHero* CurrentHero; // 0x08(0x08)
	enum class EFortItemTier Tier; // 0x10(0x01)
	bool bIsUpgrade; // 0x11(0x01)
	bool bIsEvolution; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct FortniteUI.FortPhoenixLevelProgressionRewards
// Size: 0x30 (Inherited: 0x00)
struct FFortPhoenixLevelProgressionRewards {
	int32_t NextRewardLevel; // 0x00(0x04)
	struct FFortItemQuantityPair NextReward; // 0x04(0x14)
	int32_t NextMajorRewardLevel; // 0x18(0x04)
	struct FFortItemQuantityPair NextMajorReward; // 0x1c(0x14)
};

// ScriptStruct FortniteUI.TrackedTrapTimeAndCount
// Size: 0x08 (Inherited: 0x00)
struct FTrackedTrapTimeAndCount {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct FortniteUI.FortPickerTemporaryWheel
// Size: 0x30 (Inherited: 0x00)
struct FFortPickerTemporaryWheel {
	char pad_0[0x20]; // 0x00(0x20)
	struct TArray<struct FFortPickerTemporaryWheelItem> Items; // 0x20(0x10)
};

// ScriptStruct FortniteUI.FortPickerTemporaryWheelItem
// Size: 0x20 (Inherited: 0x00)
struct FFortPickerTemporaryWheelItem {
	struct FText LabelOverride; // 0x00(0x18)
	struct UFortItemDefinition* Item; // 0x18(0x08)
};

// ScriptStruct FortniteUI.RadialOptionData
// Size: 0xc8 (Inherited: 0x00)
struct FRadialOptionData {
	struct FText Label; // 0x00(0x18)
	struct FSlateBrush Brush; // 0x18(0x88)
	struct TSoftObjectPtr<struct UTexture2D> SoftIcon; // 0xa0(0x28)
};

// ScriptStruct FortniteUI.SquadQuickChatOptionData
// Size: 0xe0 (Inherited: 0xc8)
struct FSquadQuickChatOptionData : FRadialOptionData {
	struct FAthenaQuickChatActiveEntry ChatEntry; // 0xc8(0x14)
	bool bEnabled; // 0xdc(0x01)
	char pad_DD[0x3]; // 0xdd(0x03)
};

// ScriptStruct FortniteUI.ItemDefOptionData
// Size: 0xd0 (Inherited: 0xc8)
struct FItemDefOptionData : FRadialOptionData {
	struct UObject* ItemDef; // 0xc8(0x08)
};

// ScriptStruct FortniteUI.EmoteOptionData
// Size: 0xd0 (Inherited: 0xc8)
struct FEmoteOptionData : FRadialOptionData {
	struct FName EmoteCommand; // 0xc8(0x08)
};

// ScriptStruct FortniteUI.MapNoteOptionData
// Size: 0xe0 (Inherited: 0xc8)
struct FMapNoteOptionData : FRadialOptionData {
	struct FText MapNoteText; // 0xc8(0x18)
};

// ScriptStruct FortniteUI.SquadChatOptionData
// Size: 0xe0 (Inherited: 0xc8)
struct FSquadChatOptionData : FRadialOptionData {
	struct FText ChatText; // 0xc8(0x18)
};

// ScriptStruct FortniteUI.ChatOptionData
// Size: 0xe0 (Inherited: 0xc8)
struct FChatOptionData : FRadialOptionData {
	struct FText ChatText; // 0xc8(0x18)
};

// ScriptStruct FortniteUI.ItemCategoryOptionData
// Size: 0xe0 (Inherited: 0xc8)
struct FItemCategoryOptionData : FRadialOptionData {
	struct FString TemplatePrefix; // 0xc8(0x10)
	enum class EBuildingAttachmentType BuildingAttachmentType; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// ScriptStruct FortniteUI.BuildingOptionData
// Size: 0xe0 (Inherited: 0xc8)
struct FBuildingOptionData : FRadialOptionData {
	struct FString ClassSuffix; // 0xc8(0x10)
	bool ClassMirrored; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// ScriptStruct FortniteUI.BuildingCategoryOptionData
// Size: 0xd0 (Inherited: 0xc8)
struct FBuildingCategoryOptionData : FRadialOptionData {
	enum class EFortBuildingType BuildingType; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct FortniteUI.FortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo
// Size: 0x08 (Inherited: 0x00)
struct FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusInfo {
	enum class EFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetFocusType FocusType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Index; // 0x04(0x04)
};

// ScriptStruct FortniteUI.FortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBaseInternalButtonData
// Size: 0x18 (Inherited: 0x00)
struct FFortPlayerSurveyButtonListMultipleSelectionAnswerWidgetBaseInternalButtonData {
	struct UCommonButtonLegacy* ButtonWidget; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSData
// Size: 0x48 (Inherited: 0x00)
struct FFortPlayerSurveyCMSData {
	struct TArray<struct FFortPlayerSurveyCMSConditionGroup> ConditionGroups; // 0x00(0x10)
	struct TArray<struct FFortPlayerSurveyCMSFrequentlyAskedQuestion> FrequentlyAskedQuestions; // 0x10(0x10)
	struct TArray<struct FFortPlayerSurveyCMSCustomTextReplacement> CustomTextReplacements; // 0x20(0x10)
	struct TArray<struct FFortPlayerSurveyCMSSurvey> Surveys; // 0x30(0x10)
	bool bSurveysEnabled; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSSurvey
// Size: 0x78 (Inherited: 0x00)
struct FFortPlayerSurveyCMSSurvey {
	struct FString SurveyID; // 0x00(0x10)
	struct TArray<struct FString> SurveyTags; // 0x10(0x10)
	struct FString Title; // 0x20(0x10)
	struct TArray<struct FString> ConditionGroupIDs; // 0x30(0x10)
	struct TArray<struct FFortPlayerSurveyCMSCondition> Conditions; // 0x40(0x10)
	struct TArray<struct FFortPlayerSurveyCMSQuestionContainer> Questions; // 0x50(0x10)
	struct TArray<struct FFortPlayerSurveyCMSCustomTextReplacement> TextReplacementOverrides; // 0x60(0x10)
	bool bRandomizeQuestionOrder; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSCustomTextReplacement
// Size: 0x20 (Inherited: 0x00)
struct FFortPlayerSurveyCMSCustomTextReplacement {
	struct FString TextReplacementTag; // 0x00(0x10)
	struct TArray<struct FFortPlayerSurveyLocalizableText> TextReplacementValues; // 0x10(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyLocalizableText
// Size: 0x20 (Inherited: 0x00)
struct FFortPlayerSurveyLocalizableText {
	struct FString TextID; // 0x00(0x10)
	struct FString LocalizedText; // 0x10(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSQuestionContainer
// Size: 0x60 (Inherited: 0x00)
struct FFortPlayerSurveyCMSQuestionContainer {
	struct FFortPlayerSurveyCMSFrequentlyAskedQuestionID FrequentlyAskedQuestionID; // 0x00(0x10)
	struct FFortPlayerSurveyCMSQuestion Question; // 0x10(0x50)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSQuestion
// Size: 0x50 (Inherited: 0x00)
struct FFortPlayerSurveyCMSQuestion {
	struct FFortPlayerSurveyLocalizableText QuestionText; // 0x00(0x20)
	struct FString Type; // 0x20(0x10)
	uint32_t NumberOfOptions; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FFortPlayerSurveyLocalizableText> Responses; // 0x38(0x10)
	bool bRandomizeResponseOrder; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSFrequentlyAskedQuestionID
// Size: 0x10 (Inherited: 0x00)
struct FFortPlayerSurveyCMSFrequentlyAskedQuestionID {
	struct FString ID; // 0x00(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSCondition
// Size: 0x50 (Inherited: 0x00)
struct FFortPlayerSurveyCMSCondition {
	struct FString Type; // 0x00(0x10)
	struct FString Operation; // 0x10(0x10)
	struct FString ComparisonValue; // 0x20(0x10)
	struct TArray<struct FString> ConditionInfo; // 0x30(0x10)
	struct TArray<struct FJsonObjectWrapper> ChildConditions; // 0x40(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSFrequentlyAskedQuestion
// Size: 0x60 (Inherited: 0x00)
struct FFortPlayerSurveyCMSFrequentlyAskedQuestion {
	struct FString FrequentlyAskedQuestionID; // 0x00(0x10)
	struct FFortPlayerSurveyCMSQuestion Question; // 0x10(0x50)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSConditionGroup
// Size: 0x20 (Inherited: 0x00)
struct FFortPlayerSurveyCMSConditionGroup {
	struct FString ConditionGroupID; // 0x00(0x10)
	struct TArray<struct FFortPlayerSurveyCMSCondition> Conditions; // 0x10(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataCondition
// Size: 0x10 (Inherited: 0x00)
struct FFortPlayerSurveyCMSDataCondition {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionBase
// Size: 0x08 (Inherited: 0x00)
struct FFortPlayerSurveyCMSDataConditionBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionGroupBase
// Size: 0x18 (Inherited: 0x08)
struct FFortPlayerSurveyCMSDataConditionGroupBase : FFortPlayerSurveyCMSDataConditionBase {
	struct TArray<struct FJsonObjectWrapper> C; // 0x08(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAnd
// Size: 0x18 (Inherited: 0x18)
struct FFortPlayerSurveyCMSDataConditionAnd : FFortPlayerSurveyCMSDataConditionGroupBase {
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionSimpleIntComparisonBase
// Size: 0x10 (Inherited: 0x08)
struct FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase : FFortPlayerSurveyCMSDataConditionBase {
	enum class EFortPlayerSurveyCMSDataBinaryComparisonOp O; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t T; // 0x0c(0x04)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAthenaMatchStat
// Size: 0x98 (Inherited: 0x10)
struct FFortPlayerSurveyCMSDataConditionAthenaMatchStat : FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase {
	struct TArray<enum class EFortPlayerSurveyCMSDataPlaylistCategory> pt; // 0x10(0x10)
	struct TSet<struct FName> P; // 0x20(0x50)
	struct TArray<struct FString> I; // 0x70(0x10)
	struct FString S; // 0x80(0x10)
	enum class EFortPlayerSurveyCMSDataAggregateOp ag; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAthenaPoi
// Size: 0x20 (Inherited: 0x08)
struct FFortPlayerSurveyCMSDataConditionAthenaPoi : FFortPlayerSurveyCMSDataConditionBase {
	struct FFortPlayerSurveyCMSDataGameplayTagQuery Q; // 0x08(0x18)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataGameplayTagQuery
// Size: 0x18 (Inherited: 0x00)
struct FFortPlayerSurveyCMSDataGameplayTagQuery {
	enum class EFortPlayerSurveyCMSDataGameplayTagQueryExprType T; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> N; // 0x08(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAthenaSeasonBookState
// Size: 0x10 (Inherited: 0x08)
struct FFortPlayerSurveyCMSDataConditionAthenaSeasonBookState : FFortPlayerSurveyCMSDataConditionBase {
	bool T; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionAthenaSeasonStat
// Size: 0x18 (Inherited: 0x10)
struct FFortPlayerSurveyCMSDataConditionAthenaSeasonStat : FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase {
	enum class EFortPlayerSurveyCMSDataAthenaSeasonStat S; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionGroup
// Size: 0x18 (Inherited: 0x00)
struct FFortPlayerSurveyCMSDataConditionGroup {
	struct FName ID; // 0x00(0x08)
	struct TArray<struct FJsonObjectWrapper> C; // 0x08(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionGroupReference
// Size: 0x10 (Inherited: 0x08)
struct FFortPlayerSurveyCMSDataConditionGroupReference : FFortPlayerSurveyCMSDataConditionBase {
	struct FName ID; // 0x08(0x08)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionMostRecentlyCompleted
// Size: 0x30 (Inherited: 0x08)
struct FFortPlayerSurveyCMSDataConditionMostRecentlyCompleted : FFortPlayerSurveyCMSDataConditionBase {
	struct FFortPlayerSurveyCMSDataRelativeSurveyKey S; // 0x08(0x18)
	enum class EFortPlayerSurveyCMSDataBinaryComparisonOp O; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	double T; // 0x28(0x08)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataRelativeSurveyKey
// Size: 0x18 (Inherited: 0x00)
struct FFortPlayerSurveyCMSDataRelativeSurveyKey {
	enum class EFortPlayerSurveyCMSDataRelativeSurveyKeyType T; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ID; // 0x08(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionOr
// Size: 0x18 (Inherited: 0x18)
struct FFortPlayerSurveyCMSDataConditionOr : FFortPlayerSurveyCMSDataConditionGroupBase {
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionPlatform
// Size: 0x58 (Inherited: 0x08)
struct FFortPlayerSurveyCMSDataConditionPlatform : FFortPlayerSurveyCMSDataConditionBase {
	struct TSet<struct FString> P; // 0x08(0x50)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionQuestState
// Size: 0x30 (Inherited: 0x08)
struct FFortPlayerSurveyCMSDataConditionQuestState : FFortPlayerSurveyCMSDataConditionBase {
	enum class EFortPlayerSurveyCMSDataGameMode sg; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString Q; // 0x10(0x10)
	struct TArray<enum class EFortPlayerSurveyCMSDataQuestState> st; // 0x20(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionRandom
// Size: 0x10 (Inherited: 0x08)
struct FFortPlayerSurveyCMSDataConditionRandom : FFortPlayerSurveyCMSDataConditionBase {
	float P; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionSeasonNumber
// Size: 0x10 (Inherited: 0x10)
struct FFortPlayerSurveyCMSDataConditionSeasonNumber : FFortPlayerSurveyCMSDataConditionSimpleIntComparisonBase {
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataConditionTimesCompleted
// Size: 0x28 (Inherited: 0x08)
struct FFortPlayerSurveyCMSDataConditionTimesCompleted : FFortPlayerSurveyCMSDataConditionBase {
	struct FFortPlayerSurveyCMSDataRelativeSurveyKey S; // 0x08(0x18)
	enum class EFortPlayerSurveyCMSDataBinaryComparisonOp O; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t T; // 0x24(0x04)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestion
// Size: 0x10 (Inherited: 0x00)
struct FFortPlayerSurveyCMSDataQuestion {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionBase
// Size: 0x08 (Inherited: 0x00)
struct FFortPlayerSurveyCMSDataQuestionBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionStandardBase
// Size: 0x28 (Inherited: 0x08)
struct FFortPlayerSurveyCMSDataQuestionStandardBase : FFortPlayerSurveyCMSDataQuestionBase {
	enum class EFortPlayerSurveyCMSDataPresentationStyle S; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FText T; // 0x10(0x18)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionFreeFormText
// Size: 0x48 (Inherited: 0x28)
struct FFortPlayerSurveyCMSDataQuestionFreeFormText : FFortPlayerSurveyCMSDataQuestionStandardBase {
	struct FText ht; // 0x28(0x18)
	bool R; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t L; // 0x44(0x04)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionMultipleChoice
// Size: 0x38 (Inherited: 0x28)
struct FFortPlayerSurveyCMSDataQuestionMultipleChoice : FFortPlayerSurveyCMSDataQuestionStandardBase {
	struct TArray<struct FFortPlayerSurveyCMSDataQuestionChoice> C; // 0x28(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionChoice
// Size: 0x18 (Inherited: 0x00)
struct FFortPlayerSurveyCMSDataQuestionChoice {
	struct FText T; // 0x00(0x18)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataQuestionMultipleSelection
// Size: 0x40 (Inherited: 0x28)
struct FFortPlayerSurveyCMSDataQuestionMultipleSelection : FFortPlayerSurveyCMSDataQuestionStandardBase {
	struct TArray<struct FFortPlayerSurveyCMSDataQuestionChoice> C; // 0x28(0x10)
	int32_t mn; // 0x38(0x04)
	int32_t mx; // 0x3c(0x04)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataRoot
// Size: 0x28 (Inherited: 0x00)
struct FFortPlayerSurveyCMSDataRoot {
	bool E; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FFortPlayerSurveyCMSDataConditionGroup> cg; // 0x08(0x10)
	struct TArray<struct FFortPlayerSurveyCMSDataSurvey> S; // 0x18(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataSurvey
// Size: 0x98 (Inherited: 0x00)
struct FFortPlayerSurveyCMSDataSurvey {
	struct FString ID; // 0x00(0x10)
	struct FText T; // 0x10(0x18)
	bool rt; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FJsonObjectWrapper> C; // 0x30(0x10)
	struct FFortPlayerSurveyCMSDataSurveyDescriptionMessage cm; // 0x40(0x30)
	enum class EFortPlayerSurveyCMSDataTrigger R; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<enum class EFortPlayerSurveyCMSDataGameMode> sg; // 0x78(0x10)
	struct TArray<struct FJsonObjectWrapper> Q; // 0x88(0x10)
};

// ScriptStruct FortniteUI.FortPlayerSurveyCMSDataSurveyDescriptionMessage
// Size: 0x30 (Inherited: 0x00)
struct FFortPlayerSurveyCMSDataSurveyDescriptionMessage {
	struct FText T; // 0x00(0x18)
	struct FText M; // 0x18(0x18)
};

// ScriptStruct FortniteUI.FortQuestMapEventQuestSideBarData
// Size: 0x28 (Inherited: 0x08)
struct FFortQuestMapEventQuestSideBarData : FTableRowBase {
	struct UFortQuestItemDefinition* QuestItemDefinition; // 0x08(0x08)
	struct TArray<struct FString> EventFlags; // 0x10(0x10)
	bool bShowAlways; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float CycleTime; // 0x24(0x04)
};

// ScriptStruct FortniteUI.PlatformSupportDesc
// Size: 0x20 (Inherited: 0x00)
struct FPlatformSupportDesc {
	struct FText DisableDesc; // 0x00(0x18)
	enum class EFortLoginAccountType AccountType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct FortniteUI.FortRichTextStyleData
// Size: 0x280 (Inherited: 0x08)
struct FFortRichTextStyleData : FTableRowBase {
	struct FTextBlockStyle TextStyle; // 0x08(0x270)
	bool bHyperlinkStyle; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
};

// ScriptStruct FortniteUI.ForcedIntroEntry
// Size: 0x30 (Inherited: 0x00)
struct FForcedIntroEntry {
	struct FName EntryName; // 0x00(0x08)
	SoftClassProperty WidgetClass; // 0x08(0x28)
};

// ScriptStruct FortniteUI.FortSettingNameExtensions
// Size: 0x18 (Inherited: 0x00)
struct FFortSettingNameExtensions {
	bool bIncludeClassDefaultExtensions; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<SoftClassProperty> Extensions; // 0x08(0x10)
};

// ScriptStruct FortniteUI.FortSettingClassExtensions
// Size: 0x10 (Inherited: 0x00)
struct FFortSettingClassExtensions {
	struct TArray<SoftClassProperty> Extensions; // 0x00(0x10)
};

// ScriptStruct FortniteUI.FortEventStyleInfo
// Size: 0xa8 (Inherited: 0x08)
struct FFortEventStyleInfo : FTableRowBase {
	struct FLinearColor BaseColor; // 0x08(0x10)
	struct FLinearColor PrimaryColor; // 0x18(0x10)
	struct FLinearColor SecondaryColor; // 0x28(0x10)
	struct FLinearColor HighlightColor; // 0x38(0x10)
	struct FLinearColor TitleColor; // 0x48(0x10)
	struct FLinearColor ShadowColor; // 0x58(0x10)
	struct FLinearColor BackgroundLeftColor; // 0x68(0x10)
	struct FLinearColor BackgroundRightColor; // 0x78(0x10)
	struct FLinearColor BackgroundTextColor; // 0x88(0x10)
	struct FLinearColor PosterFadeColor; // 0x98(0x10)
};

// ScriptStruct FortniteUI.FortTournamentDisplayInfo
// Size: 0x1a8 (Inherited: 0x08)
struct FFortTournamentDisplayInfo : FTableRowBase {
	struct FText TitleLine1; // 0x08(0x18)
	struct FText TitleLine2; // 0x20(0x18)
	struct FText ScheduleInfo; // 0x38(0x18)
	struct FText FlavorDescription; // 0x50(0x18)
	struct FText DetailsDescription; // 0x68(0x18)
	struct FText ShortFormatTitle; // 0x80(0x18)
	struct FText LongFormatTitle; // 0x98(0x18)
	struct FText BackgroundTitle; // 0xb0(0x18)
	int32_t PinScoreRequirement; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct FText PinEarnedText; // 0xd0(0x18)
	struct FLinearColor BaseColor; // 0xe8(0x10)
	struct FLinearColor PrimaryColor; // 0xf8(0x10)
	struct FLinearColor SecondaryColor; // 0x108(0x10)
	struct FLinearColor HighlightColor; // 0x118(0x10)
	struct FLinearColor TitleColor; // 0x128(0x10)
	struct FLinearColor ShadowColor; // 0x138(0x10)
	struct FLinearColor BackgroundLeftColor; // 0x148(0x10)
	struct FLinearColor BackgroundRightColor; // 0x158(0x10)
	struct FLinearColor BackgroundTextColor; // 0x168(0x10)
	struct FLinearColor PosterFadeColor; // 0x178(0x10)
	struct FText AlertText; // 0x188(0x18)
	enum class EFortTournamentAlertType AlertType; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
};

// ScriptStruct FortniteUI.FortShowdownScoringRuleDisplayInfo
// Size: 0x48 (Inherited: 0x08)
struct FFortShowdownScoringRuleDisplayInfo : FTableRowBase {
	struct FText Description; // 0x08(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Icon; // 0x20(0x28)
};

// ScriptStruct FortniteUI.FortShowdownEventBestResultsSummary
// Size: 0x18 (Inherited: 0x00)
struct FFortShowdownEventBestResultsSummary {
	int32_t TotalScore; // 0x00(0x04)
	int32_t MatchesPlayed; // 0x04(0x04)
	int32_t NumVictoryRoyales; // 0x08(0x04)
	int32_t PlacementPoints; // 0x0c(0x04)
	int32_t EliminationPoints; // 0x10(0x04)
	int32_t EntryFeePoints; // 0x14(0x04)
};

// ScriptStruct FortniteUI.PlatformPrefixIconList
// Size: 0x10 (Inherited: 0x00)
struct FPlatformPrefixIconList {
	struct TArray<struct FPlatformPrefixIcon> PlatformPrefixIcons; // 0x00(0x10)
};

// ScriptStruct FortniteUI.PlatformPrefixIcon
// Size: 0x18 (Inherited: 0x00)
struct FPlatformPrefixIcon {
	struct FString Platform; // 0x00(0x10)
	struct UTexture2D* PrefixIcon; // 0x10(0x08)
};

// ScriptStruct FortniteUI.FortUserListHeaderInfo
// Size: 0x18 (Inherited: 0x00)
struct FFortUserListHeaderInfo {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct FortniteUI.PotentialSpectatorTarget
// Size: 0x10 (Inherited: 0x00)
struct FPotentialSpectatorTarget {
	int32_t Rank; // 0x00(0x04)
	struct TWeakObjectPtr<struct AFortPlayerStateAthena> PlayerState; // 0x04(0x08)
	bool bCurrentViewTarget; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct FortniteUI.FortLandingPageDefenderSummaryInfo
// Size: 0x30 (Inherited: 0x00)
struct FFortLandingPageDefenderSummaryInfo {
	struct FName SquadId; // 0x00(0x08)
	struct FText TheaterDisplayName; // 0x08(0x18)
	struct FString TheaterUniqueId; // 0x20(0x10)
};

// ScriptStruct FortniteUI.FortAttributeModifierAccumulation
// Size: 0x48 (Inherited: 0x00)
struct FFortAttributeModifierAccumulation {
	struct FGameplayTag GameplayTag; // 0x00(0x08)
	struct FGameplayAttribute Attribute; // 0x08(0x38)
	enum class EGameplayModOp ModifierOp; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float Magnitude; // 0x44(0x04)
};

// ScriptStruct FortniteUI.OpenedCardPack
// Size: 0x10 (Inherited: 0x00)
struct FOpenedCardPack {
	struct UFortCardPackItemDefinition* CardPackDefinition; // 0x00(0x08)
	int32_t DisplayLevel; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FortniteUI.Card
// Size: 0x18 (Inherited: 0x00)
struct FCard {
	int32_t QuantityReceived; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UFortItem* Item; // 0x08(0x08)
	enum class EPauseType PauseType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct FortniteUI.StoreCallout
// Size: 0x90 (Inherited: 0x00)
struct FStoreCallout {
	struct FFortToastDisplayInfo ToastDisplayInfo; // 0x00(0x60)
	struct FText ItemName; // 0x60(0x18)
	struct FText ItemSet; // 0x78(0x18)
};

// ScriptStruct FortniteUI.FortToastDisplayInfo
// Size: 0x60 (Inherited: 0x00)
struct FFortToastDisplayInfo {
	struct FText Header; // 0x00(0x18)
	struct FText Body; // 0x18(0x18)
	struct TSoftObjectPtr<struct UTexture2D> Image; // 0x30(0x28)
	enum class EFortToastType Type; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct FortniteUI.BundledItemInfo
// Size: 0x18 (Inherited: 0x00)
struct FBundledItemInfo {
	struct FString TemplateId; // 0x00(0x10)
	int32_t Quantity; // 0x10(0x04)
	bool bOwned; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct FortniteUI.OfferPopUpData
// Size: 0x20 (Inherited: 0x08)
struct FOfferPopUpData : FTableRowBase {
	struct FText FormatedText; // 0x08(0x18)
};

// ScriptStruct FortniteUI.FortSurvivorSquadSlottingFeedbackData
// Size: 0xb0 (Inherited: 0x00)
struct FFortSurvivorSquadSlottingFeedbackData {
	bool HadLeaderMatch; // 0x00(0x01)
	bool HasLeaderMatch; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TMap<struct FGameplayTag, int32_t> PreviousSetBonusCounts; // 0x08(0x50)
	struct TMap<struct FGameplayTag, int32_t> CurrentSetBonusCounts; // 0x58(0x50)
	int32_t PreviousPersonalityMatchCount; // 0xa8(0x04)
	int32_t CurrentPersonalityMatchCount; // 0xac(0x04)
};

// ScriptStruct FortniteUI.FortSurvivorSquadSelectorButtonPersonalityMatches
// Size: 0x340 (Inherited: 0x00)
struct FFortSurvivorSquadSelectorButtonPersonalityMatches {
	int32_t NumPersonalityMatches; // 0x00(0x04)
	int32_t TotalNonLeaderSquadMembers; // 0x04(0x04)
	bool HavePersonalityIcons; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FFortMultiSizeBrush PersonalityIcons; // 0x10(0x330)
};

// ScriptStruct FortniteUI.FortSurvivorSquadSelectorButtonSummaryStats
// Size: 0xa0 (Inherited: 0x00)
struct FFortSurvivorSquadSelectorButtonSummaryStats {
	struct FName SquadId; // 0x00(0x08)
	struct FGameplayAttribute FortAttribute; // 0x08(0x38)
	float FortAttributeValue; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FGameplayAttribute FortTeamAttribute; // 0x48(0x38)
	float TeamFortAttributeValue; // 0x80(0x04)
	float SquadPowerValue; // 0x84(0x04)
	struct FText FortAttributeName; // 0x88(0x18)
};

// ScriptStruct FortniteUI.FortUISurvivorSquadStatMatch
// Size: 0x370 (Inherited: 0x00)
struct FFortUISurvivorSquadStatMatch {
	struct FFortMultiSizeBrush Icons; // 0x00(0x330)
	struct FText MagnitudeText; // 0x330(0x18)
	struct FText AttributeDisplayName; // 0x348(0x18)
	int32_t NumMembersMeetingCriteria; // 0x360(0x04)
	int32_t NumMembersRequired; // 0x364(0x04)
	enum class EFortUISurvivorSquadMatchType MatchType; // 0x368(0x01)
	enum class EFortBuffState PreviewEffect; // 0x369(0x01)
	char pad_36A[0x6]; // 0x36a(0x06)
};

// ScriptStruct FortniteUI.FortSwipeDetector
// Size: 0x70 (Inherited: 0x00)
struct FFortSwipeDetector {
	struct FVector2D SwipeThreshold; // 0x00(0x08)
	char pad_8[0x68]; // 0x08(0x68)
};

// ScriptStruct FortniteUI.CachedComponentMaterials
// Size: 0x18 (Inherited: 0x00)
struct FCachedComponentMaterials {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> OriginalMaterials; // 0x08(0x10)
};

// ScriptStruct FortniteUI.TouchMove
// Size: 0x0c (Inherited: 0x00)
struct FTouchMove {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct FortniteUI.TouchInteractionIconOverride
// Size: 0x30 (Inherited: 0x00)
struct FTouchInteractionIconOverride {
	struct TSoftObjectPtr<struct UTexture2D> IconOverride; // 0x00(0x28)
	float IconScale; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct FortniteUI.ButtonInteractionPair
// Size: 0x10 (Inherited: 0x00)
struct FButtonInteractionPair {
	struct AActor* TrackedInteraction; // 0x00(0x08)
	struct UFortTouchInteractionButton* TrackedButton; // 0x08(0x08)
};

// ScriptStruct FortniteUI.FortItemTransformFilterTabLabelInfo
// Size: 0xc0 (Inherited: 0x00)
struct FFortItemTransformFilterTabLabelInfo {
	struct FName FilterTabNameId; // 0x00(0x08)
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x08(0xa0)
	struct TArray<enum class EFortInventoryFilter> ItemFilters; // 0xa8(0x10)
	enum class EFortItemType ItemType; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct FortniteUI.StateWidgetEntry
// Size: 0x30 (Inherited: 0x00)
struct FStateWidgetEntry {
	SoftClassProperty Class; // 0x00(0x28)
	enum class EFortNamedBundle Bundle; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct FortniteUI.FortRootViewportLayoutInfo
// Size: 0x18 (Inherited: 0x00)
struct FFortRootViewportLayoutInfo {
	struct UFortLocalPlayer* LocalPlayer; // 0x00(0x08)
	struct UUserWidget* RootLayout; // 0x08(0x08)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct FortniteUI.UIStateTag
// Size: 0x08 (Inherited: 0x08)
struct FUIStateTag : FUITag {
};

// ScriptStruct FortniteUI.AthenaUIStateTag
// Size: 0x08 (Inherited: 0x08)
struct FAthenaUIStateTag : FUIStateTag {
};

// ScriptStruct FortniteUI.FortStartupUIStateTag
// Size: 0x08 (Inherited: 0x08)
struct FFortStartupUIStateTag : FUIStateTag {
};

// ScriptStruct FortniteUI.FortUINavigationRequest
// Size: 0x10 (Inherited: 0x00)
struct FFortUINavigationRequest {
	struct TArray<struct FFortUINavigationOperation> Operations; // 0x00(0x10)
};

// ScriptStruct FortniteUI.FortUINavigationOperation
// Size: 0x30 (Inherited: 0x00)
struct FFortUINavigationOperation {
	enum class EFortUINavigationOp Operation; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName SquadId; // 0x04(0x08)
	int32_t SquadSlotIndex; // 0x0c(0x04)
	struct FName PageId; // 0x10(0x08)
	struct FName NodeId; // 0x18(0x08)
	struct UFortItem* Item; // 0x20(0x08)
	enum class EFortUIFeature Feature; // 0x28(0x01)
	enum class EFortFrontendInventoryFilter ItemManagementFilter; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct FortniteUI.UINavigationEntry
// Size: 0x50 (Inherited: 0x00)
struct FUINavigationEntry {
	struct FUINavigationData Data; // 0x00(0x30)
	struct FDelegate NavigateToDelegate; // 0x30(0x10)
	struct FDelegate NavigateFromDelegate; // 0x40(0x10)
};

// ScriptStruct FortniteUI.FortUIPickerTrapSortModifier
// Size: 0x58 (Inherited: 0x08)
struct FFortUIPickerTrapSortModifier : FTableRowBase {
	struct FGameplayTagQuery ItemTagQuery; // 0x08(0x48)
	float ScoreBonus; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct FortniteUI.FortUIPickerTrapSortScores
// Size: 0x14 (Inherited: 0x00)
struct FFortUIPickerTrapSortScores {
	float UniqueTrapBonus; // 0x00(0x04)
	float SlottedBonus; // 0x04(0x04)
	float FavoriteBonus; // 0x08(0x04)
	float MaxTrackedTrapBonusTime; // 0x0c(0x04)
	float TrackedTrapBonusMultiplier; // 0x10(0x04)
};

// ScriptStruct FortniteUI.FortUIXpInfo
// Size: 0x2c (Inherited: 0x00)
struct FFortUIXpInfo {
	int32_t InitialLevel; // 0x00(0x04)
	int32_t InitialDisplayXp; // 0x04(0x04)
	struct FFortExperienceDelta ChangeInXp; // 0x08(0x24)
};

// ScriptStruct FortniteUI.ContentPushState
// Size: 0x03 (Inherited: 0x00)
struct FContentPushState {
	bool bHideHeader; // 0x00(0x01)
	bool bHideFooter; // 0x01(0x01)
	bool bHideChatWidget; // 0x02(0x01)
};

// ScriptStruct FortniteUI.FortUIStyleDefinition
// Size: 0x9e0 (Inherited: 0x00)
struct FFortUIStyleDefinition {
	struct FFortUIStyleWindowButtons WindowButtons; // 0x00(0x9e0)
};

// ScriptStruct FortniteUI.FortUIStyleWindowButtons
// Size: 0x9e0 (Inherited: 0x00)
struct FFortUIStyleWindowButtons {
	struct FButtonStyle Close; // 0x00(0x278)
	struct FButtonStyle Minimize; // 0x278(0x278)
	struct FButtonStyle Maximize; // 0x4f0(0x278)
	struct FButtonStyle Restore; // 0x768(0x278)
};

// ScriptStruct FortniteUI.FortUITutorialData
// Size: 0x58 (Inherited: 0x08)
struct FFortUITutorialData : FTableRowBase {
	struct FName TutorialWidgetName; // 0x08(0x08)
	struct FText Title; // 0x10(0x18)
	struct FString DevComment; // 0x28(0x10)
	struct TArray<struct FText> Descriptions; // 0x38(0x10)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> PreviewImages; // 0x48(0x10)
};

// ScriptStruct FortniteUI.MatchmakingOptionsOverride
// Size: 0x28 (Inherited: 0x00)
struct FMatchmakingOptionsOverride {
	SoftClassProperty SoftMatchmakingOptionsClass; // 0x00(0x28)
};

// ScriptStruct FortniteUI.FortHealthyGamingData
// Size: 0x90 (Inherited: 0x08)
struct FFortHealthyGamingData : FTableRowBase {
	float HealthWarningToastInterval; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText HealthWarningToastDescriptionFormat; // 0x10(0x18)
	struct FText HealthWarningScreenText; // 0x28(0x18)
	struct FText GameplayRestrictionText; // 0x40(0x18)
	float GameplayRestrictionWarningTimeOffset; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FText AntiAddictionTotalDescriptionFormat; // 0x60(0x18)
	bool bUsePlayerTimeLimitSystem; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> RatingIcons; // 0x80(0x10)
};

// ScriptStruct FortniteUI.FortSquadIconData
// Size: 0x338 (Inherited: 0x08)
struct FFortSquadIconData : FTableRowBase {
	struct FFortMultiSizeBrush Brush; // 0x08(0x330)
};

// ScriptStruct FortniteUI.FortDisplayAttribute
// Size: 0x88 (Inherited: 0x00)
struct FFortDisplayAttribute {
	struct FGameplayAttribute Attribute; // 0x00(0x38)
	struct FText Label; // 0x38(0x18)
	struct FText Value; // 0x50(0x18)
	struct FText HoverText; // 0x68(0x18)
	float NumericValue; // 0x80(0x04)
	enum class EFortStatValueDisplayType DisplayType; // 0x84(0x01)
	enum class EFortBuffState BuffState; // 0x85(0x01)
	enum class EFortClampState ClampState; // 0x86(0x01)
	enum class EFortComparisonType ComparisonType; // 0x87(0x01)
};

// ScriptStruct FortniteUI.FortDisplayModifier
// Size: 0x38 (Inherited: 0x00)
struct FFortDisplayModifier {
	struct FText Label; // 0x00(0x18)
	struct FText Value; // 0x18(0x18)
	enum class EFortStatValueDisplayType DisplayType; // 0x30(0x01)
	enum class EFortBuffState BuffState; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct FortniteUI.FortErrorInfo
// Size: 0x70 (Inherited: 0x00)
struct FFortErrorInfo {
	struct FText Operation; // 0x00(0x18)
	struct FText ErrorMessage; // 0x18(0x18)
	struct FString ErrorCode; // 0x30(0x10)
	enum class EFortErrorSeverity ErrorSeverity; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FText ContinueButtonText; // 0x48(0x18)
	char pad_60[0x10]; // 0x60(0x10)
};

// ScriptStruct FortniteUI.HomebaseNodeDisplayData
// Size: 0x90 (Inherited: 0x08)
struct FHomebaseNodeDisplayData : FTableRowBase {
	struct FText Title; // 0x08(0x18)
	struct FText Description; // 0x20(0x18)
	struct TSoftObjectPtr<struct UTexture2D> LargePreviewImage; // 0x38(0x28)
	struct TSoftObjectPtr<struct UTexture2D> SmallPreviewImage; // 0x60(0x28)
	struct UMediaSource* PreviewVideoMediaSource; // 0x88(0x08)
};

// ScriptStruct FortniteUI.FortVariantFilterContext
// Size: 0x20 (Inherited: 0x00)
struct FFortVariantFilterContext {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct FortniteUI.FortVideoInfo
// Size: 0x38 (Inherited: 0x00)
struct FFortVideoInfo {
	struct FName ID; // 0x00(0x08)
	struct UTexture2D* PreviewImage; // 0x08(0x08)
	struct UMediaSource* VideoSource; // 0x10(0x08)
	struct ULocalizedOverlays* SubtitleOverlays; // 0x18(0x08)
	struct FName QuestObjectiveName; // 0x20(0x08)
	struct FPrimaryAssetId RequiredActiveQuest; // 0x28(0x10)
};

// ScriptStruct FortniteUI.FortWeaponBoardDisplaySlotItem
// Size: 0x60 (Inherited: 0x00)
struct FFortWeaponBoardDisplaySlotItem {
	struct FFortWeaponBoardDisplaySlot DisplaySlot; // 0x00(0x50)
	char pad_50[0x10]; // 0x50(0x10)
};

// ScriptStruct FortniteUI.FortWeaponBoardDisplaySlot
// Size: 0x50 (Inherited: 0x00)
struct FFortWeaponBoardDisplaySlot {
	struct FGameplayTag RequiredTag; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform MeshRelativeTransform; // 0x10(0x30)
	struct FVector LocalOffsetMultiplier; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct FortniteUI.GGCenterDisplayEntry
// Size: 0x18 (Inherited: 0x01)
struct FGGCenterDisplayEntry : FFortChangeMonitoringStruct {
	char pad_1[0x7]; // 0x01(0x07)
	struct UFortWeaponItemDefinition* WeaponAt; // 0x08(0x08)
	int32_t PlayersAtWeapon; // 0x10(0x04)
	bool bIsEnabled; // 0x14(0x01)
	bool bIsFinal; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
};

// ScriptStruct FortniteUI.HeistExitCraftIconData
// Size: 0x10 (Inherited: 0x00)
struct FHeistExitCraftIconData {
	int32_t IconIndex; // 0x00(0x04)
	enum class EHeistExitCraftIconState IconState; // 0x04(0x01)
	enum class EHeistExitCraftIconState PrevIconState; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	int32_t SecondsUntilIncoming; // 0x08(0x04)
	bool bTeamHasBling; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct FortniteUI.HeistBlingIconData
// Size: 0x08 (Inherited: 0x00)
struct FHeistBlingIconData {
	int32_t IconIndex; // 0x00(0x04)
	enum class EHeistBlingIconState IconState; // 0x04(0x01)
	enum class EHeistBlingIconState PrevIconState; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct FortniteUI.HUDLayoutToolV2_ButtonStateColor
// Size: 0x50 (Inherited: 0x00)
struct FHUDLayoutToolV2_ButtonStateColor {
	struct FSlateColor TextColor; // 0x00(0x28)
	struct FLinearColor IconColor; // 0x28(0x10)
	struct FLinearColor BackgroundColor; // 0x38(0x10)
	float IconAngle; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct FortniteUI.LinkAcrossNumericalIndicatorActionSymbol
// Size: 0x30 (Inherited: 0x00)
struct FLinkAcrossNumericalIndicatorActionSymbol {
	enum class ENumericalIndicatorActionType ActionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText ActionSymbol; // 0x08(0x18)
	struct FLinearColor ActionColor; // 0x20(0x10)
};

// ScriptStruct FortniteUI.SimpleActionMessages
// Size: 0x38 (Inherited: 0x00)
struct FSimpleActionMessages {
	enum class ELinkAcrossSimpleAction SimpleActionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText SimpleActionTitle; // 0x08(0x18)
	struct FText SimpleActionBody; // 0x20(0x18)
};

// ScriptStruct FortniteUI.HUDLayoutToolV2_PopupContent
// Size: 0x68 (Inherited: 0x00)
struct FHUDLayoutToolV2_PopupContent {
	enum class EHUDLayoutToolPopupType PopupType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText TitleText; // 0x08(0x18)
	struct FText DescriptionText; // 0x20(0x18)
	struct FText ButtonConfirmText; // 0x38(0x18)
	struct FText ButtonCancelText; // 0x50(0x18)
};

// ScriptStruct FortniteUI.QuickbarProxySlotIconContainer
// Size: 0x10 (Inherited: 0x00)
struct FQuickbarProxySlotIconContainer {
	struct TArray<struct UPaperSprite*> SlotIcons; // 0x00(0x10)
};

// ScriptStruct FortniteUI.HUDLayoutToolV2_TextInputPopupContent
// Size: 0x68 (Inherited: 0x00)
struct FHUDLayoutToolV2_TextInputPopupContent {
	enum class EHUDLayoutToolTextInputPopupType PopupType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText TitleText; // 0x08(0x18)
	struct FText DescriptionText; // 0x20(0x18)
	struct FText ButtonConfirmText; // 0x38(0x18)
	struct FText ButtonCancelText; // 0x50(0x18)
};

// ScriptStruct FortniteUI.HUDLayoutToolV2_ToastNotificationContent
// Size: 0x38 (Inherited: 0x00)
struct FHUDLayoutToolV2_ToastNotificationContent {
	enum class EHUDLayoutToolToasterType ToasterType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText TitleText; // 0x08(0x18)
	struct FText DescriptionText; // 0x20(0x18)
};

// ScriptStruct FortniteUI.FortCountdownSounds
// Size: 0x20 (Inherited: 0x00)
struct FFortCountdownSounds {
	struct USoundBase* sound; // 0x00(0x08)
	int32_t StartTime; // 0x08(0x04)
	int32_t StopTime; // 0x0c(0x04)
	float FadeOutTime; // 0x10(0x04)
	bool bPlayed; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct UAudioComponent* PlayInstance; // 0x18(0x08)
};

// ScriptStruct FortniteUI.PerkPipData
// Size: 0x10 (Inherited: 0x00)
struct FPerkPipData {
	struct UFortAccoladeItemDefinition* AccoladeItemDef; // 0x00(0x08)
	int32_t NumOfPips; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FortniteUI.PickupStreamEntry
// Size: 0x18 (Inherited: 0x00)
struct FPickupStreamEntry {
	struct UUserWidget* PickupWidget; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct FortniteUI.FortFeedbackDropdownCategoryHotfix_Modify
// Size: 0x0c (Inherited: 0x00)
struct FFortFeedbackDropdownCategoryHotfix_Modify {
	struct FName InternalName; // 0x00(0x08)
	bool bAddFlag; // 0x08(0x01)
	enum class EFortPlayerFeedbackFlags Flag; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct FortniteUI.FortFeedbackDropdownCategoryHotfix_Add
// Size: 0x10 (Inherited: 0x00)
struct FFortFeedbackDropdownCategoryHotfix_Add {
	struct FName ParentInternalName; // 0x00(0x08)
	struct FName InternalName; // 0x08(0x08)
};

// ScriptStruct FortniteUI.FortPrioritizedWidgetData
// Size: 0x02 (Inherited: 0x00)
struct FFortPrioritizedWidgetData {
	enum class EFortPrioritizedWidgetPriority Priority; // 0x00(0x01)
	enum class EFortPrioritizedWidgetContestedBehavior WhenContesting; // 0x01(0x01)
};

// ScriptStruct FortniteUI.SoundThreshold
// Size: 0x10 (Inherited: 0x00)
struct FSoundThreshold {
	struct USoundCue* SoundCue; // 0x00(0x08)
	float Threshold; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct FortniteUI.AthenaSpatialCustomizationCategoryGroup
// Size: 0x10 (Inherited: 0x00)
struct FAthenaSpatialCustomizationCategoryGroup {
	struct TArray<struct UAthenaSpatialCustomizationCategoryEntry*> CategoryEntryList; // 0x00(0x10)
};

// ScriptStruct FortniteUI.SpatialCustomizationCategoryStateData
// Size: 0x30 (Inherited: 0x00)
struct FSpatialCustomizationCategoryStateData {
	enum class ESpatialCustomizationCategoryState State; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor Color; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct FText CategorySelectionHeaderText; // 0x18(0x18)
};

// ScriptStruct FortniteUI.AthenaSpatialStyleCharacterData
// Size: 0x30 (Inherited: 0x00)
struct FAthenaSpatialStyleCharacterData {
	struct UAthenaCharacterItemDefinition* Character; // 0x00(0x08)
	struct TArray<struct FAthenaStyleMissionData> Styles; // 0x08(0x10)
	struct TArray<enum class ESpatialStyleCharacterUnlockPrerequisite> CharacterPrerequisites; // 0x18(0x10)
	struct UAnimationAsset* CharacterIdleAnimation; // 0x28(0x08)
};

// ScriptStruct FortniteUI.AthenaStyleMissionData
// Size: 0x28 (Inherited: 0x00)
struct FAthenaStyleMissionData {
	struct UFortVariantTokenType* StyleDefinition; // 0x00(0x08)
	struct TArray<struct UFortVariantTokenType*> OptionalAdditionalStyleDefinitions; // 0x08(0x10)
	struct UFortQuestItemDefinition* Mission; // 0x18(0x08)
	struct UAnimationAsset* OverrideIdleAnimation; // 0x20(0x08)
};

// ScriptStruct FortniteUI.TDMTeamScoreData
// Size: 0x20 (Inherited: 0x00)
struct FTDMTeamScoreData {
	struct FText CurrScoreText; // 0x00(0x18)
	float CurrScorePercent; // 0x18(0x04)
	int32_t CurrScore; // 0x1c(0x04)
};

// ScriptStruct FortniteUI.WaxPlacementData
// Size: 0x20 (Inherited: 0x00)
struct FWaxPlacementData {
	int32_t Placement; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString PlayerName; // 0x08(0x10)
	int32_t CoinCount; // 0x18(0x04)
	bool bIsPlayer; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

