#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MordhauSpectator.BP_MordhauSpectator_C
// 0x0048 (0x0420 - 0x03D8)
class ABP_MordhauSpectator_C : public AMordhauSpectator
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D8(0x0008) (Transient, DuplicateTransient)
	class UCineCameraComponent*                        CineCamera;                                               // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              SpeedChangeDelta;                                         // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03EC(0x0004) MISSED OFFSET
	TArray<TEnumAsByte<EObjectTypeQuery>>              FocusOnObjectTypes;                                       // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              CameraFocus;                                              // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FocusChangeDelta;                                         // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CameraRotation;                                           // 0x0408(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CameraLocation;                                           // 0x0414(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MordhauSpectator.BP_MordhauSpectator_C");
		return ptr;
	}


	void UserConstructionScript();
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_9(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_8(const struct FKey& Key);
	void InpActEvt_F_K2Node_InputKeyEvent_7(const struct FKey& Key);
	void InpActEvt_I_K2Node_InputKeyEvent_6(const struct FKey& Key);
	void InpActEvt_G_K2Node_InputKeyEvent_5(const struct FKey& Key);
	void InpActEvt_H_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_T_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_R_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_O_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void ExecuteUbergraph_BP_MordhauSpectator(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
