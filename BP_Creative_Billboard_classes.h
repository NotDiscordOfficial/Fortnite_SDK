// BlueprintGeneratedClass BP_Creative_Billboard.BP_Creative_Billboard_C
// Size: 0xd68 (Inherited: 0xc90)
struct ABP_Creative_Billboard_C : ABuildingProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc90(0x08)
	struct USceneComponent* WidgetAnchor; // 0xc98(0x08)
	struct UCreative_Enabled_Component_C* Creative_Enabled_Component; // 0xca0(0x08)
	struct UFortMinigameLogicComponent* FortMinigameLogic; // 0xca8(0x08)
	struct UFortGameplayReceiverMessageComponent* HideTextReceiverComponent; // 0xcb0(0x08)
	struct UFortGameplayReceiverMessageComponent* ShowTextReceiverComponent; // 0xcb8(0x08)
	struct UBoxComponent* ToolPickingBox; // 0xcc0(0x08)
	struct UToyOptionsComponent_C* ToyOptionsComponent; // 0xcc8(0x08)
	struct FString UserDefinedText; // 0xcd0(0x10)
	bool bShowBorder; // 0xce0(0x01)
	char pad_CE1[0x3]; // 0xce1(0x03)
	struct FLinearColor BackgroundColor; // 0xce4(0x10)
	enum class ETextJustify HorizontalTextAlignment; // 0xcf4(0x01)
	char pad_CF5[0x3]; // 0xcf5(0x03)
	int32_t TextSize; // 0xcf8(0x04)
	float ViewDistance; // 0xcfc(0x04)
	struct FLinearColor TextColor; // 0xd00(0x10)
	int32_t EnabledIndex; // 0xd10(0x04)
	int32_t TextFont; // 0xd14(0x04)
	bool Show Debug Text; // 0xd18(0x01)
	char pad_D19[0x3]; // 0xd19(0x03)
	struct FRotator BackgroundRelativeRotationWithBorder; // 0xd1c(0x0c)
	struct FRotator BackgroundRelativeRotationWithoutBorder; // 0xd28(0x0c)
	int32_t OutlineStrength; // 0xd34(0x04)
	enum class EBillboardshadowDirection DropShadow; // 0xd38(0x01)
	char pad_D39[0x3]; // 0xd39(0x03)
	float Shadow Divisor; // 0xd3c(0x04)
	struct UWidgetComponent* WidgetComponent; // 0xd40(0x08)
	struct UCreative_Background_Widget_C* Widget; // 0xd48(0x08)
	float MinTextSize; // 0xd50(0x04)
	enum class EFortMinigameState Last State Updated; // 0xd54(0x01)
	char pad_D55[0x3]; // 0xd55(0x03)
	struct UMaterialInterface* DefaultMaterial; // 0xd58(0x08)
	struct UMaterialInterface* ClearMaterial; // 0xd60(0x08)

	void GetCreativeActorOrigin(bool Override, struct FVector Center); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetCreativeActorOrigin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetCreativeActorBounds(bool Override Bounds, struct FVector Bounds); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetCreativeActorBounds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct UStaticMesh* GetCollisionStaticMesh(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetCollisionStaticMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	struct TArray<struct UMeshComponent*> GetMeshComponents(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetMeshComponents // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	struct UMaterialInterface* GetOverrideMeshMaterial(struct UStaticMeshComponent* MeshComp, int32_t MatIdx); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.GetOverrideMeshMaterial // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void Update Last Game State Enable Changed(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.Update Last Game State Enable Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Text Visibility On Game State(enum class EFortMinigameState New State); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.Text Visibility On Game State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Create Widget(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.Create Widget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetShadow(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetShadow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTextFont(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextFont // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetViewDistance(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetViewDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTextColor(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateProperties(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.UpdateProperties // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetDisplayText(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetDisplayText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTextAlignment(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTextSize(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetTextSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBackgroundColor(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.SetBackgroundColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PostUpdateProperties(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.PostUpdateProperties // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ShowTextReceiverComponent_K2Node_ComponentBoundEvent_2_OnGameplayMessageReceived__DelegateSignature(struct AController* TriggerInstigator); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__ShowTextReceiverComponent_K2Node_ComponentBoundEvent_2_OnGameplayMessageReceived__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__HideTextReceiverComponent_K2Node_ComponentBoundEvent_3_OnGameplayMessageReceived__DelegateSignature(struct AController* TriggerInstigator); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__HideTextReceiverComponent_K2Node_ComponentBoundEvent_3_OnGameplayMessageReceived__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_5_OnMinigameAssignmentChanged__DelegateSignature(struct AFortMinigame* Minigame); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_5_OnMinigameAssignmentChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Play Mode Changed(struct AFortMinigame* Minigame, bool bIsInPlayMode); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.Play Mode Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Static Mesh Component Visibility Options(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.Update Static Mesh Component Visibility Options // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Initialize Device(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.Initialize Device // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Creative_Enabled_Component_K2Node_ComponentBoundEvent_7_On Enabled State Changed__DelegateSignature(bool Enabled); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__Creative_Enabled_Component_K2Node_ComponentBoundEvent_7_On Enabled State Changed__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_4_OnMinigameStateChanged__DelegateSignature(struct AFortMinigame* Minigame, enum class EFortMinigameState NewMinigameState); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.BndEvt__FortMinigameLogic_K2Node_ComponentBoundEvent_4_OnMinigameStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Initialize Minigame Options(struct AFortMinigame* Minigame); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.Initialize Minigame Options // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnWorldReady(); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.OnWorldReady // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_Creative_Billboard(int32_t EntryPoint); // Function BP_Creative_Billboard.BP_Creative_Billboard_C.ExecuteUbergraph_BP_Creative_Billboard // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

