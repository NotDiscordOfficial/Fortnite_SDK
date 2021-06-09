// Enum Party.ESocialPartyInviteFailureReason
enum class ESocialPartyInviteFailureReason : uint8 {
	Success,
	NotOnline,
	NotAcceptingMembers,
	NotFriends,
	AlreadyInParty,
	OssValidationFailed,
	PlatformInviteFailed,
	PartyInviteFailed,
	ESocialPartyInviteFailureReason_MAX,
};

// Enum Party.ESocialPartyInviteMethod
enum class ESocialPartyInviteMethod : uint8 {
	Other,
	Notification,
	ESocialPartyInviteMethod_MAX,
};

// Enum Party.EApprovalAction
enum class EApprovalAction : uint8 {
	Approve,
	Enqueue,
	EnqueueAndStartBeacon,
	Deny,
	EApprovalAction_MAX,
};

// Enum Party.EPartyJoinDenialReason
enum class EPartyJoinDenialReason : uint8 {
	NoReason,
	JoinAttemptAborted,
	Busy,
	OssUnavailable,
	PartyFull,
	GameFull,
	NotPartyLeader,
	PartyPrivate,
	JoinerCrossplayRestricted,
	MemberCrossplayRestricted,
	GameModeRestricted,
	Banned,
	NotLoggedIn,
	CheckingForRejoin,
	TargetUserMissingPresence,
	TargetUserUnjoinable,
	TargetUserAway,
	AlreadyLeaderInPlatformSession,
	TargetUserPlayingDifferentGame,
	TargetUserMissingPlatformSession,
	PlatformSessionMissingJoinInfo,
	FailedToStartFindConsoleSession,
	MissingPartyClassForTypeId,
	TargetUserBlocked,
	CustomReason0,
	CustomReason1,
	CustomReason2,
	CustomReason3,
	CustomReason4,
	CustomReason5,
	CustomReason6,
	CustomReason7,
	CustomReason8,
	CustomReason9,
	CustomReason10,
	CustomReason11,
	CustomReason12,
	CustomReason13,
	CustomReason14,
	CustomReason15,
	CustomReason16,
	CustomReason17,
	CustomReason18,
	CustomReason19,
	CustomReason20,
	CustomReason21,
	CustomReason22,
	CustomReason23,
	CustomReason24,
	CustomReason25,
	CustomReason26,
	CustomReason27,
	CustomReason28,
	CustomReason29,
	CustomReason30,
	CustomReason31,
	CustomReason32,
	CustomReason33,
	CustomReason34,
	CustomReason35,
	CustomReason36,
	CustomReason37,
	CustomReason38,
	CustomReason39,
	MAX,
};

// Enum Party.EPartyInviteRestriction
enum class EPartyInviteRestriction : uint8 {
	AnyMember,
	LeaderOnly,
	NoInvites,
	EPartyInviteRestriction_MAX,
};

// Enum Party.EPartyType
enum class EPartyType : uint8 {
	Public,
	FriendsOnly,
	Private,
	EPartyType_MAX,
};

// Enum Party.ESocialChannelType
enum class ESocialChannelType : uint8 {
	General,
	Founder,
	Party,
	Team,
	System,
	Private,
	ESocialChannelType_MAX,
};

// Enum Party.EPlatformIconDisplayRule
enum class EPlatformIconDisplayRule : uint8 {
	Always,
	AlwaysIfDifferent,
	AlwaysWhenInCrossplayParty,
	AlwaysIfDifferentWhenInCrossplayParty,
	Never,
	EPlatformIconDisplayRule_MAX,
};

// Enum Party.ECrossplayPreference
enum class ECrossplayPreference : uint8 {
	NoSelection,
	OptedIn,
	OptedOut,
	OptedOutRestricted,
	ECrossplayPreference_MAX,
};

// Enum Party.ESocialRelationship
enum class ESocialRelationship : uint8 {
	Any,
	FriendInviteReceived,
	FriendInviteSent,
	PartyInvite,
	Friend,
	BlockedPlayer,
	SuggestedFriend,
	RecentPlayer,
	JoinRequest,
	ESocialRelationship_MAX,
};

// Enum Party.ESocialSubsystem
enum class ESocialSubsystem : uint8 {
	Primary,
	Platform,
	MAX,
};

// Enum Party.ESocialFriendRequestMethod
enum class ESocialFriendRequestMethod : uint8 {
	SocialInteraction_AddFriend,
	SocialInteraction_AddPlatformFriend,
	Other,
	ESocialFriendRequestMethod_MAX,
};

// ScriptStruct Party.OnlinePartyRepDataBase
// Size: 0x18 (Inherited: 0x00)
struct FOnlinePartyRepDataBase {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Party.PartyMemberRepData
// Size: 0x178 (Inherited: 0x18)
struct FPartyMemberRepData : FOnlinePartyRepDataBase {
	char pad_18[0x8]; // 0x18(0x08)
	struct FPartyMemberPlatformData PlatformData; // 0x20(0x90)
	char pad_B0[0x90]; // 0xb0(0x90)
	enum class ECrossplayPreference CrossplayPreference; // 0x140(0x01)
	char pad_141[0x37]; // 0x141(0x37)
};

// ScriptStruct Party.PartyMemberPlatformData
// Size: 0x90 (Inherited: 0x00)
struct FPartyMemberPlatformData {
	struct FUserPlatform Platform; // 0x00(0x58)
	struct FUniqueNetIdRepl UniqueId; // 0x58(0x28)
	struct FString SessionId; // 0x80(0x10)
};

// ScriptStruct Party.UserPlatform
// Size: 0x58 (Inherited: 0x00)
struct FUserPlatform {
	struct FSocialPlatformDescription PlatformDescription; // 0x00(0x58)
};

// ScriptStruct Party.SocialPlatformDescription
// Size: 0x58 (Inherited: 0x00)
struct FSocialPlatformDescription {
	struct FString Name; // 0x00(0x10)
	struct FString PlatformType; // 0x10(0x10)
	struct FName OnlineSubsystem; // 0x20(0x08)
	struct FString SessionType; // 0x28(0x10)
	struct FString ExternalAccountType; // 0x38(0x10)
	struct FString CrossplayPool; // 0x48(0x10)
};

// ScriptStruct Party.PartyPrivacySettings
// Size: 0x03 (Inherited: 0x00)
struct FPartyPrivacySettings {
	enum class EPartyType PartyType; // 0x00(0x01)
	enum class EPartyInviteRestriction PartyInviteRestriction; // 0x01(0x01)
	bool bOnlyLeaderFriendsCanJoin; // 0x02(0x01)
};

// ScriptStruct Party.PartyPlatformSessionInfo
// Size: 0x48 (Inherited: 0x00)
struct FPartyPlatformSessionInfo {
	struct FString SessionType; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
	struct FUniqueNetIdRepl OwnerPrimaryId; // 0x20(0x28)
};

// ScriptStruct Party.SocialChatChannelConfig
// Size: 0x40 (Inherited: 0x00)
struct FSocialChatChannelConfig {
	struct USocialUser* SocialUser; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
	struct TArray<struct USocialChatChannel*> ListenChannels; // 0x18(0x10)
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct Party.PartyRepData
// Size: 0x80 (Inherited: 0x18)
struct FPartyRepData : FOnlinePartyRepDataBase {
	char pad_18[0x8]; // 0x18(0x08)
	struct FPartyPrivacySettings PrivacySettings; // 0x20(0x03)
	char pad_23[0x35]; // 0x23(0x35)
	struct TArray<struct FPartyPlatformSessionInfo> PlatformSessions; // 0x58(0x10)
	char pad_68[0x18]; // 0x68(0x18)
};

