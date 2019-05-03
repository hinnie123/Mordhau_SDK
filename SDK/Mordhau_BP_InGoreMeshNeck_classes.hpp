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

// BlueprintGeneratedClass BP_InGoreMeshNeck.BP_InGoreMeshNeck_C
// 0x0008 (0x0350 - 0x0348)
class ABP_InGoreMeshNeck_C : public ABP_BaseGoreMesh_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_InGoreMeshNeck.BP_InGoreMeshNeck_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_InGoreMeshNeck(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
