// BlueprintGeneratedClass Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C
// Size: 0xd18 (Inherited: 0xc98)
struct ACreative_Device_Prop_Parent_C : AFortCreativeDeviceProp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc98(0x08)
	struct UCreative_VisibleInGame_Component_C* VisibleInGameComponent; // 0xca0(0x08)
	struct UCreative_Enabled_Component_C* EnabledComponent; // 0xca8(0x08)
	struct UFortMinigameProgressComponent* FortMinigameProgress; // 0xcb0(0x08)
	struct UToyOptionsComponent_C* ToyOptionsComponent; // 0xcb8(0x08)
	int32_t ActivateOnGamePhase; // 0xcc0(0x04)
	int32_t EnabledIndex; // 0xcc4(0x04)
	struct FMulticastInlineDelegate On Device Activated; // 0xcc8(0x10)
	struct AController* Instigating Controller; // 0xcd8(0x08)
	bool bIsVisible; // 0xce0(0x01)
	char pad_CE1[0x7]; // 0xce1(0x07)
	struct FMulticastInlineDelegate On Device Initialized; // 0xce8(0x10)
	struct FMulticastInlineDelegate On Play Mode Changed; // 0xcf8(0x10)
	bool Update on Minigame State Change; // 0xd08(0x01)
	bool Update on Play Mode Changed; // 0xd09(0x01)
	bool Initialize during Preview; // 0xd0a(0x01)
	char pad_D0B[0x1]; // 0xd0b(0x01)
	float MaxHealth; // 0xd0c(0x04)
	struct FActiveGameplayEffectHandle MaxHealthEffectHandler; // 0xd10(0x08)

	void ResetHealthIfSet(); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.ResetHealthIfSet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetMoveToolPreviewComponents(struct TArray<struct USceneComponent*> ForceHideInPreview, struct TArray<struct USceneComponent*> ForceShowInPreview); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.GetMoveToolPreviewComponents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void Update Preview Only Visibility(); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Update Preview Only Visibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetVisibilityComponentsWithCollisionOverrides(struct TMap<struct USceneComponent*, enum class ECollisionEnabled> VisibilityComponents); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.GetVisibilityComponentsWithCollisionOverrides // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetVisibilityComponents(struct TArray<struct USceneComponent*> VisibilityComponents); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.GetVisibilityComponents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Visibility In Game(); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Update Visibility In Game // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Is Visible In Game(bool Visible); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Is Visible In Game // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void IsInPlayMode(bool bIsInPlayMode); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.IsInPlayMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	float BlueprintModifyIncomingDamage(float Damage, struct FGameplayTagContainer InTags, struct FGameplayEffectContextHandle EffectContext, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BlueprintModifyIncomingDamage // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Activate Device Failed(); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Activate Device Failed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Attempt Activate Device(struct AController* Instigating Controller, bool Additional Requirements); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Attempt Activate Device // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Initialize Device(); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Initialize Device // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BlueprintOnLocalInteract(struct AFortPlayerPawn* InteractingPawn); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BlueprintOnLocalInteract // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void Activate Device(); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Activate Device // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Activate on Phase(enum class EFortMinigameState State); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Activate on Phase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Play Mode Changed(struct AFortMinigame* Minigame, bool bIsInPlayMode); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.Play Mode Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature(); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_2_AnyPropertyChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_3_AnyPropertyChangedDelegate__DelegateSignature(); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_3_AnyPropertyChangedDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_1_OnMinigameAssignmentChanged__DelegateSignature(struct AFortMinigame* Minigame); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_1_OnMinigameAssignmentChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_OnMinigameAssignmentChanged__DelegateSignature(struct AFortMinigame* Minigame); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_4_OnMinigameAssignmentChanged__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void On Mingame State Changed(struct AFortMinigame* Minigame, enum class EFortMinigameState MinigameState); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Mingame State Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnWorldReady(); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.OnWorldReady // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature(); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_0_SimpleDynamicMulticastDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_SimpleDynamicMulticastDelegate__DelegateSignature(); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_5_SimpleDynamicMulticastDelegate__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnMinigameStarted(); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.OnMinigameStarted // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMinigameEnded(); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.OnMinigameEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Creative_Device_Prop_Parent(int32_t EntryPoint); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.ExecuteUbergraph_Creative_Device_Prop_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void On Play Mode Changed__DelegateSignature(bool New Play Mode); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Play Mode Changed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void On Device Initialized__DelegateSignature(); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Device Initialized__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void On Device Activated__DelegateSignature(); // Function Creative_Device_Prop_Parent.Creative_Device_Prop_Parent_C.On Device Activated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

