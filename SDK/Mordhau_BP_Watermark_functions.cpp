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

// Function BP_Watermark.BP_Watermark_C.Get_BuildNo_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_Watermark_C::Get_BuildNo_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Watermark.BP_Watermark_C.Get_BuildNo_Text");

	UBP_Watermark_C_Get_BuildNo_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Watermark.BP_Watermark_C.Get_SteamId_Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_Watermark_C::Get_SteamId_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Watermark.BP_Watermark_C.Get_SteamId_Text");

	UBP_Watermark_C_Get_SteamId_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
