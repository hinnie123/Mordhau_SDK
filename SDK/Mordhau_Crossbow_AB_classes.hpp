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

// AnimBlueprintGeneratedClass Crossbow_AB.Crossbow_AB_C
// 0x02C4 (0x0624 - 0x0360)
class UCrossbow_AB_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9D4FA10B4BF96151F7C8D68FF6F4FB3B;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_38D541E54F87F7C1D2C2C6A680ED76D2;      // 0x03B0(0x0070)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_DD85EA154E983BC610F11F944CCD1ADD;// 0x0420(0x0120)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_AB1567C74BD78AC00946EE83FCAD683A;// 0x0540(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_2CD2FA12479F4CAFE282318352345FAB;// 0x05B0(0x0070)
	float                                              Loaded;                                                   // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Crossbow_AB.Crossbow_AB_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Crossbow_AB_AnimGraphNode_TwoWayBlend_DD85EA154E983BC610F11F944CCD1ADD();
	void ExecuteUbergraph_Crossbow_AB(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
