// BlueprintGeneratedClass Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C
// Size: 0x971 (Inherited: 0x95c)
struct APrj_Athena_Bucket_Nice_C : APrj_Athena_Bucket_Old_C {
	char pad_95C[0x4]; // 0x95c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x960(0x08)
	struct UParticleSystemComponent* Trail; // 0x968(0x08)
	bool TurnOffTrail; // 0x970(0x01)

	void OnRep_TurnOffTrail(); // Function Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C.OnRep_TurnOffTrail // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnExploded(struct TArray<struct AActor*> HitActors, struct TArray<struct FHitResult> HitResults); // Function Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Prj_Athena_Bucket_Nice(int32_t EntryPoint); // Function Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C.ExecuteUbergraph_Prj_Athena_Bucket_Nice // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

