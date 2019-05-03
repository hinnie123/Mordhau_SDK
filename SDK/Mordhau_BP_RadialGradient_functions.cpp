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

// Function BP_RadialGradient.BP_RadialGradient_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_RadialGradient_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialGradient.BP_RadialGradient_C.Construct");

	UBP_RadialGradient_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadialGradient.BP_RadialGradient_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RadialGradient_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialGradient.BP_RadialGradient_C.PreConstruct");

	UBP_RadialGradient_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_RadialGradient.BP_RadialGradient_C.ExecuteUbergraph_BP_RadialGradient
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_RadialGradient_C::ExecuteUbergraph_BP_RadialGradient(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RadialGradient.BP_RadialGradient_C.ExecuteUbergraph_BP_RadialGradient");

	UBP_RadialGradient_C_ExecuteUbergraph_BP_RadialGradient_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
