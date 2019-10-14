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

// BlueprintGeneratedClass BP_CharacterDoll.BP_CharacterDoll_C
// 0x0000 (0x1C04 - 0x1C04)
class ABP_CharacterDoll_C : public ABP_MordhauCharacter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterDoll.BP_CharacterDoll_C");
		return ptr;
	}


	void AssumePreviewPose(int Random);
	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
