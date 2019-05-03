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

// Function BP_BattleRoyaleChestRagdoll.BP_BattleRoyaleChestRagdoll_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BattleRoyaleChestRagdoll_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleChestRagdoll.BP_BattleRoyaleChestRagdoll_C.UserConstructionScript");

	ABP_BattleRoyaleChestRagdoll_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleChestRagdoll.BP_BattleRoyaleChestRagdoll_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleChestRagdoll_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleChestRagdoll.BP_BattleRoyaleChestRagdoll_C.ReceiveTick");

	ABP_BattleRoyaleChestRagdoll_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BattleRoyaleChestRagdoll.BP_BattleRoyaleChestRagdoll_C.ExecuteUbergraph_BP_BattleRoyaleChestRagdoll
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BattleRoyaleChestRagdoll_C::ExecuteUbergraph_BP_BattleRoyaleChestRagdoll(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BattleRoyaleChestRagdoll.BP_BattleRoyaleChestRagdoll_C.ExecuteUbergraph_BP_BattleRoyaleChestRagdoll");

	ABP_BattleRoyaleChestRagdoll_C_ExecuteUbergraph_BP_BattleRoyaleChestRagdoll_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
