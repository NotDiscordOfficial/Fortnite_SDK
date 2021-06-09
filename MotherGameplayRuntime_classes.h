// Class MotherGameplayRuntime.FortCabbageIglooVehicle
// Size: 0x1a60 (Inherited: 0x1a60)
struct AFortCabbageIglooVehicle : AFortOctopusVehicle {
};

// Class MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp
// Size: 0x820 (Inherited: 0x7d0)
struct AReactorGradeGameplayCue_ChargeUp : AFortGameplayCueNotify_Loop {
	struct AFortPawn* Pawn; // 0x7d0(0x08)
	struct FVector FoundEndPoint; // 0x7d8(0x0c)
	char pad_7E4[0x4]; // 0x7e4(0x04)
	struct FScalableFloat HitObjectsLimit; // 0x7e8(0x28)
	char pad_810[0x4]; // 0x810(0x04)
	enum class ECollisionChannel TraceChannel; // 0x814(0x01)
	char pad_815[0xb]; // 0x815(0x0b)

	void UpdateAimEndPoint(); // Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.UpdateAimEndPoint // (Final|Native|Public|BlueprintCallable) // @ game+0x2e89360
	void OnEndPointFound(struct FVector FoundPoint); // Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.OnEndPointFound // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0xda7c34
	struct FVector GetFoundEndPoint(); // Function MotherGameplayRuntime.ReactorGradeGameplayCue_ChargeUp.GetFoundEndPoint // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x2e89330
};

