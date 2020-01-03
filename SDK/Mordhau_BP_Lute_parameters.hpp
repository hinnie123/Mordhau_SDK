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

// Function BP_Lute.BP_Lute_C.ServerSetToneAndPlay
struct ABP_Lute_C_ServerSetToneAndPlay_Params
{
	unsigned char                                      Tone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lute.BP_Lute_C.RequestBlock
struct ABP_Lute_C_RequestBlock_Params
{
	EBlockType*                                        BlockType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllowFTP;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BP_Lute.BP_Lute_C.GetToneFromAttack
struct ABP_Lute_C_GetToneFromAttack_Params
{
	EAttackMove                                        Move;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Tone;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lute.BP_Lute_C.PlayTone
struct ABP_Lute_C_PlayTone_Params
{
	unsigned char                                      Tone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lute.BP_Lute_C.OnRep_ReplicatedTone
struct ABP_Lute_C_OnRep_ReplicatedTone_Params
{
};

// Function BP_Lute.BP_Lute_C.UserConstructionScript
struct ABP_Lute_C_UserConstructionScript_Params
{
};

// Function BP_Lute.BP_Lute_C.RequestAttack
struct ABP_Lute_C_RequestAttack_Params
{
	EAttackMove*                                       Move;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lute.BP_Lute_C.ServerSetTone
struct ABP_Lute_C_ServerSetTone_Params
{
	unsigned char                                      Tone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lute.BP_Lute_C.EquipmentCommand
struct ABP_Lute_C_EquipmentCommand_Params
{
	int*                                               Command;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lute.BP_Lute_C.ExecuteUbergraph_BP_Lute
struct ABP_Lute_C_ExecuteUbergraph_BP_Lute_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
