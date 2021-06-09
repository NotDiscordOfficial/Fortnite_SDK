// Class VendettaUI.VendettaWidgetBase
// Size: 0x328 (Inherited: 0x320)
struct UVendettaWidgetBase : ULTMWidgetBase {
	struct AFortAthenaMutator_Vendetta* CachedVendettaMutator; // 0x320(0x08)

	void UnbindFromMutator_BP(); // Function VendettaUI.VendettaWidgetBase.UnbindFromMutator_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BindToMutator_BP(); // Function VendettaUI.VendettaWidgetBase.BindToMutator_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class VendettaUI.VendettaCreditsEarnedMessageWidget
// Size: 0x328 (Inherited: 0x328)
struct UVendettaCreditsEarnedMessageWidget : UVendettaWidgetBase {

	void OnPlayerEliminatedBountyTarget_BP(struct AFortPlayerStateAthena* VictimPlayerState, struct AFortPlayerStateAthena* KillerPlayerState, struct AFortPlayerStateAthena* NewTargetPlayerState, int32_t VictimRewardValue, int32_t VictimBonusValue); // Function VendettaUI.VendettaCreditsEarnedMessageWidget.OnPlayerEliminatedBountyTarget_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayerEliminatedBountyTarget(struct AFortPlayerStateAthena* VictimPlayerState, struct AFortPlayerStateAthena* KillerPlayerState, struct AFortPlayerStateAthena* NewTargetPlayerState, int32_t VictimRewardValue, int32_t VictimBonusValue); // Function VendettaUI.VendettaCreditsEarnedMessageWidget.OnPlayerEliminatedBountyTarget // (Final|Native|Public) // @ game+0x3de8cc8
};

// Class VendettaUI.VendettaSquadmateHuntedStatusWidget
// Size: 0x338 (Inherited: 0x328)
struct UVendettaSquadmateHuntedStatusWidget : UVendettaWidgetBase {
	char pad_328[0x10]; // 0x328(0x10)

	void OnPlayerHuntedStatusChanged_BP(enum class EVendettaHuntedStatus HuntedStatus, enum class EVendettaHuntedStatus SpecialNPCHuntedStatus); // Function VendettaUI.VendettaSquadmateHuntedStatusWidget.OnPlayerHuntedStatusChanged_BP // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayerHuntedStatusChanged(struct AFortPlayerStateAthena* PlayerState, enum class EVendettaHuntedStatus HuntedStatus, enum class EVendettaHuntedStatus SpecialNPCHuntedStatus); // Function VendettaUI.VendettaSquadmateHuntedStatusWidget.OnPlayerHuntedStatusChanged // (Final|Native|Protected) // @ game+0x3de8eb0
};

// Class VendettaUI.VendettaTopMessagingWidgetBase
// Size: 0x310 (Inherited: 0x2c8)
struct UVendettaTopMessagingWidgetBase : UFortHUDElementWidget {
	char pad_2C8[0x40]; // 0x2c8(0x40)
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x308(0x02)
	char pad_30A[0x6]; // 0x30a(0x06)
};

