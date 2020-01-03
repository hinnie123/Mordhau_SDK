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

// Function BP_HordePlayerState.BP_HordePlayerState_C.OnRep_SkillPoints
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerState_C::OnRep_SkillPoints()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerState.BP_HordePlayerState_C.OnRep_SkillPoints");

	ABP_HordePlayerState_C_OnRep_SkillPoints_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerState.BP_HordePlayerState_C.GetDiscountedPrice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            BasePrice                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DiscountedPrice                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HordePlayerState_C::GetDiscountedPrice(int BasePrice, int* DiscountedPrice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerState.BP_HordePlayerState_C.GetDiscountedPrice");

	ABP_HordePlayerState_C_GetDiscountedPrice_Params params;
	params.BasePrice = BasePrice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DiscountedPrice != nullptr)
		*DiscountedPrice = params.DiscountedPrice;
}


// Function BP_HordePlayerState.BP_HordePlayerState_C.OnRep_Coins
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerState_C::OnRep_Coins()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerState.BP_HordePlayerState_C.OnRep_Coins");

	ABP_HordePlayerState_C_OnRep_Coins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerState.BP_HordePlayerState_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerState_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerState.BP_HordePlayerState_C.UserConstructionScript");

	ABP_HordePlayerState_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
