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

// BlueprintGeneratedClass BP_LadderMover.BP_LadderMover_C
// 0x0020 (0x0D60 - 0x0D40)
class ABP_LadderMover_C : public AMordhau1DVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0D40(0x0008) (Transient, DuplicateTransient)
	class ABP_Ladder_C*                                Ladder;                                                   // 0x0D48(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               RequestedJump;                                            // 0x0D50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReplicatedLadderJump;                                     // 0x0D51(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0D52(0x0006) MISSED OFFSET
	class AMordhauCharacter*                           LastDriver;                                               // 0x0D58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LadderMover.BP_LadderMover_C");
		return ptr;
	}


	void OnRep_ReplicatedLadderJump();
	void PerformJumpoff();
	float OverrideAttackAngle(class UAttackMotion** Motion);
	struct FTransform GetExitTransform();
	void OnRep_Ladder();
	void UserConstructionScript();
	void InpActEvt_Cycle_Camera_K2Node_InputActionEvent_36(const struct FKey& Key);
	void InpActEvt_Jump_K2Node_InputActionEvent_35(const struct FKey& Key);
	void InpActEvt_Feint_Or_Parry_K2Node_InputActionEvent_34(const struct FKey& Key);
	void InpActEvt_Feint_Or_Parry_K2Node_InputActionEvent_33(const struct FKey& Key);
	void InpActEvt_Right_Stab_K2Node_InputActionEvent_32(const struct FKey& Key);
	void InpActEvt_Right_Strike_K2Node_InputActionEvent_31(const struct FKey& Key);
	void InpActEvt_Right_Lower_Strike_K2Node_InputActionEvent_30(const struct FKey& Key);
	void InpActEvt_Right_Upper_Strike_K2Node_InputActionEvent_29(const struct FKey& Key);
	void InpActEvt_Flip_Attack_Side_K2Node_InputActionEvent_28(const struct FKey& Key);
	void InpActEvt_Flip_Attack_Side_K2Node_InputActionEvent_27(const struct FKey& Key);
	void InpActEvt_Left_Stab_K2Node_InputActionEvent_26(const struct FKey& Key);
	void InpActEvt_Left_Upper_Strike_K2Node_InputActionEvent_25(const struct FKey& Key);
	void InpActEvt_Left_Strike_K2Node_InputActionEvent_24(const struct FKey& Key);
	void InpActEvt_Left_Lower_Strike_K2Node_InputActionEvent_23(const struct FKey& Key);
	void InpActEvt_Parry_K2Node_InputActionEvent_22(const struct FKey& Key);
	void InpActEvt_Parry_K2Node_InputActionEvent_21(const struct FKey& Key);
	void InpActEvt_Stab_K2Node_InputActionEvent_20(const struct FKey& Key);
	void InpActEvt_Stab_K2Node_InputActionEvent_19(const struct FKey& Key);
	void InpActEvt_Feint_K2Node_InputActionEvent_18(const struct FKey& Key);
	void InpActEvt_Strike_K2Node_InputActionEvent_17(const struct FKey& Key);
	void InpActEvt_Strike_K2Node_InputActionEvent_16(const struct FKey& Key);
	void InpActEvt_Equip_Slot_9_K2Node_InputActionEvent_15(const struct FKey& Key);
	void InpActEvt_Equip_Slot_8_K2Node_InputActionEvent_14(const struct FKey& Key);
	void InpActEvt_Equip_Slot_7_K2Node_InputActionEvent_13(const struct FKey& Key);
	void InpActEvt_Equip_Slot_6_K2Node_InputActionEvent_12(const struct FKey& Key);
	void InpActEvt_Equip_Slot_5_K2Node_InputActionEvent_11(const struct FKey& Key);
	void InpActEvt_Equip_Slot_4_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_Equip_Slot_3_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_Equip_Slot_2_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Equip_Slot_1_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Drop_K2Node_InputActionEvent_6(const struct FKey& Key);
	void InpActEvt_Holster_K2Node_InputActionEvent_5(const struct FKey& Key);
	void _Reload_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_Fire_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_Ranged_Cancel_K2Node_InputActionEvent_1(const struct FKey& Key);
	void OnStoppedDriving(class AMordhauCharacter** Character);
	void UpdateFPCameraFor(class AMordhauCharacter** Character, float* DeltaSeconds, bool* bRotationOnly);
	void UpdateAnimationFor(class AMordhauCharacter** Character, class UMordhauAnimInstance** AnimInst, float* DeltaTime);
	void InpAxisEvt_Look_Up_K2Node_InputAxisEvent_23(float AxisValue);
	void InpAxisEvt_Turn_Right_K2Node_InputAxisEvent_10(float AxisValue);
	void OnStepChanged();
	void KnockOffDriver(class AMordhauCharacter** Character);
	void ReceiveDestroyed();
	void RequestJumpOff();
	void OnDriverChanged();
	void ExecuteUbergraph_BP_LadderMover(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
