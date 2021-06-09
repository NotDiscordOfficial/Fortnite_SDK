// BlueprintGeneratedClass SunDirectionandColorSet.SunDirectionandColorSet_C
// Size: 0x248 (Inherited: 0x220)
struct ASunDirectionandColorSet_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* Scene; // 0x228(0x08)
	struct UArrowComponent* Arrow; // 0x230(0x08)
	struct FLinearColor SunLightColor; // 0x238(0x10)

	void UserConstructionScript(); // Function SunDirectionandColorSet.SunDirectionandColorSet_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function SunDirectionandColorSet.SunDirectionandColorSet_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function SunDirectionandColorSet.SunDirectionandColorSet_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SunDirectionandColorSet(int32_t EntryPoint); // Function SunDirectionandColorSet.SunDirectionandColorSet_C.ExecuteUbergraph_SunDirectionandColorSet // (Final|UbergraphFunction) // @ game+0xda7c34
};

