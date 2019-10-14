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

// Function BP_MordhauCharacter.BP_MordhauCharacter_C.GetOutOfBoundsSubtext
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   SubText                        (Parm, OutParm)

void ABP_MordhauCharacter_C::GetOutOfBoundsSubtext(struct FText* SubText)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.GetOutOfBoundsSubtext");

	ABP_MordhauCharacter_C_GetOutOfBoundsSubtext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubText != nullptr)
		*SubText = params.SubText;
}


// Function BP_MordhauCharacter.BP_MordhauCharacter_C.GetOutOfBoundsText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Header                         (Parm, OutParm)

void ABP_MordhauCharacter_C::GetOutOfBoundsText(struct FText* Header)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.GetOutOfBoundsText");

	ABP_MordhauCharacter_C_GetOutOfBoundsText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Header != nullptr)
		*Header = params.Header;
}


// Function BP_MordhauCharacter.BP_MordhauCharacter_C.AddRagdollImpulse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Impulse                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FName                   bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCharacter_C::AddRagdollImpulse(const struct FVector& Impulse, const struct FVector& Location, const struct FName& bone)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.AddRagdollImpulse");

	ABP_MordhauCharacter_C_AddRagdollImpulse_Params params;
	params.Impulse = Impulse;
	params.Location = Location;
	params.bone = bone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCharacter.BP_MordhauCharacter_C.TryClimbing
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_MordhauCharacter_C::TryClimbing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.TryClimbing");

	ABP_MordhauCharacter_C_TryClimbing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_MordhauCharacter.BP_MordhauCharacter_C.CalculateLedgeOffsetAndNormal
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClimbingMotion**        ClimbingMotion                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutOffset                      (Parm, OutParm, IsPlainOldData)
// struct FVector                 OutNormal                      (Parm, OutParm, IsPlainOldData)

void ABP_MordhauCharacter_C::CalculateLedgeOffsetAndNormal(class UClimbingMotion** ClimbingMotion, struct FVector* OutOffset, struct FVector* OutNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.CalculateLedgeOffsetAndNormal");

	ABP_MordhauCharacter_C_CalculateLedgeOffsetAndNormal_Params params;
	params.ClimbingMotion = ClimbingMotion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOffset != nullptr)
		*OutOffset = params.OutOffset;
	if (OutNormal != nullptr)
		*OutNormal = params.OutNormal;
}


// Function BP_MordhauCharacter.BP_MordhauCharacter_C.AttemptClimb
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCharacter_C::AttemptClimb(bool* Succeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.AttemptClimb");

	ABP_MordhauCharacter_C_AttemptClimb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
}


// Function BP_MordhauCharacter.BP_MordhauCharacter_C.FindClimbSpot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          UpwardsCast                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetSpot                     (Parm, OutParm, IsPlainOldData)

void ABP_MordhauCharacter_C::FindClimbSpot(float UpwardsCast, bool* Succeeded, struct FVector* TargetSpot)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.FindClimbSpot");

	ABP_MordhauCharacter_C_FindClimbSpot_Params params;
	params.UpwardsCast = UpwardsCast;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
	if (TargetSpot != nullptr)
		*TargetSpot = params.TargetSpot;
}


// Function BP_MordhauCharacter.BP_MordhauCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauCharacter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.UserConstructionScript");

	ABP_MordhauCharacter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCharacter.BP_MordhauCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MordhauCharacter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.ReceiveBeginPlay");

	ABP_MordhauCharacter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCharacter.BP_MordhauCharacter_C.BPLODTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCharacter_C::BPLODTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.BPLODTick");

	ABP_MordhauCharacter_C_BPLODTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnDied
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMordhauDamageType*            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCharacter_C::OnDied(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnDied");

	ABP_MordhauCharacter_C_OnDied_Params params;
	params.Angle = Angle;
	params.Type = Type;
	params.SubType = SubType;
	params.bone = bone;
	params.Point = Point;
	params.Source = Source;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnCosmeticHit
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMordhauDamageType*            DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class AActor**                 Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCharacter_C::OnCosmeticHit(EMordhauDamageType* DamageType, unsigned char* SubType, struct FHitResult* Hit, class AActor** Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnCosmeticHit");

	ABP_MordhauCharacter_C_OnCosmeticHit_Params params;
	params.DamageType = DamageType;
	params.SubType = SubType;
	params.Hit = Hit;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnPostDismember
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ASeparatedBodyPart**     SeparatedPart                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCharacter_C::OnPostDismember(struct FName* bone, class ASeparatedBodyPart** SeparatedPart, class AActor** Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnPostDismember");

	ABP_MordhauCharacter_C_OnPostDismember_Params params;
	params.bone = bone;
	params.SeparatedPart = SeparatedPart;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCharacter.BP_MordhauCharacter_C.BndEvt__Thudder_K2Node_ComponentBoundEvent_0_ComponentThudSignature__DelegateSignature
// (BlueprintEvent)

void ABP_MordhauCharacter_C::BndEvt__Thudder_K2Node_ComponentBoundEvent_0_ComponentThudSignature__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.BndEvt__Thudder_K2Node_ComponentBoundEvent_0_ComponentThudSignature__DelegateSignature");

	ABP_MordhauCharacter_C_BndEvt__Thudder_K2Node_ComponentBoundEvent_0_ComponentThudSignature__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCharacter.BP_MordhauCharacter_C.ReplicatedTripWithKnockback
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void ABP_MordhauCharacter_C::ReplicatedTripWithKnockback()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.ReplicatedTripWithKnockback");

	ABP_MordhauCharacter_C_ReplicatedTripWithKnockback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnPostProfileAssigned
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_MordhauCharacter_C::OnPostProfileAssigned()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.OnPostProfileAssigned");

	ABP_MordhauCharacter_C_OnPostProfileAssigned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCharacter.BP_MordhauCharacter_C.ApplyRagdollForce
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMordhauDamageType*            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Agent                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCharacter_C::ApplyRagdollForce(float* Angle, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source, class AActor** Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.ApplyRagdollForce");

	ABP_MordhauCharacter_C_ApplyRagdollForce_Params params;
	params.Angle = Angle;
	params.Type = Type;
	params.SubType = SubType;
	params.bone = bone;
	params.Point = Point;
	params.Source = Source;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCharacter.BP_MordhauCharacter_C.ServerSetClimbLocation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector_NetQuantize     NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_MordhauCharacter_C::ServerSetClimbLocation(const struct FVector_NetQuantize& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.ServerSetClimbLocation");

	ABP_MordhauCharacter_C_ServerSetClimbLocation_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_MordhauCharacter.BP_MordhauCharacter_C.ExecuteUbergraph_BP_MordhauCharacter
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_MordhauCharacter_C::ExecuteUbergraph_BP_MordhauCharacter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_MordhauCharacter.BP_MordhauCharacter_C.ExecuteUbergraph_BP_MordhauCharacter");

	ABP_MordhauCharacter_C_ExecuteUbergraph_BP_MordhauCharacter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
