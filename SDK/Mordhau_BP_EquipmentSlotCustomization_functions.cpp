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

// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_EquipmentSlotCustomization_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetVisibility_1");

	UBP_EquipmentSlotCustomization_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ColorHovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Idx                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ColorId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::ColorHovered(int Idx, int ColorId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ColorHovered");

	UBP_EquipmentSlotCustomization_C_ColorHovered_Params params;
	params.Idx = Idx;
	params.ColorId = ColorId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.PartSelectionHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::PartSelectionHovered(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.PartSelectionHovered");

	UBP_EquipmentSlotCustomization_C_PartSelectionHovered_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.PartSelectionClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::PartSelectionClicked(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.PartSelectionClicked");

	UBP_EquipmentSlotCustomization_C_PartSelectionClicked_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ShowPartChoiceList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentEquipmentId             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentSkinId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentPartType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentPartId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::ShowPartChoiceList(int CurrentEquipmentId, int CurrentSkinId, int CurrentPartType, int CurrentPartId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ShowPartChoiceList");

	UBP_EquipmentSlotCustomization_C_ShowPartChoiceList_Params params;
	params.CurrentEquipmentId = CurrentEquipmentId;
	params.CurrentSkinId = CurrentSkinId;
	params.CurrentPartType = CurrentPartType;
	params.CurrentPartId = CurrentPartId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.SkinSelectionHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::SkinSelectionHovered(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.SkinSelectionHovered");

	UBP_EquipmentSlotCustomization_C_SkinSelectionHovered_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.SkinSelectionClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::SkinSelectionClicked(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.SkinSelectionClicked");

	UBP_EquipmentSlotCustomization_C_SkinSelectionClicked_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ShowSkinChoiceList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentEquipmentId             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            CurrentSkinId                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::ShowSkinChoiceList(int CurrentEquipmentId, int CurrentSkinId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ShowSkinChoiceList");

	UBP_EquipmentSlotCustomization_C_ShowSkinChoiceList_Params params;
	params.CurrentEquipmentId = CurrentEquipmentId;
	params.CurrentSkinId = CurrentSkinId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetEquipmentPart
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          Parts                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            PartIdx                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UMordhauEquipmentPart*   EquipmentPart                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::GetEquipmentPart(int PartIdx, TArray<class UClass*>* Parts, class UMordhauEquipmentPart** EquipmentPart)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetEquipmentPart");

	UBP_EquipmentSlotCustomization_C_GetEquipmentPart_Params params;
	params.PartIdx = PartIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Parts != nullptr)
		*Parts = params.Parts;
	if (EquipmentPart != nullptr)
		*EquipmentPart = params.EquipmentPart;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.IsAnySkinAvailable
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FEquipmentSkinEntry> Skins                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsAnySkinAvailable             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::IsAnySkinAvailable(TArray<struct FEquipmentSkinEntry>* Skins, bool* IsAnySkinAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.IsAnySkinAvailable");

	UBP_EquipmentSlotCustomization_C_IsAnySkinAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Skins != nullptr)
		*Skins = params.Skins;
	if (IsAnySkinAvailable != nullptr)
		*IsAnySkinAvailable = params.IsAnySkinAvailable;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_LengthText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_LengthText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_LengthText_Text_1");

	UBP_EquipmentSlotCustomization_C_Get_LengthText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_AdvancedButton_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_EquipmentSlotCustomization_C::Get_AdvancedButton_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_AdvancedButton_Visibility_1");

	UBP_EquipmentSlotCustomization_C_Get_AdvancedButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_BackButton2_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_EquipmentSlotCustomization_C::Get_BackButton2_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_BackButton2_Visibility_1");

	UBP_EquipmentSlotCustomization_C_Get_BackButton2_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_StatsPanel_Visibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_EquipmentSlotCustomization_C::Get_StatsPanel_Visibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_StatsPanel_Visibility_2");

	UBP_EquipmentSlotCustomization_C_Get_StatsPanel_Visibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetText_1");

	UBP_EquipmentSlotCustomization_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_GravityScaleText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_GravityScaleText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_GravityScaleText_Text_1");

	UBP_EquipmentSlotCustomization_C_Get_GravityScaleText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_ProjectileSpeedText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_ProjectileSpeedText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_ProjectileSpeedText_Text_1");

	UBP_EquipmentSlotCustomization_C_Get_ProjectileSpeedText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_TextBlock_7_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_TextBlock_7_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_TextBlock_7_Text_1");

	UBP_EquipmentSlotCustomization_C_Get_TextBlock_7_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_DamageBar_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_EquipmentSlotCustomization_C::Get_DamageBar_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_DamageBar_Visibility_1");

	UBP_EquipmentSlotCustomization_C_Get_DamageBar_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_DamageBarText_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_DamageBarText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_DamageBarText_Text_1");

	UBP_EquipmentSlotCustomization_C_Get_DamageBarText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_StatsPanel_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_EquipmentSlotCustomization_C::Get_StatsPanel_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_StatsPanel_Visibility_1");

	UBP_EquipmentSlotCustomization_C_Get_StatsPanel_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_ReachBarText_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_ReachBarText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_ReachBarText_Text_1");

	UBP_EquipmentSlotCustomization_C_Get_ReachBarText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_AttackTypeButtons_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_EquipmentSlotCustomization_C::Get_AttackTypeButtons_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_AttackTypeButtons_Visibility_1");

	UBP_EquipmentSlotCustomization_C_Get_AttackTypeButtons_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetRangedWeaponValues
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauEquipment*       Equipment_Ref                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WoodDamage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          StoneDamage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T0_Head                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T0_Torso                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T0_Legs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T1_Head                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T1Torso                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T1_Legs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T2_Head                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T2_Torso                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T2_Legs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T3_Head                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T3_Torso                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T3_Legs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Reload_Time                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          AutoReload_Time                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  MaxAmmo                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RangedDrawTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Should_Flinch                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::GetRangedWeaponValues(class AMordhauEquipment* Equipment_Ref, float* WoodDamage, float* StoneDamage, float* T0_Head, float* T0_Torso, float* T0_Legs, float* T1_Head, float* T1Torso, float* T1_Legs, float* T2_Head, float* T2_Torso, float* T2_Legs, float* T3_Head, float* T3_Torso, float* T3_Legs, float* Reload_Time, float* AutoReload_Time, unsigned char* MaxAmmo, float* RangedDrawTime, bool* Should_Flinch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetRangedWeaponValues");

	UBP_EquipmentSlotCustomization_C_GetRangedWeaponValues_Params params;
	params.Equipment_Ref = Equipment_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WoodDamage != nullptr)
		*WoodDamage = params.WoodDamage;
	if (StoneDamage != nullptr)
		*StoneDamage = params.StoneDamage;
	if (T0_Head != nullptr)
		*T0_Head = params.T0_Head;
	if (T0_Torso != nullptr)
		*T0_Torso = params.T0_Torso;
	if (T0_Legs != nullptr)
		*T0_Legs = params.T0_Legs;
	if (T1_Head != nullptr)
		*T1_Head = params.T1_Head;
	if (T1Torso != nullptr)
		*T1Torso = params.T1Torso;
	if (T1_Legs != nullptr)
		*T1_Legs = params.T1_Legs;
	if (T2_Head != nullptr)
		*T2_Head = params.T2_Head;
	if (T2_Torso != nullptr)
		*T2_Torso = params.T2_Torso;
	if (T2_Legs != nullptr)
		*T2_Legs = params.T2_Legs;
	if (T3_Head != nullptr)
		*T3_Head = params.T3_Head;
	if (T3_Torso != nullptr)
		*T3_Torso = params.T3_Torso;
	if (T3_Legs != nullptr)
		*T3_Legs = params.T3_Legs;
	if (Reload_Time != nullptr)
		*Reload_Time = params.Reload_Time;
	if (AutoReload_Time != nullptr)
		*AutoReload_Time = params.AutoReload_Time;
	if (MaxAmmo != nullptr)
		*MaxAmmo = params.MaxAmmo;
	if (RangedDrawTime != nullptr)
		*RangedDrawTime = params.RangedDrawTime;
	if (Should_Flinch != nullptr)
		*Should_Flinch = params.Should_Flinch;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_SpeedBarText_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_SpeedBarText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_SpeedBarText_Text_1");

	UBP_EquipmentSlotCustomization_C_Get_SpeedBarText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_StatsHeaderText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_StatsHeaderText_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_StatsHeaderText_Text_1");

	UBP_EquipmentSlotCustomization_C_Get_StatsHeaderText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetVisibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_EquipmentSlotCustomization_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetVisibility_2");

	UBP_EquipmentSlotCustomization_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_AltModeCheckboxVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_EquipmentSlotCustomization_C::Get_AltModeCheckboxVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_AltModeCheckboxVisibility_1");

	UBP_EquipmentSlotCustomization_C_Get_AltModeCheckboxVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.EquipmentSelectionCanceled
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EquipmentSlotCustomization_C::EquipmentSelectionCanceled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.EquipmentSelectionCanceled");

	UBP_EquipmentSlotCustomization_C_EquipmentSelectionCanceled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_CostText_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UBP_EquipmentSlotCustomization_C::Get_CostText_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_CostText_ColorAndOpacity_1");

	UBP_EquipmentSlotCustomization_C_Get_CostText_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_ReachBar_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_EquipmentSlotCustomization_C::Get_ReachBar_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_ReachBar_Percent_1");

	UBP_EquipmentSlotCustomization_C_Get_ReachBar_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_SpeedBar_Percent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_EquipmentSlotCustomization_C::Get_SpeedBar_Percent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_SpeedBar_Percent");

	UBP_EquipmentSlotCustomization_C_Get_SpeedBar_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_DamageBar_Percent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBP_EquipmentSlotCustomization_C::Get_DamageBar_Percent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_DamageBar_Percent");

	UBP_EquipmentSlotCustomization_C_Get_DamageBar_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetHitKnockbackText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetHitKnockbackText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetHitKnockbackText");

	UBP_EquipmentSlotCustomization_C_GetHitKnockbackText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetMorphCostText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetMorphCostText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetMorphCostText");

	UBP_EquipmentSlotCustomization_C_GetMorphCostText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetShouldFlinchText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetShouldFlinchText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetShouldFlinchText");

	UBP_EquipmentSlotCustomization_C_GetShouldFlinchText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetProjectileValues
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Projectile_Class               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          WoodDamage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          StoneDamage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T0_Head                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T0_Torso                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T0_Legs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T1_Head                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T1Torso                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T1_Legs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T2_Head                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T2_Torso                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T2_Legs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T3_Head                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T3_Torso                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T3_Legs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Should_Flinch                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::GetProjectileValues(class UClass* Projectile_Class, float* WoodDamage, float* StoneDamage, float* T0_Head, float* T0_Torso, float* T0_Legs, float* T1_Head, float* T1Torso, float* T1_Legs, float* T2_Head, float* T2_Torso, float* T2_Legs, float* T3_Head, float* T3_Torso, float* T3_Legs, bool* Should_Flinch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetProjectileValues");

	UBP_EquipmentSlotCustomization_C_GetProjectileValues_Params params;
	params.Projectile_Class = Projectile_Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WoodDamage != nullptr)
		*WoodDamage = params.WoodDamage;
	if (StoneDamage != nullptr)
		*StoneDamage = params.StoneDamage;
	if (T0_Head != nullptr)
		*T0_Head = params.T0_Head;
	if (T0_Torso != nullptr)
		*T0_Torso = params.T0_Torso;
	if (T0_Legs != nullptr)
		*T0_Legs = params.T0_Legs;
	if (T1_Head != nullptr)
		*T1_Head = params.T1_Head;
	if (T1Torso != nullptr)
		*T1Torso = params.T1Torso;
	if (T1_Legs != nullptr)
		*T1_Legs = params.T1_Legs;
	if (T2_Head != nullptr)
		*T2_Head = params.T2_Head;
	if (T2_Torso != nullptr)
		*T2_Torso = params.T2_Torso;
	if (T2_Legs != nullptr)
		*T2_Legs = params.T2_Legs;
	if (T3_Head != nullptr)
		*T3_Head = params.T3_Head;
	if (T3_Torso != nullptr)
		*T3_Torso = params.T3_Torso;
	if (T3_Legs != nullptr)
		*T3_Legs = params.T3_Legs;
	if (Should_Flinch != nullptr)
		*Should_Flinch = params.Should_Flinch;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetRangedDrawText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetRangedDrawText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetRangedDrawText");

	UBP_EquipmentSlotCustomization_C_GetRangedDrawText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetMaxAmmoText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetMaxAmmoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetMaxAmmoText");

	UBP_EquipmentSlotCustomization_C_GetMaxAmmoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ShowElements
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EquipmentSlotCustomization_C::ShowElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ShowElements");

	UBP_EquipmentSlotCustomization_C_ShowElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetEquipmentValues
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauEquipment*       Equipment_Ref                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Max_Ammo                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Ranged_Draw_Time               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Wood_Damage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Stone_Damage                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T0_Head                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T0_Torso                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T0_Legs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T1_Head                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T1_Torso                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T1_Legs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T2_Head                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T2_Torso                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T2_Legs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T3_Head                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T3_Torso                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T3_Legs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Should_Flinch                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::GetEquipmentValues(class AMordhauEquipment* Equipment_Ref, unsigned char* Max_Ammo, float* Ranged_Draw_Time, float* Wood_Damage, float* Stone_Damage, float* T0_Head, float* T0_Torso, float* T0_Legs, float* T1_Head, float* T1_Torso, float* T1_Legs, float* T2_Head, float* T2_Torso, float* T2_Legs, float* T3_Head, float* T3_Torso, float* T3_Legs, bool* Should_Flinch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetEquipmentValues");

	UBP_EquipmentSlotCustomization_C_GetEquipmentValues_Params params;
	params.Equipment_Ref = Equipment_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Max_Ammo != nullptr)
		*Max_Ammo = params.Max_Ammo;
	if (Ranged_Draw_Time != nullptr)
		*Ranged_Draw_Time = params.Ranged_Draw_Time;
	if (Wood_Damage != nullptr)
		*Wood_Damage = params.Wood_Damage;
	if (Stone_Damage != nullptr)
		*Stone_Damage = params.Stone_Damage;
	if (T0_Head != nullptr)
		*T0_Head = params.T0_Head;
	if (T0_Torso != nullptr)
		*T0_Torso = params.T0_Torso;
	if (T0_Legs != nullptr)
		*T0_Legs = params.T0_Legs;
	if (T1_Head != nullptr)
		*T1_Head = params.T1_Head;
	if (T1_Torso != nullptr)
		*T1_Torso = params.T1_Torso;
	if (T1_Legs != nullptr)
		*T1_Legs = params.T1_Legs;
	if (T2_Head != nullptr)
		*T2_Head = params.T2_Head;
	if (T2_Torso != nullptr)
		*T2_Torso = params.T2_Torso;
	if (T2_Legs != nullptr)
		*T2_Legs = params.T2_Legs;
	if (T3_Head != nullptr)
		*T3_Head = params.T3_Head;
	if (T3_Torso != nullptr)
		*T3_Torso = params.T3_Torso;
	if (T3_Legs != nullptr)
		*T3_Legs = params.T3_Legs;
	if (Should_Flinch != nullptr)
		*Should_Flinch = params.Should_Flinch;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryViewToleranceYMaxText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetParryViewToleranceYMaxText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryViewToleranceYMaxText");

	UBP_EquipmentSlotCustomization_C_GetParryViewToleranceYMaxText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryViewToleranceYMinText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetParryViewToleranceYMinText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryViewToleranceYMinText");

	UBP_EquipmentSlotCustomization_C_GetParryViewToleranceYMinText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryViewToleranceXMaxText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetParryViewToleranceXMaxText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryViewToleranceXMaxText");

	UBP_EquipmentSlotCustomization_C_GetParryViewToleranceXMaxText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryViewToleranceXMinText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetParryViewToleranceXMinText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryViewToleranceXMinText");

	UBP_EquipmentSlotCustomization_C_GetParryViewToleranceXMinText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetBlockMovementRestrictionText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetBlockMovementRestrictionText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetBlockMovementRestrictionText");

	UBP_EquipmentSlotCustomization_C_GetBlockMovementRestrictionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetIsParryHeldText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetIsParryHeldText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetIsParryHeldText");

	UBP_EquipmentSlotCustomization_C_GetIsParryHeldText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetShieldValues
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauEquipment*       Equipment_Ref                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TurnCap_X                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          TurnCap_Y                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ParryStaminaNegation           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          View_Tolerance_XMin            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          View_Tolerance_Xmax            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          View_Tolerance_Ymin            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          View_Tolerance_Ymax            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Block_Movement_Restriction     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsParryHeld                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::GetShieldValues(class AMordhauEquipment* Equipment_Ref, float* TurnCap_X, float* TurnCap_Y, float* ParryStaminaNegation, float* View_Tolerance_XMin, float* View_Tolerance_Xmax, float* View_Tolerance_Ymin, float* View_Tolerance_Ymax, unsigned char* Block_Movement_Restriction, bool* IsParryHeld)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetShieldValues");

	UBP_EquipmentSlotCustomization_C_GetShieldValues_Params params;
	params.Equipment_Ref = Equipment_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TurnCap_X != nullptr)
		*TurnCap_X = params.TurnCap_X;
	if (TurnCap_Y != nullptr)
		*TurnCap_Y = params.TurnCap_Y;
	if (ParryStaminaNegation != nullptr)
		*ParryStaminaNegation = params.ParryStaminaNegation;
	if (View_Tolerance_XMin != nullptr)
		*View_Tolerance_XMin = params.View_Tolerance_XMin;
	if (View_Tolerance_Xmax != nullptr)
		*View_Tolerance_Xmax = params.View_Tolerance_Xmax;
	if (View_Tolerance_Ymin != nullptr)
		*View_Tolerance_Ymin = params.View_Tolerance_Ymin;
	if (View_Tolerance_Ymax != nullptr)
		*View_Tolerance_Ymax = params.View_Tolerance_Ymax;
	if (Block_Movement_Restriction != nullptr)
		*Block_Movement_Restriction = params.Block_Movement_Restriction;
	if (IsParryHeld != nullptr)
		*IsParryHeld = params.IsParryHeld;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetWeaponValues
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EAttackMove                    AttackMove                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AMordhauEquipment*       Equipment_Ref                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Windup                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Combo_Windup                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Release                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MissRecovery                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            FeintCost                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            MorphCost                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          StaminaDrain                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          MissStaminaCost                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          WoodDamage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          StoneDamage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bCanCombo                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bStopOnHit                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T0_Head                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T0_Torso                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T0_Legs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T1_Head                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T1Torso                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T1_Legs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T2_Head                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T2_Torso                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T2_Legs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T3_Head                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T3_Torso                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T3_Legs                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          X                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Parry_Stamina_Negation         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          View_Tolerance_XMin            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          View_Tolerance_Xmax            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          View_Tolerance_Ymin            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          View_Tolerance_Ymax            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Block_Movement_Restriction     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Parry_Held                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Hit_Knockback                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldFlinch                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::GetWeaponValues(EAttackMove AttackMove, class AMordhauEquipment* Equipment_Ref, float* Windup, float* Combo_Windup, float* Release, float* MissRecovery, int* FeintCost, int* MorphCost, float* StaminaDrain, float* MissStaminaCost, float* WoodDamage, float* StoneDamage, bool* bCanCombo, bool* bStopOnHit, float* T0_Head, float* T0_Torso, float* T0_Legs, float* T1_Head, float* T1Torso, float* T1_Legs, float* T2_Head, float* T2_Torso, float* T2_Legs, float* T3_Head, float* T3_Torso, float* T3_Legs, float* X, float* Y, float* Parry_Stamina_Negation, float* View_Tolerance_XMin, float* View_Tolerance_Xmax, float* View_Tolerance_Ymin, float* View_Tolerance_Ymax, unsigned char* Block_Movement_Restriction, bool* Is_Parry_Held, float* Hit_Knockback, bool* ShouldFlinch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetWeaponValues");

	UBP_EquipmentSlotCustomization_C_GetWeaponValues_Params params;
	params.AttackMove = AttackMove;
	params.Equipment_Ref = Equipment_Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Windup != nullptr)
		*Windup = params.Windup;
	if (Combo_Windup != nullptr)
		*Combo_Windup = params.Combo_Windup;
	if (Release != nullptr)
		*Release = params.Release;
	if (MissRecovery != nullptr)
		*MissRecovery = params.MissRecovery;
	if (FeintCost != nullptr)
		*FeintCost = params.FeintCost;
	if (MorphCost != nullptr)
		*MorphCost = params.MorphCost;
	if (StaminaDrain != nullptr)
		*StaminaDrain = params.StaminaDrain;
	if (MissStaminaCost != nullptr)
		*MissStaminaCost = params.MissStaminaCost;
	if (WoodDamage != nullptr)
		*WoodDamage = params.WoodDamage;
	if (StoneDamage != nullptr)
		*StoneDamage = params.StoneDamage;
	if (bCanCombo != nullptr)
		*bCanCombo = params.bCanCombo;
	if (bStopOnHit != nullptr)
		*bStopOnHit = params.bStopOnHit;
	if (T0_Head != nullptr)
		*T0_Head = params.T0_Head;
	if (T0_Torso != nullptr)
		*T0_Torso = params.T0_Torso;
	if (T0_Legs != nullptr)
		*T0_Legs = params.T0_Legs;
	if (T1_Head != nullptr)
		*T1_Head = params.T1_Head;
	if (T1Torso != nullptr)
		*T1Torso = params.T1Torso;
	if (T1_Legs != nullptr)
		*T1_Legs = params.T1_Legs;
	if (T2_Head != nullptr)
		*T2_Head = params.T2_Head;
	if (T2_Torso != nullptr)
		*T2_Torso = params.T2_Torso;
	if (T2_Legs != nullptr)
		*T2_Legs = params.T2_Legs;
	if (T3_Head != nullptr)
		*T3_Head = params.T3_Head;
	if (T3_Torso != nullptr)
		*T3_Torso = params.T3_Torso;
	if (T3_Legs != nullptr)
		*T3_Legs = params.T3_Legs;
	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;
	if (Parry_Stamina_Negation != nullptr)
		*Parry_Stamina_Negation = params.Parry_Stamina_Negation;
	if (View_Tolerance_XMin != nullptr)
		*View_Tolerance_XMin = params.View_Tolerance_XMin;
	if (View_Tolerance_Xmax != nullptr)
		*View_Tolerance_Xmax = params.View_Tolerance_Xmax;
	if (View_Tolerance_Ymin != nullptr)
		*View_Tolerance_Ymin = params.View_Tolerance_Ymin;
	if (View_Tolerance_Ymax != nullptr)
		*View_Tolerance_Ymax = params.View_Tolerance_Ymax;
	if (Block_Movement_Restriction != nullptr)
		*Block_Movement_Restriction = params.Block_Movement_Restriction;
	if (Is_Parry_Held != nullptr)
		*Is_Parry_Held = params.Is_Parry_Held;
	if (Hit_Knockback != nullptr)
		*Hit_Knockback = params.Hit_Knockback;
	if (ShouldFlinch != nullptr)
		*ShouldFlinch = params.ShouldFlinch;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryNegationText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetParryNegationText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetParryNegationText");

	UBP_EquipmentSlotCustomization_C_GetParryNegationText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetStoneDamageText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetStoneDamageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetStoneDamageText");

	UBP_EquipmentSlotCustomization_C_GetStoneDamageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetWoodDamageText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetWoodDamageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetWoodDamageText");

	UBP_EquipmentSlotCustomization_C_GetWoodDamageText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetCanComboText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetCanComboText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetCanComboText");

	UBP_EquipmentSlotCustomization_C_GetCanComboText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetHitStopText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetHitStopText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetHitStopText");

	UBP_EquipmentSlotCustomization_C_GetHitStopText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetStaminaDrainText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetStaminaDrainText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetStaminaDrainText");

	UBP_EquipmentSlotCustomization_C_GetStaminaDrainText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetFeintCostText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetFeintCostText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetFeintCostText");

	UBP_EquipmentSlotCustomization_C_GetFeintCostText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetMissStaminaText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetMissStaminaText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetMissStaminaText");

	UBP_EquipmentSlotCustomization_C_GetMissStaminaText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetYTurnCapText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetYTurnCapText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetYTurnCapText");

	UBP_EquipmentSlotCustomization_C_GetYTurnCapText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetXTurnCapText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetXTurnCapText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetXTurnCapText");

	UBP_EquipmentSlotCustomization_C_GetXTurnCapText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetMissRecoveryText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetMissRecoveryText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetMissRecoveryText");

	UBP_EquipmentSlotCustomization_C_GetMissRecoveryText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetReleaseText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetReleaseText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetReleaseText");

	UBP_EquipmentSlotCustomization_C_GetReleaseText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetComboText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetComboText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetComboText");

	UBP_EquipmentSlotCustomization_C_GetComboText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetWindupText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetWindupText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetWindupText");

	UBP_EquipmentSlotCustomization_C_GetWindupText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r2c3_text_T3Legs
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_cell_r2c3_text_T3Legs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r2c3_text_T3Legs");

	UBP_EquipmentSlotCustomization_C_Get_cell_r2c3_text_T3Legs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r1c3_text_T3Torso
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_cell_r1c3_text_T3Torso()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r1c3_text_T3Torso");

	UBP_EquipmentSlotCustomization_C_Get_cell_r1c3_text_T3Torso_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r2c2_text_T2Legs
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_cell_r2c2_text_T2Legs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r2c2_text_T2Legs");

	UBP_EquipmentSlotCustomization_C_Get_cell_r2c2_text_T2Legs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r1c2_text_T2Torso
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_cell_r1c2_text_T2Torso()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r1c2_text_T2Torso");

	UBP_EquipmentSlotCustomization_C_Get_cell_r1c2_text_T2Torso_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r0c2_text_T2Head
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_cell_r0c2_text_T2Head()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r0c2_text_T2Head");

	UBP_EquipmentSlotCustomization_C_Get_cell_r0c2_text_T2Head_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r2c1_text_T1Legs
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_cell_r2c1_text_T1Legs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r2c1_text_T1Legs");

	UBP_EquipmentSlotCustomization_C_Get_cell_r2c1_text_T1Legs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r1c1_text_T1Torso
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_cell_r1c1_text_T1Torso()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r1c1_text_T1Torso");

	UBP_EquipmentSlotCustomization_C_Get_cell_r1c1_text_T1Torso_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r0c1_text_T1Head
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_cell_r0c1_text_T1Head()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r0c1_text_T1Head");

	UBP_EquipmentSlotCustomization_C_Get_cell_r0c1_text_T1Head_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r2c0_text_T0Legs
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_cell_r2c0_text_T0Legs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r2c0_text_T0Legs");

	UBP_EquipmentSlotCustomization_C_Get_cell_r2c0_text_T0Legs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r1c0_text_T0Torso
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_cell_r1c0_text_T0Torso()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r1c0_text_T0Torso");

	UBP_EquipmentSlotCustomization_C_Get_cell_r1c0_text_T0Torso_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r0c0_text_T0Head
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_cell_r0c0_text_T0Head()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r0c0_text_T0Head");

	UBP_EquipmentSlotCustomization_C_Get_cell_r0c0_text_T0Head_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.SetDamageTableColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Damage_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  Cell_Bg                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UTextBlock*              Cell_Text                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::SetDamageTableColors(float Damage_Value, class UImage* Cell_Bg, class UTextBlock* Cell_Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.SetDamageTableColors");

	UBP_EquipmentSlotCustomization_C_SetDamageTableColors_Params params;
	params.Damage_Value = Damage_Value;
	params.Cell_Bg = Cell_Bg;
	params.Cell_Text = Cell_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetCurrentValues
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauEquipment*       Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EEquipmentType                 EquipmentUIType                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Windup                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Combo_Windup                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Release                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Miss_Recovery                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Feint_Cost                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Morph_Cost                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          StaminaDrain                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Miss_Stamina_Cost              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Wood_Damage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Stone_Damage                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CanCombo                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Stop_on_Hit                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T0Head                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T0Torso                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T0Legs                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T1Head                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T1Torso                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T1Legs                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T2Head                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T2Torso                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T2Legs                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T3Head                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T3Torso                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          T3Legs                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          X_TurnCap                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Y_TurnCap                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ParryStaminaNegation           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          View_Tolerance_XMin            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          View_Tolerance_Xmax            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          View_Tolerance_Ymin            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          View_Tolerance_Ymax            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Block_Movement_Restriction     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Is_Parry_Held                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          HitKnockback                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Reload_Time                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Auto_Reload_Time               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  MaxAmmo                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Ranged_Draw_Time               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Should_Flinch                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::GetCurrentValues(class AMordhauEquipment* Equipment, EEquipmentType EquipmentUIType, float* Windup, float* Combo_Windup, float* Release, float* Miss_Recovery, int* Feint_Cost, int* Morph_Cost, float* StaminaDrain, float* Miss_Stamina_Cost, float* Wood_Damage, float* Stone_Damage, bool* CanCombo, bool* Stop_on_Hit, float* T0Head, float* T0Torso, float* T0Legs, float* T1Head, float* T1Torso, float* T1Legs, float* T2Head, float* T2Torso, float* T2Legs, float* T3Head, float* T3Torso, float* T3Legs, float* X_TurnCap, float* Y_TurnCap, float* ParryStaminaNegation, float* View_Tolerance_XMin, float* View_Tolerance_Xmax, float* View_Tolerance_Ymin, float* View_Tolerance_Ymax, unsigned char* Block_Movement_Restriction, bool* Is_Parry_Held, float* HitKnockback, float* Reload_Time, float* Auto_Reload_Time, unsigned char* MaxAmmo, float* Ranged_Draw_Time, bool* Should_Flinch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetCurrentValues");

	UBP_EquipmentSlotCustomization_C_GetCurrentValues_Params params;
	params.Equipment = Equipment;
	params.EquipmentUIType = EquipmentUIType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Windup != nullptr)
		*Windup = params.Windup;
	if (Combo_Windup != nullptr)
		*Combo_Windup = params.Combo_Windup;
	if (Release != nullptr)
		*Release = params.Release;
	if (Miss_Recovery != nullptr)
		*Miss_Recovery = params.Miss_Recovery;
	if (Feint_Cost != nullptr)
		*Feint_Cost = params.Feint_Cost;
	if (Morph_Cost != nullptr)
		*Morph_Cost = params.Morph_Cost;
	if (StaminaDrain != nullptr)
		*StaminaDrain = params.StaminaDrain;
	if (Miss_Stamina_Cost != nullptr)
		*Miss_Stamina_Cost = params.Miss_Stamina_Cost;
	if (Wood_Damage != nullptr)
		*Wood_Damage = params.Wood_Damage;
	if (Stone_Damage != nullptr)
		*Stone_Damage = params.Stone_Damage;
	if (CanCombo != nullptr)
		*CanCombo = params.CanCombo;
	if (Stop_on_Hit != nullptr)
		*Stop_on_Hit = params.Stop_on_Hit;
	if (T0Head != nullptr)
		*T0Head = params.T0Head;
	if (T0Torso != nullptr)
		*T0Torso = params.T0Torso;
	if (T0Legs != nullptr)
		*T0Legs = params.T0Legs;
	if (T1Head != nullptr)
		*T1Head = params.T1Head;
	if (T1Torso != nullptr)
		*T1Torso = params.T1Torso;
	if (T1Legs != nullptr)
		*T1Legs = params.T1Legs;
	if (T2Head != nullptr)
		*T2Head = params.T2Head;
	if (T2Torso != nullptr)
		*T2Torso = params.T2Torso;
	if (T2Legs != nullptr)
		*T2Legs = params.T2Legs;
	if (T3Head != nullptr)
		*T3Head = params.T3Head;
	if (T3Torso != nullptr)
		*T3Torso = params.T3Torso;
	if (T3Legs != nullptr)
		*T3Legs = params.T3Legs;
	if (X_TurnCap != nullptr)
		*X_TurnCap = params.X_TurnCap;
	if (Y_TurnCap != nullptr)
		*Y_TurnCap = params.Y_TurnCap;
	if (ParryStaminaNegation != nullptr)
		*ParryStaminaNegation = params.ParryStaminaNegation;
	if (View_Tolerance_XMin != nullptr)
		*View_Tolerance_XMin = params.View_Tolerance_XMin;
	if (View_Tolerance_Xmax != nullptr)
		*View_Tolerance_Xmax = params.View_Tolerance_Xmax;
	if (View_Tolerance_Ymin != nullptr)
		*View_Tolerance_Ymin = params.View_Tolerance_Ymin;
	if (View_Tolerance_Ymax != nullptr)
		*View_Tolerance_Ymax = params.View_Tolerance_Ymax;
	if (Block_Movement_Restriction != nullptr)
		*Block_Movement_Restriction = params.Block_Movement_Restriction;
	if (Is_Parry_Held != nullptr)
		*Is_Parry_Held = params.Is_Parry_Held;
	if (HitKnockback != nullptr)
		*HitKnockback = params.HitKnockback;
	if (Reload_Time != nullptr)
		*Reload_Time = params.Reload_Time;
	if (Auto_Reload_Time != nullptr)
		*Auto_Reload_Time = params.Auto_Reload_Time;
	if (MaxAmmo != nullptr)
		*MaxAmmo = params.MaxAmmo;
	if (Ranged_Draw_Time != nullptr)
		*Ranged_Draw_Time = params.Ranged_Draw_Time;
	if (Should_Flinch != nullptr)
		*Should_Flinch = params.Should_Flinch;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.UpdateStrikeStabButtonColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  Selected_Icon                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UButton*                 Selected_Button                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::UpdateStrikeStabButtonColors(class UImage* Selected_Icon, class UButton* Selected_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.UpdateStrikeStabButtonColors");

	UBP_EquipmentSlotCustomization_C_UpdateStrikeStabButtonColors_Params params;
	params.Selected_Icon = Selected_Icon;
	params.Selected_Button = Selected_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r0c3_text_T3Head
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::Get_cell_r0c3_text_T3Head()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Get_cell_r0c3_text_T3Head");

	UBP_EquipmentSlotCustomization_C_Get_cell_r0c3_text_T3Head_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetCurrentEquipment
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMordhauEquipment*       Equipment                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EEquipmentType                 EquipmentUIType                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::GetCurrentEquipment(class AMordhauEquipment** Equipment, EEquipmentType* EquipmentUIType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetCurrentEquipment");

	UBP_EquipmentSlotCustomization_C_GetCurrentEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Equipment != nullptr)
		*Equipment = params.Equipment;
	if (EquipmentUIType != nullptr)
		*EquipmentUIType = params.EquipmentUIType;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetToolTipText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_EquipmentSlotCustomization_C::GetToolTipText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetToolTipText_1");

	UBP_EquipmentSlotCustomization_C_GetToolTipText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.EquipmentSelectionHovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::EquipmentSelectionHovered(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.EquipmentSelectionHovered");

	UBP_EquipmentSlotCustomization_C_EquipmentSelectionHovered_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.EquipmentSelectionClicked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::EquipmentSelectionClicked(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.EquipmentSelectionClicked");

	UBP_EquipmentSlotCustomization_C_EquipmentSelectionClicked_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ShowEquipmentChoiceList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::ShowEquipmentChoiceList(int CurrentId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ShowEquipmentChoiceList");

	UBP_EquipmentSlotCustomization_C_ShowEquipmentChoiceList_Params params;
	params.CurrentId = CurrentId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetPatternsVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_EquipmentSlotCustomization_C::GetPatternsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetPatternsVisibility");

	UBP_EquipmentSlotCustomization_C_GetPatternsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetColor3Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_EquipmentSlotCustomization_C::GetColor3Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetColor3Visibility");

	UBP_EquipmentSlotCustomization_C_GetColor3Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetColor2Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_EquipmentSlotCustomization_C::GetColor2Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetColor2Visibility");

	UBP_EquipmentSlotCustomization_C_GetColor2Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetColor1Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_EquipmentSlotCustomization_C::GetColor1Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetColor1Visibility");

	UBP_EquipmentSlotCustomization_C_GetColor1Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetPart3Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_EquipmentSlotCustomization_C::GetPart3Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetPart3Visibility");

	UBP_EquipmentSlotCustomization_C_GetPart3Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetPart2Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_EquipmentSlotCustomization_C::GetPart2Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetPart2Visibility");

	UBP_EquipmentSlotCustomization_C_GetPart2Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetPart1Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_EquipmentSlotCustomization_C::GetPart1Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetPart1Visibility");

	UBP_EquipmentSlotCustomization_C_GetPart1Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetSkinsVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_EquipmentSlotCustomization_C::GetSkinsVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetSkinsVisibility");

	UBP_EquipmentSlotCustomization_C_GetSkinsVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetValues
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   EquipmentWearableName          (Parm, OutParm)
// int                            Part1Count                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Part2Count                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Part3Count                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Part1Index                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Part2Index                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Part3Index                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Color1Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Color2Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Color3Index                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// unsigned char                  Pattern                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            PatternCount                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          EquipmentColorTable1           (Parm, OutParm, ZeroConstructor)
// TArray<class UClass*>          EquipmentColorTable2           (Parm, OutParm, ZeroConstructor)
// TArray<class UClass*>          EquipmentColorTable3           (Parm, OutParm, ZeroConstructor)
// TArray<struct FEquipmentSkinEntry> Skins                          (Parm, OutParm, ZeroConstructor)
// int                            Skin                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HasColor1                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HasColor2                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           HasColor3                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Part1Name                      (Parm, OutParm)
// struct FText                   Part2Name                      (Parm, OutParm)
// struct FText                   Part3Name                      (Parm, OutParm)
// struct FText                   Part1Type                      (Parm, OutParm)
// struct FText                   Part2Type                      (Parm, OutParm)
// struct FText                   Part3Type                      (Parm, OutParm)
// int                            Cost                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::GetValues(struct FText* EquipmentWearableName, int* Part1Count, int* Part2Count, int* Part3Count, unsigned char* Part1Index, unsigned char* Part2Index, unsigned char* Part3Index, unsigned char* Color1Index, unsigned char* Color2Index, unsigned char* Color3Index, unsigned char* Pattern, int* PatternCount, TArray<class UClass*>* EquipmentColorTable1, TArray<class UClass*>* EquipmentColorTable2, TArray<class UClass*>* EquipmentColorTable3, TArray<struct FEquipmentSkinEntry>* Skins, int* Skin, bool* HasColor1, bool* HasColor2, bool* HasColor3, struct FText* Part1Name, struct FText* Part2Name, struct FText* Part3Name, struct FText* Part1Type, struct FText* Part2Type, struct FText* Part3Type, int* Cost)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.GetValues");

	UBP_EquipmentSlotCustomization_C_GetValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EquipmentWearableName != nullptr)
		*EquipmentWearableName = params.EquipmentWearableName;
	if (Part1Count != nullptr)
		*Part1Count = params.Part1Count;
	if (Part2Count != nullptr)
		*Part2Count = params.Part2Count;
	if (Part3Count != nullptr)
		*Part3Count = params.Part3Count;
	if (Part1Index != nullptr)
		*Part1Index = params.Part1Index;
	if (Part2Index != nullptr)
		*Part2Index = params.Part2Index;
	if (Part3Index != nullptr)
		*Part3Index = params.Part3Index;
	if (Color1Index != nullptr)
		*Color1Index = params.Color1Index;
	if (Color2Index != nullptr)
		*Color2Index = params.Color2Index;
	if (Color3Index != nullptr)
		*Color3Index = params.Color3Index;
	if (Pattern != nullptr)
		*Pattern = params.Pattern;
	if (PatternCount != nullptr)
		*PatternCount = params.PatternCount;
	if (EquipmentColorTable1 != nullptr)
		*EquipmentColorTable1 = params.EquipmentColorTable1;
	if (EquipmentColorTable2 != nullptr)
		*EquipmentColorTable2 = params.EquipmentColorTable2;
	if (EquipmentColorTable3 != nullptr)
		*EquipmentColorTable3 = params.EquipmentColorTable3;
	if (Skins != nullptr)
		*Skins = params.Skins;
	if (Skin != nullptr)
		*Skin = params.Skin;
	if (HasColor1 != nullptr)
		*HasColor1 = params.HasColor1;
	if (HasColor2 != nullptr)
		*HasColor2 = params.HasColor2;
	if (HasColor3 != nullptr)
		*HasColor3 = params.HasColor3;
	if (Part1Name != nullptr)
		*Part1Name = params.Part1Name;
	if (Part2Name != nullptr)
		*Part2Name = params.Part2Name;
	if (Part3Name != nullptr)
		*Part3Name = params.Part3Name;
	if (Part1Type != nullptr)
		*Part1Type = params.Part1Type;
	if (Part2Type != nullptr)
		*Part2Type = params.Part2Type;
	if (Part3Type != nullptr)
		*Part3Type = params.Part3Type;
	if (Cost != nullptr)
		*Cost = params.Cost;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.UpdateWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_EquipmentSlotCustomization_C::UpdateWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.UpdateWidgets");

	UBP_EquipmentSlotCustomization_C_UpdateWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.OnDrag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaDistance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::OnDrag(float DeltaDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.OnDrag");

	UBP_EquipmentSlotCustomization_C_OnDrag_Params params;
	params.DeltaDistance = DeltaDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.RegisterPreviewEvents
// (BlueprintCallable, BlueprintEvent)

void UBP_EquipmentSlotCustomization_C::RegisterPreviewEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.RegisterPreviewEvents");

	UBP_EquipmentSlotCustomization_C_RegisterPreviewEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.OnScroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ScrollDelta                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::OnScroll(float ScrollDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.OnScroll");

	UBP_EquipmentSlotCustomization_C_OnScroll_Params params;
	params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.UpdateEquipmentColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ColorIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ColorValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::UpdateEquipmentColor(int ColorIndex, int ColorValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.UpdateEquipmentColor");

	UBP_EquipmentSlotCustomization_C_UpdateEquipmentColor_Params params;
	params.ColorIndex = ColorIndex;
	params.ColorValue = ColorValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.UpdateEquipmentPattern
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Pattern                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::UpdateEquipmentPattern(int Pattern)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.UpdateEquipmentPattern");

	UBP_EquipmentSlotCustomization_C_UpdateEquipmentPattern_Params params;
	params.Pattern = Pattern;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_3591_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ColorIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_3591_OnClicked__DelegateSignature(int ColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_3591_OnClicked__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_3591_OnClicked__DelegateSignature_Params params;
	params.ColorIndex = ColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_4489_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ColorIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_4489_OnClicked__DelegateSignature(int ColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_4489_OnClicked__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_4489_OnClicked__DelegateSignature_Params params;
	params.ColorIndex = ColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_4500_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ColorIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_4500_OnClicked__DelegateSignature(int ColorIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_4500_OnClicked__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_4500_OnClicked__DelegateSignature_Params params;
	params.ColorIndex = ColorIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_10561_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_10561_OnHovered__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_10561_OnHovered__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_10561_OnHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_10574_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_10574_OnHovered__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_10574_OnHovered__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_10574_OnHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_10588_OnHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_10588_OnHovered__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_10588_OnHovered__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_10588_OnHovered__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_10725_OnClosed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_10725_OnClosed__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_10725_OnClosed__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker1_K2Node_ComponentBoundEvent_10725_OnClosed__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_10762_OnClosed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_10762_OnClosed__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_10762_OnClosed__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker2_K2Node_ComponentBoundEvent_10762_OnClosed__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_10776_OnClosed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_10776_OnClosed__DelegateSignature(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_10776_OnClosed__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__EquipmentColorPicker3_K2Node_ComponentBoundEvent_10776_OnClosed__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UpdateWidgets                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::Refresh(bool UpdateWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Refresh");

	UBP_EquipmentSlotCustomization_C_Refresh_Params params;
	params.UpdateWidgets = UpdateWidgets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Pattern_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::BndEvt__Pattern_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature(int Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Pattern_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__Pattern_K2Node_ComponentBoundEvent_5_OnValueChanged__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EquipmentSlotCustomization_C::SetActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.SetActive");

	UBP_EquipmentSlotCustomization_C_SetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1690_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_EquipmentSlotCustomization_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_1690_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1690_OnButtonClickedEvent__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1690_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__PickEquipmentButton_K2Node_ComponentBoundEvent_1744_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_EquipmentSlotCustomization_C::BndEvt__PickEquipmentButton_K2Node_ComponentBoundEvent_1744_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__PickEquipmentButton_K2Node_ComponentBoundEvent_1744_OnButtonClickedEvent__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__PickEquipmentButton_K2Node_ComponentBoundEvent_1744_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.OnProfileChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EquipmentSlotCustomization_C::OnProfileChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.OnProfileChanged");

	UBP_EquipmentSlotCustomization_C_OnProfileChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__StrikeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_EquipmentSlotCustomization_C::BndEvt__StrikeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__StrikeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__StrikeButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__ThrustButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_EquipmentSlotCustomization_C::BndEvt__ThrustButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__ThrustButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__ThrustButton_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_EquipmentSlotCustomization_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.Construct");

	UBP_EquipmentSlotCustomization_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__BP_AltModeCheckbox_K2Node_ComponentBoundEvent_1809_OnCheckStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::BndEvt__BP_AltModeCheckbox_K2Node_ComponentBoundEvent_1809_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__BP_AltModeCheckbox_K2Node_ComponentBoundEvent_1809_OnCheckStateChanged__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__BP_AltModeCheckbox_K2Node_ComponentBoundEvent_1809_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_EquipmentSlotCustomization_C::BndEvt__Button_8_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__Button_8_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__AdvancedButton_K2Node_ComponentBoundEvent_984_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_EquipmentSlotCustomization_C::BndEvt__AdvancedButton_K2Node_ComponentBoundEvent_984_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__AdvancedButton_K2Node_ComponentBoundEvent_984_OnButtonClickedEvent__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__AdvancedButton_K2Node_ComponentBoundEvent_984_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_EquipmentSlotCustomization_C::BndEvt__SkinButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__SkinButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__SkinButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Part1Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_EquipmentSlotCustomization_C::BndEvt__Part1Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Part1Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__Part1Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Part2Button_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_EquipmentSlotCustomization_C::BndEvt__Part2Button_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Part2Button_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__Part2Button_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Part3Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_EquipmentSlotCustomization_C::BndEvt__Part3Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.BndEvt__Part3Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");

	UBP_EquipmentSlotCustomization_C_BndEvt__Part3Button_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ExecuteUbergraph_BP_EquipmentSlotCustomization
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_EquipmentSlotCustomization_C::ExecuteUbergraph_BP_EquipmentSlotCustomization(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_EquipmentSlotCustomization.BP_EquipmentSlotCustomization_C.ExecuteUbergraph_BP_EquipmentSlotCustomization");

	UBP_EquipmentSlotCustomization_C_ExecuteUbergraph_BP_EquipmentSlotCustomization_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
