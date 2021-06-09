// Class FortniteConversationRuntime.FortConversationMarkerInterface
// Size: 0x28 (Inherited: 0x28)
struct UFortConversationMarkerInterface : UInterface {
};

// Class FortniteConversationRuntime.FortConversationParticipantComponent
// Size: 0x188 (Inherited: 0x188)
struct UFortConversationParticipantComponent : UConversationParticipantComponent {
};

// Class FortniteConversationRuntime.FortConversationContextCondition
// Size: 0x28 (Inherited: 0x28)
struct UFortConversationContextCondition : UObject {

	bool DoesContextPass(struct FConversationContext Context); // Function FortniteConversationRuntime.FortConversationContextCondition.DoesContextPass // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b088d8
};

// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasCID
// Size: 0x40 (Inherited: 0x28)
struct UFortConversationContextCondition_ParticipantHasCID : UFortConversationContextCondition {
	struct FGameplayTag ParticipantID; // 0x28(0x08)
	struct TArray<struct FSoftObjectPath> AllowedCIDs; // 0x30(0x10)
};

// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasMetaTag
// Size: 0x38 (Inherited: 0x28)
struct UFortConversationContextCondition_ParticipantHasMetaTag : UFortConversationContextCondition {
	struct FGameplayTag ParticipantID; // 0x28(0x08)
	struct FGameplayTag MetaTag; // 0x30(0x08)
};

// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasOwnedTag
// Size: 0x38 (Inherited: 0x28)
struct UFortConversationContextCondition_ParticipantHasOwnedTag : UFortConversationContextCondition {
	struct FGameplayTag ParticipantID; // 0x28(0x08)
	struct FGameplayTag OwnedTag; // 0x30(0x08)
};

// Class FortniteConversationRuntime.FortConversationContextCondition_ParticipantControllerMeetsRequirement
// Size: 0x38 (Inherited: 0x28)
struct UFortConversationContextCondition_ParticipantControllerMeetsRequirement : UFortConversationContextCondition {
	struct FGameplayTag ParticipantID; // 0x28(0x08)
	struct UFortControllerRequirement* Requirement; // 0x30(0x08)
};

// Class FortniteConversationRuntime.FortConversationContextConditionHelpers
// Size: 0x28 (Inherited: 0x28)
struct UFortConversationContextConditionHelpers : UBlueprintFunctionLibrary {

	bool GetMessageForContext(struct FFortConversationNodeConditionalMessages Messages, struct FConversationContext Context, struct FText OutText); // Function FortniteConversationRuntime.FortConversationContextConditionHelpers.GetMessageForContext // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0x3b089ac
};

// Class FortniteConversationRuntime.FortPlayerConversationComponent
// Size: 0x340 (Inherited: 0x188)
struct UFortPlayerConversationComponent : UFortConversationParticipantComponent {
	char pad_188[0x8]; // 0x188(0x08)
	struct TArray<struct UFortNonPlayerConversationParticipantComponent*> ConversationParticipantsInRange; // 0x190(0x10)
	SoftClassProperty DialogWidgetSoftClass; // 0x1a0(0x28)
	SoftClassProperty DialogMarkerSoftClass; // 0x1c8(0x28)
	SoftClassProperty MobileDialogWidgetSoftClass; // 0x1f0(0x28)
	struct UUserWidget* DialogWidgetClass; // 0x218(0x08)
	struct UUserWidget* DialogMarkerClass; // 0x220(0x08)
	float GreetSphereRadius; // 0x228(0x04)
	float IconVisibilityRadius; // 0x22c(0x04)
	float AbortConversationRange; // 0x230(0x04)
	char pad_234[0x2c]; // 0x234(0x2c)
	struct FUserWidgetPool DialogWidgetPool; // 0x260(0x88)
	struct TMap<struct UFortNonPlayerConversationParticipantComponent*, struct UUserWidget*> ComponentToIndicator; // 0x2e8(0x50)
	char pad_338[0x8]; // 0x338(0x08)

	void RequestServerAbortConversation(); // Function FortniteConversationRuntime.FortPlayerConversationComponent.RequestServerAbortConversation // (Net|NetReliableNative|Event|Public|NetServer) // @ game+0x3b08ca0
	void HandleWaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function FortniteConversationRuntime.FortPlayerConversationComponent.HandleWaponEquipped // (Final|Native|Private) // @ game+0x3b08bc8
	void HandleDBNOChanged(struct AFortPawn* Pawn, bool bIsDBNO); // Function FortniteConversationRuntime.FortPlayerConversationComponent.HandleDBNOChanged // (Final|Native|Private) // @ game+0x2e88660
	void ClientReceiveConversationGiftUINotification(struct FGiftUINotificationInfo ConversationGiftUINotification); // Function FortniteConversationRuntime.FortPlayerConversationComponent.ClientReceiveConversationGiftUINotification // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x3b08804
};

