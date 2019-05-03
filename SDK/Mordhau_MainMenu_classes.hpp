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

// BlueprintGeneratedClass MainMenu.MainMenu_C
// 0x00C0 (0x03F0 - 0x0330)
class AMainMenu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0330(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      CursorActor;                                              // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class ABP_CharacterDoll_C*>                 Characters;                                               // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UBP_MordhauGameInstance_C*                   GameInstance;                                             // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PartySizeOverride;                                        // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	TArray<struct FTransform>                          PawnTransforms;                                           // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      FocalDistances;                                           // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               TestingModeEnabled;                                       // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	int                                                UpdateAllMeshesAtFrame;                                   // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RandomPoseInt;                                            // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	class ABP_CharacterDoll_C*                         BP_CharacterDoll_2_ExecuteUbergraph_MainMenu_RefProperty; // 0x0390(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_CharacterDoll_C*                         BP_CharacterDoll2_ExecuteUbergraph_MainMenu_RefProperty;  // 0x0398(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_CharacterDoll_C*                         BP_CharacterDoll3_ExecuteUbergraph_MainMenu_RefProperty;  // 0x03A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_RandomProfileDoll_C*                     BP_RandomProfileDoll_507_ExecuteUbergraph_MainMenu_RefProperty;// 0x03A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_MordhauMainMenuPawn_C*                   BP_MordhauMainMenuPawn_64_ExecuteUbergraph_MainMenu_RefProperty;// 0x03B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_CharacterDoll_C*                         BP_CharacterDoll4_ExecuteUbergraph_MainMenu_RefProperty;  // 0x03B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_CharacterDoll_C*                         BP_CharacterDoll5_ExecuteUbergraph_MainMenu_RefProperty;  // 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                _2Players_ExecuteUbergraph_MainMenu_RefProperty;          // 0x03C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                _3Players_ExecuteUbergraph_MainMenu_RefProperty;          // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                _4Players_ExecuteUbergraph_MainMenu_RefProperty;          // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                _5Players_ExecuteUbergraph_MainMenu_RefProperty;          // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                _6Players_ExecuteUbergraph_MainMenu_RefProperty;          // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MainMenu.MainMenu_C");
		return ptr;
	}


	void SetNewsVisibility(bool Visible);
	void ReceiveTick(float* DeltaSeconds);
	void OnPartyUpdated(TArray<struct FSteamID> PartyMembers);
	void AddTestCharacter();
	void ExecuteUbergraph_MainMenu(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
