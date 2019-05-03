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

// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Get_Defaults_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_LoadoutPicker_C::Get_Defaults_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Get_Defaults_Text_1");

	UBP_LoadoutPicker_C_Get_Defaults_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.GetDefaultOrCustomProfileFromSingleton
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIdx                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FCharacterProfile       Profile                        (Parm, OutParm)

void UBP_LoadoutPicker_C::GetDefaultOrCustomProfileFromSingleton(int SelectedIdx, struct FCharacterProfile* Profile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.GetDefaultOrCustomProfileFromSingleton");

	UBP_LoadoutPicker_C_GetDefaultOrCustomProfileFromSingleton_Params params;
	params.SelectedIdx = SelectedIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Profile != nullptr)
		*Profile = params.Profile;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.GetSelectedIDInCustomProfiles
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            SelectedId                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LoadoutPicker_C::GetSelectedIDInCustomProfiles(int* SelectedId)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.GetSelectedIDInCustomProfiles");

	UBP_LoadoutPicker_C_GetSelectedIDInCustomProfiles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SelectedId != nullptr)
		*SelectedId = params.SelectedId;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Set Spawn Loadout
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Selected_Character_Profile     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_LoadoutPicker_C::Set_Spawn_Loadout(int ID, int* Selected_Character_Profile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Set Spawn Loadout");

	UBP_LoadoutPicker_C_Set_Spawn_Loadout_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selected_Character_Profile != nullptr)
		*Selected_Character_Profile = params.Selected_Character_Profile;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Move Entry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID_to_move                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            New_ID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LoadoutPicker_C::Move_Entry(int ID_to_move, int New_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Move Entry");

	UBP_LoadoutPicker_C_Move_Entry_Params params;
	params.ID_to_move = ID_to_move;
	params.New_ID = New_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Remove Entry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LoadoutPicker_C::Remove_Entry(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Remove Entry");

	UBP_LoadoutPicker_C_Remove_Entry_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Add Entry
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LoadoutPicker_C::Add_Entry(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Add Entry");

	UBP_LoadoutPicker_C_Add_Entry_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Set Selected Entry
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Selected_ID                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UBP_LoadoutEntry_C*      Selected_Loadout_Entry         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCharacterProfile       Selected_Profile               (Parm, OutParm)

void UBP_LoadoutPicker_C::Set_Selected_Entry(int ID, int* Selected_ID, class UBP_LoadoutEntry_C** Selected_Loadout_Entry, struct FCharacterProfile* Selected_Profile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Set Selected Entry");

	UBP_LoadoutPicker_C_Set_Selected_Entry_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selected_ID != nullptr)
		*Selected_ID = params.Selected_ID;
	if (Selected_Loadout_Entry != nullptr)
		*Selected_Loadout_Entry = params.Selected_Loadout_Entry;
	if (Selected_Profile != nullptr)
		*Selected_Profile = params.Selected_Profile;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Clear Entry Widgets
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LoadoutPicker_C::Clear_Entry_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Clear Entry Widgets");

	UBP_LoadoutPicker_C_Clear_Entry_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Generate Entry Widgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_LoadoutPicker_C::Generate_Entry_Widgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Generate Entry Widgets");

	UBP_LoadoutPicker_C_Generate_Entry_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.UpdateWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LoadoutPicker_C::UpdateWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.UpdateWidget");

	UBP_LoadoutPicker_C_UpdateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.RegisterPreviewEvents
// (BlueprintCallable, BlueprintEvent)

void UBP_LoadoutPicker_C::RegisterPreviewEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.RegisterPreviewEvents");

	UBP_LoadoutPicker_C_RegisterPreviewEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnDrag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaDistance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LoadoutPicker_C::OnDrag(float DeltaDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnDrag");

	UBP_LoadoutPicker_C_OnDrag_Params params;
	params.DeltaDistance = DeltaDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnScroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ScrollDelta                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LoadoutPicker_C::OnScroll(float ScrollDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnScroll");

	UBP_LoadoutPicker_C_OnScroll_Params params;
	params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.UpdatePreviewDoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterProfile       New_Profile                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_LoadoutPicker_C::UpdatePreviewDoll(const struct FCharacterProfile& New_Profile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.UpdatePreviewDoll");

	UBP_LoadoutPicker_C_UpdatePreviewDoll_Params params;
	params.New_Profile = New_Profile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_LoadoutPicker_C::SetActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.SetActive");

	UBP_LoadoutPicker_C_SetActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Listen_for_Double_Click        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Entry_Id                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LoadoutPicker_C::OnClick(bool Listen_for_Double_Click, int Entry_Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnClick");

	UBP_LoadoutPicker_C_OnClick_Params params;
	params.Listen_for_Double_Click = Listen_for_Double_Click;
	params.Entry_Id = Entry_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnHover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Entry_Id                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LoadoutPicker_C::OnHover(int Entry_Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.OnHover");

	UBP_LoadoutPicker_C_OnHover_Params params;
	params.Entry_Id = Entry_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LoadoutPicker_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Tick");

	UBP_LoadoutPicker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_LoadoutPicker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.Construct");

	UBP_LoadoutPicker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.BndEvt__ToggleDefaultLoadouts_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_LoadoutPicker_C::BndEvt__ToggleDefaultLoadouts_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.BndEvt__ToggleDefaultLoadouts_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UBP_LoadoutPicker_C_BndEvt__ToggleDefaultLoadouts_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.ToggleShowDefaultLoadouts
// (BlueprintCallable, BlueprintEvent)

void UBP_LoadoutPicker_C::ToggleShowDefaultLoadouts()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.ToggleShowDefaultLoadouts");

	UBP_LoadoutPicker_C_ToggleShowDefaultLoadouts_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_LoadoutPicker.BP_LoadoutPicker_C.ExecuteUbergraph_BP_LoadoutPicker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_LoadoutPicker_C::ExecuteUbergraph_BP_LoadoutPicker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LoadoutPicker.BP_LoadoutPicker_C.ExecuteUbergraph_BP_LoadoutPicker");

	UBP_LoadoutPicker_C_ExecuteUbergraph_BP_LoadoutPicker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
