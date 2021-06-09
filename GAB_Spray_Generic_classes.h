// BlueprintGeneratedClass GAB_Spray_Generic.GAB_Spray_Generic_C
// Size: 0xb40 (Inherited: 0xacc)
struct UGAB_Spray_Generic_C : UGAB_Emote_Generic_C {
	char pad_ACC[0x4]; // 0xacc(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xad0(0x08)
	float DecalSize; // 0xad8(0x04)
	char pad_ADC[0x4]; // 0xadc(0x04)
	struct UAthenaSprayItemDefinition* MySpray; // 0xae0(0x08)
	float DecalTraceDistance; // 0xae8(0x04)
	char pad_AEC[0x4]; // 0xaec(0x04)
	struct TSoftObjectPtr<struct UAnimMontage> DefaultSprayMontage_M; // 0xaf0(0x28)
	struct TSoftObjectPtr<struct UAnimMontage> DefaultSprayMontage_F; // 0xb18(0x28)

	struct TSoftObjectPtr<struct UAnimMontage> GetMontageToPlay(struct UFortMontageItemDefinitionBase* EmoteAsset, enum class EFortCustomBodyType BodyType, enum class EFortCustomGender Gender); // Function GAB_Spray_Generic.GAB_Spray_Generic_C.GetMontageToPlay // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TargetLineTrace(struct AFortPawn* ActivatingPawn, bool HitSomething, struct FVector Location, struct FVector Normal); // Function GAB_Spray_Generic.GAB_Spray_Generic_C.TargetLineTrace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMontageStartedPlaying(); // Function GAB_Spray_Generic.GAB_Spray_Generic_C.OnMontageStartedPlaying // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GAB_Spray_Generic(int32_t EntryPoint); // Function GAB_Spray_Generic.GAB_Spray_Generic_C.ExecuteUbergraph_GAB_Spray_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

