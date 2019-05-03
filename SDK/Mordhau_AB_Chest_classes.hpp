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

// AnimBlueprintGeneratedClass AB_Chest.AB_Chest_C
// 0x05F1 (0x0951 - 0x0360)
class UAB_Chest_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_360451F94020D6715A7F448765F4DC8C;      // 0x0368(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_11E78FDF4D945AAFE9B545B9E1C2E137;// 0x03B0(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_ED12621F490B2DF938443D83375F407F;// 0x03E0(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EE85B171427244C4170EF3BF1E003AC3;// 0x0540(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EBA1ED5743DF42487476DBAF6D19ECE2;// 0x06A0(0x0160)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_150328874312B902470A6BB88D909297;// 0x0800(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_923E0DA24AFB705A761A11A823DEBA2A;// 0x08D0(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_B8EFF6D84BA76C28FC8912A095519346;// 0x0918(0x0038)
	bool                                               Opened;                                                   // 0x0950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_Chest.AB_Chest_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_Chest_AnimGraphNode_BlendListByBool_150328874312B902470A6BB88D909297();
	void ExecuteUbergraph_AB_Chest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
