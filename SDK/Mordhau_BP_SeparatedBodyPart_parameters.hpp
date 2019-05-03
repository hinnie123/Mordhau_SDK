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

// Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.UserConstructionScript
struct ABP_SeparatedBodyPart_C_UserConstructionScript_Params
{
};

// Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.OnCosmeticHit
struct ABP_SeparatedBodyPart_C_OnCosmeticHit_Params
{
	EMordhauDamageType*                                DamageType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     SubType;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class AActor**                                     Agent;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.BndEvt__Thudder_K2Node_ComponentBoundEvent_1_ComponentThudSignature__DelegateSignature
struct ABP_SeparatedBodyPart_C_BndEvt__Thudder_K2Node_ComponentBoundEvent_1_ComponentThudSignature__DelegateSignature_Params
{
};

// Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.InitializeDismemberment
struct ABP_SeparatedBodyPart_C_InitializeDismemberment_Params
{
	class AMordhauCharacter**                          Source;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform*                                 SourceBoneTransform;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	bool*                                              bIsPartial;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsBluntForce;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SeparatedBodyPart.BP_SeparatedBodyPart_C.ExecuteUbergraph_BP_SeparatedBodyPart
struct ABP_SeparatedBodyPart_C_ExecuteUbergraph_BP_SeparatedBodyPart_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
