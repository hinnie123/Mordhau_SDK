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

// Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SeparatedBodyPart_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.UserConstructionScript");

	ABP_SeparatedBodyPart_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.OnCosmeticHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// EMordhauDamageType*            DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor**                 Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SeparatedBodyPart_C::OnCosmeticHit(EMordhauDamageType* DamageType, unsigned char* SubType, struct FHitResult* Hit, class AActor** Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.OnCosmeticHit");

	ABP_SeparatedBodyPart_C_OnCosmeticHit_Params params;
	params.DamageType = DamageType;
	params.SubType = SubType;
	params.Hit = Hit;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.BndEvt__Thudder_K2Node_ComponentBoundEvent_1_ComponentThudSignature__DelegateSignature
// (BlueprintEvent)

void ABP_SeparatedBodyPart_C::BndEvt__Thudder_K2Node_ComponentBoundEvent_1_ComponentThudSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.BndEvt__Thudder_K2Node_ComponentBoundEvent_1_ComponentThudSignature__DelegateSignature");

	ABP_SeparatedBodyPart_C_BndEvt__Thudder_K2Node_ComponentBoundEvent_1_ComponentThudSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.InitializeDismemberment
// (Event, Public, BlueprintEvent)
// Parameters:
// class AMordhauCharacter**      Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             SourceBoneTransform            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool*                          bIsPartial                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsBluntForce                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SeparatedBodyPart_C::InitializeDismemberment(class AMordhauCharacter** Source, struct FName* bone, struct FTransform* SourceBoneTransform, bool* bIsPartial, bool* bIsBluntForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.InitializeDismemberment");

	ABP_SeparatedBodyPart_C_InitializeDismemberment_Params params;
	params.Source = Source;
	params.bone = bone;
	params.SourceBoneTransform = SourceBoneTransform;
	params.bIsPartial = bIsPartial;
	params.bIsBluntForce = bIsBluntForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.ExecuteUbergraph_BP_SeparatedBodyPart
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_SeparatedBodyPart_C::ExecuteUbergraph_BP_SeparatedBodyPart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.ExecuteUbergraph_BP_SeparatedBodyPart");

	ABP_SeparatedBodyPart_C_ExecuteUbergraph_BP_SeparatedBodyPart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
