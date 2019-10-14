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

// Function BP_Modlist.BP_ModList_C.Get_TextVersion_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ModList_C::Get_TextVersion_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.Get_TextVersion_Text_1");

	UBP_ModList_C_Get_TextVersion_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Modlist.BP_ModList_C.GetThumbnailBrowserVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ModList_C::GetThumbnailBrowserVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.GetThumbnailBrowserVisibility");

	UBP_ModList_C_GetThumbnailBrowserVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Modlist.BP_ModList_C.Remove Entry from list
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ModListEntry_C*      Item                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData)

void UBP_ModList_C::Remove_Entry_from_list(class UBP_ModListEntry_C* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.Remove Entry from list");

	UBP_ModList_C_Remove_Entry_from_list_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Modlist.BP_ModList_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_ModList_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.GetVisibility_1");

	UBP_ModList_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Modlist.BP_ModList_C.Get_TextName_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ModList_C::Get_TextName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.Get_TextName_Text_1");

	UBP_ModList_C_Get_TextName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Modlist.BP_ModList_C.Get_TextDescription_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ModList_C::Get_TextDescription_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.Get_TextDescription_Text_1");

	UBP_ModList_C_Get_TextDescription_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Modlist.BP_ModList_C.Get_TextAuthor_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBP_ModList_C::Get_TextAuthor_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.Get_TextAuthor_Text_1");

	UBP_ModList_C_Get_TextAuthor_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Modlist.BP_ModList_C.Add Entry to list
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Name                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Description                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Author                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FModioMod               Mod                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ModList_C::Add_Entry_to_list(const struct FText& Name, const struct FText& Description, const struct FText& Author, const struct FModioMod& Mod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.Add Entry to list");

	UBP_ModList_C_Add_Entry_to_list_Params params;
	params.Name = Name;
	params.Description = Description;
	params.Author = Author;
	params.Mod = Mod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Modlist.BP_ModList_C.Update
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FModioMod>       InMods                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_ModList_C::Update(TArray<struct FModioMod>* InMods)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.Update");

	UBP_ModList_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InMods != nullptr)
		*InMods = params.InMods;
}


// Function BP_Modlist.BP_ModList_C.OnFailure_66960CA44E2A5898746E16AC0A23D1BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioResponse          response                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ModList_C::OnFailure_66960CA44E2A5898746E16AC0A23D1BB(const struct FModioResponse& response)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.OnFailure_66960CA44E2A5898746E16AC0A23D1BB");

	UBP_ModList_C_OnFailure_66960CA44E2A5898746E16AC0A23D1BB_Params params;
	params.response = response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Modlist.BP_ModList_C.OnSuccess_66960CA44E2A5898746E16AC0A23D1BB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioResponse          response                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ModList_C::OnSuccess_66960CA44E2A5898746E16AC0A23D1BB(const struct FModioResponse& response)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.OnSuccess_66960CA44E2A5898746E16AC0A23D1BB");

	UBP_ModList_C_OnSuccess_66960CA44E2A5898746E16AC0A23D1BB_Params params;
	params.response = response;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Modlist.BP_ModList_C.OnFailure_0FEFD19F4D6B02436E9DC88E6220CCE0
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioResponse          response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FModioMod>       Mods                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_ModList_C::OnFailure_0FEFD19F4D6B02436E9DC88E6220CCE0(const struct FModioResponse& response, TArray<struct FModioMod> Mods)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.OnFailure_0FEFD19F4D6B02436E9DC88E6220CCE0");

	UBP_ModList_C_OnFailure_0FEFD19F4D6B02436E9DC88E6220CCE0_Params params;
	params.response = response;
	params.Mods = Mods;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Modlist.BP_ModList_C.OnSuccess_0FEFD19F4D6B02436E9DC88E6220CCE0
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FModioResponse          response                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FModioMod>       Mods                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UBP_ModList_C::OnSuccess_0FEFD19F4D6B02436E9DC88E6220CCE0(const struct FModioResponse& response, TArray<struct FModioMod> Mods)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.OnSuccess_0FEFD19F4D6B02436E9DC88E6220CCE0");

	UBP_ModList_C_OnSuccess_0FEFD19F4D6B02436E9DC88E6220CCE0_Params params;
	params.response = response;
	params.Mods = Mods;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Modlist.BP_ModList_C.ContextButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Button_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ModList_C::ContextButtonClicked(int Button_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.ContextButtonClicked");

	UBP_ModList_C_ContextButtonClicked_Params params;
	params.Button_Index = Button_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Modlist.BP_ModList_C.EntryClicked
// (BlueprintCallable, BlueprintEvent)

void UBP_ModList_C::EntryClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.EntryClicked");

	UBP_ModList_C_EntryClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Modlist.BP_ModList_C.EntryHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ModListEntry_C*      Ref                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBP_ModList_C::EntryHovered(class UBP_ModListEntry_C* Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.EntryHovered");

	UBP_ModList_C_EntryHovered_Params params;
	params.Ref = Ref;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Modlist.BP_ModList_C.PopulateMods
// (BlueprintCallable, BlueprintEvent)

void UBP_ModList_C::PopulateMods()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.PopulateMods");

	UBP_ModList_C_PopulateMods_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Modlist.BP_ModList_C.OnShown
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ModList_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.OnShown");

	UBP_ModList_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Modlist.BP_ModList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ModList_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.Tick");

	UBP_ModList_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Modlist.BP_ModList_C.ExecuteUbergraph_BP_ModList
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_ModList_C::ExecuteUbergraph_BP_ModList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Modlist.BP_ModList_C.ExecuteUbergraph_BP_ModList");

	UBP_ModList_C_ExecuteUbergraph_BP_ModList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
