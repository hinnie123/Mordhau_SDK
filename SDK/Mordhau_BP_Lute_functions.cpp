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

// Function BP_Lute.BP_Lute_C.ServerSetToneAndPlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Tone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lute_C::ServerSetToneAndPlay(unsigned char Tone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lute.BP_Lute_C.ServerSetToneAndPlay");

	ABP_Lute_C_ServerSetToneAndPlay_Params params;
	params.Tone = Tone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lute.BP_Lute_C.RequestBlock
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBlockType*                    BlockType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAllowFTP                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_Lute_C::RequestBlock(EBlockType* BlockType, bool* bAllowFTP)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lute.BP_Lute_C.RequestBlock");

	ABP_Lute_C_RequestBlock_Params params;
	params.BlockType = BlockType;
	params.bAllowFTP = bAllowFTP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Lute.BP_Lute_C.GetToneFromAttack
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAttackMove                    Move                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Tone                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_Lute_C::GetToneFromAttack(EAttackMove Move, float Angle, unsigned char* Tone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lute.BP_Lute_C.GetToneFromAttack");

	ABP_Lute_C_GetToneFromAttack_Params params;
	params.Move = Move;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tone != nullptr)
		*Tone = params.Tone;
}


// Function BP_Lute.BP_Lute_C.PlayTone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Tone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lute_C::PlayTone(unsigned char Tone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lute.BP_Lute_C.PlayTone");

	ABP_Lute_C_PlayTone_Params params;
	params.Tone = Tone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lute.BP_Lute_C.OnRep_ReplicatedTone
// (BlueprintCallable, BlueprintEvent)

void ABP_Lute_C::OnRep_ReplicatedTone()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lute.BP_Lute_C.OnRep_ReplicatedTone");

	ABP_Lute_C_OnRep_ReplicatedTone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lute.BP_Lute_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Lute_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lute.BP_Lute_C.UserConstructionScript");

	ABP_Lute_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lute.BP_Lute_C.RequestAttack
// (Event, Public, BlueprintEvent)
// Parameters:
// EAttackMove*                   Move                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lute_C::RequestAttack(EAttackMove* Move, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lute.BP_Lute_C.RequestAttack");

	ABP_Lute_C_RequestAttack_Params params;
	params.Move = Move;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lute.BP_Lute_C.ServerSetTone
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char                  Tone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lute_C::ServerSetTone(unsigned char Tone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lute.BP_Lute_C.ServerSetTone");

	ABP_Lute_C_ServerSetTone_Params params;
	params.Tone = Tone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lute.BP_Lute_C.EquipmentCommand
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Command                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lute_C::EquipmentCommand(int* Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lute.BP_Lute_C.EquipmentCommand");

	ABP_Lute_C_EquipmentCommand_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lute.BP_Lute_C.ExecuteUbergraph_BP_Lute
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lute_C::ExecuteUbergraph_BP_Lute(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lute.BP_Lute_C.ExecuteUbergraph_BP_Lute");

	ABP_Lute_C_ExecuteUbergraph_BP_Lute_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
