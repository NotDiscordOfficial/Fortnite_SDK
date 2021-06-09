// Class Solaris.SolarisArrayLibrary
// Size: 0x28 (Inherited: 0x28)
struct USolarisArrayLibrary : UObject {

	int32_t Num(struct TArray<int32_t> Array); // Function Solaris.SolarisArrayLibrary.Num // (Final|Native|Static|Public|HasOutParms) // @ game+0x428a07c
	void Move(struct TArray<int32_t> Target, struct TArray<int32_t> Source); // Function Solaris.SolarisArrayLibrary.Move // (Final|Native|Static|Public|HasOutParms) // @ game+0x4289ed0
	bool IsValidIndex(struct TArray<int32_t> Array, int32_t Index); // Function Solaris.SolarisArrayLibrary.IsValidIndex // (Final|Native|Static|Public|HasOutParms) // @ game+0x4289be8
	void Empty(struct TArray<int32_t> Array); // Function Solaris.SolarisArrayLibrary.Empty // (Final|Native|Static|Public|HasOutParms) // @ game+0x428900c
	bool Contains(struct TArray<int32_t> Array, int32_t search_item); // Function Solaris.SolarisArrayLibrary.Contains // (Final|Native|Static|Public|HasOutParms) // @ game+0x4288e30
	struct TArray<int32_t> Concat(struct TArray<int32_t> Lhs, struct TArray<int32_t> Rhs); // Function Solaris.SolarisArrayLibrary.Concat // (Final|Native|Static|Public|HasOutParms) // @ game+0x4288ce8
	int32_t Add(struct TArray<int32_t> Array, int32_t new_item); // Function Solaris.SolarisArrayLibrary.Add // (Final|Native|Static|Public|HasOutParms) // @ game+0x42889c4
};

// Class Solaris.SolarisCoroutineLibrary
// Size: 0x28 (Inherited: 0x28)
struct USolarisCoroutineLibrary : UObject {

	int32_t GetState(struct UObject* task); // Function Solaris.SolarisCoroutineLibrary.GetState // (Final|Native|Static|Public) // @ game+0x428a900
	void GetReturnProperty(struct UObject* task); // Function Solaris.SolarisCoroutineLibrary.GetReturnProperty // (Final|Native|Static|Public) // @ game+0x4289504
	void Deallocate(struct UObject* task); // Function Solaris.SolarisCoroutineLibrary.Deallocate // (Final|Native|Static|Public) // @ game+0x428a7d8
	struct UObject* Allocate(struct UObject* Type, struct UObject* Caller, int32_t CallerResumeState, struct UObject* OwnerInstance); // Function Solaris.SolarisCoroutineLibrary.Allocate // (Final|Native|Static|Public) // @ game+0x428a61c
	void Abort(struct UObject* task, bool bAbortCallers); // Function Solaris.SolarisCoroutineLibrary.Abort // (Final|Native|Static|Public) // @ game+0x428a534
};

// Class Solaris.SolarisDebugData
// Size: 0x38 (Inherited: 0x28)
struct USolarisDebugData : UObject {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Solaris.SolarisGeneratedClass
// Size: 0x2f8 (Inherited: 0x240)
struct USolarisGeneratedClass : UClass {
	uint32_t SolClassFlags; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct TArray<struct UObject*> TaskClasses; // 0x248(0x10)
	struct TSet<struct UObject*> TraitClasses; // 0x258(0x50)
	struct TMap<struct FName, FieldPathProperty> TraitMethodDelegateProperties; // 0x2a8(0x50)
};

// Class Solaris.SolarisGeneratedEnum
// Size: 0x60 (Inherited: 0x60)
struct USolarisGeneratedEnum : UEnum {
};

// Class Solaris.SolarisMathLibrary_Bool
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Bool : UObject {

	bool logical_xor(bool Lhs, bool Rhs); // Function Solaris.SolarisMathLibrary_Bool.logical_xor // (Final|Native|Static|Public) // @ game+0x428c0e8
	bool equal(bool Lhs, bool Rhs); // Function Solaris.SolarisMathLibrary_Bool.equal // (Final|Native|Static|Public) // @ game+0x428b3f8
};

// Class Solaris.SolarisMathLibrary_Int
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Int : UObject {

	int32_t subtract_equals(int32_t Lhs, int32_t Rhs); // Function Solaris.SolarisMathLibrary_Int.subtract_equals // (Final|Native|Static|Public|HasOutParms) // @ game+0x428d1f8
	int32_t Subtract(int32_t Lhs, int32_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Subtract // (Final|Native|Static|Public) // @ game+0x428d020
	bool not_equal(int32_t Lhs, int32_t Rhs); // Function Solaris.SolarisMathLibrary_Int.not_equal // (Final|Native|Static|Public) // @ game+0x428cc1c
	int32_t negate(int32_t Value); // Function Solaris.SolarisMathLibrary_Int.negate // (Final|Native|Static|Public) // @ game+0x428c9c0
	int32_t multiply_equals(int32_t Lhs, int32_t Rhs); // Function Solaris.SolarisMathLibrary_Int.multiply_equals // (Final|Native|Static|Public|HasOutParms) // @ game+0x428c82c
	int32_t Multiply(int32_t Lhs, int32_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Multiply // (Final|Native|Static|Public) // @ game+0x428c650
	int32_t min(int32_t Lhs, int32_t Rhs); // Function Solaris.SolarisMathLibrary_Int.min // (Final|Native|Static|Public) // @ game+0x428c488
	int32_t max(int32_t Lhs, int32_t Rhs); // Function Solaris.SolarisMathLibrary_Int.max // (Final|Native|Static|Public) // @ game+0x428c2c0
	bool less_equal(int32_t Lhs, int32_t Rhs); // Function Solaris.SolarisMathLibrary_Int.less_equal // (Final|Native|Static|Public) // @ game+0x428c008
	bool less(int32_t Lhs, int32_t Rhs); // Function Solaris.SolarisMathLibrary_Int.less // (Final|Native|Static|Public) // @ game+0x428be44
	bool greater_equal(int32_t Lhs, int32_t Rhs); // Function Solaris.SolarisMathLibrary_Int.greater_equal // (Final|Native|Static|Public) // @ game+0x428bc80
	bool greater(int32_t Lhs, int32_t Rhs); // Function Solaris.SolarisMathLibrary_Int.greater // (Final|Native|Static|Public) // @ game+0x428babc
	bool equal(int32_t Lhs, int32_t Rhs); // Function Solaris.SolarisMathLibrary_Int.equal // (Final|Native|Static|Public) // @ game+0x428b6b8
	int32_t divide_equals(int32_t Lhs, int32_t Rhs); // Function Solaris.SolarisMathLibrary_Int.divide_equals // (Final|Native|Static|Public|HasOutParms) // @ game+0x428b2f8
	int32_t Divide(int32_t Lhs, int32_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Divide // (Final|Native|Static|Public) // @ game+0x428b114
	int32_t add_equals(int32_t Lhs, int32_t Rhs); // Function Solaris.SolarisMathLibrary_Int.add_equals // (Final|Native|Static|Public|HasOutParms) // @ game+0x428ae44
	int32_t Add(int32_t Lhs, int32_t Rhs); // Function Solaris.SolarisMathLibrary_Int.Add // (Final|Native|Static|Public) // @ game+0x428ac6c
	int32_t abs(int32_t Value); // Function Solaris.SolarisMathLibrary_Int.abs // (Final|Native|Static|Public) // @ game+0x428aaf4
};

// Class Solaris.SolarisMathLibrary_Float
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Float : UObject {

	float subtract_equals(float Lhs, float Rhs); // Function Solaris.SolarisMathLibrary_Float.subtract_equals // (Final|Native|Static|Public|HasOutParms) // @ game+0x428d0fc
	float Subtract(float Lhs, float Rhs); // Function Solaris.SolarisMathLibrary_Float.Subtract // (Final|Native|Static|Public) // @ game+0x428cf3c
	bool not_equal(float Lhs, float Rhs); // Function Solaris.SolarisMathLibrary_Float.not_equal // (Final|Native|Static|Public) // @ game+0x428cb34
	float negate(float Value); // Function Solaris.SolarisMathLibrary_Float.negate // (Final|Native|Static|Public) // @ game+0x428c920
	float multiply_equals(float Lhs, float Rhs); // Function Solaris.SolarisMathLibrary_Float.multiply_equals // (Final|Native|Static|Public|HasOutParms) // @ game+0x428c730
	float Multiply(float Lhs, float Rhs); // Function Solaris.SolarisMathLibrary_Float.Multiply // (Final|Native|Static|Public) // @ game+0x428c56c
	float min(float Lhs, float Rhs); // Function Solaris.SolarisMathLibrary_Float.min // (Final|Native|Static|Public) // @ game+0x428c3a4
	float max(float Lhs, float Rhs); // Function Solaris.SolarisMathLibrary_Float.max // (Final|Native|Static|Public) // @ game+0x428c1dc
	bool less_equal(float Lhs, float Rhs); // Function Solaris.SolarisMathLibrary_Float.less_equal // (Final|Native|Static|Public) // @ game+0x428bf24
	bool less(float Lhs, float Rhs); // Function Solaris.SolarisMathLibrary_Float.less // (Final|Native|Static|Public) // @ game+0x428bd60
	bool greater_equal(float Lhs, float Rhs); // Function Solaris.SolarisMathLibrary_Float.greater_equal // (Final|Native|Static|Public) // @ game+0x428bb9c
	bool greater(float Lhs, float Rhs); // Function Solaris.SolarisMathLibrary_Float.greater // (Final|Native|Static|Public) // @ game+0x428b9d8
	bool equal(float Lhs, float Rhs); // Function Solaris.SolarisMathLibrary_Float.equal // (Final|Native|Static|Public) // @ game+0x428b5d0
	float divide_equals(float Lhs, float Rhs); // Function Solaris.SolarisMathLibrary_Float.divide_equals // (Final|Native|Static|Public|HasOutParms) // @ game+0x428b1fc
	float Divide(float Lhs, float Rhs); // Function Solaris.SolarisMathLibrary_Float.Divide // (Final|Native|Static|Public) // @ game+0x428b030
	float assign(float Lhs, float Rhs); // Function Solaris.SolarisMathLibrary_Float.assign // (Final|Native|Static|Public|HasOutParms) // @ game+0x428af38
	float add_equals(float Lhs, float Rhs); // Function Solaris.SolarisMathLibrary_Float.add_equals // (Final|Native|Static|Public|HasOutParms) // @ game+0x428ad48
	float Add(float Lhs, float Rhs); // Function Solaris.SolarisMathLibrary_Float.Add // (Final|Native|Static|Public) // @ game+0x428ab88
	float abs(float Value); // Function Solaris.SolarisMathLibrary_Float.abs // (Final|Native|Static|Public) // @ game+0x428aa54
};

// Class Solaris.SolarisMathLibrary_String
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_String : UObject {

	bool not_equal(struct FString Lhs, struct FString Rhs); // Function Solaris.SolarisMathLibrary_String.not_equal // (Final|Native|Static|Public) // @ game+0x428cde0
	bool equal(struct FString Lhs, struct FString Rhs); // Function Solaris.SolarisMathLibrary_String.equal // (Final|Native|Static|Public) // @ game+0x428b87c
};

// Class Solaris.SolarisMathLibrary_Object
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Object : UObject {

	bool not_equal(struct UObject* Lhs, struct UObject* Rhs); // Function Solaris.SolarisMathLibrary_Object.not_equal // (Final|Native|Static|Public) // @ game+0x428ccfc
	bool equal(struct UObject* Lhs, struct UObject* Rhs); // Function Solaris.SolarisMathLibrary_Object.equal // (Final|Native|Static|Public) // @ game+0x428b798
};

// Class Solaris.SolarisMathLibrary_Enum
// Size: 0x28 (Inherited: 0x28)
struct USolarisMathLibrary_Enum : UObject {

	bool not_equal(char Lhs, char Rhs); // Function Solaris.SolarisMathLibrary_Enum.not_equal // (Final|Native|Static|Public) // @ game+0x428ca50
	bool equal(char Lhs, char Rhs); // Function Solaris.SolarisMathLibrary_Enum.equal // (Final|Native|Static|Public) // @ game+0x428b4ec
};

// Class Solaris.SolarisGameSettings
// Size: 0x40 (Inherited: 0x28)
struct USolarisGameSettings : UObject {
	struct TArray<struct FString> Blacklist; // 0x28(0x10)
	int32_t MaxAllowedSize; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class Solaris.SolarisSourceData
// Size: 0x40 (Inherited: 0x28)
struct USolarisSourceData : UObject {
	char pad_28[0x18]; // 0x28(0x18)
};

// Class Solaris.SolarisUtilLibrary
// Size: 0x28 (Inherited: 0x28)
struct USolarisUtilLibrary : UObject {

	int32_t MakeUnsetOptional(struct UObject* Property); // Function Solaris.SolarisUtilLibrary.MakeUnsetOptional // (Final|Native|Static|Public) // @ game+0x4289e0c
	bool MakeOptionalFromValue(struct UObject* Property, int32_t Value); // Function Solaris.SolarisUtilLibrary.MakeOptionalFromValue // (Final|Native|Static|Public) // @ game+0x4289d04
	bool IsOptionalSet(struct UObject* Property, int32_t Optional); // Function Solaris.SolarisUtilLibrary.IsOptionalSet // (Final|Native|Static|Public) // @ game+0x4289a4c
	bool IsNonNullObject(struct UObject* Object); // Function Solaris.SolarisUtilLibrary.IsNonNullObject // (Final|Native|Static|Public) // @ game+0x42899c0
	struct UObject* InstantiateObject(struct UObject* Type); // Function Solaris.SolarisUtilLibrary.InstantiateObject // (Final|Native|Static|Public) // @ game+0x428a994
	bool HasTrait(struct UObject* Object, struct UObject* TraitClass); // Function Solaris.SolarisUtilLibrary.HasTrait // (Final|Native|Static|Public) // @ game+0x4289844
	int32_t GetOptionalValue(struct UObject* Property, int32_t Optional); // Function Solaris.SolarisUtilLibrary.GetOptionalValue // (Final|Native|Static|Public) // @ game+0x4289358
	void GetDelegateForTraitMethod(struct UObject* Object, struct FName MethodName); // Function Solaris.SolarisUtilLibrary.GetDelegateForTraitMethod // (Final|Native|Static|Public) // @ game+0x42890d8
	struct UObject* GetClass(struct UObject* Object); // Function Solaris.SolarisUtilLibrary.GetClass // (Final|Native|Static|Public) // @ game+0x428a868
	void CallDelegate(); // Function Solaris.SolarisUtilLibrary.CallDelegate // (Final|Native|Static|Public) // @ game+0x4288ba0
};

