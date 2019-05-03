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

// Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.HandleCollision
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAdvancedCharacter*      Char                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Velocity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DamageFactor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DestroyableDeploySpikeWall_C::HandleCollision(class AAdvancedCharacter* Char, float Velocity, float DamageFactor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.HandleCollision");

	ABP_DestroyableDeploySpikeWall_C_HandleCollision_Params params;
	params.Char = Char;
	params.Velocity = Velocity;
	params.DamageFactor = DamageFactor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.Impale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAdvancedCharacter*      Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DestroyableDeploySpikeWall_C::Impale(class AAdvancedCharacter* Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.Impale");

	ABP_DestroyableDeploySpikeWall_C_Impale_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DestroyableDeploySpikeWall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.UserConstructionScript");

	ABP_DestroyableDeploySpikeWall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.OnUsedToKillOther
// (Event, Public, BlueprintEvent)
// Parameters:
// class AAdvancedCharacter**     Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EMordhauDamageType*            Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 SubType                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  bone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Point                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DestroyableDeploySpikeWall_C::OnUsedToKillOther(class AAdvancedCharacter** Character, EMordhauDamageType* Type, unsigned char* SubType, struct FName* bone, struct FVector* Point, class AActor** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.OnUsedToKillOther");

	ABP_DestroyableDeploySpikeWall_C_OnUsedToKillOther_Params params;
	params.Character = Character;
	params.Type = Type;
	params.SubType = SubType;
	params.bone = bone;
	params.Point = Point;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     HitComponent                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult              Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_DestroyableDeploySpikeWall_C::BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	ABP_DestroyableDeploySpikeWall_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params params;
	params.HitComponent = HitComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.OnReplicatedHealthChanged
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DestroyableDeploySpikeWall_C::OnReplicatedHealthChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.OnReplicatedHealthChanged");

	ABP_DestroyableDeploySpikeWall_C_OnReplicatedHealthChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.ExecuteUbergraph_BP_DestroyableDeploySpikeWall
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_DestroyableDeploySpikeWall_C::ExecuteUbergraph_BP_DestroyableDeploySpikeWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DestroyableDeploySpikeWall.BP_DestroyableDeploySpikeWall_C.ExecuteUbergraph_BP_DestroyableDeploySpikeWall");

	ABP_DestroyableDeploySpikeWall_C_ExecuteUbergraph_BP_DestroyableDeploySpikeWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
