// Class PhosphorusWipeoutUI.PhosphorusKnockBackWidget
// Size: 0x338 (Inherited: 0x328)
struct UPhosphorusKnockBackWidget : UPhosphorusWidgetBase {
	struct AFortAthenaMutator_PhosphorusWipeout* CachedPhosphorusWipeoutMutator; // 0x328(0x08)
	struct AFortAthenaMutator_Knockback* CachedKnockbackMutator; // 0x330(0x08)

	void PhosphorusPhaseChangedEvent(struct AFortAthenaMutator_Phosphorus* Mutator, enum class EPhosphorusPhase Phase); // Function PhosphorusWipeoutUI.PhosphorusKnockBackWidget.PhosphorusPhaseChangedEvent // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void KnockBackFromAllPlayersReceivedEvent(struct FKnockbackMutatorData KnockbackData); // Function PhosphorusWipeoutUI.PhosphorusKnockBackWidget.KnockBackFromAllPlayersReceivedEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
};

