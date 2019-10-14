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

// Function BP_PlayerBanner.BP_PlayerBanner_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Badge_ID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerBanner_C::Update(int Badge_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBanner.BP_PlayerBanner_C.Update");

	UBP_PlayerBanner_C_Update_Params params;
	params.Badge_ID = Badge_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerBanner.BP_PlayerBanner_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerBanner_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBanner.BP_PlayerBanner_C.PreConstruct");

	UBP_PlayerBanner_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PlayerBanner.BP_PlayerBanner_C.ExecuteUbergraph_BP_PlayerBanner
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_PlayerBanner_C::ExecuteUbergraph_BP_PlayerBanner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PlayerBanner.BP_PlayerBanner_C.ExecuteUbergraph_BP_PlayerBanner");

	UBP_PlayerBanner_C_ExecuteUbergraph_BP_PlayerBanner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
