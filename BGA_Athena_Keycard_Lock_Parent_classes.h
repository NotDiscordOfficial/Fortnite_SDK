// BlueprintGeneratedClass BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C
// Size: 0xae9 (Inherited: 0xa80)
struct ABGA_Athena_Keycard_Lock_Parent_C : ABGA_Athena_Lock_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa80(0x08)
	struct UChildActorComponent* ScannerScreenActor; // 0xa88(0x08)
	struct FGameplayTag GC_Fail; // 0xa90(0x08)
	struct FGameplayTag TagToCheck; // 0xa98(0x08)
	struct FGameplayTag GC_Success; // 0xaa0(0x08)
	struct UFortWorldItemDefinition* KeyID; // 0xaa8(0x08)
	struct UMaterialInstanceDynamic* MIDI_ConsoleScreen; // 0xab0(0x08)
	struct ABP_UI_ScannerScreen_C* ScannerScreen; // 0xab8(0x08)
	struct FText PoINameText; // 0xac0(0x18)
	struct FLinearColor OriginalEmissive; // 0xad8(0x10)
	bool ScreenWidgetActive; // 0xae8(0x01)

	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void LockCheck(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, bool CheckPassed); // Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.LockCheck // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ApplyFailCheckEffect(); // Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ApplyFailCheckEffect // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CallOpenVault(); // Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.CallOpenVault // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ShowSuccessScreen(); // Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ShowSuccessScreen // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowFailScreen(); // Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ShowFailScreen // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideAndKill(); // Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.HideAndKill // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetLock(enum class Enum_Athena_Lock LockState); // Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.SetLock // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BGA_Athena_Keycard_Lock_Parent(int32_t EntryPoint); // Function BGA_Athena_Keycard_Lock_Parent.BGA_Athena_Keycard_Lock_Parent_C.ExecuteUbergraph_BGA_Athena_Keycard_Lock_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

