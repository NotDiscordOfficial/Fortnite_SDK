// Class CommonUILegacy.CommonActivatablePanelLegacy
// Size: 0x458 (Inherited: 0x320)
struct UCommonActivatablePanelLegacy : UCommonActivatableWidget {
	char pad_320[0x8]; // 0x320(0x08)
	struct FMulticastInlineDelegate OnWidgetActivated; // 0x328(0x10)
	struct FMulticastInlineDelegate OnWidgetDeactivated; // 0x338(0x10)
	bool bConsumeAllActions; // 0x348(0x01)
	bool bExposeActionsExternally; // 0x349(0x01)
	bool bShouldBypassStack; // 0x34a(0x01)
	char pad_34B[0x10d]; // 0x34b(0x10d)

	void SetInputActionHandlerWithProgressPopupMenu(struct FDataTableRowHandle InputActionRow, struct FDelegate CommitedEvent, struct FDelegate ProgressEvent, struct UCommonPopupMenuLegacy* PopupMenu); // Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgressPopupMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x3b26510
	void SetInputActionHandlerWithProgress(struct FDataTableRowHandle InputActionRow, struct FDelegate CommitedEvent, struct FDelegate ProgressEvent); // Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgress // (Final|Native|Public|BlueprintCallable) // @ game+0x3b26390
	void SetInputActionHandlerWithPopupMenu(struct FDataTableRowHandle InputActionRow, struct FDelegate CommitedEvent, struct UCommonPopupMenuLegacy* PopupMenu); // Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithPopupMenu // (Final|Native|Public|BlueprintCallable) // @ game+0x3b261fc
	void SetInputActionHandler(struct FDataTableRowHandle InputActionRow, struct FDelegate CommitedEvent); // Function CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandler // (Final|Native|Public|BlueprintCallable) // @ game+0x182e8d0
	void SetActionHandlerStateWithDisabledCommitEvent(struct UDataTable* DataTable, struct FName RowName, enum class EInputActionState State, struct FDelegate DisabledCommitEvent); // Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateWithDisabledCommitEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x3b25d30
	void SetActionHandlerStateFromHandleWithDisabledCommitEvent(struct FDataTableRowHandle InputActionRow, enum class EInputActionState State, struct FDelegate DisabledCommitEvent); // Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandleWithDisabledCommitEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x3b25bd0
	void SetActionHandlerStateFromHandle(struct FDataTableRowHandle InputActionRow, enum class EInputActionState State); // Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x3b25ad4
	void SetActionHandlerState(struct UDataTable* DataTable, struct FName RowName, enum class EInputActionState State); // Function CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerState // (Final|Native|Public|BlueprintCallable) // @ game+0x3b25980
	void RemoveInputActionHandler(struct FDataTableRowHandle InputActionRow); // Function CommonUILegacy.CommonActivatablePanelLegacy.RemoveInputActionHandler // (Final|Native|Public|BlueprintCallable) // @ game+0x3b258a8
	void RemoveAllInputActionHandlers(); // Function CommonUILegacy.CommonActivatablePanelLegacy.RemoveAllInputActionHandlers // (Final|Native|Public|BlueprintCallable) // @ game+0x3b25894
	void PopPanel(); // Function CommonUILegacy.CommonActivatablePanelLegacy.PopPanel // (Native|Public|BlueprintCallable) // @ game+0x3b25678
	void OnTransitionedBySwitcher(); // Function CommonUILegacy.CommonActivatablePanelLegacy.OnTransitionedBySwitcher // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnRemovedFromActivationStack(); // Function CommonUILegacy.CommonActivatablePanelLegacy.OnRemovedFromActivationStack // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInputModeChanged(bool bUsingGamepad); // Function CommonUILegacy.CommonActivatablePanelLegacy.OnInputModeChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnBeginOutro(); // Function CommonUILegacy.CommonActivatablePanelLegacy.OnBeginOutro // (Native|Event|Protected|BlueprintEvent) // @ game+0x1835ebc
	void OnBeginIntro(); // Function CommonUILegacy.CommonActivatablePanelLegacy.OnBeginIntro // (Native|Event|Protected|BlueprintEvent) // @ game+0x18333f8
	void OnAddedToActivationStack(); // Function CommonUILegacy.CommonActivatablePanelLegacy.OnAddedToActivationStack // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	bool IsIntroed(); // Function CommonUILegacy.CommonActivatablePanelLegacy.IsIntroed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b253b8
	bool IsInActivationStack(); // Function CommonUILegacy.CommonActivatablePanelLegacy.IsInActivationStack // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b25374
	bool HasInputActionHandler(struct FDataTableRowHandle InputActionRow); // Function CommonUILegacy.CommonActivatablePanelLegacy.HasInputActionHandler // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1e271bc
	bool GetInputActions(struct TArray<struct FCommonInputActionHandlerData> InputActionDataRows); // Function CommonUILegacy.CommonActivatablePanelLegacy.GetInputActions // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b24bc8
	void EndOutro(); // Function CommonUILegacy.CommonActivatablePanelLegacy.EndOutro // (Final|Native|Protected|BlueprintCallable) // @ game+0x183497c
	void EndIntro(); // Function CommonUILegacy.CommonActivatablePanelLegacy.EndIntro // (Final|Native|Protected|BlueprintCallable) // @ game+0x3b24a28
	void BeginOutro(); // Function CommonUILegacy.CommonActivatablePanelLegacy.BeginOutro // (Final|Native|Public|BlueprintCallable) // @ game+0x3b248f0
	void BeginIntro(); // Function CommonUILegacy.CommonActivatablePanelLegacy.BeginIntro // (Final|Native|Public|BlueprintCallable) // @ game+0x3b248dc
	void AddInputActionNoHandler(struct UDataTable* DataTable, struct FName RowName); // Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionNoHandler // (Final|Native|Public|BlueprintCallable) // @ game+0x3b24794
	void AddInputActionHandlerWithProgressPopup(struct UDataTable* DataTable, struct FName RowName, struct FDelegate CommitedEvent, struct FDelegate ProgressEvent, struct UCommonPopupMenuLegacy* PopupMenu); // Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithProgressPopup // (Final|Native|Public|BlueprintCallable) // @ game+0x3b24560
	void AddInputActionHandlerWithProgress(struct UDataTable* DataTable, struct FName RowName, struct FDelegate CommitedEvent, struct FDelegate ProgressEvent); // Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithProgress // (Final|Native|Public|BlueprintCallable) // @ game+0x3b243a8
	void AddInputActionHandlerWithPopup(struct UDataTable* DataTable, struct FName RowName, struct FDelegate CommitedEvent, struct UCommonPopupMenuLegacy* PopupMenu); // Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithPopup // (Final|Native|Public|BlueprintCallable) // @ game+0x3b241c0
	void AddInputActionHandler(struct UDataTable* DataTable, struct FName RowName, struct FDelegate CommitedEvent); // Function CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandler // (Final|Native|Public|BlueprintCallable) // @ game+0x3b24070
};

// Class CommonUILegacy.CommonButtonLegacy
// Size: 0xc20 (Inherited: 0xbd0)
struct UCommonButtonLegacy : UCommonButtonBase {
	struct FMulticastInlineDelegate OnSelectedChanged; // 0xbd0(0x10)
	struct FMulticastInlineDelegate OnButtonClicked; // 0xbe0(0x10)
	struct FMulticastInlineDelegate OnButtonDoubleClicked; // 0xbf0(0x10)
	struct FMulticastInlineDelegate OnButtonHovered; // 0xc00(0x10)
	struct FMulticastInlineDelegate OnButtonUnhovered; // 0xc10(0x10)

	void SetTriggeredInputActionLegacy(struct FDataTableRowHandle InputActionRow, struct UCommonActivatablePanelLegacy* OldPanel); // Function CommonUILegacy.CommonButtonLegacy.SetTriggeredInputActionLegacy // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b26778
	void HandleOnSelectedChanged(struct UCommonButtonBase* Button, bool InSelected); // Function CommonUILegacy.CommonButtonLegacy.HandleOnSelectedChanged // (Final|Native|Private) // @ game+0x1259d08
	void HandleOnButtonUnhovered(struct UCommonButtonBase* Button); // Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonUnhovered // (Final|Native|Private) // @ game+0x1259764
	void HandleOnButtonHovered(struct UCommonButtonBase* Button); // Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonHovered // (Final|Native|Private) // @ game+0x1259850
	void HandleOnButtonDoubleClicked(struct UCommonButtonBase* Button); // Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonDoubleClicked // (Final|Native|Private) // @ game+0x3b252a8
	void HandleOnButtonClicked(struct UCommonButtonBase* Button); // Function CommonUILegacy.CommonButtonLegacy.HandleOnButtonClicked // (Final|Native|Private) // @ game+0x125ab44
};

// Class CommonUILegacy.CommonButtonGroupLegacy
// Size: 0x1b0 (Inherited: 0x110)
struct UCommonButtonGroupLegacy : UCommonButtonGroupBase {
	struct FMulticastInlineDelegate OnSelectedButtonChanged; // 0x110(0x10)
	char pad_120[0x18]; // 0x120(0x18)
	struct FMulticastInlineDelegate OnHoveredButtonChanged; // 0x138(0x10)
	char pad_148[0x18]; // 0x148(0x18)
	struct FMulticastInlineDelegate OnButtonClicked; // 0x160(0x10)
	char pad_170[0x18]; // 0x170(0x18)
	struct FMulticastInlineDelegate OnButtonDoubleClicked; // 0x188(0x10)
	char pad_198[0x18]; // 0x198(0x18)

	void OnSelectionStateChanged(struct UCommonButtonLegacy* BaseButton, bool bIsSelected); // Function CommonUILegacy.CommonButtonGroupLegacy.OnSelectionStateChanged // (Native|Protected) // @ game+0x1ffdaec
	void OnHandleButtonDoubleClicked(struct UCommonButtonLegacy* BaseButton); // Function CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonDoubleClicked // (Native|Protected) // @ game+0x3b254a0
	void OnHandleButtonClicked(struct UCommonButtonLegacy* BaseButton); // Function CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonClicked // (Native|Protected) // @ game+0x27c7074
	void OnButtonUnhovered(struct UCommonButtonLegacy* BaseButton); // Function CommonUILegacy.CommonButtonGroupLegacy.OnButtonUnhovered // (Native|Protected) // @ game+0x266ff48
	void OnButtonHovered(struct UCommonButtonLegacy* BaseButton); // Function CommonUILegacy.CommonButtonGroupLegacy.OnButtonHovered // (Native|Protected) // @ game+0x2704ca8
	void HandleOnSelectedButtonChanged(struct UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnSelectedButtonChanged // (Final|Native|Private) // @ game+0x125b2e0
	void HandleOnHoveredButtonChanged(struct UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnHoveredButtonChanged // (Final|Native|Private) // @ game+0x22ebeac
	void HandleOnButtonDoubleClicked(struct UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonDoubleClicked // (Final|Native|Private) // @ game+0x3b251c0
	void HandleOnButtonClicked(struct UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Function CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonClicked // (Final|Native|Private) // @ game+0x26e8a14
	void HandleNativeOnSelectedButtonChanged(struct UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnSelectedButtonChanged // (Final|Native|Private) // @ game+0x3b250d8
	void HandleNativeOnHoveredButtonChanged(struct UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnHoveredButtonChanged // (Final|Native|Private) // @ game+0x3b24ff0
	void HandleNativeOnButtonDoubleClicked(struct UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonDoubleClicked // (Final|Native|Private) // @ game+0x3b24f08
	void HandleNativeOnButtonClicked(struct UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex); // Function CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonClicked // (Final|Native|Private) // @ game+0x3b24e20
	struct UCommonButtonLegacy* GetSelectedButton(); // Function CommonUILegacy.CommonButtonGroupLegacy.GetSelectedButton // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27a72ec
	struct UCommonButtonLegacy* GetButtonAtIndex(int32_t Index); // Function CommonUILegacy.CommonButtonGroupLegacy.GetButtonAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b24af8
	struct UCommonButtonGroupLegacy* CreateButtonGroup(struct UObject* ContextObject, bool bInSelectionRequired); // Function CommonUILegacy.CommonButtonGroupLegacy.CreateButtonGroup // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3b24904
};

// Class CommonUILegacy.CommonButtonInternalLegacy
// Size: 0x488 (Inherited: 0x488)
struct UCommonButtonInternalLegacy : UCommonButtonInternalBase {
};

// Class CommonUILegacy.CommonGlobalInputHandlerLegacy
// Size: 0x70 (Inherited: 0x28)
struct UCommonGlobalInputHandlerLegacy : UObject {
	char pad_28[0x48]; // 0x28(0x48)
};

// Class CommonUILegacy.CommonInputManagerLegacy
// Size: 0x108 (Inherited: 0x28)
struct UCommonInputManagerLegacy : UObject {
	char pad_28[0x80]; // 0x28(0x80)
	struct TScriptInterface<None> CurrentlyHeldActionInputHandler; // 0xa8(0x10)
	struct TArray<struct UCommonActivatablePanelLegacy*> ActivatablePanelStack; // 0xb8(0x10)
	struct UCommonGlobalInputHandlerLegacy* GlobalInputHandler; // 0xc8(0x08)
	char pad_D0[0x18]; // 0xd0(0x18)
	struct TArray<struct FOperation> Operations; // 0xe8(0x10)
	char pad_F8[0x10]; // 0xf8(0x10)

	void SuspendStartingOperationProcessing(); // Function CommonUILegacy.CommonInputManagerLegacy.SuspendStartingOperationProcessing // (Final|Native|Public|BlueprintCallable) // @ game+0x3b26bb8
	bool StopListeningForExistingHeldAction(struct FDataTableRowHandle InputActionDataRow, struct FDelegate CompleteEvent, struct FDelegate ProgressEvent); // Function CommonUILegacy.CommonInputManagerLegacy.StopListeningForExistingHeldAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b26a18
	bool StartListeningForExistingHeldAction(struct FDataTableRowHandle InputActionDataRow, struct FDelegate CompleteEvent, struct FDelegate ProgressEvent); // Function CommonUILegacy.CommonInputManagerLegacy.StartListeningForExistingHeldAction // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b26878
	void SetGlobalInputHandlerPriorityFilter(int32_t InFilterPriority); // Function CommonUILegacy.CommonInputManagerLegacy.SetGlobalInputHandlerPriorityFilter // (Final|Native|Public|BlueprintCallable) // @ game+0x3b26168
	void ResumeStartingOperationProcessing(); // Function CommonUILegacy.CommonInputManagerLegacy.ResumeStartingOperationProcessing // (Final|Native|Public|BlueprintCallable) // @ game+0x3b25964
	void PushActivatablePanel(struct UCommonActivatablePanelLegacy* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow); // Function CommonUILegacy.CommonInputManagerLegacy.PushActivatablePanel // (Final|Native|Public|BlueprintCallable) // @ game+0x3b256b4
	void PopActivatablePanel(struct UCommonActivatablePanelLegacy* ActivatablePanel); // Function CommonUILegacy.CommonInputManagerLegacy.PopActivatablePanel // (Final|Native|Public|BlueprintCallable) // @ game+0x3b255dc
	bool IsPanelOnStack(struct UCommonActivatablePanelLegacy* InPanel); // Function CommonUILegacy.CommonInputManagerLegacy.IsPanelOnStack // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b253d0
	bool IsInputSuspended(); // Function CommonUILegacy.CommonInputManagerLegacy.IsInputSuspended // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b2538c
	struct UCommonActivatablePanelLegacy* GetTopPanel(); // Function CommonUILegacy.CommonInputManagerLegacy.GetTopPanel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b24d5c
	int32_t GetGlobalInputHandlerPriorityFilter(); // Function CommonUILegacy.CommonInputManagerLegacy.GetGlobalInputHandlerPriorityFilter // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b24ba0
	bool GetAvailableInputActions(struct TArray<struct FCommonInputActionHandlerData> AvailableInputActions); // Function CommonUILegacy.CommonInputManagerLegacy.GetAvailableInputActions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b24a3c
};

// Class CommonUILegacy.CommonInputReflectorLegacy
// Size: 0x2b8 (Inherited: 0x288)
struct UCommonInputReflectorLegacy : UCommonUserWidget {
	struct UCommonButtonLegacy* ButtonType; // 0x288(0x08)
	struct TArray<struct UCommonButtonLegacy*> ActiveButtons; // 0x290(0x10)
	struct TArray<struct UCommonButtonLegacy*> InactiveButtons; // 0x2a0(0x10)
	char pad_2B0[0x8]; // 0x2b0(0x08)

	void OnButtonAdded(struct UCommonButtonLegacy* AddedButton, struct FCommonInputActionHandlerData Data); // Function CommonUILegacy.CommonInputReflectorLegacy.OnButtonAdded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
};

// Class CommonUILegacy.CommonPopupButtonLegacy
// Size: 0xc30 (Inherited: 0xc20)
struct UCommonPopupButtonLegacy : UCommonButtonLegacy {
	struct UMenuAnchor* PopupMenuAnchor; // 0xc20(0x08)
	struct UCommonPopupMenuLegacy* PopupMenu; // 0xc28(0x08)

	struct UUserWidget* GetMenuAnchorWidget(); // Function CommonUILegacy.CommonPopupButtonLegacy.GetMenuAnchorWidget // (Final|Native|Private) // @ game+0x3b24c9c
};

// Class CommonUILegacy.CommonPopupMenuLegacy
// Size: 0x470 (Inherited: 0x458)
struct UCommonPopupMenuLegacy : UCommonActivatablePanelLegacy {
	bool bUseInputStack; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	struct TWeakObjectPtr<struct UMenuAnchor> OwningMenuAnchor; // 0x45c(0x08)
	struct TWeakObjectPtr<struct UObject> ContextProvidingObject; // 0x464(0x08)
	char pad_46C[0x4]; // 0x46c(0x04)

	void SetOwningMenuAnchor(struct UMenuAnchor* MenuAnchor); // Function CommonUILegacy.CommonPopupMenuLegacy.SetOwningMenuAnchor // (Final|Native|Public|BlueprintCallable) // @ game+0x3b266dc
	void SetContextProvider(struct UObject* ContextProvidingObject); // Function CommonUILegacy.CommonPopupMenuLegacy.SetContextProvider // (Final|Native|Public|BlueprintCallable) // @ game+0x3b260cc
	void RequestClose(); // Function CommonUILegacy.CommonPopupMenuLegacy.RequestClose // (Final|Native|Protected|BlueprintCallable) // @ game+0x3b25950
	void OnIsOpenChanged(bool IsOpen); // Function CommonUILegacy.CommonPopupMenuLegacy.OnIsOpenChanged // (Final|Native|Protected) // @ game+0x3b25540
	void HandlePreDifferentContextProviderSet(); // Function CommonUILegacy.CommonPopupMenuLegacy.HandlePreDifferentContextProviderSet // (Native|Event|Protected|BlueprintEvent) // @ game+0x3b2535c
	void HandlePostDifferentContextProviderSet(); // Function CommonUILegacy.CommonPopupMenuLegacy.HandlePostDifferentContextProviderSet // (Native|Event|Protected|BlueprintEvent) // @ game+0x3b25344
};

// Class CommonUILegacy.CommonTabListWidgetLegacy
// Size: 0x378 (Inherited: 0x358)
struct UCommonTabListWidgetLegacy : UCommonTabListWidgetBase {
	struct FMulticastInlineDelegate OnTabButtonCreated; // 0x358(0x10)
	struct FMulticastInlineDelegate OnTabButtonRemoved; // 0x368(0x10)

	void OnTabButtonRemoved__DelegateSignature(struct FName TabId, struct UCommonButtonLegacy* TabButton); // DelegateFunction CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonRemoved__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda7c34
	void OnTabButtonCreated__DelegateSignature(struct FName TabId, struct UCommonButtonLegacy* TabButton); // DelegateFunction CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonCreated__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda7c34
	void HandleTabRemoved(struct FName TabNameID, struct UCommonButtonLegacy* TabButton); // Function CommonUILegacy.CommonTabListWidgetLegacy.HandleTabRemoved // (Native|Event|Protected|BlueprintEvent) // @ game+0x1f0f420
	void HandleTabCreated(struct FName TabNameID, struct UCommonButtonLegacy* TabButton); // Function CommonUILegacy.CommonTabListWidgetLegacy.HandleTabCreated // (Native|Event|Protected|BlueprintEvent) // @ game+0x1be6d00
	void HandleOnTabButtonRemoved(struct FName TabId, struct UCommonButtonBase* TabButton); // Function CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonRemoved // (Final|Native|Private) // @ game+0x125a7c8
	void HandleOnTabButtonCreated(struct FName TabId, struct UCommonButtonBase* TabButton); // Function CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonCreated // (Final|Native|Private) // @ game+0x125a6d8
	struct UCommonButtonLegacy* GetTabButtonByID(struct FName TabNameID); // Function CommonUILegacy.CommonTabListWidgetLegacy.GetTabButtonByID // (Final|Native|Protected|BlueprintCallable) // @ game+0x3b24cb4
};

// Class CommonUILegacy.CommonUIActionRouterLegacy
// Size: 0x108 (Inherited: 0x100)
struct UCommonUIActionRouterLegacy : UCommonUIActionRouterBase {
	char pad_100[0x8]; // 0x100(0x08)
};

// Class CommonUILegacy.CommonUISubsystemLegacy
// Size: 0x70 (Inherited: 0x40)
struct UCommonUISubsystemLegacy : UCommonUISubsystemBase {
	struct FMulticastInlineDelegate OnInputSuspensionChanged; // 0x40(0x10)
	struct UCommonInputManagerLegacy* CommonInputManager; // 0x50(0x08)
	char pad_58[0x18]; // 0x58(0x18)

	void InputSuspensionChanged__DelegateSignature(bool bInputSuspended); // DelegateFunction CommonUILegacy.CommonUISubsystemLegacy.InputSuspensionChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda7c34
	struct UCommonInputManagerLegacy* GetInputManager(); // Function CommonUILegacy.CommonUISubsystemLegacy.GetInputManager // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b24c84
};

// Class CommonUILegacy.CommonVisibilityWidgetLegacy
// Size: 0x2a0 (Inherited: 0x290)
struct UCommonVisibilityWidgetLegacy : UCommonBorder {
	bool bShowForGamepad; // 0x290(0x01)
	bool bShowForMouseAndKeyboard; // 0x291(0x01)
	bool bShowForTouch; // 0x292(0x01)
	bool bShowForPC; // 0x293(0x01)
	bool bShowForMac; // 0x294(0x01)
	bool bShowForPS4; // 0x295(0x01)
	bool bShowForPS5; // 0x296(0x01)
	bool bShowForXBox; // 0x297(0x01)
	bool bShowForXSX; // 0x298(0x01)
	bool bShowForIOS; // 0x299(0x01)
	bool bShowForAndroid; // 0x29a(0x01)
	bool bShowForErebus; // 0x29b(0x01)
	enum class ESlateVisibility VisibleType; // 0x29c(0x01)
	enum class ESlateVisibility HiddenType; // 0x29d(0x01)
	char pad_29E[0x2]; // 0x29e(0x02)
};

// Class CommonUILegacy.CommonWidgetStackLegacy
// Size: 0x168 (Inherited: 0x158)
struct UCommonWidgetStackLegacy : UCommonVisibilitySwitcher {
	struct FMulticastInlineDelegate OnActiveWidgetChangedLegacyEvent; // 0x158(0x10)

	void PushWidget(struct UWidget* InWidget); // Function CommonUILegacy.CommonWidgetStackLegacy.PushWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x3b257f8
	struct UWidget* PopWidget(); // Function CommonUILegacy.CommonWidgetStackLegacy.PopWidget // (Final|Native|Public|BlueprintCallable) // @ game+0x3b25690
	void OnActiveWidgetChangedLegacy__DelegateSignature(struct UWidget* InActiveWidget, int32_t InActiveWidgetIndex); // DelegateFunction CommonUILegacy.CommonWidgetStackLegacy.OnActiveWidgetChangedLegacy__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda7c34
	void DeactivateWidget(); // Function CommonUILegacy.CommonWidgetStackLegacy.DeactivateWidget // (Final|Native|Protected|BlueprintCallable) // @ game+0x3b249fc
	void ActivateWidget(); // Function CommonUILegacy.CommonWidgetStackLegacy.ActivateWidget // (Final|Native|Protected|BlueprintCallable) // @ game+0x3b24044
};

// Class CommonUILegacy.CommonWidgetSwitcherLegacy
// Size: 0x1b8 (Inherited: 0x190)
struct UCommonWidgetSwitcherLegacy : UCommonAnimatedSwitcher {
	struct FMulticastInlineDelegate OnActiveWidgetDeactivated; // 0x190(0x10)
	struct FMulticastInlineDelegate OnActiveWidgetChanged; // 0x1a0(0x10)
	char pad_1B0[0x1]; // 0x1b0(0x01)
	bool bWidgetActivationEnabled; // 0x1b1(0x01)
	bool bOutroPanelBelow; // 0x1b2(0x01)
	char pad_1B3[0x5]; // 0x1b3(0x05)

	void SetActiveWidgetIndex_Advanced(int32_t Index, bool AttemptActivationChange); // Function CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidgetIndex_Advanced // (Final|Native|Public|BlueprintCallable) // @ game+0x3b25ef0
	void SetActiveWidget_Advanced(struct UWidget* Widget, bool AttemptActivationChange); // Function CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidget_Advanced // (Final|Native|Public|BlueprintCallable) // @ game+0x3b25fd8
	void HandleActiveWidgetDeactivated(struct UCommonActivatablePanelLegacy* DeactivatedPanel); // Function CommonUILegacy.CommonWidgetSwitcherLegacy.HandleActiveWidgetDeactivated // (Final|Native|Private) // @ game+0x3b24d7c
	void DeactivateWidget(); // Function CommonUILegacy.CommonWidgetSwitcherLegacy.DeactivateWidget // (Native|Public|BlueprintCallable) // @ game+0x3b24a10
	void ActivateWidget(); // Function CommonUILegacy.CommonWidgetSwitcherLegacy.ActivateWidget // (Native|Public|BlueprintCallable) // @ game+0x3b24058
};

