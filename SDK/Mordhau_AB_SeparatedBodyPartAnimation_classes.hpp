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

// AnimBlueprintGeneratedClass AB_SeparatedBodyPartAnimation.AB_SeparatedBodyPartAnimation_C
// 0x2008 (0x2388 - 0x0380)
class UAB_SeparatedBodyPartAnimation_C : public USeparatedBodyPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0380(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2635D49C4DAD286FB1CBDA9B8A0EA634;      // 0x0388(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8E28F1E04C9914222717C28E0479327A;// 0x03D0(0x0160)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A3B43FA34187B9438A005CBDD92D47A0;// 0x0530(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B63440E24C48A2A1E9444A8B022A39F0;// 0x0578(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_19AC3A2D472A063391936984092453E6;// 0x06D8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_57F8EEB4490129965E95BFB605EBD796;// 0x0838(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_60A469C64C8D0B97675B22B6FA7A305F;// 0x0998(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_930C3B6441A6A7ECA383F18CBD6E4537;// 0x0AF8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6BF708FA4D891639A51EA99A7967F8E8;// 0x0C58(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_25E663404C43DF66B5083A84D5181AFF;// 0x0DB8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_822820C944C991A7D0BA3790042313F0;// 0x0F18(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_036A97B549840FAEB44CBA811F253241;// 0x1078(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1874784A4B48E2EEE4D6179488FAFC2A;// 0x11D8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2FE1030745A992B635EB97B22A759148;// 0x1338(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9D602F84464C3C2480868286C1D1A17C;// 0x1498(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_CC7342EE4E85EF327E83B28DFF90547D;// 0x15F8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_97B9A53A40B24B1A5BD9BCA78752A1FF;// 0x1758(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E4E2620A4C7E5FB60956C8898B81C841;// 0x18B8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4874E7A04D0B5B6F896B7B824E392529;// 0x1A18(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5A6D6B314896FA9A711CECBD5BDF9710;// 0x1B78(0x0160)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_555459F24109E013E69DF692133E8989;// 0x1CD8(0x0048)
	struct FAnimNode_CopyPoseFromMesh                  AnimGraphNode_CopyPoseFromMesh_AEAF028541CD3599F44DC3B60527FA69;// 0x1D20(0x00E8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DCC4E1234B517907BB2B628F69A4F982;// 0x1E08(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B6B5F82E413CCFBEF987DABC3F4BD389;// 0x1F68(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_03225C0A4496309F454D7D874B04B2B7;// 0x20C8(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_69B7BD1C47756C7972809DA58246A1DE;// 0x2228(0x0160)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_SeparatedBodyPartAnimation.AB_SeparatedBodyPartAnimation_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_CC7342EE4E85EF327E83B28DFF90547D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_97B9A53A40B24B1A5BD9BCA78752A1FF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_E4E2620A4C7E5FB60956C8898B81C841();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_4874E7A04D0B5B6F896B7B824E392529();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_5A6D6B314896FA9A711CECBD5BDF9710();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_CopyPoseFromMesh_AEAF028541CD3599F44DC3B60527FA69();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_DCC4E1234B517907BB2B628F69A4F982();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_B6B5F82E413CCFBEF987DABC3F4BD389();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_03225C0A4496309F454D7D874B04B2B7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_69B7BD1C47756C7972809DA58246A1DE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_9D602F84464C3C2480868286C1D1A17C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_2FE1030745A992B635EB97B22A759148();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_1874784A4B48E2EEE4D6179488FAFC2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_036A97B549840FAEB44CBA811F253241();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_822820C944C991A7D0BA3790042313F0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_25E663404C43DF66B5083A84D5181AFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_6BF708FA4D891639A51EA99A7967F8E8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_930C3B6441A6A7ECA383F18CBD6E4537();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_60A469C64C8D0B97675B22B6FA7A305F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_57F8EEB4490129965E95BFB605EBD796();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_19AC3A2D472A063391936984092453E6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_SeparatedBodyPartAnimation_AnimGraphNode_ModifyBone_B63440E24C48A2A1E9444A8B022A39F0();
	void ExecuteUbergraph_AB_SeparatedBodyPartAnimation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
