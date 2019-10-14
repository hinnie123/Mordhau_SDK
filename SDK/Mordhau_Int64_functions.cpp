// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Int64.Int64FunctionLibrary.MakeInt64
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 Int64                          (Parm, ZeroConstructor)
// struct FInt64                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInt64 UInt64FunctionLibrary::STATIC_MakeInt64(const struct FString& Int64)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64FunctionLibrary.MakeInt64");

	UInt64FunctionLibrary_MakeInt64_Params params;
	params.Int64 = Int64;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64FunctionLibrary.Conv_Int64ToString
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  Int64                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UInt64FunctionLibrary::STATIC_Conv_Int64ToString(const struct FInt64& Int64)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64FunctionLibrary.Conv_Int64ToString");

	UInt64FunctionLibrary_Conv_Int64ToString_Params params;
	params.Int64 = Int64;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64FunctionLibrary.Conv_Int64ToInt32
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  Int64                          (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UInt64FunctionLibrary::STATIC_Conv_Int64ToInt32(const struct FInt64& Int64)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64FunctionLibrary.Conv_Int64ToInt32");

	UInt64FunctionLibrary_Conv_Int64ToInt32_Params params;
	params.Int64 = Int64;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64FunctionLibrary.Conv_Int64ToFloat
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  Int64                          (ConstParm, Parm, OutParm, ReferenceParm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInt64FunctionLibrary::STATIC_Conv_Int64ToFloat(const struct FInt64& Int64)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64FunctionLibrary.Conv_Int64ToFloat");

	UInt64FunctionLibrary_Conv_Int64ToFloat_Params params;
	params.Int64 = Int64;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64FunctionLibrary.Conv_Int32ToInt64
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            Int32                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FInt64                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInt64 UInt64FunctionLibrary::STATIC_Conv_Int32ToInt64(int Int32)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64FunctionLibrary.Conv_Int32ToInt64");

	UInt64FunctionLibrary_Conv_Int32ToInt64_Params params;
	params.Int32 = Int32;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64FunctionLibrary.Conv_FloatToInt64
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          Float                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FInt64                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInt64 UInt64FunctionLibrary::STATIC_Conv_FloatToInt64(float Float)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64FunctionLibrary.Conv_FloatToInt64");

	UInt64FunctionLibrary_Conv_FloatToInt64_Params params;
	params.Float = Float;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Subtract_Int64Int64
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInt64                  B                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInt64                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInt64 UInt64MathLibrary::STATIC_Subtract_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Subtract_Int64Int64");

	UInt64MathLibrary_Subtract_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Subtract_Int64Float
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  A                              (ConstParm, Parm, OutParm, ReferenceParm)
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInt64MathLibrary::STATIC_Subtract_Int64Float(const struct FInt64& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Subtract_Int64Float");

	UInt64MathLibrary_Subtract_Int64Float_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Percent_Int64Int64
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInt64                  B                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInt64                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInt64 UInt64MathLibrary::STATIC_Percent_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Percent_Int64Int64");

	UInt64MathLibrary_Percent_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.NotEqual_Int64Int64
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInt64                  B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInt64MathLibrary::STATIC_NotEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.NotEqual_Int64Int64");

	UInt64MathLibrary_NotEqual_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Multiply_Int64Int64
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInt64                  B                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInt64                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInt64 UInt64MathLibrary::STATIC_Multiply_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Multiply_Int64Int64");

	UInt64MathLibrary_Multiply_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Multiply_Int64Float
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  A                              (ConstParm, Parm, OutParm, ReferenceParm)
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInt64MathLibrary::STATIC_Multiply_Int64Float(const struct FInt64& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Multiply_Int64Float");

	UInt64MathLibrary_Multiply_Int64Float_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Min
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  A                              (Parm)
// struct FInt64                  B                              (Parm)
// struct FInt64                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInt64 UInt64MathLibrary::STATIC_Min(const struct FInt64& A, const struct FInt64& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Min");

	UInt64MathLibrary_Min_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Max
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  A                              (Parm)
// struct FInt64                  B                              (Parm)
// struct FInt64                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInt64 UInt64MathLibrary::STATIC_Max(const struct FInt64& A, const struct FInt64& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Max");

	UInt64MathLibrary_Max_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.LessEqual_Int64Int64
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInt64                  B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInt64MathLibrary::STATIC_LessEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.LessEqual_Int64Int64");

	UInt64MathLibrary_LessEqual_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Less_Int64Int64
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInt64                  B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInt64MathLibrary::STATIC_Less_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Less_Int64Int64");

	UInt64MathLibrary_Less_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.GreaterEqual_Int64Int64
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInt64                  B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInt64MathLibrary::STATIC_GreaterEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.GreaterEqual_Int64Int64");

	UInt64MathLibrary_GreaterEqual_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Greater_Int64Int64
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInt64                  B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInt64MathLibrary::STATIC_Greater_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Greater_Int64Int64");

	UInt64MathLibrary_Greater_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.EqualEqual_Int64Int64
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInt64                  B                              (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UInt64MathLibrary::STATIC_EqualEqual_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.EqualEqual_Int64Int64");

	UInt64MathLibrary_EqualEqual_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Divide_Int64Int64
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInt64                  B                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInt64                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInt64 UInt64MathLibrary::STATIC_Divide_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Divide_Int64Int64");

	UInt64MathLibrary_Divide_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Divide_Int64Float
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  A                              (ConstParm, Parm, OutParm, ReferenceParm)
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInt64MathLibrary::STATIC_Divide_Int64Float(const struct FInt64& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Divide_Int64Float");

	UInt64MathLibrary_Divide_Int64Float_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Add_Int64Int64
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInt64                  B                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInt64                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInt64 UInt64MathLibrary::STATIC_Add_Int64Int64(const struct FInt64& A, const struct FInt64& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Add_Int64Int64");

	UInt64MathLibrary_Add_Int64Int64_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Add_Int64Float
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  A                              (ConstParm, Parm, OutParm, ReferenceParm)
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInt64MathLibrary::STATIC_Add_Int64Float(const struct FInt64& A, float B)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Add_Int64Float");

	UInt64MathLibrary_Add_Int64Float_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Int64.Int64MathLibrary.Abs_Int
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInt64                  A                              (ConstParm, Parm, OutParm, ReferenceParm)
// struct FInt64                  ReturnValue                    (Parm, OutParm, ReturnParm)

struct FInt64 UInt64MathLibrary::STATIC_Abs_Int(const struct FInt64& A)
{
	static auto fn = UObject::FindObject<UFunction>("Function Int64.Int64MathLibrary.Abs_Int");

	UInt64MathLibrary_Abs_Int_Params params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
