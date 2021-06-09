// BlueprintGeneratedClass B_HeldObjectSocket.B_HeldObjectSocket_C
// Size: 0x8e8 (Inherited: 0x898)
struct AB_HeldObjectSocket_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	struct USceneComponent* SocketLocation; // 0x8a0(0x08)
	struct USphereComponent* Sphere; // 0x8a8(0x08)
	bool HasSocketedHeldObject; // 0x8b0(0x01)
	char pad_8B1[0x7]; // 0x8b1(0x07)
	struct AB_HeldObject_Parent_C* HeldObject; // 0x8b8(0x08)
	struct FGameplayTagContainer RequiredHeldObjectTags; // 0x8c0(0x20)
	struct AB_HeldObjectSocketManager_C* HeldObjectSocketManager; // 0x8e0(0x08)

	void ValidateHeldObject(struct AB_HeldObject_Parent_C* HeldObject Input, struct AB_HeldObject_Parent_C* HeldObject Output, bool IsValid); // Function B_HeldObjectSocket.B_HeldObjectSocket_C.ValidateHeldObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_SocketIsFilled(); // Function B_HeldObjectSocket.B_HeldObjectSocket_C.OnRep_SocketIsFilled // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_HeldObjectSocket.B_HeldObjectSocket_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnHitHeldObject(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult Hit); // Function B_HeldObjectSocket.B_HeldObjectSocket_C.OnHitHeldObject // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventOnSocketFilled(); // Function B_HeldObjectSocket.B_HeldObjectSocket_C.EventOnSocketFilled // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventOnSocketEmptied(); // Function B_HeldObjectSocket.B_HeldObjectSocket_C.EventOnSocketEmptied // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_HeldObjectSocket(int32_t EntryPoint); // Function B_HeldObjectSocket.B_HeldObjectSocket_C.ExecuteUbergraph_B_HeldObjectSocket // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

