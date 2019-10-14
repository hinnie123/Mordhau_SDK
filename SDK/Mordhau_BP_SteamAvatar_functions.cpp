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

// Function BP_SteamAvatar.BP_SteamAvatar_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSteamID                SteamID                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_SteamAvatar_C::Update(const struct FSteamID& SteamID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SteamAvatar.BP_SteamAvatar_C.Update");

	UBP_SteamAvatar_C_Update_Params params;
	params.SteamID = SteamID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SteamAvatar.BP_SteamAvatar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SteamAvatar_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SteamAvatar.BP_SteamAvatar_C.PreConstruct");

	UBP_SteamAvatar_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SteamAvatar.BP_SteamAvatar_C.ExecuteUbergraph_BP_SteamAvatar
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_SteamAvatar_C::ExecuteUbergraph_BP_SteamAvatar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SteamAvatar.BP_SteamAvatar_C.ExecuteUbergraph_BP_SteamAvatar");

	UBP_SteamAvatar_C_ExecuteUbergraph_BP_SteamAvatar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
