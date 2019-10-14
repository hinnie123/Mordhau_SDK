#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class Int64.Int64FunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UInt64FunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Int64.Int64FunctionLibrary");
		return ptr;
	}


	struct FInt64 STATIC_MakeInt64(const struct FString& Int64);
	struct FString STATIC_Conv_Int64ToString(const struct FInt64& Int64);
	int STATIC_Conv_Int64ToInt32(const struct FInt64& Int64);
	float STATIC_Conv_Int64ToFloat(const struct FInt64& Int64);
	struct FInt64 STATIC_Conv_Int32ToInt64(int Int32);
	struct FInt64 STATIC_Conv_FloatToInt64(float Float);
};


// Class Int64.Int64MathLibrary
// 0x0000 (0x0028 - 0x0028)
class UInt64MathLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Int64.Int64MathLibrary");
		return ptr;
	}


	struct FInt64 STATIC_Subtract_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	float STATIC_Subtract_Int64Float(const struct FInt64& A, float B);
	struct FInt64 STATIC_Percent_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	bool STATIC_NotEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	struct FInt64 STATIC_Multiply_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	float STATIC_Multiply_Int64Float(const struct FInt64& A, float B);
	struct FInt64 STATIC_Min(const struct FInt64& A, const struct FInt64& B);
	struct FInt64 STATIC_Max(const struct FInt64& A, const struct FInt64& B);
	bool STATIC_LessEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	bool STATIC_Less_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	bool STATIC_GreaterEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	bool STATIC_Greater_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	bool STATIC_EqualEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	struct FInt64 STATIC_Divide_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	float STATIC_Divide_Int64Float(const struct FInt64& A, float B);
	struct FInt64 STATIC_Add_Int64Int64(const struct FInt64& A, const struct FInt64& B);
	float STATIC_Add_Int64Float(const struct FInt64& A, float B);
	struct FInt64 STATIC_Abs_Int(const struct FInt64& A);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
