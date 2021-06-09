// BlueprintGeneratedClass B_HeldObject_Parent.B_HeldObject_Parent_C
// Size: 0x8e8 (Inherited: 0x898)
struct AB_HeldObject_Parent_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	struct UCapsuleComponent* Capsule; // 0x8a0(0x08)
	struct UFortProjectileMovementComponent* FortProjectileMovement; // 0x8a8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x8b0(0x08)
	bool IsHeld; // 0x8b8(0x01)
	char pad_8B9[0x7]; // 0x8b9(0x07)
	struct AFortPlayerPawn* HoldingPawn; // 0x8c0(0x08)
	struct FVector Vector_HoldingOffset; // 0x8c8(0x0c)
	float ThrowSpeed; // 0x8d4(0x04)
	bool IsSocketed; // 0x8d8(0x01)
	char pad_8D9[0x7]; // 0x8d9(0x07)
	struct AB_HeldObjectSocket_C* HoldingSocket; // 0x8e0(0x08)

	void OnRep_IsSocketed(); // Function B_HeldObject_Parent.B_HeldObject_Parent_C.OnRep_IsSocketed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_HeldObject_Parent.B_HeldObject_Parent_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void OnRep_IsHeld(); // Function B_HeldObject_Parent.B_HeldObject_Parent_C.OnRep_IsHeld // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function B_HeldObject_Parent.B_HeldObject_Parent_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function B_HeldObject_Parent.B_HeldObject_Parent_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_HeldObject_Parent.B_HeldObject_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_HeldObject_Parent(int32_t EntryPoint); // Function B_HeldObject_Parent.B_HeldObject_Parent_C.ExecuteUbergraph_B_HeldObject_Parent // (Final|UbergraphFunction) // @ game+0xda7c34
};

