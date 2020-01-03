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

// AnimBlueprintGeneratedClass AB_BallistaFix.AB_BallistaFix_C
// 0x0A08 (0x0E38 - 0x0430)
class UAB_BallistaFix_C : public UAdvancedCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C9980DE547F79D27A32868966128D005;      // 0x0438(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_33EE963C4FA311C985F8BA888A857377;// 0x0480(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CA8A52954199C3DE488FC5B003D5BE99;// 0x04C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E274503849BC207BAA7C548DFD4347B1;// 0x0510(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3E29D7084497949F76E9F5918AF91DDC;// 0x0558(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_29B281684D28C7AF35CCA0B944D2E0DD;// 0x05A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A60D5CF845383D3DB0F57EB429555D57;// 0x05E8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_78C074D14A1390477A7AE6B8B9389444;// 0x0698(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3CCE4D93491F6E806F32E1926BBFB355;// 0x06E0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C5DED23A481D7829A86CD0BBF4E4AC22;// 0x0790(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_75217B3C4E71692F7C1CFEA2BB382650;// 0x07D8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_427F5C0B4F1ADE9DA8106399740A103C;// 0x0848(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_02D2236F4F69364245B3BD8A2C9FBCE7;// 0x0890(0x00E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_060ACDC547B027BD7E4CFE8E273C0FB9;// 0x0970(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_09BD16F548497D6A319D8E8D55BD1BEB;// 0x09B8(0x0160)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_051B833F49075E2C563B0F83AA70EB5F;// 0x0B18(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7BA49A1B438B3F96C4D37E80AFBE0D9C;// 0x0B60(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DAB5C4564263778DC95EE09EF85BDA6B;// 0x0CC0(0x0160)
	int                                                State;                                                    // 0x0E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookUp;                                                   // 0x0E24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Turn;                                                     // 0x0E28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnTurnValue;                                           // 0x0E2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HasDriverFloat;                                           // 0x0E30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ReloadTime;                                               // 0x0E34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_BallistaFix.AB_BallistaFix_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_3E29D7084497949F76E9F5918AF91DDC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_29B281684D28C7AF35CCA0B944D2E0DD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_E274503849BC207BAA7C548DFD4347B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_SequencePlayer_3CCE4D93491F6E806F32E1926BBFB355();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_CA8A52954199C3DE488FC5B003D5BE99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_ModifyBone_09BD16F548497D6A319D8E8D55BD1BEB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_ModifyBone_7BA49A1B438B3F96C4D37E80AFBE0D9C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_ModifyBone_DAB5C4564263778DC95EE09EF85BDA6B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_BallistaFix_AnimGraphNode_TransitionResult_33EE963C4FA311C985F8BA888A857377();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintBeginPlay();
	void ExecuteUbergraph_AB_BallistaFix(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
