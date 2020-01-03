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

// Function BP_HordePlayerController.BP_HordePlayerController_C.GetScaledSkillLevelParams
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_HordeSkill>      Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Bias                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PercentA                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          PercentB                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            IntegerA                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TimeA                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HordePlayerController_C::GetScaledSkillLevelParams(TEnumAsByte<E_HordeSkill> Skill, int Bias, float* PercentA, float* PercentB, int* IntegerA, float* TimeA)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.GetScaledSkillLevelParams");

	ABP_HordePlayerController_C_GetScaledSkillLevelParams_Params params;
	params.Skill = Skill;
	params.Bias = Bias;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PercentA != nullptr)
		*PercentA = params.PercentA;
	if (PercentB != nullptr)
		*PercentB = params.PercentB;
	if (IntegerA != nullptr)
		*IntegerA = params.IntegerA;
	if (TimeA != nullptr)
		*TimeA = params.TimeA;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_NextSpecialTime
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_NextSpecialTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_NextSpecialTime");

	ABP_HordePlayerController_C_OnRep_NextSpecialTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_CriticalCounter
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_CriticalCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_CriticalCounter");

	ABP_HordePlayerController_C_OnRep_CriticalCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_BackstabCounter
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_BackstabCounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_BackstabCounter");

	ABP_HordePlayerController_C_OnRep_BackstabCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.GetDiscountedPrice
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            BasePrice                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            DiscountedPrice                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HordePlayerController_C::GetDiscountedPrice(int BasePrice, int* DiscountedPrice)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.GetDiscountedPrice");

	ABP_HordePlayerController_C_GetDiscountedPrice_Params params;
	params.BasePrice = BasePrice;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DiscountedPrice != nullptr)
		*DiscountedPrice = params.DiscountedPrice;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.AssignFireArrowValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Arrow                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordePlayerController_C::AssignFireArrowValues(class AActor* Arrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.AssignFireArrowValues");

	ABP_HordePlayerController_C_AssignFireArrowValues_Params params;
	params.Arrow = Arrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.TryScatterShot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauProjectile*      SourceProjectile               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordePlayerController_C::TryScatterShot(class AMordhauProjectile* SourceProjectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.TryScatterShot");

	ABP_HordePlayerController_C_TryScatterShot_Params params;
	params.SourceProjectile = SourceProjectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.TryFletcherRestock
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::TryFletcherRestock()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.TryFletcherRestock");

	ABP_HordePlayerController_C_TryFletcherRestock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.GetSkillLevelFloat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_HordeSkill>      Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SkillLevel                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HordePlayerController_C::GetSkillLevelFloat(TEnumAsByte<E_HordeSkill> Skill, float* SkillLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.GetSkillLevelFloat");

	ABP_HordePlayerController_C_GetSkillLevelFloat_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkillLevel != nullptr)
		*SkillLevel = params.SkillLevel;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.SkillsUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::SkillsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.SkillsUpdated");

	ABP_HordePlayerController_C_SkillsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.HasPrerequisite
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_HordeSkill>      Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HordePlayerController_C::HasPrerequisite(TEnumAsByte<E_HordeSkill> Skill, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.HasPrerequisite");

	ABP_HordePlayerController_C_HasPrerequisite_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.GetSkillLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<E_HordeSkill>      Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Level                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HordePlayerController_C::GetSkillLevel(TEnumAsByte<E_HordeSkill> Skill, unsigned char* Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.GetSkillLevel");

	ABP_HordePlayerController_C_GetSkillLevel_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Level != nullptr)
		*Level = params.Level;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.UpgradeSkill
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_HordeSkill>      Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_HordePlayerController_C::UpgradeSkill(TEnumAsByte<E_HordeSkill> Skill, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.UpgradeSkill");

	ABP_HordePlayerController_C_UpgradeSkill_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_ReplicatedSkills
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_ReplicatedSkills()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_ReplicatedSkills");

	ABP_HordePlayerController_C_OnRep_ReplicatedSkills_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.CustomizeEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauEquipment*       Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordePlayerController_C::CustomizeEquipment(class AMordhauEquipment* Equipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.CustomizeEquipment");

	ABP_HordePlayerController_C_CustomizeEquipment_Params params;
	params.Equipment = Equipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_PurchaseTrigger
// (BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::OnRep_PurchaseTrigger()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.OnRep_PurchaseTrigger");

	ABP_HordePlayerController_C_OnRep_PurchaseTrigger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HordePlayerController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.UserConstructionScript");

	ABP_HordePlayerController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_HordePlayerController_C::InpActEvt_Battlecry_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Battlecry_K2Node_InputActionEvent_2");

	ABP_HordePlayerController_C_InpActEvt_Battlecry_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Show Profile Select_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_HordePlayerController_C::InpActEvt_Show_Profile_Select_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.InpActEvt_Show Profile Select_K2Node_InputActionEvent_1");

	ABP_HordePlayerController_C_InpActEvt_Show_Profile_Select_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HordePlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.ReceiveBeginPlay");

	ABP_HordePlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnAfterPossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  APawn                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordePlayerController_C::OnAfterPossess(class APawn** APawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.OnAfterPossess");

	ABP_HordePlayerController_C_OnAfterPossess_Params params;
	params.APawn = APawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.OnBuilt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Structure                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordePlayerController_C::OnBuilt(class AActor** Structure)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.OnBuilt");

	ABP_HordePlayerController_C_OnBuilt_Params params;
	params.Structure = Structure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.RequestUpgradeSkill
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_HordeSkill>      Skill                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordePlayerController_C::RequestUpgradeSkill(TEnumAsByte<E_HordeSkill> Skill)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.RequestUpgradeSkill");

	ABP_HordePlayerController_C_RequestUpgradeSkill_Params params;
	params.Skill = Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_HordePlayerController.BP_HordePlayerController_C.ExecuteUbergraph_BP_HordePlayerController
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_HordePlayerController_C::ExecuteUbergraph_BP_HordePlayerController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_HordePlayerController.BP_HordePlayerController_C.ExecuteUbergraph_BP_HordePlayerController");

	ABP_HordePlayerController_C_ExecuteUbergraph_BP_HordePlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
