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

// Function BP_Announcement.BP_Announcement_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_Announcement_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Announcement.BP_Announcement_C.GetVisibility_1");

	UBP_Announcement_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Announcement.BP_Announcement_C.ShowAnnouncement
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Announcement_C::ShowAnnouncement()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Announcement.BP_Announcement_C.ShowAnnouncement");

	UBP_Announcement_C_ShowAnnouncement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Announcement.BP_Announcement_C.GetAnnouncementBoxVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBP_Announcement_C::GetAnnouncementBoxVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Announcement.BP_Announcement_C.GetAnnouncementBoxVisibility");

	UBP_Announcement_C_GetAnnouncementBoxVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_Announcement.BP_Announcement_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Announcement_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Announcement.BP_Announcement_C.Tick");

	UBP_Announcement_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Announcement.BP_Announcement_C.TimerEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_Announcement_C::TimerEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Announcement.BP_Announcement_C.TimerEvent");

	UBP_Announcement_C_TimerEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Announcement.BP_Announcement_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   SubText                        (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_AnnouncementType> Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Announcement_C::Show(const struct FText& Text, const struct FText& SubText, float Duration, TEnumAsByte<E_AnnouncementType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Announcement.BP_Announcement_C.Show");

	UBP_Announcement_C_Show_Params params;
	params.Text = Text;
	params.SubText = SubText;
	params.Duration = Duration;
	params.Type = Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Announcement.BP_Announcement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_Announcement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Announcement.BP_Announcement_C.Construct");

	UBP_Announcement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Announcement.BP_Announcement_C.OnExitAnimFinish
// (BlueprintCallable, BlueprintEvent)

void UBP_Announcement_C::OnExitAnimFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Announcement.BP_Announcement_C.OnExitAnimFinish");

	UBP_Announcement_C_OnExitAnimFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Announcement.BP_Announcement_C.ExecuteUbergraph_BP_Announcement
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_Announcement_C::ExecuteUbergraph_BP_Announcement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Announcement.BP_Announcement_C.ExecuteUbergraph_BP_Announcement");

	UBP_Announcement_C_ExecuteUbergraph_BP_Announcement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
