// Class Account.ExternalAccountProvider
// Size: 0x38 (Inherited: 0x28)
struct UExternalAccountProvider : UObject {
	struct TArray<struct FExternalAccountServiceConfig> Services; // 0x28(0x10)
};

// Class Account.OnlineAccountCommon
// Size: 0x750 (Inherited: 0x28)
struct UOnlineAccountCommon : UObject {
	char pad_28[0x10]; // 0x28(0x10)
	struct FString AvailabilityServiceGameName; // 0x38(0x10)
	bool bRequireLightswitchAtStartup; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString EulaKey; // 0x50(0x10)
	struct TMap<struct FString, struct FString> EulaKeyMapping; // 0x60(0x50)
	bool bEnableWaitingRoom; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TArray<struct FWebEnvUrl> WebCreateEpicAccountUrl; // 0xb8(0x10)
	bool bAllowLocalLogout; // 0xc8(0x01)
	bool bAllowLocalLogoutKairos; // 0xc9(0x01)
	char pad_CA[0x36]; // 0xca(0x36)
	struct FString RedeemAccessUrl; // 0x100(0x10)
	struct FString RequestFreeAccessUrl; // 0x110(0x10)
	struct FString RealGameAccessUrl; // 0x120(0x10)
	float SkipRedeemOfflinePurchasesChance; // 0x130(0x04)
	bool bUseFreeAccessInsteadOfGameAccess; // 0x134(0x01)
	bool bShouldGrantFreeAccess; // 0x135(0x01)
	char pad_136[0x1]; // 0x136(0x01)
	bool bAllowHomeSharingAccess; // 0x137(0x01)
	bool bRequireUGCPrivilege; // 0x138(0x01)
	char pad_139[0x29f]; // 0x139(0x29f)
	float AccessGrantDelaySeconds; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct UWaitingRoomState* WaitingRoomState; // 0x3e0(0x08)
	char pad_3E8[0x330]; // 0x3e8(0x330)
	bool bAutoCreateHeadlessAccount; // 0x718(0x01)
	char pad_719[0x37]; // 0x719(0x37)
};

// Class Account.WaitingRoomState
// Size: 0x88 (Inherited: 0x28)
struct UWaitingRoomState : UObject {
	char pad_28[0x34]; // 0x28(0x34)
	int32_t GracePeriodMins; // 0x5c(0x04)
	char pad_60[0x28]; // 0x60(0x28)
};

