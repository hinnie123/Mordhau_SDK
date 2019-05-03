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

// AnimBlueprintGeneratedClass AB_Bow.AB_Bow_C
// 0x028C (0x05EC - 0x0360)
class UAB_Bow_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B83F0F204FD04D8F55C5D8A21A31B787;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8EA6039E4B1BCD32B01E8F922B870C39;      // 0x03B0(0x0070)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_67EE63C749A2BD5F6844D6A0F7257486;// 0x0420(0x0038)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_843145BF4AF7A6BD3232B49515C747E3;// 0x0458(0x0120)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_B7780AD9405B97D1B14001B158D230B7;// 0x0578(0x0070)
	float                                              LoadedIn1P;                                               // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Bow.AB_Bow_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Bow_AnimGraphNode_TwoWayBlend_843145BF4AF7A6BD3232B49515C747E3();
	void ExecuteUbergraph_AB_Bow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
