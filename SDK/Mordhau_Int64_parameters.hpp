#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Int64.Int64FunctionLibrary.MakeInt64
struct UInt64FunctionLibrary_MakeInt64_Params
{
	struct FString                                     Int64;                                                    // (Parm, ZeroConstructor)
	struct FInt64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Int64.Int64FunctionLibrary.Conv_Int64ToString
struct UInt64FunctionLibrary_Conv_Int64ToString_Params
{
	struct FInt64                                      Int64;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Int64.Int64FunctionLibrary.Conv_Int64ToInt32
struct UInt64FunctionLibrary_Conv_Int64ToInt32_Params
{
	struct FInt64                                      Int64;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Int64.Int64FunctionLibrary.Conv_Int64ToFloat
struct UInt64FunctionLibrary_Conv_Int64ToFloat_Params
{
	struct FInt64                                      Int64;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Int64.Int64FunctionLibrary.Conv_Int32ToInt64
struct UInt64FunctionLibrary_Conv_Int32ToInt64_Params
{
	int                                                Int32;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInt64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Int64.Int64FunctionLibrary.Conv_FloatToInt64
struct UInt64FunctionLibrary_Conv_FloatToInt64_Params
{
	float                                              Float;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FInt64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Int64.Int64MathLibrary.Subtract_Int64Int64
struct UInt64MathLibrary_Subtract_Int64Int64_Params
{
	struct FInt64                                      A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInt64                                      B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInt64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Int64.Int64MathLibrary.Subtract_Int64Float
struct UInt64MathLibrary_Subtract_Int64Float_Params
{
	struct FInt64                                      A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Int64.Int64MathLibrary.Percent_Int64Int64
struct UInt64MathLibrary_Percent_Int64Int64_Params
{
	struct FInt64                                      A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInt64                                      B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInt64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Int64.Int64MathLibrary.NotEqual_Int64Int64
struct UInt64MathLibrary_NotEqual_Int64Int64_Params
{
	struct FInt64                                      A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInt64                                      B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Int64.Int64MathLibrary.Multiply_Int64Int64
struct UInt64MathLibrary_Multiply_Int64Int64_Params
{
	struct FInt64                                      A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInt64                                      B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInt64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Int64.Int64MathLibrary.Multiply_Int64Float
struct UInt64MathLibrary_Multiply_Int64Float_Params
{
	struct FInt64                                      A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Int64.Int64MathLibrary.Min
struct UInt64MathLibrary_Min_Params
{
	struct FInt64                                      A;                                                        // (Parm)
	struct FInt64                                      B;                                                        // (Parm)
	struct FInt64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Int64.Int64MathLibrary.Max
struct UInt64MathLibrary_Max_Params
{
	struct FInt64                                      A;                                                        // (Parm)
	struct FInt64                                      B;                                                        // (Parm)
	struct FInt64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Int64.Int64MathLibrary.LessEqual_Int64Int64
struct UInt64MathLibrary_LessEqual_Int64Int64_Params
{
	struct FInt64                                      A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInt64                                      B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Int64.Int64MathLibrary.Less_Int64Int64
struct UInt64MathLibrary_Less_Int64Int64_Params
{
	struct FInt64                                      A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInt64                                      B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Int64.Int64MathLibrary.GreaterEqual_Int64Int64
struct UInt64MathLibrary_GreaterEqual_Int64Int64_Params
{
	struct FInt64                                      A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInt64                                      B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Int64.Int64MathLibrary.Greater_Int64Int64
struct UInt64MathLibrary_Greater_Int64Int64_Params
{
	struct FInt64                                      A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInt64                                      B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Int64.Int64MathLibrary.EqualEqual_Int64Int64
struct UInt64MathLibrary_EqualEqual_Int64Int64_Params
{
	struct FInt64                                      A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInt64                                      B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Int64.Int64MathLibrary.Divide_Int64Int64
struct UInt64MathLibrary_Divide_Int64Int64_Params
{
	struct FInt64                                      A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInt64                                      B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInt64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Int64.Int64MathLibrary.Divide_Int64Float
struct UInt64MathLibrary_Divide_Int64Float_Params
{
	struct FInt64                                      A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Int64.Int64MathLibrary.Add_Int64Int64
struct UInt64MathLibrary_Add_Int64Int64_Params
{
	struct FInt64                                      A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInt64                                      B;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInt64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Int64.Int64MathLibrary.Add_Int64Float
struct UInt64MathLibrary_Add_Int64Float_Params
{
	struct FInt64                                      A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Int64.Int64MathLibrary.Abs_Int
struct UInt64MathLibrary_Abs_Int_Params
{
	struct FInt64                                      A;                                                        // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FInt64                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
