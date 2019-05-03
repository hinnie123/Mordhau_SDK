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

// Class Mordhau.AdvancedCharacter
// 0x0490 (0x0BD0 - 0x0740)
class AAdvancedCharacter : public ACharacter
{
public:
	int                                                TickSkip;                                                 // 0x0740(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AnimationTickSkip;                                        // 0x0744(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OutOfBoundsCounter;                                       // 0x0748(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OutOfBoundsSince;                                         // 0x074C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x14];                                      // 0x0750(0x0014) MISSED OFFSET
	bool                                               bIsDead;                                                  // 0x0764(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBurning;                                               // 0x0765(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRagdollFalling;                                        // 0x0766(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0767(0x0001) MISSED OFFSET
	struct FName                                       RagdollFallingFromCollisionProfile;                       // 0x0768(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUsingRagdollFallingCollision;                          // 0x0770(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0771(0x0003) MISSED OFFSET
	float                                              RagdollFallingFromPerchRadius;                            // 0x0774(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               RagdollFallingFromPhysicsAsset;                           // 0x0778(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IsBurningSmoothed;                                        // 0x0780(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DistanceIntoFireFieldSmoothed;                            // 0x0784(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DistanceIntoFireField;                                    // 0x0788(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DistanceIntoSmokeFieldSmoothed;                           // 0x078C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DistanceIntoSmokeField;                                   // 0x0790(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LookUpValue;                                              // 0x0794(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCharacterDied;                                          // 0x0798(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCharacterDestroyed;                                     // 0x07A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	int                                                UniqueAdvancedCharacterIndex;                             // 0x07B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MouseSmoothedTurnValue;                                   // 0x07BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MouseSmoothingTurnVelocity;                               // 0x07C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MouseSmoothedLookUpValue;                                 // 0x07C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MouseSmoothingLookUpVelocity;                             // 0x07C8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x07CC(0x0004) MISSED OFFSET
	struct FPrePhysTickFunction                        PrePhysTickFunction;                                      // 0x07D0(0x0058)
	float                                              LODDeltaTime;                                             // 0x0828(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x082C(0x0010) MISSED OFFSET
	unsigned char                                      Team;                                                     // 0x083C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x083D(0x0003) MISSED OFFSET
	struct FName                                       QueuedForDismember;                                       // 0x0840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bQueuedDismemberIsPartial;                                // 0x0848(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bQueuedDismemberIsBluntForce;                             // 0x0849(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x084A(0x0002) MISSED OFFSET
	struct FVector                                     MoveCompVelocityBeforeDeath;                              // 0x084C(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              LastNonZeroVelocityTime;                                  // 0x0858(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanReceiveClientsideHits;                                // 0x085C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x085D(0x0003) MISSED OFFSET
	TArray<TWeakObjectPtr<class UMaterialInstanceDynamic>> DissolveMaterialInstances;                                // 0x0860(0x0010) (ZeroConstructor)
	float                                              DissolveDuration;                                         // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DissolveValue;                                            // 0x0874(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastSetDissolveValue;                                     // 0x0878(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x087C(0x0004) MISSED OFFSET
	class ULateTickComponent*                          LateTickComponent;                                        // 0x0880(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	double                                             DistanceToCameraHeuristic;                                // 0x0888(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              DistanceToCamera;                                         // 0x0890(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipAnimPoseOnClientWhenNotRendered;                     // 0x0894(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0895(0x0003) MISSED OFFSET
	struct FName                                       DistanceToCameraBoneToUse;                                // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LODRank;                                                  // 0x08A0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bFancyMeshEffects;                                        // 0x08A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x08A5(0x0003) MISSED OFFSET
	float                                              FancyMeshEffectsTurnOnDistance;                           // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FancyMeshEffectsTurnOffDistance;                          // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceMaxQuality;                                         // 0x08B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReplicatedCharacterFlags;                                 // 0x08B1(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bWasEverPossessedByLocalPlayer;                           // 0x08B2(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x08B3(0x0001) MISSED OFFSET
	float                                              LastPossessionTime;                                       // 0x08B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeshPauseAnimsLifetime;                                   // 0x08B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x08BC(0x0004) MISSED OFFSET
	struct FName                                       RagdollFallingProfileName;                                // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               RagdollFallingPhysicsAsset;                               // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RagdollFallingGetUpDuration;                              // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RagdollFallingApplyForce;                                 // 0x08D4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RagdollFallingApplyForceAir;                              // 0x08E0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x08EC(0x0004) MISSED OFFSET
	struct FName                                       RagdollFallingApplyForceBoneName;                         // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RagdollFallingGetUpStartTime;                             // 0x08F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RagdollFallingStartTime;                                  // 0x08FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RagdollFallingBlendOutSpeed;                              // 0x0900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RagdollFallingMinTime;                                    // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RagdollFallingMinVelocityToGetUp;                         // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RagdollFallingTimeAtMinVelocityToGetUp;                   // 0x090C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsBlendWeight;                                       // 0x0910(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsBlendTarget;                                       // 0x0914(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PhysicsBlendSpeed;                                        // 0x0918(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x14];                                      // 0x091C(0x0014) MISSED OFFSET
	float                                              JumpCooldown;                                             // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bJumped;                                                  // 0x0934(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsAirborneFromJump;                                      // 0x0935(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x0936(0x0002) MISSED OFFSET
	float                                              AirborneTime;                                             // 0x0938(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmokeDistanceMaxValue;                                    // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmokeDistanceSmoothInterpSpeed;                           // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AMasterField>                 CurrentSmokeField;                                        // 0x0944(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              IsBurningSmoothInterpSpeed;                               // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireDistanceMaxValue;                                     // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FireDistanceSmoothInterpSpeed;                            // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AMasterField>                 CurrentFireField;                                         // 0x0958(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AController>                  FireInstigator;                                           // 0x0960(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       FireAgent;                                                // 0x0968(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              FireDamage;                                               // 0x0970(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireDamageTick;                                           // 0x0974(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireEnd;                                                  // 0x0978(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastFireDamageTime;                                       // 0x097C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bMeshesReceiveDecals;                                     // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0981(0x0007) MISSED OFFSET
	class AMordhauProjectile*                          CurrentProjectile;                                        // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTurnUsesControllerInputYawScale;                         // 0x0990(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAddForwardAxisToMovementInput;                           // 0x0991(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAddRightAxisToMovementInput;                             // 0x0992(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x1];                                       // 0x0993(0x0001) MISSED OFFSET
	float                                              SpawnTurnValue;                                           // 0x0994(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	float                                              LookUpLimit;                                              // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookDownLimit;                                            // 0x099C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnLimit;                                                // 0x09A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReplicatedLookUpValue;                                    // 0x09A4(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x09A5(0x0003) MISSED OFFSET
	float                                              LookUpValueSmoothingTarget;                               // 0x09A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LookUpValueSmoothingFrom;                                 // 0x09AC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LookUpValueSmoothingStartTime;                            // 0x09B0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TurnRateCap;                                              // 0x09B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnRateCapTarget;                                        // 0x09B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LookUpRateCap;                                            // 0x09BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookUpRateCapTarget;                                      // 0x09C0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bTurnRateIgnoresCap;                                      // 0x09C4(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x09C5(0x0003) MISSED OFFSET
	float                                              TurnCapRemaining;                                         // 0x09C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LookUpCapRemaining;                                       // 0x09CC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastObservedLocation;                                     // 0x09D0(0x000C) (IsPlainOldData)
	struct FVector                                     AccumulatedLocationLag;                                   // 0x09DC(0x000C) (BlueprintVisible, IsPlainOldData)
	TArray<struct FFloatAndVector>                     DelayedLocationDeltas;                                    // 0x09E8(0x0010) (ZeroConstructor)
	float                                              CurrentLocationLagInduction;                              // 0x09F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LocationLagInductionTarget;                               // 0x09FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LocationLagInductionChangeSpeed;                          // 0x0A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LocationLagInductionCounterweight;                        // 0x0A04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastObservedLook;                                         // 0x0A08(0x000C) (IsPlainOldData)
	struct FVector                                     AccumulatedLookLag;                                       // 0x0A14(0x000C) (BlueprintVisible, IsPlainOldData)
	TArray<struct FFloatAndVector>                     DelayedLookDeltas;                                        // 0x0A20(0x0010) (ZeroConstructor)
	float                                              CurrentLookLagInduction;                                  // 0x0A30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookLagInductionTarget;                                   // 0x0A34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookLagInductionChangeSpeed;                              // 0x0A38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LookLagInductionCounterweight;                            // 0x0A3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPerformCustomDepthHighlight;                             // 0x0A40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHighlighted;                                           // 0x0A41(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInteractable;                                          // 0x0A42(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAnimUpdateRateOptimizations;                             // 0x0A43(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsNonCombatCharacter;                                    // 0x0A44(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWillStopMelee;                                           // 0x0A45(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWillBleedOutOnKill;                                      // 0x0A46(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x1];                                       // 0x0A47(0x0001) MISSED OFFSET
	float                                              BleedingOutRemainingTime;                                 // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBleedingOut;                                           // 0x0A4C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0A4D(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       LastDamageAgent;                                          // 0x0A50(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       LastDamageSource;                                         // 0x0A58(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AController>                  LastDamageInstigator;                                     // 0x0A60(0x0008) (ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DeathParticles;                                           // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       DeathParticlesSocket;                                     // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Health;                                                   // 0x0A78(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReplicatedHealth;                                         // 0x0A79(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x0A7A(0x0002) MISSED OFFSET
	float                                              HealthRegenDelay;                                         // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      HealthRegenPerTick;                                       // 0x0A80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x0A81(0x0003) MISSED OFFSET
	float                                              HealthRegenTickRate;                                      // 0x0A84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreGameStateHealthRegenRestriction;                   // 0x0A88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x0A89(0x0003) MISSED OFFSET
	float                                              NextHealthTick;                                           // 0x0A8C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              OutOfBoundsKillTime;                                      // 0x0A90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAllowedOutOfBounds;                                    // 0x0A94(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x0A95(0x0003) MISSED OFFSET
	float                                              ReceivedDamageModifier;                                   // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReceivedTeamDamageModifier;                               // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReceivedFireDamageModifier;                               // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReceivedRangedDamageModifier;                             // 0x0AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReceivedDamageAbsorption;                                 // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KnockbackFlinch;                                          // 0x0AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      HitEffect;                                                // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BurningParticles;                                         // 0x0AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       BurningAttachSocket;                                      // 0x0AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   BurningSound;                                             // 0x0AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   FallDamageSound;                                          // 0x0AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FallDamageSoundAttachToBone;                              // 0x0AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UParticleSystemComponent>     CurrentBurningParticles;                                  // 0x0AE0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UAudioComponent>              CurrentBurningSound;                                      // 0x0AE8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FNetDamage                                  NetDamage;                                                // 0x0AF0(0x0020) (Net)
	float                                              DeathTime;                                                // 0x0B10(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RagdollStartTime;                                         // 0x0B14(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bForceLongDeathYell;                                      // 0x0B18(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x0B19(0x0003) MISSED OFFSET
	int                                                FootstepAudioComponentCount;                              // 0x0B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAudioComponent*>                     FootstepAudioComponents;                                  // 0x0B20(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData27[0x8];                                       // 0x0B30(0x0008) MISSED OFFSET
	class USoundCue*                                   HurtYell;                                                 // 0x0B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   DeathYell;                                                // 0x0B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAudioComponent>              DeathScreamPtr;                                           // 0x0B48(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                DedicatedServerAnimFrameSkipLOD;                          // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      UnknownData28[0x4];                                       // 0x0B54(0x0004) MISSED OFFSET
	struct FName                                       AdditiveOverrideType;                                     // 0x0B58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdditiveOverrideEndTime;                                  // 0x0B60(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AdditiveOverrideStartTime;                                // 0x0B64(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       LastFlinchAdditiveName;                                   // 0x0B68(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              LastFlinchAdditiveTime;                                   // 0x0B70(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastSetBloodIntensity;                                    // 0x0B74(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxWounds;                                                // 0x0B78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LastWound;                                                // 0x0B79(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x6];                                       // 0x0B7A(0x0006) MISSED OFFSET
	TArray<struct FWoundMaterialData>                  Wounds;                                                   // 0x0B80(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FName                                       BloodIntensityParamName;                                  // 0x0B90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USkeletalMeshComponent*>              BloodReceivingSkeletalMeshes;                             // 0x0B98(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)
	TEnumAsByte<EPhysicalSurface>                      CharacterSurface;                                         // 0x0BA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x7];                                       // 0x0BA9(0x0007) MISSED OFFSET
	TArray<struct FSphericalLimbBounds>                SphericalLimbs;                                           // 0x0BB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              RagdollForceMultIfDmgAgent;                               // 0x0BC0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceRagdollIfDmgAgent;                                  // 0x0BC4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31[0xB];                                       // 0x0BC5(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.AdvancedCharacter");
		return ptr;
	}


	void UnHighlight();
	void TurnNotAbsolute(float Value);
	void TurnAtRate(float Val);
	void Turn(float Val, bool bIsAbsolute);
	bool Trip();
	void Suicide();
	void StopRegen(float ExtraTime);
	void StopHealthRegen(float ExtraTime);
	void StopBurningCosmetic();
	void StartRagdollWithBlend(float BlendDuration);
	void StartRagdoll();
	void StartBurningCosmetic();
	void StartBurning(float Duration, float Damage, float Tick, class AActor* DamageAgent, class AController* InstigatorController);
	class UParticleSystemComponent* SpawnParticlesAttached(class UParticleSystem* Particle, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> AttachType, const struct FName& Socket, bool bForce);
	void SetOnSmoke(class AMasterField* SmokeField);
	void SetOnFire(class AMasterField* FireField);
	void SetLookLagInductionTarget(float Amount, float ChangeSpeed);
	void SetLocationLagInductionTarget(float Amount, float ChangeSpeed);
	void SetIsRagdollFalling(bool bInIsRagdollFalling);
	void SetAdditiveOverrideType(const struct FName& NewType, float Duration);
	void ServerTrip();
	void ServerSuicide();
	void ServerLookUp(float NewLookUp);
	void ResetLookLagInductionTarget();
	void ResetLocationLagInductionTarget();
	void ResetLagInductionTargets();
	void ResetAdditiveOverrideType();
	void RequestTrip();
	void RequestSuicide();
	void RequestMeshEnablePhysics(float Duration);
	void ReplicateHealth();
	void RegisterMaterialToDissolve(class UMaterialInstanceDynamic* Mat);
	void PlayHitEffectParticle(const struct FVector& Location, const struct FRotator& Rotation, const struct FName& bone, bool bFindOptimalSpot);
	class UAudioComponent* PlayCharacterSound(class USoundBase* Sound, const struct FName& bone, const struct FVector& InLocation, TEnumAsByte<EAttachLocation> AttachLocation, bool bAttach, class USoundAttenuation* Override, float VolumeMultiplier, float PitchMultiplier);
	void OnTookDamage(bool bWillKill, EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	void OnRep_Team();
	void OnRep_SpawnTurnValue();
	void OnRep_ReplicatedLookUpValue();
	void OnRep_ReplicatedHealth();
	void OnRep_ReplicatedCharacterFlags(unsigned char OldValue);
	void OnRep_NetDamage();
	void OnKilled(class AController* EventInstigator);
	void OnInteractionStart(class AAdvancedCharacter* Character);
	void OnInteractionEnd();
	void OnHit(class AActor* Actor, const struct FName& bone, const struct FVector& WorldLocation, unsigned char Tier, unsigned char SurfaceType);
	void OnHighlightStart();
	void OnHighlightEnd();
	void OnHealthChanged();
	void OnDied(float Angle, EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	void OnCosmeticHit(EMordhauDamageType DamageType, unsigned char SubType, const struct FHitResult& Hit, class AActor* Agent);
	void OnAfterDied(float Angle, EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	void OffsetHealth(int Amount, bool bReplicate);
	void MoveRight(float Val);
	void MoveForward(float Val);
	float MordhauTakeDamage(float DamageAmount, const struct FHitResult& Hit, EMordhauDamageType DamageType, unsigned char DamageSubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);
	void LookUpNotAbsolute(float Value);
	void LookUpAtRate(float Val);
	void LookUp(float Val, bool bIsAbsolute);
	void LeftOutOfBoundsArea();
	bool Knockback(const struct FVector& Amount);
	bool IsOutOfBounds();
	bool IsLocallyPlayerControlled();
	bool IsLocallyControlledOrUncontrolled();
	bool IsAirborne();
	void InteractionStart(class AAdvancedCharacter* Character);
	void InteractionEnd();
	void Highlight();
	float GetRawLookUpValue();
	float GetOutOfBoundsTimeUntilDeath();
	float GetLookUpValue();
	bool GetIsDead();
	bool GetIsBurning();
	float GetDistanceIntoSmokeFieldSmoothed();
	float GetDistanceIntoSmokeField();
	bool GetBestStickyLocation(const struct FVector& InLocation, struct FVector* OutLocation, struct FVector* OutNormal, struct FName* OutBone);
	unsigned char GetArmorTierForBone(const struct FName& BoneName);
	float GetAdditiveOverrideTypeNormalizedTime();
	struct FName GetAdditiveOverrideType();
	void EnteredOutOfBoundsArea();
	void DouseFire();
	bool CanInteract(class AAdvancedCharacter* Character);
	bool CanBleedOutFromHit(const struct FHitResult& HitResult, EMordhauDamageType Type, unsigned char SubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);
	void BPLODTick(float DeltaTime);
	void BeginFlinchAdditiveOverride(const struct FName& FlinchOverrideName, const struct FName& AltFlinchOverrideName, float Duration, float Degree, bool bIsHead, float SnapDegreeToSteps);
	void AssignNetDamage(unsigned char InType, unsigned char InSubType, unsigned char InBone, const struct FVector& InPoint, bool bInWillKill, bool bInSimulateFlinch, bool bInIDBit, class AActor* InDamageSource, class AActor* InDamageAgent);
	void ApplyRagdollForce(float Angle, EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	void AddWound(const struct FVector& ImpactPoint, const struct FVector& ImpactNormal, const struct FName& bone, class AActor* Agent, EMordhauDamageType DamageType, unsigned char DamageSubType);
	void AddTurnDegrees(float Delta);
};


// Class Mordhau.AdvancedCharacterAnimInstance
// 0x00D0 (0x0430 - 0x0360)
class UAdvancedCharacterAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0360(0x0008) MISSED OFFSET
	bool                                               bWantsGrounding;                                          // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	struct FVector                                     RootTranslationOffsetInternal;                            // 0x036C(0x000C) (IsPlainOldData)
	struct FVector                                     RootTranslationOffset;                                    // 0x0378(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RootRotationOffsetInternal;                               // 0x0384(0x000C) (IsPlainOldData)
	struct FRotator                                    RootRotationOffset;                                       // 0x0390(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     RootRotationPivot;                                        // 0x039C(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              TranslationInterpSpeed;                                   // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RotationInterpSpeed;                                      // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RootRotationOffsetFactor;                                 // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LimbRotationOffsetFactor;                                 // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RootLiftLimits;                                           // 0x03B8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              GroundingWeight;                                          // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AccumulatedLocationLag;                                   // 0x03C4(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    AccumulatedTurnLag;                                       // 0x03D0(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bIsAirborne;                                              // 0x03DC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	float                                              LastLand;                                                 // 0x03E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastJump;                                                 // 0x03E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirborneTime;                                             // 0x03E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bJumped;                                                  // 0x03EC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAirborneFromJump;                                        // 0x03ED(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsDead;                                                  // 0x03EE(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x03EF(0x0001) MISSED OFFSET
	float                                              DeathDirection;                                           // 0x03F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	struct FName                                       AdditiveOverrideType;                                     // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdditiveOverrideWeight;                                   // 0x0400(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdditiveOverrideNoneTime;                                 // 0x0404(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AdditiveOverrideTypeNormalizedTime;                       // 0x0408(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlinchDirection;                                          // 0x040C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlinchIsHead;                                             // 0x0410(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AltFlinchDirection;                                       // 0x0414(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AltFlinchIsHead;                                          // 0x0418(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastDeltaSeconds;                                         // 0x041C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRanPostEvaluateThisFrame;                                // 0x0420(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0xF];                                       // 0x0421(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.AdvancedCharacterAnimInstance");
		return ptr;
	}

};


// Class Mordhau.AdvancedCharacterMovement
// 0x00F0 (0x0860 - 0x0770)
class UAdvancedCharacterMovement : public UCharacterMovementComponent
{
public:
	float                                              LastFallingCheckVelocityZ;                                // 0x0770(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0774(0x0004) MISSED OFFSET
	class UCrowdManager*                               CrowdManager;                                             // 0x0778(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bUseMordhauRotationInterpMode;                            // 0x0780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0781(0x0003) MISSED OFFSET
	float                                              MordhauRotationSmoothStartTime;                           // 0x0784(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0788(0x0008) MISSED OFFSET
	struct FQuat                                       MordhauRotationSmoothFrom;                                // 0x0790(0x0010) (IsPlainOldData)
	float                                              StillTimeWhileRagdollFalling;                             // 0x07A0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PerchRadiusThresholdRagdollFalling;                       // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinVelocityForFallDamage;                                 // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallDamageOffset;                                         // 0x07AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallDamageFactor;                                         // 0x07B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RagdollMinVelocityForFallDamage;                          // 0x07B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RagdollFallDamageOffset;                                  // 0x07B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RagdollFallDamageFactor;                                  // 0x07BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReverseBackwardsTurning;                                 // 0x07C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePendingRotationToOrientMovement;                      // 0x07C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x07C2(0x0002) MISSED OFFSET
	struct FVector                                     PreviousVelocity;                                         // 0x07C4(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              PendingTurnValue;                                         // 0x07D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreMovementInput;                                     // 0x07D4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xB];                                       // 0x07D5(0x000B) MISSED OFFSET
	TArray<unsigned char>                              ChildrenSkipperCachedArray;                               // 0x07E0(0x0010) (ZeroConstructor)
	struct FVector                                     OffsetMeshTranslation;                                    // 0x07F0(0x000C) (IsPlainOldData)
	struct FVector                                     OffsetExtrapolation;                                      // 0x07FC(0x000C) (IsPlainOldData)
	struct FVector                                     OffsetExtrapolationTarget;                                // 0x0808(0x000C) (IsPlainOldData)
	struct FVector                                     OffsetCorrectionLeftover;                                 // 0x0814(0x000C) (IsPlainOldData)
	struct FVector                                     OffsetNetSmoothLeftover;                                  // 0x0820(0x000C) (IsPlainOldData)
	struct FVector                                     OffsetNetSmoothPending;                                   // 0x082C(0x000C) (IsPlainOldData)
	struct FVector                                     MovementComponentMeshOffset;                              // 0x0838(0x000C) (IsPlainOldData)
	float                                              AuthNetSmoothTime;                                        // 0x0844(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AuthNetMaxSmoothDist;                                     // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableAuthNetSmoothing;                                 // 0x084C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x084D(0x0003) MISSED OFFSET
	int                                                SkipPredictionForAnimTickSkipOrGreater;                   // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xC];                                       // 0x0854(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.AdvancedCharacterMovement");
		return ptr;
	}

};


// Class Mordhau.AdvProjectileMovementComponent
// 0x0008 (0x01A8 - 0x01A0)
class UAdvProjectileMovementComponent : public UProjectileMovementComponent
{
public:
	float                                              DragDeceleration;                                         // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x01A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.AdvProjectileMovementComponent");
		return ptr;
	}

};


// Class Mordhau.Archetype
// 0x0008 (0x0030 - 0x0028)
class UArchetype : public UObject
{
public:
	int                                                CharacterPoints;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.Archetype");
		return ptr;
	}

};


// Class Mordhau.MordhauInventoryItem
// 0x0030 (0x0058 - 0x0028)
class UMordhauInventoryItem : public UObject
{
public:
	class UTexture2D*                                  ItemIcon;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemDefID;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FText                                       ItemName;                                                 // 0x0038(0x0018) (Edit, BlueprintVisible)
	EItemRarity                                        ItemRarity;                                               // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0051(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauInventoryItem");
		return ptr;
	}

};


// Class Mordhau.MordhauWearable
// 0x0140 (0x0198 - 0x0058)
class UMordhauWearable : public UMordhauInventoryItem
{
public:
	EWearableSlot                                      UseColorsFromSlot;                                        // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	class UTexture2D*                                  AlbedoMap;                                                // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  NormalMap;                                                // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  RoughnessMap;                                             // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FColor                                      Albedo;                                                   // 0x0078(0x0004) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Metallic;                                                 // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Roughness;                                                // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MetalAlbedoDarken;                                        // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PDO;                                                      // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BloodOffsetA;                                             // 0x008C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BloodOffsetB;                                             // 0x0098(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BloodMaskSizeFine;                                        // 0x00A4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BloodMaskSizeSoft;                                        // 0x00B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BloodTextureSize;                                         // 0x00BC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     EmblemScale;                                              // 0x00C8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     EmblemOffset;                                             // 0x00D4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              EmblemRotation;                                           // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasEmblem;                                               // 0x00E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMuffleVoice;                                             // 0x00E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTreatAsMaster;                                           // 0x00E6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideIn1P;                                                // 0x00E7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideEars;                                                // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideHair;                                                // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideBeard;                                               // 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideNose;                                                // 0x00EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideLeftHand;                                            // 0x00EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideRightHand;                                           // 0x00ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideLeftFoot;                                            // 0x00EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideRightFoot;                                           // 0x00EF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideLeftLeg;                                             // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideRightLeg;                                            // 0x00F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideChest;                                               // 0x00F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideLeftArm;                                             // 0x00F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideRightArm;                                            // 0x00F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00F5(0x0003) MISSED OFFSET
	class USkeletalMesh*                               Mesh;                                                     // 0x00F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Mesh1POverride;                                           // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               AuxiliaryMesh;                                            // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAuxiliaryConsideredBody;                               // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	class USkeletalMesh*                               AuxiliaryMesh1POverride;                                  // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAuxiliaryWantsMaterialInstance;                          // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAuxiliary1POverrideWantsMaterialInstance;                // 0x0121(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0122(0x0002) MISSED OFFSET
	float                                              VertexCameraDisplacement;                                 // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CharacterPointCost;                                       // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ArmorClass;                                               // 0x012C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAllowedForPeasants;                                    // 0x012D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x012E(0x0002) MISSED OFFSET
	float                                              SpeedFactor;                                              // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationFactor;                                       // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FPatternInfo>                        Patterns;                                                 // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      Pattern;                                                  // 0x0148(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0149(0x0007) MISSED OFFSET
	TArray<unsigned char>                              Colors;                                                   // 0x0150(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<unsigned char>                              ColorTables;                                              // 0x0160(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIgnoreTeamColor1;                                        // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreTeamColor2;                                        // 0x0171(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0172(0x0002) MISSED OFFSET
	struct FLinearColor                                DefaultColor1Temp;                                        // 0x0174(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                DefaultColor2Temp;                                        // 0x0184(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0194(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauWearable");
		return ptr;
	}

};


// Class Mordhau.ArmsWearable
// 0x0020 (0x01B8 - 0x0198)
class UArmsWearable : public UMordhauWearable
{
public:
	struct FVector                                     ArmsBouncyLimits;                                         // 0x0198(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      DefaultHands;                                             // 0x01A4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01A5(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x01A5(0x0010) UNKNOWN PROPERTY: ArrayProperty Mordhau.ArmsWearable.HandsWearables

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.ArmsWearable");
		return ptr;
	}


	int GetHandsWearablesNum();
	class UClass* GetHandsWearable(int Index);
};


// Class Mordhau.MordhauMotion
// 0x0068 (0x0090 - 0x0028)
class UMordhauMotion : public UObject
{
public:
	TWeakObjectPtr<class AMordhauCharacter>            Owner;                                                    // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              StartRealTime;                                            // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	class UMordhauMotion*                              ComingFromMotion;                                         // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ExpectedDelay;                                            // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeaveTime;                                                // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInitiatedLocally;                                        // 0x0050(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWasConfirmedByAuthority;                                 // 0x0051(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	float                                              ConfirmedByAuthorityTime;                                 // 0x0054(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFlinchable;                                            // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMovementRestriction                               MovementRestriction;                                      // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x005A(0x0002) MISSED OFFSET
	float                                              SpeedFactor;                                              // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BackpedalSpeedFactor;                                     // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanEmote;                                                // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanAttack;                                               // 0x0065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBlock;                                                // 0x0066(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisablesAtmospherics;                                    // 0x0067(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRequires3PArmsSync;                                      // 0x0068(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisablesCosmeticWeaponTransform;                         // 0x0069(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisablesOffhandIK;                                       // 0x006A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisablesChaseMechanic;                                   // 0x006B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForcesOffhandIK;                                         // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOffhandIsRightHand;                                      // 0x006D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x006E(0x0002) MISSED OFFSET
	float                                              OffhandIKChangeSpeed;                                     // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CosmeticTransformChangeSpeed;                             // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffhandIKDistanceMax;                                     // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffhandIKDistanceMin;                                     // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlocksRegen;                                             // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowDedicatedServerAnimLOD;                             // 0x0081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsesLeftTorsoBlend;                                      // 0x0082(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0083(0x0001) MISSED OFFSET
	float                                              LeftTorsoBlendSpeed;                                      // 0x0084(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsRightLegBending;                                    // 0x0088(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0089(0x0003) MISSED OFFSET
	float                                              RightLegBendingChangeSpeed;                               // 0x008C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauMotion");
		return ptr;
	}


	bool ProcessFeint();
	bool ProcessBlock(EBlockType Type);
	bool ProcessAttack(EAttackMove Move, float Angle);
	void OnTick(float DeltaTime);
	void OnLeave(bool Interrupted);
	void OnLateTick(float DeltaTime);
	void OnEnded();
	void OnDynamicParamChanged(unsigned char OldValue, unsigned char NewValue);
	void OnBegin();
	bool CanInitiateMotion(class UClass* NewMotionType);
};


// Class Mordhau.AttackMotion
// 0x0500 (0x0590 - 0x0090)
class UAttackMotion : public UMordhauMotion
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0090(0x0050) UNKNOWN PROPERTY: SetProperty Mordhau.AttackMotion.BlockedAttacks
	float                                              HitCancelDamageModifier;                                  // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ActiveParryStaminaCost;                                   // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecoveryQueueWindow;                                      // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsComboFromMiss;                                         // 0x00EC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	float                                              MissTwiceStaminaCostMultiplier;                           // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlayAttackYellTimeReleaseOffset;                          // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RiposteTradeDamageFactor;                                 // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RiposteWindUpCanParryWindow;                              // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRiposteAteFeintInput;                                    // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0101(0x0003) MISSED OFFSET
	float                                              HitRecovery;                                              // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitRecoveryKick;                                          // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrikeRiposteEarlyRelease;                                // 0x010C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClashAngle;                                               // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrikeAnimationNormalizedRecoveryOffset;                  // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrikeChamberWindow;                                      // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StabChamberWindow;                                        // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MorphKickExtraTime;                                       // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0124(0x0004) MISSED OFFSET
	class UCurveFloat*                                 WindUpCurve;                                              // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ReleaseCurve;                                             // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)
	class UMeleeWeaponAnimationProfile*                AnglingWeaponAnimationProfile;                            // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              StrikeWooshTimeFactor;                                    // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StabWooshTimeFactor;                                      // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KickWooshTimeFactor;                                      // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrikeReducedAnglingFactor;                               // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrikeEarlyReleaseTimeFactor;                             // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrikeRiposteEarlyReleaseTimeFactor;                      // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ForceRecoveryMinimumTurnAmount;                           // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SupersprintDuration;                                      // 0x015C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExtraEarlyReleaseForLookUpOverheads;                      // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExtraEarlyReleaseForLookUpNonUndercuts;                   // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ToChamberAttackAngleTolerance;                            // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RegularFeintWindow;                                       // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ComboFeintWindow;                                         // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MorphWindow;                                              // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxMorphTotalTime;                                        // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x017C(0x000C) MISSED OFFSET
	float                                              ReleaseJumpBlockTime;                                     // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrikeEarlyRelease;                                       // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StabRiposteEarlyRelease;                                  // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StabEarlyRelease;                                         // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ChamberStaminaRecover;                                    // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KickEarlyRelease;                                         // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinWindUpTimeBeforeMorphing;                              // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EarlyReleaseIsClashableAfter;                             // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NormalAttackBlendIn;                                      // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NormalAttackBlendIn1P;                                    // 0x01AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NormalAttackSlowBlendIn;                                  // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NormalAttackSlowBlendIn1P;                                // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NormalAttackParrySlowBlendIn;                             // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NormalAttackParrySlowBlendIn1P;                           // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KickBlendIn;                                              // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KickBlendIn1P;                                            // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BashBlendIn;                                              // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BashBlendIn1P;                                            // 0x01CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ComboBlendIn;                                             // 0x01D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ComboBlendIn1P;                                           // 0x01D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PostClashBlendIn;                                         // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PostClashBlendIn1P;                                       // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MorphBlendIn;                                             // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MorphBlendIn1P;                                           // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RiposteBlendIn;                                           // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RiposteBlendInWithShield;                                 // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RiposteBlendIn1P;                                         // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RiposteBlendInWithShield1P;                               // 0x01F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOut;                                                 // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOut1P;                                               // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MissPlayRate;                                             // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MissPlayRate1P;                                           // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SuccessfulHitBlendOutAnimTime;                            // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SuccessfulHitPlayRate;                                    // 0x020C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SuccessfulHitStrikeBlendOutAnimTime1P;                    // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SuccessfulHitStrikePlayRate1P;                            // 0x0214(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SuccessfulHitBlendOutAnimTime1P;                          // 0x0218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SuccessfulHitPlayRate1P;                                  // 0x021C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0220(0x0008) MISSED OFFSET
	EAttackMove                                        ComingFromMove;                                           // 0x0228(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	class UParryMotion*                                ComingFromAsParry;                                        // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0238(0x0008) MISSED OFFSET
	struct FAttackInfo                                 AttackInfo;                                               // 0x0240(0x0110) (BlueprintVisible)
	struct FSpineSpaceAdditive                         TargetAdditive;                                           // 0x0350(0x0084)
	struct FSpineSpaceAdditive                         ReducedTargetAdditive;                                    // 0x03D4(0x0084)
	struct FSpineSpaceAdditive                         WindUpAdditive;                                           // 0x0458(0x0084)
	unsigned char                                      UnknownData08[0x24];                                      // 0x04DC(0x0024) MISSED OFFSET
	float                                              CounterCompensateOverheadFixupTerm;                       // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CounterCompensateOverheadFixupTiltTerm;                   // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CounterCompensateWeight;                                  // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTurnCompensation;                                      // 0x050C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CounterCompensateLookTime;                                // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngleTarget;                                              // 0x0514(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastReleaseNormalizedTime;                                // 0x0518(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastWindupNormalizedTime;                                 // 0x051C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0520(0x0004) MISSED OFFSET
	EAttackType                                        Type;                                                     // 0x0524(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttackMove                                        Move;                                                     // 0x0525(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x0526(0x0002) MISSED OFFSET
	float                                              WindupEnd;                                                // 0x0528(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReleaseEnd;                                               // 0x052C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x8];                                       // 0x0530(0x0008) MISSED OFFSET
	class UAnimMontage*                                Montage;                                                  // 0x0538(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           QueuedAnimFor3PRelease;                                   // 0x0540(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x8];                                       // 0x0548(0x0008) MISSED OFFSET
	class UAnimMontage*                                LeftTorsoMontage;                                         // 0x0550(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMordhauWeapon*                              Weapon;                                                   // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAttackMotion*                               PreviousLastAttackMotion;                                 // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasQueuedServerCombo;                                    // 0x0568(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0569(0x0003) MISSED OFFSET
	float                                              QueuedServerComboAngle;                                   // 0x056C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttackMove                                        QueuedServerComboMove;                                    // 0x0570(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasQueuedMove;                                           // 0x0571(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x0572(0x0002) MISSED OFFSET
	float                                              QueuedAngle;                                              // 0x0574(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttackMove                                        QueuedMove;                                               // 0x0578(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttackStage                                       Stage;                                                    // 0x0579(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasHit;                                                  // 0x057A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasHitIncludingCosmeticHit;                              // 0x057B(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FirstHitTime;                                             // 0x057C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FirstHitIncludingCosmeticReleaseNormalizedTime;           // 0x0580(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasChambered;                                            // 0x0584(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0xB];                                       // 0x0585(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.AttackMotion");
		return ptr;
	}


	void SetHasHitIncludingCosmeticHit();
};


// Class Mordhau.Badge
// 0x0008 (0x0060 - 0x0058)
class UBadge : public UMordhauInventoryItem
{
public:
	class UTexture2D*                                  Texture;                                                  // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.Badge");
		return ptr;
	}

};


// Class Mordhau.BlockedMotion
// 0x01B0 (0x0240 - 0x0090)
class UBlockedMotion : public UMordhauMotion
{
public:
	EAttackMove                                        FromMove;                                                 // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasQueuedMove;                                           // 0x0091(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0092(0x0002) MISSED OFFSET
	float                                              QueuedAngle;                                              // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	EAttackMove                                        QueuedMove;                                               // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	EBlockedReason                                     BlockedReason;                                            // 0x0099(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasFadedOutProcedural;                                   // 0x009A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDoReleaseBounceProcedural;                               // 0x009B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET
	class UAnimMontage*                                FromAttackMontage;                                        // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              QueueWindow;                                              // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              QueueWindowHit;                                           // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMovementRestriction                               MovementRestrictionHit;                                   // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMovementRestriction                               MovementRestrictionWorld;                                 // 0x00B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMovementRestriction                               OriginalMovementRestriction;                              // 0x00B2(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00B3(0x0001) MISSED OFFSET
	float                                              ClashFadeOutTime;                                         // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClashFadeOutTime3P;                                       // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StabWorldFadeOutTime;                                     // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StabWorldFadeOutTime3P;                                   // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StabParryMinMaxRange;                                     // 0x00C4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   StabParryFadeOutTime;                                     // 0x00CC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   StabParryMinMaxRange3P;                                   // 0x00D4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   StabParryFadeOutTime3P;                                   // 0x00DC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   StabChamberedMinMaxRange;                                 // 0x00E4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   StabChamberedFadeOutTime;                                 // 0x00EC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   StabChamberedMinMaxRange3P;                               // 0x00F4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   StabChamberedFadeOutTime3P;                               // 0x00FC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ParriedRecoveryTimeOffset;                                // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ParriedRecoveryTimeLimits;                                // 0x0108(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ChamberedRecoveryTimeOffset;                              // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ChamberedRecoveryTimeLimits;                              // 0x0114(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ProceduralHitStopBounceCurve;                             // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ProceduralHitStopBounceScaleCurve;                        // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ProceduralHitStopReleaseScaleCurve;                       // 0x0130(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ProceduralHitStopBounceCurve3P;                           // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ProceduralHitStopBounceScaleCurve3P;                      // 0x0140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ProceduralHitStopReleaseScaleCurve3P;                     // 0x0148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProceduralHitStopTimeUntilFade;                           // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProceduralHitStopBounceDuration;                          // 0x0154(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProceduralHitStopFadeOutTime;                             // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProceduralHitStopTimeUntilFade3P;                         // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProceduralHitStopBounceDuration3P;                        // 0x0160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProceduralHitStopFadeOutTime3P;                           // 0x0164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StabHitStopFadeOutTime;                                   // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StabHitStopFadeOutTime3P;                                 // 0x016C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KickHitStopBlendOutTime;                                  // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KickHitStopAnimRate;                                      // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RiposteParryRecoveryTime;                                 // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitStopRecoveryTime;                                      // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KickHitStopRecoveryTime;                                  // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitCancelRecoveryTime;                                    // 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WorldRecoveryTime;                                        // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClashedRecoveryTime;                                      // 0x018C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KickClashedRecoveryTime;                                  // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0194(0x0004) MISSED OFFSET
	class UCurveFloat*                                 ReleaseScaleCurve;                                        // 0x0198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ReleaseScaleCurve3P;                                      // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ProceduralParryMinMaxRange;                               // 0x01A8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ProceduralParryTimeUntilFade;                             // 0x01B0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ProceduralParryBounceDuration;                            // 0x01B8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ProceduralParryFadeOutTime;                               // 0x01C0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ProceduralChamberMinMaxRange;                             // 0x01C8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ProceduralChamberTimeUntilFade;                           // 0x01D0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ProceduralChamberBounceDuration;                          // 0x01D8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ProceduralChamberFadeOutTime;                             // 0x01E0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ProceduralWorldTimeUntilFade;                             // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProceduralWorldBounceDuration;                            // 0x01EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProceduralWorldFadeOutTime;                               // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ProceduralParryMinMaxRange3P;                             // 0x01F4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ProceduralParryTimeUntilFade3P;                           // 0x01FC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ProceduralParryBounceDuration3P;                          // 0x0204(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ProceduralParryFadeOutTime3P;                             // 0x020C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ProceduralChamberMinMaxRange3P;                           // 0x0214(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ProceduralChamberTimeUntilFade3P;                         // 0x021C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ProceduralChamberBounceDuration3P;                        // 0x0224(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ProceduralChamberFadeOutTime3P;                           // 0x022C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ProceduralWorldTimeUntilFade3P;                           // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProceduralWorldBounceDuration3P;                          // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProceduralWorldFadeOutTime3P;                             // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.BlockedMotion");
		return ptr;
	}

};


// Class Mordhau.BotBehaviorProfile
// 0x00B0 (0x00D8 - 0x0028)
class UBotBehaviorProfile : public UObject
{
public:
	int                                                DefaultTeam;                                              // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FriendlyFireVoiceChance;                                  // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HurtHelpVoiceChance;                                      // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WasDisarmedHelpVoiceChance;                               // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DisarmedLaughVoiceChance;                                 // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThanksOnAssistVoiceChance;                                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RespectOnKillVoiceChance;                                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                IgnoreEnemiesWithAllyCount;                               // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RangedAccuracyDegreesMinMax;                              // 0x0048(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   RangedAccuracyDistanceMinMax;                             // 0x0050(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bPrefersAltMode;                                          // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	float                                              BaseAttackHesitanceTime;                                  // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackHesitanceVariance;                                  // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RegularAttackProbability;                                 // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootworkInsteadOfParryProbability;                        // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootworkWithCrouchProbability;                            // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ParryTimingVariance;                                      // 0x0070(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              PerfectParryProbability;                                  // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeintTimingVariance;                                      // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallForFeintProbability;                                  // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ComboProbability;                                         // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DragProbability;                                          // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccelProbability;                                         // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChamberProbability;                                       // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MorphProbability;                                         // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GambleProbability;                                        // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeintProbability;                                         // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RiposteProbability;                                       // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrawlProbability;                                         // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxTurnRate;                                              // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxLookUpRate;                                            // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Random2DUnitVector;                                       // 0x00B0(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bWillBrawl;                                               // 0x00B8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWillRegularAttack;                                       // 0x00B9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWillRiposte;                                             // 0x00BA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWillFeint;                                               // 0x00BB(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWillGamble;                                              // 0x00BC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWillMorph;                                               // 0x00BD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWillChamber;                                             // 0x00BE(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWillAccel;                                               // 0x00BF(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWillDrag;                                                // 0x00C0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWillCombo;                                               // 0x00C1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWillFallForFeint;                                        // 0x00C2(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x00C3(0x0001) MISSED OFFSET
	float                                              FeintTimingRandom;                                        // 0x00C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWillPerfectParry;                                        // 0x00C8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00C9(0x0003) MISSED OFFSET
	float                                              ParryTimingRandom;                                        // 0x00CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWillFootwork;                                            // 0x00D0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWillFootworkWithCrouch;                                  // 0x00D1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x00D2(0x0002) MISSED OFFSET
	float                                              AttackHesitanceRandom;                                    // 0x00D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.BotBehaviorProfile");
		return ptr;
	}

};


// Class Mordhau.BotProfile
// 0x00C8 (0x00F0 - 0x0028)
class UBotProfile : public UObject
{
public:
	struct FString                                     BotName;                                                  // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                UseBotLoadoutProfileID;                                   // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FCharacterProfile                           CharacterProfile;                                         // 0x0040(0x00A0) (Edit, BlueprintVisible)
	class UClass*                                      BehaviorProfile;                                          // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomizeBehavior;                                       // 0x00E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomizeName;                                           // 0x00E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomizeAppearance;                                     // 0x00EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomizeFace;                                           // 0x00EB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomizeVoice;                                          // 0x00EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomizeSkills;                                         // 0x00ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomizeEquipment;                                      // 0x00EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomizeWearables;                                      // 0x00EF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.BotProfile");
		return ptr;
	}


	void AssignToController(class AMordhauAIController* Controller);
};


// Class Mordhau.BTTask_Experimental
// 0x0008 (0x0078 - 0x0070)
class UBTTask_Experimental : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.BTTask_Experimental");
		return ptr;
	}

};


// Class Mordhau.BTTask_FallForFeint
// 0x0000 (0x0070 - 0x0070)
class UBTTask_FallForFeint : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.BTTask_FallForFeint");
		return ptr;
	}

};


// Class Mordhau.BTTask_MeleeAttack
// 0x0000 (0x0070 - 0x0070)
class UBTTask_MeleeAttack : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.BTTask_MeleeAttack");
		return ptr;
	}

};


// Class Mordhau.BTTask_MeleeDefend
// 0x0000 (0x0070 - 0x0070)
class UBTTask_MeleeDefend : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.BTTask_MeleeDefend");
		return ptr;
	}

};


// Class Mordhau.BTTask_RangedAttack
// 0x0008 (0x0078 - 0x0070)
class UBTTask_RangedAttack : public UBTTaskNode
{
public:
	float                                              MaxProjectileFlightTime;                                  // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0074(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.BTTask_RangedAttack");
		return ptr;
	}

};


// Class Mordhau.BTTask_SwitchEquipment
// 0x0028 (0x0098 - 0x0070)
class UBTTask_SwitchEquipment : public UBTTaskNode
{
public:
	bool                                               bMelee;                                                   // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	TArray<class UClass*>                              AllowedSubclasses;                                        // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              NotAllowedSubclasses;                                     // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.BTTask_SwitchEquipment");
		return ptr;
	}

};


// Class Mordhau.BTTask_VoiceOrEmote
// 0x0030 (0x00A0 - 0x0070)
class UBTTask_VoiceOrEmote : public UBTTaskNode
{
public:
	TArray<unsigned char>                              VoiceCommandsList;                                        // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<unsigned char>                              EmotesList;                                               // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bForceEmote;                                              // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              GlobalCooldown;                                           // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Chance;                                                   // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.BTTask_VoiceOrEmote");
		return ptr;
	}

};


// Class Mordhau.CapturePointBanner
// 0x0028 (0x0350 - 0x0328)
class ACapturePointBanner : public AActor
{
public:
	class AControlPoint*                               ControlPoint;                                             // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CaptureProgress;                                          // 0x0330(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                RopeMaterialIndex;                                        // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlagMaterialIndex;                                        // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RopeSpeed;                                                // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    RopeMaterialInstance;                                     // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    FlagMaterialInstance;                                     // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.CapturePointBanner");
		return ptr;
	}


	void UpdateVisuals();
	void InitializeBanner(class AControlPoint* OwningPoint);
};


// Class Mordhau.MordhauVehicle
// 0x00D0 (0x0CA0 - 0x0BD0)
class AMordhauVehicle : public AAdvancedCharacter
{
public:
	bool                                               bWasEverDriven;                                           // 0x0BD0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0BD1(0x0003) MISSED OFFSET
	float                                              CurrentUnusedTime;                                        // 0x0BD4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTickDriverAnimsAfterOurs;                                // 0x0BD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseVisualPingCompensationOnAttacks;                      // 0x0BD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWillDieIfUnused;                                         // 0x0BDA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0BDB(0x0001) MISSED OFFSET
	float                                              MinTimeToStartUnusedDying;                                // 0x0BDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnusedDyingHealthReduction;                               // 0x0BE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0BE1(0x0003) MISSED OFFSET
	float                                              UnusedDyingHealthReductionInterval;                       // 0x0BE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanDriverRegenHealth;                                    // 0x0BE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanDriverRegenStamina;                                   // 0x0BE9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0BEA(0x0002) MISSED OFFSET
	float                                              MinimumInteractableVelocity;                              // 0x0BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceCorrectionForLeaveSpot;                        // 0x0BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableCameraDistance;                                   // 0x0BF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDriverTurnCaps;                                       // 0x0BF5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCounteractTurnWithSecondaryTurn;                         // 0x0BF6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bResetSecondaryTurnWhenNoDriver;                          // 0x0BF7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bResetLookUpWhenNoDriver;                                 // 0x0BF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0BF9(0x0003) MISSED OFFSET
	float                                              SecondaryTurnValue;                                       // 0x0BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              SecondaryTurnLimit;                                       // 0x0C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReplicatedSecondaryTurnValue;                             // 0x0C04(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0C05(0x0003) MISSED OFFSET
	float                                              SecondaryTurnValueSmoothingTarget;                        // 0x0C08(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SecondaryTurnValueSmoothingFrom;                          // 0x0C0C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SecondaryTurnValueSmoothingStartTime;                     // 0x0C10(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0C14(0x0004) MISSED OFFSET
	class AMordhauCharacter*                           Driver;                                                   // 0x0C18(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FText                                       VehicleName;                                              // 0x0C20(0x0018) (Edit, BlueprintVisible)
	struct FName                                       AttachSocketName;                                         // 0x0C38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  AttachSocketOffset;                                       // 0x0C40(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       DetachSocketName;                                         // 0x0C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseDetachRotation;                                       // 0x0C78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLeaveOnDamage;                                           // 0x0C79(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisarmOnEnter;                                           // 0x0C7A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x0C7B(0x0005) MISSED OFFSET
	struct FName                                       MainAnimationType;                                        // 0x0C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinXYDistanceToEnter;                                     // 0x0C88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MinZDistanceToEnter;                                      // 0x0C8C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData08[0xC];                                       // 0x0C94(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauVehicle");
		return ptr;
	}


	void UpdateFPCameraFor(class AMordhauCharacter* Character, float DeltaSeconds, bool bRotationOnly);
	void UpdateAnimationFor(class AMordhauCharacter* Character, class UMordhauAnimInstance* AnimInst, float DeltaTime);
	void StopDriving();
	void StartDriving(class AMordhauCharacter* Character);
	void SetDriver(class AMordhauCharacter* NewDriver);
	void ServerSecondaryTurn(float NewTurn);
	void SecondaryTurnAtRate(float Value);
	void SecondaryTurn(float Value, bool bIsAbsolute);
	void RequestUse();
	struct FPOV PostProcessCameraPOV(const struct FPOV& InPOV);
	float OverrideAttackAngle(class UAttackMotion* Motion);
	void OnStoppedDriving(class AMordhauCharacter* Character);
	void OnStartedDriving(class AMordhauCharacter* Character);
	void OnRep_ReplicatedSecondaryTurnValue();
	void KnockOffDriver(class AMordhauCharacter* Character);
	struct FVehicleTransitionInfo GetVehicleLeaveInfo(class AMordhauCharacter* Character, const struct FTransform& FromTransform);
	struct FVehicleTransitionInfo GetVehicleEnterInfo(class AMordhauCharacter* Character, const struct FTransform& FromTransform);
	struct FTransform GetExitTransform();
	void DriverLateTick(class AMordhauCharacter* FromDriver, float DeltaTime);
	bool CanDrive(class AMordhauCharacter* Character);
};


// Class Mordhau.MordhauCompoundVehicle
// 0x0000 (0x0CA0 - 0x0CA0)
class AMordhauCompoundVehicle : public AMordhauVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauCompoundVehicle");
		return ptr;
	}

};


// Class Mordhau.Catapult
// 0x0000 (0x0CA0 - 0x0CA0)
class ACatapult : public AMordhauCompoundVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.Catapult");
		return ptr;
	}

};


// Class Mordhau.CharacterFace
// 0x00B0 (0x0108 - 0x0058)
class UCharacterFace : public UMordhauInventoryItem
{
public:
	class USkeletalMesh*                               Mesh;                                                     // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Normal;                                                   // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  AgedNormal;                                               // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  PBRMap;                                                   // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Albedo;                                                   // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EyebrowOffset;                                            // 0x0080(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     EyebrowScale;                                             // 0x008C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     EyebrowDistance;                                          // 0x0098(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              EyebrowRotation;                                          // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BloodOffsetA;                                             // 0x00A8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BloodOffsetB;                                             // 0x00B4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BloodMaskSizeFine;                                        // 0x00C0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BloodMaskSizeSoft;                                        // 0x00CC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BloodTextureSize;                                         // 0x00D8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              Hair;                                                     // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              FacialHair;                                               // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.CharacterFace");
		return ptr;
	}

};


// Class Mordhau.CharacterHair
// 0x0018 (0x0070 - 0x0058)
class UCharacterHair : public UMordhauInventoryItem
{
public:
	class USkeletalMesh*                               Mesh;                                                     // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Albedo;                                                   // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Normal;                                                   // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.CharacterHair");
		return ptr;
	}

};


// Class Mordhau.CharacterProfileBPWrapper
// 0x00A0 (0x00C8 - 0x0028)
class UCharacterProfileBPWrapper : public UObject
{
public:
	struct FCharacterProfile                           Profile;                                                  // 0x0028(0x00A0) (BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.CharacterProfileBPWrapper");
		return ptr;
	}


	void TogglePerk(unsigned char Perk);
	void SetWearablePattern(unsigned char Slot, unsigned char NewPattern);
	void SetWearableId(unsigned char Slot, unsigned char NewId);
	void SetWearableColor(unsigned char Slot, unsigned char ColorIdx, unsigned char NewColor);
	void SetVoicePitch(unsigned char NewValue);
	void SetVoice(unsigned char NewValue);
	void SetStrong(unsigned char NewValue);
	void SetSkinny(unsigned char NewValue);
	void SetSkinColor(unsigned char NewValue);
	void SetProfileName(const struct FText& NewName);
	void SetMetalTint(unsigned char NewValue);
	void SetMetalRoughnessScale(unsigned char NewValue);
	void SetIsFemale(bool bNewValue);
	void SetHairColor(unsigned char NewValue);
	void SetHair(unsigned char NewValue);
	void SetFat(unsigned char NewValue);
	void SetFacialHair(unsigned char NewValue);
	void SetFace(unsigned char NewValue);
	void SetEyeColor(unsigned char NewValue);
	void SetEyebrows(unsigned char NewValue);
	void SetEquipmentSkin(unsigned char Slot, unsigned char NewSkin);
	void SetEquipmentPattern(unsigned char Slot, unsigned char NewPattern);
	void SetEquipmentPartId(unsigned char Slot, unsigned char PartIdx, unsigned char NewPartId);
	void SetEquipmentId(unsigned char Slot, unsigned char NewId);
	void SetEquipmentCustomizationDirect(unsigned char Slot, const struct FEquipmentCustomization& NewCustomization);
	void SetEquipmentColor(unsigned char Slot, unsigned char ColorIdx, unsigned char NewColor);
	void SetEmblemColor(unsigned char ColorIdx, unsigned char NewValue);
	void SetEmblem(unsigned char NewValue);
	void SetAge(unsigned char NewValue);
	void RemoveAllEquipment();
	bool HasPerk(unsigned char Perk);
	void ForceValidate();
};


// Class Mordhau.CharacterVoice
// 0x0048 (0x00A0 - 0x0058)
class UCharacterVoice : public UMordhauInventoryItem
{
public:
	class USoundCue*                                   VoiceCommands;                                            // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Hurt;                                                     // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Death;                                                    // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   AttackYell;                                               // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Breathing;                                                // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   Screaming;                                                // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PitchLimits;                                              // 0x0088(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<int>                                        ClipCounts;                                               // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.CharacterVoice");
		return ptr;
	}

};


// Class Mordhau.ClimbingMotion
// 0x0078 (0x0108 - 0x0090)
class UClimbingMotion : public UMordhauMotion
{
public:
	class USoundCue*                                   ClimbSound;                                               // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ClimbRecoveryDuration;                                    // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AuthorityMoveUpStartTime;                                 // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AuthorityMoveLateralStartTime;                            // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AuthorityMoveLateralDuration;                             // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlowClimbRecoveryDuration;                                // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlowAuthorityMoveUpStartTime;                             // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlowAuthorityMoveLateralStartTime;                        // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlowAuthorityMoveLateralDuration;                         // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TurnCaps;                                                 // 0x00B8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bIsSlowClimb;                                             // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	struct FVector                                     ClimbOffset;                                              // 0x00C4(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     LedgeOffset;                                              // 0x00D0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     LedgeNormal;                                              // 0x00DC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     ClimbStartMeshLocation;                                   // 0x00E8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     AuthMoveStartLocation;                                    // 0x00F4(0x000C) (IsPlainOldData)
	bool                                               bIsAuthMovingUp;                                          // 0x0100(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsAuthMovingLaterally;                                   // 0x0101(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0102(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.ClimbingMotion");
		return ptr;
	}

};


// Class Mordhau.ComboBoxText
// 0x0BC0 (0x0CC0 - 0x0100)
class UComboBoxText : public UWidget
{
public:
	TArray<struct FText>                               DefaultOptions;                                           // 0x0100(0x0010) (Edit, ZeroConstructor)
	struct FText                                       SelectedOption;                                           // 0x0110(0x0018) (Edit)
	struct FComboBoxStyle                              WidgetStyle;                                              // 0x0128(0x03D8) (Edit, BlueprintVisible)
	struct FTableRowStyle                              ItemStyle;                                                // 0x0500(0x06B8) (Edit, BlueprintVisible)
	struct FMargin                                     ContentPadding;                                           // 0x0BB8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              MaxListHeight;                                            // 0x0BC8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               HasDownArrow;                                             // 0x0BCC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               EnableGamepadNavigationMode;                              // 0x0BCD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0BCE(0x0002) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x0BD0(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0C20(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsFocusable;                                             // 0x0C48(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0C49(0x0007) MISSED OFFSET
	struct FScriptDelegate                             OnGenerateWidgetEvent;                                    // 0x0C50(0x0010) (Edit, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnSelectionChanged;                                       // 0x0C60(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnOpening;                                                // 0x0C70(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x40];                                      // 0x0C80(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.ComboBoxText");
		return ptr;
	}


	void SetSelectedOption(const struct FText& Option);
	bool RemoveOption(const struct FText& Option);
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature(const struct FText& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);
	void OnOpeningEvent__DelegateSignature();
	struct FText GetSelectedOption();
	int GetOptionCount();
	struct FText GetOptionAtIndex(int Index);
	int FindOptionIndex(const struct FText& Option);
	void ClearSelection();
	void ClearOptions();
	void AddOption(const struct FText& Option);
};


// Class Mordhau.CompoundVehicleAnimInstance
// 0x0000 (0x0430 - 0x0430)
class UCompoundVehicleAnimInstance : public UAdvancedCharacterAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.CompoundVehicleAnimInstance");
		return ptr;
	}

};


// Class Mordhau.ControlPoint
// 0x0110 (0x0438 - 0x0328)
class AControlPoint : public AActor
{
public:
	TArray<class AActor*>                              OverlapsCache;                                            // 0x0328(0x0010) (ZeroConstructor)
	struct FText                                       Name;                                                     // 0x0338(0x0018) (Edit, BlueprintVisible)
	bool                                               bIsHiddenPoint;                                           // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCapturable;                                            // 0x0351(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTeam1OwnsPrerequisites;                                  // 0x0352(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bTeam2OwnsPrerequisites;                                  // 0x0353(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSpawnsDisabled;                                          // 0x0354(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0355(0x0003) MISSED OFFSET
	class UMaterialInstanceDynamic*                    DecalMaterialInstance;                                    // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                SpawnsTeam;                                               // 0x0360(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpawnsToken;                                              // 0x0364(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMordhauWidgetComponent*                     WidgetComponent;                                          // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bDoNotShowFloaterWidget;                                  // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0371(0x0007) MISSED OFFSET
	class UMaterialInterface*                          UIMaterial;                                               // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    UIMaterialInstance;                                       // 0x0380(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LastSetUIIconColor;                                       // 0x0388(0x0010) (IsPlainOldData)
	struct FLinearColor                                LastSetUIBorderColor;                                     // 0x0398(0x0010) (IsPlainOldData)
	float                                              LastSetUIProgress;                                        // 0x03A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              AwardScoreInterval;                                       // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AwardScoreCapturing;                                      // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AwardScoreCaptured;                                       // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AwardScoreNeutralizing;                                   // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AwardScoreNeutralized;                                    // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ACapturePointBanner*>                 Banners;                                                  // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UPrimitiveComponent*                         CaptureArea;                                              // 0x03D0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              CaptureProgress;                                          // 0x03D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBannersDoNotAnimateCaptureProgress;                      // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReplicatedCaptureProgress;                                // 0x03DD(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03DE(0x0002) MISSED OFFSET
	float                                              NetworkSmoothTime;                                        // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      OwningTeam;                                               // 0x03E4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CapturingTeam;                                            // 0x03E5(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x03E6(0x0002) MISSED OFFSET
	TArray<class AControlPoint*>                       Team1PrerequisitePoints;                                  // 0x03E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AControlPoint*>                       Team2PrerequisitePoints;                                  // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AMordhauPlayerStart*>                 SpawnPoints;                                              // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Team1Presence;                                            // 0x0418(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Team2Presence;                                            // 0x041C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFlashing;                                              // 0x0420(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventSpawningIfContested;                              // 0x0421(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasEverReplicatedProgress;                               // 0x0422(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0423(0x0001) MISSED OFFSET
	float                                              UncaptureSpeed;                                           // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 NeutralizeSpeedCurve;                                     // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CaptureSpeedCurve;                                        // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.ControlPoint");
		return ptr;
	}


	void UpdateVisuals();
	void UpdateUIWidgets();
	void UpdateUIMaterialInstance();
	void UpdatePresenceNumbers();
	void UpdateCaptureProgress(float DeltaTime);
	void SetCaptureProgress(float NewProgress, unsigned char NewCaptor, bool bAwardScore);
	void OnStoppedFlashing();
	void OnStartedFlashing();
	void OnRep_ReplicatedCaptureProgress();
	void OnRep_OwningTeam();
	void OnRep_CapturingTeam();
	void OnOwningTeamChanged();
	void OnCapturingTeamChanged();
	void OnCaptureAreaEndOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnCaptureAreaBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void EnemyLostPrerequisites();
	void EnemyGainedPrerequisites();
	bool CanCapture(unsigned char Team);
};


// Class Mordhau.CouchedAttackMotion
// 0x0148 (0x01D8 - 0x0090)
class UCouchedAttackMotion : public UMordhauMotion
{
public:
	class UAnimMontage*                                WindUpMontage;                                            // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMordhauWeapon*                              Weapon;                                                   // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              CouchingBlendFrom;                                        // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CouchStage;                                               // 0x00A4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A5(0x0003) MISSED OFFSET
	float                                              CouchStart;                                               // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxCouchTime;                                             // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecoveryDuration;                                         // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInRecovery;                                            // 0x00B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	struct FAttackInfo                                 AttackInfo;                                               // 0x00B8(0x0110)
	float                                              OriginalSecondaryTurnLimit;                               // 0x01C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AHorse>                       HorsePtr;                                                 // 0x01CC(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x01D4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.CouchedAttackMotion");
		return ptr;
	}

};


// Class Mordhau.CreatureAnimInstance
// 0x00B0 (0x04E0 - 0x0430)
class UCreatureAnimInstance : public UAdvancedCharacterAnimInstance
{
public:
	TArray<struct FFootGroundingLimb>                  GroundingLimbs;                                           // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bComputeGroundingRotation;                                // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	float                                              FootstepEffectsMaxCameraDist;                             // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootstepLODDistance;                                      // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FootstepVolumeVelocityRangeIn;                            // 0x044C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   FootstepVolumeVelocityRangeOut;                           // 0x0454(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   FootstepPitchVelocityRangeIn;                             // 0x045C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   FootstepPitchVelocityRangeOut;                            // 0x0464(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FootstepVolumeModifierSelf;                               // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootstepVolumeModifierAlly;                               // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FootstepSoundZOffset;                                     // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FootstepDecalSize;                                        // 0x0478(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0484(0x0004) MISSED OFFSET
	TArray<class UMaterialInterface*>                  FootstepDecals;                                           // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UParticleSystem*>                     FootstepParticles;                                        // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x04A8(0x0008) MISSED OFFSET
	float                                              LandOffsetBlendInTime;                                    // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LandOffsetBlendInSpeed;                                   // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LandOffsetBlendOutSpeed;                                  // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LandOffset;                                               // 0x04BC(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bDoNotAddLandOffsetToGrounding;                           // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04C9(0x0007) MISSED OFFSET
	class UCurveFloat*                                 LandOffsetFactorByAirTime;                                // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x04D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.CreatureAnimInstance");
		return ptr;
	}


	void OnFootstep(int Limb, int SurfaceType);
	void DoFootstep(int Limb);
};


// Class Mordhau.CustomizationReplicationActor
// 0x01D8 (0x0500 - 0x0328)
class ACustomizationReplicationActor : public AActor
{
public:
	struct FCharacterProfile                           LastAssignedProfile;                                      // 0x0328(0x00A0) (BlueprintVisible, BlueprintReadOnly)
	TArray<TWeakObjectPtr<class AMordhauCharacter>>    RegisteredCharacters;                                     // 0x03C8(0x0010) (ZeroConstructor)
	bool                                               bHasReplicatedAnything;                                   // 0x03D8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bWasEverAssigned;                                         // 0x03D9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bWillDestroyOnUnregister;                                 // 0x03DA(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x03DB(0x0005) MISSED OFFSET
	class USkeletalMesh*                               Cached1PMesh;                                             // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               Cached1PDeadMesh;                                         // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               CachedUnifiedMesh;                                        // 0x03F0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FRepArrayShortWithVersion                   ReplicatedFaceBonesTranslate;                             // 0x03F8(0x0018) (Net)
	struct FRepArrayShortWithVersion                   ReplicatedFaceBonesRotate;                                // 0x0410(0x0018) (Net)
	struct FRepArrayShortWithVersion                   ReplicatedFaceBonesScale;                                 // 0x0428(0x0018) (Net)
	struct FRepArrayAppearanceWithVersion              ReplicatedAppearanceCustomization;                        // 0x0440(0x0030) (Net)
	struct FRepArraySkillsWithVersion                  ReplicatedSkillsCustomization;                            // 0x0470(0x0008) (Net)
	struct FRepArrayByteWithVersion                    ReplicatedDefaultEquipmentId;                             // 0x0478(0x0018) (Net)
	TArray<class UClass*>                              DefaultEquipment;                                         // 0x0490(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FRepArrayByteWithVersion                    ReplicatedWearableId;                                     // 0x04A0(0x0018) (Net)
	struct FRepArrayByteWithVersion                    ReplicatedWearableColor1;                                 // 0x04B8(0x0018) (Net)
	struct FRepArrayByteWithVersion                    ReplicatedWearableColor2;                                 // 0x04D0(0x0018) (Net)
	struct FRepArrayByteWithVersion                    ReplicatedWearablePattern;                                // 0x04E8(0x0018) (Net)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.CustomizationReplicationActor");
		return ptr;
	}


	void UpdateCharacterProfile(class AMordhauCharacter* Character);
	void UnregisterCharacter(class AMordhauCharacter* Character);
	void TriggerUpdateIfUpToDate();
	void RegisterCharacter(class AMordhauCharacter* Character);
	void OnRep_ReplicatedWearablePattern();
	void OnRep_ReplicatedWearableId();
	void OnRep_ReplicatedWearableColor2();
	void OnRep_ReplicatedWearableColor1();
	void OnRep_ReplicatedSkillsCustomization();
	void OnRep_ReplicatedFaceBonesTranslate();
	void OnRep_ReplicatedFaceBonesScale();
	void OnRep_ReplicatedFaceBonesRotate();
	void OnRep_ReplicatedDefaultEquipmentId();
	void OnRep_ReplicatedAppearanceCustomization();
	bool IsUpToDate();
	void AssignDataFromProfile(const struct FCharacterProfile& Profile);
};


// Class Mordhau.DisarmedMotion
// 0x0008 (0x0098 - 0x0090)
class UDisarmedMotion : public UMordhauMotion
{
public:
	float                                              RecoveryTime;                                             // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0094(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.DisarmedMotion");
		return ptr;
	}

};


// Class Mordhau.DropEquipmentMotion
// 0x0020 (0x00B0 - 0x0090)
class UDropEquipmentMotion : public UMordhauMotion
{
public:
	bool                                               bIsDroppingRightHand;                                     // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	class AMordhauEquipment*                           DroppingEquipment;                                        // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              DropTime;                                                 // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasDropped;                                              // 0x00AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.DropEquipmentMotion");
		return ptr;
	}

};


// Class Mordhau.Emblem
// 0x0008 (0x0060 - 0x0058)
class UEmblem : public UMordhauInventoryItem
{
public:
	class UTexture2D*                                  Texture;                                                  // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.Emblem");
		return ptr;
	}

};


// Class Mordhau.EmoteCancelMotion
// 0x0000 (0x0090 - 0x0090)
class UEmoteCancelMotion : public UMordhauMotion
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.EmoteCancelMotion");
		return ptr;
	}

};


// Class Mordhau.EmoteMotion
// 0x0070 (0x0100 - 0x0090)
class UEmoteMotion : public UMordhauMotion
{
public:
	float                                              Duration;                                                 // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CanEmoteAfter;                                            // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CancelTime;                                               // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CancelBlendTime;                                          // 0x009C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   TurnCaps;                                                 // 0x00A0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	class UAnimMontage*                                TransitionInMontage;                                      // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                TransitionOutMontage;                                     // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartMontageTime;                                         // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartTransitionOutMontageTime;                            // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForce3P;                                                 // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideLeftHand;                                            // 0x00C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideRightHand;                                           // 0x00CA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnequipLeftHand;                                         // 0x00CB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnequipRightHand;                                        // 0x00CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDropLeftHand;                                            // 0x00CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00CE(0x0002) MISSED OFFSET
	struct FVector                                     LeftHandDropForce;                                        // 0x00D0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bDropRightHand;                                           // 0x00DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00DD(0x0003) MISSED OFFSET
	struct FVector                                     RightHandDropForce;                                       // 0x00E0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bWasIn1P;                                                 // 0x00EC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasStartedMainMontage;                                   // 0x00ED(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasStartedMainMontageTransitionOut;                      // 0x00EE(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x00EF(0x0001) MISSED OFFSET
	TWeakObjectPtr<class AMordhauEquipment>            HidLeft;                                                  // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AMordhauEquipment>            HidRight;                                                 // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.EmoteMotion");
		return ptr;
	}


	void DoDrop(class AMordhauEquipment* Equipment, const struct FVector& Force);
};


// Class Mordhau.EmoteSwitcherMotion
// 0x0008 (0x0098 - 0x0090)
class UEmoteSwitcherMotion : public UMordhauMotion
{
public:
	unsigned char                                      SwitchToID;                                               // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.EmoteSwitcherMotion");
		return ptr;
	}

};


// Class Mordhau.EnterVehicleMotion
// 0x0000 (0x0090 - 0x0090)
class UEnterVehicleMotion : public UMordhauMotion
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.EnterVehicleMotion");
		return ptr;
	}

};


// Class Mordhau.EnvironmentMovable
// 0x0030 (0x0358 - 0x0328)
class AEnvironmentMovable : public AActor
{
public:
	ESwayMethod                                        SwayMethod;                                               // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	TWeakObjectPtr<class USceneComponent>              SwayingComponent;                                         // 0x032C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     RollPitchYawFrequency;                                    // 0x0334(0x000C) (IsPlainOldData)
	struct FVector                                     RollPitchYawMagnitude;                                    // 0x0340(0x000C) (IsPlainOldData)
	struct FVector                                     RollPitchYawSpeed;                                        // 0x034C(0x000C) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.EnvironmentMovable");
		return ptr;
	}


	void InitializeMovable(class USceneComponent* InSwayingComponent, const struct FVector& InRollPitchYawFrequency, const struct FVector& InRollPitchYawMagnitude, const struct FVector& InRollPitchYawSpeed);
};


// Class Mordhau.EnvQueryGenerator_Equipment
// 0x0008 (0x0058 - 0x0050)
class UEnvQueryGenerator_Equipment : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.EnvQueryGenerator_Equipment");
		return ptr;
	}

};


// Class Mordhau.EnvQueryGenerator_Objectives
// 0x0008 (0x0058 - 0x0050)
class UEnvQueryGenerator_Objectives : public UEnvQueryGenerator
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.EnvQueryGenerator_Objectives");
		return ptr;
	}

};


// Class Mordhau.EnvQueryTest_Objectives
// 0x0008 (0x01C8 - 0x01C0)
class UEnvQueryTest_Objectives : public UEnvQueryTest
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.EnvQueryTest_Objectives");
		return ptr;
	}

};


// Class Mordhau.EquipmentModeSwitchMotion
// 0x0050 (0x00E0 - 0x0090)
class UEquipmentModeSwitchMotion : public UMordhauMotion
{
public:
	float                                              Stage1Duration;                                           // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Stage2Duration;                                           // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMordhauEquipment*                           SwitchingEquipment;                                       // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     VirtualReparentLocation;                                  // 0x00A8(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00B4(0x000C) MISSED OFFSET
	struct FQuat                                       VirtualReparentRotation;                                  // 0x00C0(0x0010) (IsPlainOldData)
	bool                                               bIsSwitchingToAlt;                                        // 0x00D0(0x0001) (ZeroConstructor, IsPlainOldData)
	EModeSwitchType                                    SwitchType;                                               // 0x00D1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x00D2(0x0002) MISSED OFFSET
	float                                              FirstStageEnd;                                            // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SecondStageEnd;                                           // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Stage;                                                    // 0x00DC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasFinishedSwitch;                                       // 0x00DD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x00DE(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.EquipmentModeSwitchMotion");
		return ptr;
	}

};


// Class Mordhau.EquipmentSwitchMotion
// 0x0038 (0x00C8 - 0x0090)
class UEquipmentSwitchMotion : public UMordhauMotion
{
public:
	bool                                               bHasFinishedSwitch;                                       // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SwitchingToSlot;                                          // 0x0091(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0092(0x0002) MISSED OFFSET
	TWeakObjectPtr<class AMordhauEquipment>            SwitchingTo;                                              // 0x0094(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AMordhauEquipment>            HiddenLeft;                                               // 0x009C(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AMordhauEquipment>            HiddenRight;                                              // 0x00A4(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
	class UAnimMontage*                                Montage;                                                  // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              ReachEnd;                                                 // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	ESwitchStage                                       Stage;                                                    // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	float                                              LocalVirtualReparentStart;                                // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.EquipmentSwitchMotion");
		return ptr;
	}


	class AMordhauEquipment* GetSwitchingTo();
};


// Class Mordhau.FeintedMotion
// 0x0038 (0x00C8 - 0x0090)
class UFeintedMotion : public UMordhauMotion
{
public:
	float                                              SpineSpaceAdditiveBlendOutTime;                           // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              QueueWindow;                                              // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CouchFeintLockout;                                        // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   StrikeAndStabLockoutIn;                                   // 0x009C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   StrikeAndStabLockoutOut;                                  // 0x00A4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x00AC(0x000C) MISSED OFFSET
	EFeintType                                         Type;                                                     // 0x00B8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttackMove                                        FromMove;                                                 // 0x00B9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasQueuedMove;                                           // 0x00BA(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttackMove                                        QueuedMove;                                               // 0x00BB(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              QueuedAngle;                                              // 0x00BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.FeintedMotion");
		return ptr;
	}

};


// Class Mordhau.FieldSpawnComponent
// 0x0020 (0x0260 - 0x0240)
class UFieldSpawnComponent : public USceneComponent
{
public:
	bool                                               bSnapLocationToGround;                                    // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapLocationToGroundDestroyIfNoGround;                   // 0x0241(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapRotationToGroundNormal;                              // 0x0242(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0243(0x0001) MISSED OFFSET
	float                                              MaxAllowedRotation;                                       // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SnapGroundTraceOffsetZ;                                   // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SnapGroundRadius;                                         // 0x024C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDistanceSnapGround;                                    // 0x0250(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldCheckLineOfSight;                                  // 0x0254(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0255(0x0003) MISSED OFFSET
	float                                              LineOfSightRadiusCheck;                                   // 0x0258(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x025C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.FieldSpawnComponent");
		return ptr;
	}

};


// Class Mordhau.MordhauActor
// 0x0138 (0x0460 - 0x0328)
class AMordhauActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0328(0x0001) MISSED OFFSET
	unsigned char                                      ReplicatedThud;                                           // 0x0329(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x032A(0x0006) MISSED OFFSET
	class USoundCue*                                   ThudSound;                                                // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ThudPitchMultiplierRange;                                 // 0x0338(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ThudVolumeMultiplierRange;                                // 0x0340(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bShouldReplicateThud;                                     // 0x0348(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	float                                              ThudMinVelocity;                                          // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThudMaxVelocity;                                          // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDelayBetweenThuds;                                     // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NoThudUntilTime;                                          // 0x0358(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x035C(0x0004) MISSED OFFSET
	bool                                               bPreventClimbing;                                         // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0361(0x0007) MISSED OFFSET
	struct FStatInt                                    KillsStat;                                                // 0x0368(0x0018) (Edit, BlueprintVisible)
	bool                                               bIgnoresBleedOut;                                         // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceLongDeathYell;                                      // 0x0381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveCosmeticHits;                                     // 0x0382(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0383(0x0001) MISSED OFFSET
	float                                              RagdollForceMultiplier;                                   // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceRagdollOnDeath;                                     // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	float                                              ReplayPriorityFactor;                                     // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastClientsideLocation;                                   // 0x0390(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	struct FQuat                                       LastClientsideRotation;                                   // 0x03A0(0x0010) (BlueprintVisible, IsPlainOldData)
	float                                              InterpolationSmoothTime;                                  // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSmoothNetworkMovement;                                   // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	class UClass*                                      InteractionWidgetComponentClass;                          // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InteractionWidgetClass;                                   // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       HeldInteractionText;                                      // 0x03C8(0x0018) (Edit, BlueprintVisible)
	struct FText                                       InteractionText;                                          // 0x03E0(0x0018) (Edit, BlueprintVisible)
	bool                                               bNoInteractionWidgetWhenAttachedToChar;                   // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x03F9(0x0007) MISSED OFFSET
	struct FTransform                                  InteractionWidgetRelativeTransform;                       // 0x0400(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bAutoDetermineWidgetTransform;                            // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0431(0x0007) MISSED OFFSET
	class UMordhauWidgetComponent*                     InteractionWidgetComponent;                               // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bPerformCustomDepthHighlight;                             // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHighlighted;                                           // 0x0441(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0442(0x0002) MISSED OFFSET
	float                                              MaxInteractWithDistance;                                  // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInteractable;                                          // 0x0448(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsPassivelyInteractable;                                 // 0x0449(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x044A(0x0002) MISSED OFFSET
	float                                              MaxInteractionHoldTime;                                   // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastLocallyRequestedPassiveInteractionTime;               // 0x0450(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0xC];                                       // 0x0454(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauActor");
		return ptr;
	}


	void UpdateThudVelocity(float NewThudVelocity);
	void UnHighlight();
	void PostInteractionWidgetCreated();
	void OnUsedToKillOther(class AAdvancedCharacter* Character, EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source);
	void OnThud();
	void OnRep_ReplicatedThud();
	void OnReceiveCosmeticHit(class AActor* Source, class AActor* Agent, EAttackMove Move, const struct FHitResult& Hit);
	void OnPostDismemberedOther(const struct FName& bone, class ASeparatedBodyPart* Part);
	void OnLocalPlayerUsedToKillOther(class AAdvancedCharacter* Character, EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source);
	void OnInteractPassively(class AMordhauCharacter* Character);
	void OnInteractionStart(class AMordhauCharacter* Character);
	void OnInteractionEnd();
	void OnHighlightStart();
	void OnHighlightEnd();
	void OnHeldInteractionStart(class AMordhauCharacter* Character);
	void InteractPassively(class AMordhauCharacter* Character);
	void InteractionStart(class AMordhauCharacter* Character);
	void InteractionEnd();
	void Highlight();
	void HeldInteractionStart(class AMordhauCharacter* Character);
	bool CanInteractPassively(class AMordhauCharacter* Character);
	bool CanInteract(class AMordhauCharacter* Character);
	bool CanHeldInteract(class AMordhauCharacter* Character);
};


// Class Mordhau.MordhauEquipment
// 0x0830 (0x0C90 - 0x0460)
class AMordhauEquipment : public AMordhauActor
{
public:
	bool                                               bForceRefPoseOnMesh;                                      // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	float                                              CreatedRealTime;                                          // 0x0464(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0468(0x0008) MISSED OFFSET
	struct FTransform                                  DefaultMeshRelativeTransform;                             // 0x0470(0x0030) (BlueprintVisible, IsPlainOldData)
	int                                                HideInGameOverride;                                       // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x04A4(0x000C) MISSED OFFSET
	struct FTransform                                  EquippedOffset;                                           // 0x04B0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUseEquippedOffset;                                       // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanThrowPommel;                                          // 0x04E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondUseEquippedOffset;                                 // 0x04E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHeldInHand;                                            // 0x04E3(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsParentInFirstPerson;                                   // 0x04E4(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04E5(0x0003) MISSED OFFSET
	struct FName                                       AttachedToSocket;                                         // 0x04E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsToRebuildParts;                                     // 0x04F0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LastOwnerTeam;                                            // 0x04F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bForceTeamColor1;                                         // 0x04F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceTeamColor2;                                         // 0x04F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasColor1;                                               // 0x04F4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasColor2;                                               // 0x04F5(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasColor3;                                               // 0x04F6(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x04F7(0x0001) MISSED OFFSET
	TArray<class UMordhauEquipmentPart*>               PartInstances;                                            // 0x04F8(0x0010) (BlueprintVisible, ZeroConstructor)
	TWeakObjectPtr<class AMordhauCharacter>            ParentCharacter;                                          // 0x0508(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bWasLastParentCharacterLocalPlayer;                       // 0x0510(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHeldInteractIsSwap;                                      // 0x0511(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EEquipmentType                                     EquipmentUIType;                                          // 0x0512(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EEquipmentCategory                                 EquipmentUICategory;                                      // 0x0513(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0514(0x0004) MISSED OFFSET
	struct FText                                       EquipmentName;                                            // 0x0518(0x0018) (Edit, BlueprintVisible)
	bool                                               bIsRightHanded;                                           // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondIsRightHanded;                                     // 0x0531(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTwoHanded;                                             // 0x0532(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondIsTwoHanded;                                       // 0x0533(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EquipTimeModifier;                                        // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRangedActionAllowsRegen;                                 // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0539(0x0003) MISSED OFFSET
	float                                              RangedDrawFOVOffset;                                      // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveVector*                                RangedDrawSway;                                           // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRangedSwayCameraBased;                                 // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0549(0x0003) MISSED OFFSET
	struct FVector                                     RangedAirborneSway;                                       // 0x054C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              RangedAirborneSwayBlendInSpeed;                           // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RangedAirborneSwayBlendOutSpeed;                          // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RangedDrawSwayLoopSegment;                                // 0x0560(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              RangedDrawTremblingStartAfter;                            // 0x0568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RangedDrawTremblingMaxAfter;                              // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RangedDrawTremblingMagnitude;                             // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RangedDrawTremblingFrequency;                             // 0x0574(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // 0x0578(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      AuxiliarySkeletalMeshComponent;                           // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EAuxiliaryMeshMode                                 AuxiliaryMeshMode;                                        // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	struct FTransform                                  AuxiliaryMeshOffset;                                      // 0x0590(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  DefaultAuxiliaryMeshRelativeTransform;                    // 0x05C0(0x0030) (BlueprintVisible, IsPlainOldData)
	class USkeletalMesh*                               CombinedSkeletalMesh;                                     // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFollowingProjectile;                                   // 0x05F8(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPhysicalSurface>                      EquipmentPhysicalSurface;                                 // 0x05F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x6];                                       // 0x05FA(0x0006) MISSED OFFSET
	class AMordhauProjectile*                          CurrentProjectile;                                        // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ProjectileClass;                                          // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              RestockAmmoForEquipment;                                  // 0x0610(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bCanRestockFromEquipmentDefaults;                         // 0x0620(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0621(0x0003) MISSED OFFSET
	int                                                MaxAmmoBoxRestockAmount;                                  // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APhysicsProxy*                               PhysicsProxy;                                             // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               PhysicsAsset;                                             // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNotDisarmOnMeleeWeaponHit;                             // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCannotChaseOthers;                                       // 0x0639(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBeChasedFromFront;                                    // 0x063A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanRagdoll;                                              // 0x063B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsesPhysicsProxy;                                        // 0x063C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyPeasants;                                            // 0x063D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAllowedForPeasants;                                    // 0x063E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x1];                                       // 0x063F(0x0001) MISSED OFFSET
	struct FTransform                                  ArmoryTransformOffset;                                    // 0x0640(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                CharacterPointCost;                                       // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CullDistanceHeld;                                         // 0x0674(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CullDistanceNotHeld;                                      // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CullDistanceAuxiliaryHeld;                                // 0x067C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CullDistanceAuxiliaryNotHeld;                             // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceInstantMeshUpdate;                                  // 0x0684(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceMipStreaming;                                       // 0x0685(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceMaxLOD;                                             // 0x0686(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPartsUseAuxiliaryMesh;                                   // 0x0687(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TWeakObjectPtr<class UMeshComponent>>       MeshComponents;                                           // 0x0688(0x0010) (ExportObject, ZeroConstructor)
	class UClass*                                      Quiver;                                                   // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxAmmo;                                                  // 0x06A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      MaxAmmoWithoutQuiver;                                     // 0x06A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LastReplicatedAmmo;                                       // 0x06A2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDestroyIfNoAmmo;                                         // 0x06A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMovementRestriction                               MovementRestriction;                                      // 0x06A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventsClimbing;                                        // 0x06A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x06A6(0x0002) MISSED OFFSET
	float                                              BackpedalSpeedFactorEquipped;                             // 0x06A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedBonusPercentageEquipped;                             // 0x06AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationBonusPercentageEquipped;                      // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedBonusPercentageHolstered;                            // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AccelerationBonusPercentageHolstered;                     // 0x06B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x06BC(0x0004) MISSED OFFSET
	struct FEquipmentCustomization                     AssignedCustomization;                                    // 0x06C0(0x0030) (BlueprintVisible)
	unsigned char                                      ReplicatedColors[0x3];                                    // 0x06F0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReplicatedPartsId[0x3];                                   // 0x06F3(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReplicatedSkin;                                           // 0x06F6(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReplicatedEmblem;                                         // 0x06F7(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReplicatedEmblemColors[0x2];                              // 0x06F8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReplicatedPattern;                                        // 0x06FA(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bHasReplicatedColors;                                     // 0x06FB(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasReplicatedPartsId;                                    // 0x06FC(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasReplicatedSkin;                                       // 0x06FD(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasReplicatedEmblem;                                     // 0x06FE(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasReplicatedEmblemColors;                               // 0x06FF(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasReplicatedPattern;                                    // 0x0700(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x0701(0x0007) MISSED OFFSET
	TArray<struct FEquipmentSkinEntry>                 Skins;                                                    // 0x0708(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      Colors[0x3];                                              // 0x0718(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PartsId[0x3];                                             // 0x071B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Skin;                                                     // 0x071E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Pattern;                                                  // 0x071F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Emblem;                                                   // 0x0720(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      EmblemColors[0x2];                                        // 0x0721(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoAssignCustomizationOnBeginPlay;                      // 0x0723(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0724(0x0004) MISSED OFFSET
	struct FEquipmentCustomization                     AutoAssignCustomization;                                  // 0x0728(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      AutoAssignCustomizationEmblem;                            // 0x0758(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoAssignCustomizationEmblemColor1;                      // 0x0759(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoAssignCustomizationEmblemColor2;                      // 0x075A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x5];                                       // 0x075B(0x0005) MISSED OFFSET
	TArray<struct FEmoteEntry>                         EquipmentEmotes;                                          // 0x0760(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UBlendSpaceBase*                             UpperBlendSpace1P;                                        // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UpperAdditive1P;                                          // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             UpperBlendSpaceUnloaded1P;                                // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UpperAdditiveUnloaded1P;                                  // 0x0788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             UpperBlendSpace;                                          // 0x0790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UpperAdditive;                                            // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             UpperBlendSpaceUnloaded;                                  // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UpperAdditiveUnloaded;                                    // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LowerAnimation;                                           // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             ShieldUpperBlendSpace1P;                                  // 0x07B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ShieldUpperAdditive1P;                                    // 0x07C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             ShieldUpperBlendSpace;                                    // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ShieldUpperAdditive;                                      // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ShieldLowerAnimation;                                     // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             ShieldHorseUpperBlendSpace1P;                             // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ShieldHorseUpperAdditive1P;                               // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             ShieldHorseUpperBlendSpace;                               // 0x07F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               ShieldHorseUpperAdditive;                                 // 0x07F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             HorseUpperBlendSpace1P;                                   // 0x0800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               HorseUpperAdditive1P;                                     // 0x0808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             HorseUpperBlendSpaceUnloaded1P;                           // 0x0810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               HorseUpperAdditiveUnloaded1P;                             // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             HorseUpperBlendSpace;                                     // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               HorseUpperAdditive;                                       // 0x0828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             HorseUpperBlendSpaceUnloaded;                             // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               HorseUpperAdditiveUnloaded;                               // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               HorseUpperRearing;                                        // 0x0840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               HorseUpperRearing1P;                                      // 0x0848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               HorseUpperJump;                                           // 0x0850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               HorseUpperJump1P;                                         // 0x0858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ModeSwitchAnimation;                                      // 0x0860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                DropAnimation;                                            // 0x0868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                InteractWithAnimation;                                    // 0x0870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                InteractWith1PAnimation;                                  // 0x0878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               JumpUnloadedAnimation;                                    // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               JumpAnimation;                                            // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               JumpAnimationShield;                                      // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               JumpUnloadedAnimation1P;                                  // 0x0898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               JumpAnimation1P;                                          // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               JumpAnimationShield1P;                                    // 0x08A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FallingUnloadedAnimation;                                 // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FallingAnimation;                                         // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FallingAnimationShield;                                   // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FallingUnloadedAnimation1P;                               // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FallingAnimation1P;                                       // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FallingAnimationShield1P;                                 // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandUnloadedAnimation;                                    // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandAnimation;                                            // 0x08E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandAnimationShield;                                      // 0x08F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandUnloadedAnimation1P;                                  // 0x08F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandAnimation1P;                                          // 0x0900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandAnimationShield1P;                                    // 0x0908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SecondDropAnimation;                                      // 0x0910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SecondInteractWithAnimation;                              // 0x0918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SecondInteractWith1PAnimation;                            // 0x0920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SecondJumpUnloadedAnimation;                              // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SecondJumpAnimation;                                      // 0x0930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SecondJumpUnloadedAnimation1P;                            // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SecondJumpAnimation1P;                                    // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SecondFallingUnloadedAnimation;                           // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SecondFallingAnimation;                                   // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SecondFallingUnloadedAnimation1P;                         // 0x0958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SecondFallingAnimation1P;                                 // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SecondLandUnloadedAnimation;                              // 0x0968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SecondLandAnimation;                                      // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SecondLandUnloadedAnimation1P;                            // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SecondLandAnimation1P;                                    // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        CharacterPreviewPoses;                                    // 0x0988(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAnimMontage*                                RangedDrawAnimation;                                      // 0x0998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                RangedDrawAnimation1P;                                    // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             RangedDrawnAdditive;                                      // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                RangedDrawEquipmentAnimation;                             // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                RangedDrawEquipmentAnimation1P;                           // 0x09B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                RangedReleaseAnimation;                                   // 0x09C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                RangedReleaseAnimation1P;                                 // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                RangedReleaseEquipmentAnimation;                          // 0x09D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                RangedReleaseEquipmentAnimation1P;                        // 0x09D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReloadAnimation;                                          // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   ReloadSound;                                              // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReloadAnimation1P;                                        // 0x09F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   ReloadSound1P;                                            // 0x09F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReloadEquipmentAnimation;                                 // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReloadEquipmentAnimation1P;                               // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                QuickthrowAnimation1P;                                    // 0x0A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                QuickthrowAnimation;                                      // 0x0A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableSpineArmsCompensation1P;                          // 0x0A20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableHandSpringAnimation;                              // 0x0A21(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x0A22(0x0002) MISSED OFFSET
	struct FVector                                     RightHandIKPositionOffset;                                // 0x0A24(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RightShoulderOffset1P;                                    // 0x0A30(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LeftShoulderOffset1P;                                     // 0x0A3C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bUsesOffhandIK;                                           // 0x0A48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInvertOffhandUp;                                         // 0x0A49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondInvertOffhandUp;                                   // 0x0A4A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x5];                                       // 0x0A4B(0x0005) MISSED OFFSET
	class UBlendSpaceBase*                             SecondUpperBlendSpace1P;                                  // 0x0A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SecondUpperAdditive1P;                                    // 0x0A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             SecondUpperBlendSpaceUnloaded1P;                          // 0x0A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SecondUpperAdditiveUnloaded1P;                            // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             SecondUpperBlendSpace;                                    // 0x0A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SecondUpperAdditive;                                      // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             SecondUpperBlendSpaceUnloaded;                            // 0x0A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SecondUpperAdditiveUnloaded;                              // 0x0A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               SecondLowerAnimation;                                     // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                SecondModeSwitchAnimation;                                // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondUsesOffhandIK;                                     // 0x0AA0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0AA1(0x0003) MISSED OFFSET
	float                                              OffhandIKUpOffset;                                        // 0x0AA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffhandIKUpOffset1P;                                      // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondOffhandIKUpOffset;                                  // 0x0AAC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondOffhandIKUpOffset1P;                                // 0x0AB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightHandEquipOffset;                                     // 0x0AB4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  RightWeaponBoneCosmeticTransform;                         // 0x0AC0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  RightWeaponBoneCosmeticTransform1P;                       // 0x0AF0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  SecondRightWeaponBoneCosmeticTransform;                   // 0x0B20(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  SecondRightWeaponBoneCosmeticTransform1P;                 // 0x0B50(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0B80(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    SecondRotationOffset;                                     // 0x0B8C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     GripLocationLocal;                                        // 0x0B98(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     SecondGripLocationLocal;                                  // 0x0BA4(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData20[0x10];                                      // 0x0BB0(0x0010) MISSED OFFSET
	TArray<struct FEquipmentHolsterInfo>               HolsterInfo;                                              // 0x0BC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bCanHolster;                                              // 0x0BD0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanEquipOnHorse;                                         // 0x0BD1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanEquipOnLadder;                                        // 0x0BD2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondCanEquipOnHorse;                                   // 0x0BD3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondCanEquipOnLadder;                                  // 0x0BD4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0BD5(0x0003) MISSED OFFSET
	class USoundCue*                                   AmmoRefillSound;                                          // 0x0BD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   EquipSound;                                               // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   HolsterSound;                                             // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   DrawSound;                                                // 0x0BF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DrawSoundPlayAtNormalizedTime;                            // 0x0BF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DrawSoundPlayAtNormalizedTime1P;                          // 0x0BFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   RangedCancelSound;                                        // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   FireSound;                                                // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAlwaysDestroyOnDeath;                                    // 0x0C10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDeferDestroyUntilRagdoll;                                // 0x0C11(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x0C12(0x0002) MISSED OFFSET
	float                                              RagdollStayTime;                                          // 0x0C14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowDrop;                                               // 0x0C18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanAttack;                                               // 0x0C19(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanAttackOnFoot;                                         // 0x0C1A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanAttackOnHorseback;                                    // 0x0C1B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowFire;                                               // 0x0C1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bFireThrowsEquipment;                                     // 0x0C1D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x0C1E(0x0002) MISSED OFFSET
	float                                              ExtraSwitchTime;                                          // 0x0C20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRangedReleasePlaysAttackYell;                            // 0x0C24(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsesRangedCamera;                                        // 0x0C25(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowHoldDraw;                                           // 0x0C26(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowCancelDraw;                                         // 0x0C27(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxHoldDrawTime;                                          // 0x0C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMovementRestriction                               ReloadMovementRestriction;                                // 0x0C2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMovementRestriction                               RangedDrawMovementRestriction;                            // 0x0C2D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0x2];                                       // 0x0C2E(0x0002) MISSED OFFSET
	float                                              RangedDrawSpeedFactor;                                    // 0x0C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RangedDrawSpeedFactorWithRangerPerk;                      // 0x0C34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RangedDrawTurnCaps;                                       // 0x0C38(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	EMovementRestriction                               RangedReleaseMovementRestriction;                         // 0x0C40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNotFireAfterMaxHoldDrawTime;                           // 0x0C41(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bQuickthrowOnly;                                          // 0x0C42(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x1];                                       // 0x0C43(0x0001) MISSED OFFSET
	float                                              ForceAppliedOnDrop;                                       // 0x0C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowCleanup;                                            // 0x0C48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x0C49(0x0003) MISSED OFFSET
	float                                              RangedDrawTime;                                           // 0x0C4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RangedCancelTime;                                         // 0x0C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RangedReleaseTime;                                        // 0x0C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RangedReleaseCameraShake;                                 // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RangedReloadTime;                                         // 0x0C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RangedReloadTurnCaps;                                     // 0x0C64(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              RangedReloadGrabAmmoNormTime;                             // 0x0C6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RangedReloadFinishReloadNormTime;                         // 0x0C70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoReloadTime;                                           // 0x0C74(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoReloadTimeSpent;                                      // 0x0C78(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanReload;                                               // 0x0C7C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnloadOnUnequip;                                         // 0x0C7D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoadOnUnequip;                                           // 0x0C7E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLoaded;                                                // 0x0C7F(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bHiddenWhenUnloaded;                                      // 0x0C80(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x1];                                       // 0x0C81(0x0001) MISSED OFFSET
	bool                                               bIsUsingAlternateMode;                                    // 0x0C82(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bHasAlternateMode;                                        // 0x0C83(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRevertModeOnUnequip;                                     // 0x0C84(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRevertModeOnDrop;                                        // 0x0C85(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0xA];                                       // 0x0C86(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauEquipment");
		return ptr;
	}


	void UpdateMaterial(class USkeletalMeshComponent* SkeletalMeshComp);
	void UpdateInteractionCollision();
	void UpdateEquipmentVisualState();
	void UpdateEquipmentState();
	void SwitchMode();
	void StopThrownTrail();
	void StartThrownTrail();
	bool ShouldShine();
	void SetPartsUseAuxiliaryMesh(bool bNewValue);
	void SetParts(TArray<unsigned char> NewPartsId, bool bRebuild);
	void SetLoaded(bool bNewLoaded);
	void SetColors(TArray<unsigned char> NewColors);
	void SetAmmo(unsigned char NewAmmo);
	bool RestockOtherEquipmentOnCharacter(class AMordhauCharacter* Character);
	void ResetMeshRelativeTransform();
	void RequestAttack(EAttackMove Move, float Angle);
	void RebuildIfAllReplicated();
	void RebuildEquipment(bool bDoOnlyQuickJob);
	bool OnRequestModeSwitch(class AMordhauCharacter* Character);
	bool OnRequestFire(class AMordhauCharacter* Character);
	void OnRep_ReplicatedSkin();
	void OnRep_ReplicatedPattern();
	void OnRep_ReplicatedPartsId();
	void OnRep_ReplicatedEmblemColors();
	void OnRep_ReplicatedEmblem();
	void OnRep_ReplicatedColors();
	void OnRep_IsUsingAlternateMode();
	void OnRep_IsLoaded();
	void OnRep_Ammo();
	void OnPickedUp(class AMordhauCharacter* Character);
	void OnPartsChanged();
	void OnLoadedChanged();
	void OnHolsteredOrDropped(class AMordhauCharacter* Character);
	void OnHolstered(class AMordhauCharacter* Character);
	void OnEquipped(class AMordhauCharacter* Character);
	void OnDropped(class AMordhauCharacter* Character);
	void OnAmmoChanged();
	void LocalPlayerTick(float DeltaTime);
	void LocalPlayerLateTick(float DeltaTime);
	void LateTick(float DeltaSeconds);
	struct FEquipmentCustomization GetRandomCustomization(bool bOnlyColors);
	class AMordhauCharacter* GetParentCharacter();
	unsigned char GetCurrentMaxAmmo();
	unsigned char GetAmmo();
	class AMordhauProjectile* FireProjectile_Internal(const struct FVector& InOrigin, const struct FRotator& InOrientation, class AController* Controller, float ExpectedDelay, bool bIsLocal);
	void FireProjectile(const struct FVector& Origin, const struct FRotator& Orientation, class AController* OwningController, float ExpectedDelay);
	struct FEquipmentHolsterInfo FindCurrentHolsterInfo();
	void EquipmentCommand(int Command);
	void DestroyPhysicsProxy();
	struct FBoxSphereBounds ComputeAccurateBounds();
	bool CanPerformAttack(class AMordhauCharacter* Character, EAttackMove Move);
	bool BelongsToCharacter();
	void AssignCustomizationToProjectile(class AMordhauProjectile* Projectile);
	void AssignCustomization(const struct FEquipmentCustomization& Customization, unsigned char CustomizationEmblem, unsigned char CustomizationEmblemColor1, unsigned char CustomizationEmblemColor2);
};


// Class Mordhau.MordhauWeapon
// 0x0D90 (0x1A20 - 0x0C90)
class AMordhauWeapon : public AMordhauEquipment
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0C90(0x0008) MISSED OFFSET
	TWeakObjectPtr<class UAudioComponent>              LastWoosh;                                                // 0x0C98(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bAreCurrentTracersValid;                                  // 0x0CA0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bArePreviousTracersValid;                                 // 0x0CA1(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAreCurrentTracersInvalidated;                            // 0x0CA2(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasAdditionalTracers;                                    // 0x0CA3(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bSecondHasAdditionalTracers;                              // 0x0CA4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0CA5(0x0003) MISSED OFFSET
	struct FVector                                     CurrentTraceStart;                                        // 0x0CA8(0x000C) (IsPlainOldData)
	struct FVector                                     CurrentTraceEnd;                                          // 0x0CB4(0x000C) (IsPlainOldData)
	struct FVector                                     PreviousTraceStart;                                       // 0x0CC0(0x000C) (IsPlainOldData)
	struct FVector                                     PreviousTraceEnd;                                         // 0x0CCC(0x000C) (IsPlainOldData)
	struct FVector                                     CurrentAdditionalTraceStart;                              // 0x0CD8(0x000C) (IsPlainOldData)
	struct FVector                                     CurrentAdditionalTraceEnd;                                // 0x0CE4(0x000C) (IsPlainOldData)
	struct FVector                                     PreviousAdditionalTraceStart;                             // 0x0CF0(0x000C) (IsPlainOldData)
	struct FVector                                     PreviousAdditionalTraceEnd;                               // 0x0CFC(0x000C) (IsPlainOldData)
	EAttackMove                                        LastObservedMove;                                         // 0x0D08(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0D09(0x0007) MISSED OFFSET
	TArray<struct FVector>                             LastTraceStarts;                                          // 0x0D10(0x0010) (ZeroConstructor)
	struct FActorSetAndArray                           CosmeticIgnoreActors;                                     // 0x0D20(0x0060)
	TArray<struct FHitResult>                          HitResultCache;                                           // 0x0D80(0x0010) (ZeroConstructor)
	bool                                               bCanBlock;                                                // 0x0D90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBlockOnFoot;                                          // 0x0D91(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanBlockOnHorseback;                                     // 0x0D92(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanCouchOnHorseback;                                     // 0x0D93(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0D94(0x0004) MISSED OFFSET
	class UAnimMontage*                                CouchWindUpAnim;                                          // 0x0D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CouchWindUpAnim1P;                                        // 0x0DA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CouchLoopAnim;                                            // 0x0DA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CouchReleaseAnim;                                         // 0x0DB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CouchReleaseAnim1P;                                       // 0x0DB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDismembermentType                                 StrikeDismembermentType;                                  // 0x0DC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDismembermentType                                 SecondStrikeDismembermentType;                            // 0x0DC1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDismembermentType                                 StabDismembermentType;                                    // 0x0DC2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EDismembermentType                                 SecondStabDismembermentType;                              // 0x0DC3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlideRadius;                                              // 0x0DC4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttackSupersprintDuration;                                // 0x0DC8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondAttackSupersprintDuration;                          // 0x0DCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FAttackInfo                                 StabAttack;                                               // 0x0DD0(0x0110) (Edit, BlueprintVisible)
	struct FAttackInfo                                 SecondStabAttack;                                         // 0x0EE0(0x0110) (Edit, BlueprintVisible)
	struct FAttackInfo                                 CouchAttack;                                              // 0x0FF0(0x0110) (Edit, BlueprintVisible)
	struct FAttackInfo                                 SecondCouchAttack;                                        // 0x1100(0x0110) (Edit, BlueprintVisible)
	struct FAttackInfo                                 StrikeAttack;                                             // 0x1210(0x0110) (Edit, BlueprintVisible)
	struct FAttackInfo                                 SecondStrikeAttack;                                       // 0x1320(0x0110) (Edit, BlueprintVisible)
	struct FAttackInfo                                 KickAttack;                                               // 0x1430(0x0110) (Edit, BlueprintVisible)
	struct FAttackInfo                                 SecondKickAttack;                                         // 0x1540(0x0110) (Edit, BlueprintVisible)
	struct FAttackInfo                                 BashAttack;                                               // 0x1650(0x0110) (Edit, BlueprintVisible)
	int                                                AttackMask;                                               // 0x1760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ParryMask;                                                // 0x1764(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ParryTurnCap;                                             // 0x1768(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ParrySuccessTurnCap;                                      // 0x1770(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ParryViewToleranceX;                                      // 0x1778(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ParryViewToleranceY;                                      // 0x1780(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   SuccessfulParryViewToleranceX;                            // 0x1788(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   SuccessfulParryViewToleranceY;                            // 0x1790(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   AttackParryViewToleranceX;                                // 0x1798(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   AttackParryViewToleranceY;                                // 0x17A0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ChamberViewToleranceX;                                    // 0x17A8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   ChamberViewToleranceY;                                    // 0x17B0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ParryBackpedalSpeedFactor;                                // 0x17B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsParryHeld;                                             // 0x17BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x17BD(0x0003) MISSED OFFSET
	float                                              BoostCosmeticTracersBy;                                   // 0x17C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsesExtraEnvironmentTracers;                             // 0x17C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IgnoreEnvironmentTipTracersNum;                           // 0x17C5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x17C6(0x0002) MISSED OFFSET
	float                                              bHitKnockbackOnTeammates;                                 // 0x17C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClashNormal;                                              // 0x17CC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SecondClashNormal;                                        // 0x17D8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	EMovementRestriction                               BlockMovementRestriction;                                 // 0x17E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x17E5(0x0003) MISSED OFFSET
	float                                              BlockStaminaNegation;                                     // 0x17E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BlockStaminaClamp;                                        // 0x17EC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SecondBlockStaminaNegation;                               // 0x17F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SecondBlockStaminaClamp;                                  // 0x17F8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	class UPrimitiveComponent*                         ClashCollider;                                            // 0x1800(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         BlockCollider;                                            // 0x1808(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      WeaponAnimationProfileClass;                              // 0x1810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      SecondWeaponAnimationProfileClass;                        // 0x1818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      HorseWeaponAnimationProfileClass;                         // 0x1820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      LadderWeaponAnimationProfileClass;                        // 0x1828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMeleeWeaponAnimationProfile*                HorseWeaponAnimationProfile;                              // 0x1830(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMeleeWeaponAnimationProfile*                LadderWeaponAnimationProfile;                             // 0x1838(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMeleeWeaponAnimationProfile*                WeaponAnimationProfile;                                   // 0x1840(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMeleeWeaponAnimationProfile*                SecondWeaponAnimationProfile;                             // 0x1848(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   BlockedSound;                                             // 0x1850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   HitCancelSound;                                           // 0x1858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   WasBlockedSound;                                          // 0x1860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   EnvironmentPitchScaleByDamageIn;                          // 0x1868(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   EnvironmentPitchScaleByDamageOut;                         // 0x1870(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   EnvironmentVolumeScaleByDamageIn;                         // 0x1878(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   EnvironmentVolumeScaleByDamageOut;                        // 0x1880(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              WooshVolumeMultiplierViewTarget;                          // 0x1888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x188C(0x0004) MISSED OFFSET
	class USoundCue*                                   StrikeHitSound;                                           // 0x1890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   StabHitSound;                                             // 0x1898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   EnvironmentHitSound;                                      // 0x18A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   SecondStrikeHitSound;                                     // 0x18A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   SecondStabHitSound;                                       // 0x18B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   SecondEnvironmentHitSound;                                // 0x18B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   StrikeWooshSound;                                         // 0x18C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   StabWooshSound;                                           // 0x18C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   SlideStartSound;                                          // 0x18D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   SlideEndSound;                                            // 0x18D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDeriveHandGripFromTracers;                               // 0x18E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondDeriveHandGripFromTracers;                         // 0x18E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasWoodenHandle;                                         // 0x18E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x18E3(0x0001) MISSED OFFSET
	float                                              TrailLifeTimeFactor;                                      // 0x18E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrailExtraTime;                                           // 0x18E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloodTrailMaxDuration;                                    // 0x18EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SwingTrailFadeOutDuration;                                // 0x18F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x18F4(0x0004) MISSED OFFSET
	class UParticleSystem*                             SwingTrailParticles;                                      // 0x18F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BloodTrailParticles;                                      // 0x1900(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BlockParticles;                                           // 0x1908(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             HitCancelParticles;                                       // 0x1910(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleSystem*>                     ImpactParticlesBySurface;                                 // 0x1918(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UParticleSystem*                             SlideParticles;                                           // 0x1928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AMordhauWeapon>               SlidingWith;                                              // 0x1930(0x0008) (ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   EndCurrentSlideWithSound;                                 // 0x1938(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              SlidingStartTime;                                         // 0x1940(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAudioComponent>              CurrentSlideStartSound;                                   // 0x1944(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UAudioComponent>              LastHitSoundA;                                            // 0x194C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UAudioComponent>              LastHitSoundB;                                            // 0x1954(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UParticleSystemComponent>     CurrentSlideParticles;                                    // 0x195C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UParticleSystemComponent>     CurrentSwingTrailParticles;                               // 0x1964(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UParticleSystemComponent>     CurrentBloodTrailParticles;                               // 0x196C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TrailTimeBeforeStop;                                      // 0x1974(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SwingTrailOriginalLifeTime;                               // 0x1978(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SwingTrailEndTime;                                        // 0x197C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BloodTrailEndTime;                                        // 0x1980(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x1984(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SecondLength;                                             // 0x1988(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BloodLevel1;                                              // 0x198C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BloodLevel2;                                              // 0x1990(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayedHitEffect;                                         // 0x1994(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x1995(0x0003) MISSED OFFSET
	struct FVector                                     TrailUp;                                                  // 0x1998(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SecondTrailUp;                                            // 0x19A4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     TrailRight;                                               // 0x19B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     SecondTrailRight;                                         // 0x19BC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              DefaultTrailFactor;                                       // 0x19C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondDefaultTrailFactor;                                 // 0x19CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRegularAttacksUseBlood2;                                 // 0x19D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSecondRegularAttacksUseBlood2;                           // 0x19D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x19D2(0x0002) MISSED OFFSET
	float                                              TrailFactor;                                              // 0x19D4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SecondTrailFactor;                                        // 0x19D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TrailWeight;                                              // 0x19DC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  LastTrailTransform;                                       // 0x19E0(0x0030) (IsPlainOldData)
	struct FVector                                     LastObservedTraceDirection;                               // 0x1A10(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x1A1C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauWeapon");
		return ptr;
	}


	void UpdateTrail(float Weight);
	bool RequestBlock(EBlockType BlockType, bool bAllowFTP);
	void OnWasBlocked(EBlockedReason Reason, EAttackMove Move, unsigned char SurfaceType);
	void OnHit(class AActor* Actor, EAttackMove Move, const struct FName& bone, const struct FVector& WorldLocation, unsigned char Tier, unsigned char SurfaceType);
	void OnCosmeticHit(EAttackMove Move, const struct FHitResult& Hit);
	void OnBlockStarted(EBlockType Type);
	void OnBlocked(EBlockedReason Reason, EAttackMove Move);
	void OnAttackStopped();
	void OnAttackStarted(EAttackMove Move, float Angle);
	void IncreaseBloodLevel(float Amount);
	struct FAttackInfo GetBaseAttackInfo(EAttackMove Move);
};


// Class Mordhau.VirtualWeapon
// 0x0000 (0x1A20 - 0x1A20)
class AVirtualWeapon : public AMordhauWeapon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.VirtualWeapon");
		return ptr;
	}


	void InitializeVirtualWeapon(class AMordhauCharacter* Character);
};


// Class Mordhau.FistsWeapon
// 0x0000 (0x1A20 - 0x1A20)
class AFistsWeapon : public AVirtualWeapon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.FistsWeapon");
		return ptr;
	}

};


// Class Mordhau.FlinchMotion
// 0x0010 (0x00A0 - 0x0090)
class UFlinchMotion : public UMordhauMotion
{
public:
	bool                                               bHasDoneFlinchEffect;                                     // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	float                                              FlinchDuration;                                           // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParryLockOutTime;                                         // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.FlinchMotion");
		return ptr;
	}

};


// Class Mordhau.GameModeMetadata
// 0x0058 (0x0080 - 0x0028)
class UGameModeMetadata : public UObject
{
public:
	struct FString                                     Prefix;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       Name;                                                     // 0x0038(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0050(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  Thumbnail;                                                // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FText>                               Tips;                                                     // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.GameModeMetadata");
		return ptr;
	}


	class UGameModeMetadata* STATIC_GetDefaultObject(class UClass* MetadataClass);
};


// Class Mordhau.GoreActor
// 0x0010 (0x0338 - 0x0328)
class AGoreActor : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystemComponent;                                  // 0x0330(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.GoreActor");
		return ptr;
	}

};


// Class Mordhau.HeadWearable
// 0x0018 (0x01B0 - 0x0198)
class UHeadWearable : public UMordhauWearable
{
public:
	unsigned char                                      DefaultCoif;                                              // 0x0198(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0199(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0199(0x0010) UNKNOWN PROPERTY: ArrayProperty Mordhau.HeadWearable.CoifWearables

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.HeadWearable");
		return ptr;
	}


	int GetCoifWearablesNum();
	class UClass* GetCoifWearable(int Index);
};


// Class Mordhau.HolsterMotion
// 0x0008 (0x0098 - 0x0090)
class UHolsterMotion : public UMordhauMotion
{
public:
	unsigned char                                      Mode;                                                     // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.HolsterMotion");
		return ptr;
	}

};


// Class Mordhau.Horse
// 0x00B0 (0x0D50 - 0x0CA0)
class AHorse : public AMordhauVehicle
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0CA0(0x0048) MISSED OFFSET
	class UCapsuleComponent*                           BumpCapsule;                                              // 0x0CE8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              TurdSpawnInterval;                                        // 0x0CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurdSpawnChance;                                          // 0x0CF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastTurdSpawnCheck;                                       // 0x0CF8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0CFC(0x0004) MISSED OFFSET
	class UCurveFloat*                                 BumpDamageBySpeedModifierCurve;                           // 0x0D00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 AttackDamageBySpeedModifierCurve;                         // 0x0D08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DesiredGear;                                              // 0x0D10(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KnockbackForce;                                           // 0x0D14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KnockbackForceVelocityFactor;                             // 0x0D18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KnockbackDamage;                                          // 0x0D1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   KnockbackSound;                                           // 0x0D20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RiderRearingCurve;                                        // 0x0D28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RearingDuration;                                          // 0x0D30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReplicatedRearing;                                        // 0x0D34(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0D35(0x0003) MISSED OFFSET
	float                                              ReplicatedRearingTimeOut;                                 // 0x0D38(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastRearingTime;                                          // 0x0D3C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastRearingRealTime;                                      // 0x0D40(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRearing;                                               // 0x0D44(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EHorseGear                                         MinimumGearToCouch;                                       // 0x0D45(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xA];                                       // 0x0D46(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.Horse");
		return ptr;
	}


	void SpawnTurd();
	void ServerRequestRearing();
	void SecondaryTurnNotAbsolute(float Value);
	void RequestRearing();
	void OnRep_ReplicatedRearing();
	void OnBumpCapsuleOverlapped(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	bool GetIsInRearingMode();
	float CalculateBumpDamage(const struct FVector& OurWorldVelocity);
};


// Class Mordhau.HorseAnimInstance
// 0x01D0 (0x06B0 - 0x04E0)
class UHorseAnimInstance : public UCreatureAnimInstance
{
public:
	class USoundCue*                                   SoundTrot;                                                // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   SoundCanterFront;                                         // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   SoundCanterBack;                                          // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   SoundGallopLeft;                                          // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   SoundGallopRight;                                         // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FastFootstepParticlesMinVelocity;                         // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x050C(0x0004) MISSED OFFSET
	TArray<class UParticleSystem*>                     FastFootstepParticles;                                    // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector2D                                   BackLimits;                                               // 0x0520(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   FrontLimits;                                              // 0x0528(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              RootOffsetTranslationToRotationFactor;                    // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	struct FVector                                     BackOffset;                                               // 0x0538(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     LeftBackLegOffset;                                        // 0x0544(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     RightBackLegOffset;                                       // 0x0550(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     FrontOffset;                                              // 0x055C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     LeftFrontLegOffset;                                       // 0x0568(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     RightFrontLegOffset;                                      // 0x0574(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bIsRearing;                                               // 0x0580(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0581(0x0003) MISSED OFFSET
	float                                              BounceDuckLimit;                                          // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StopTiltFactorLeftRight;                                  // 0x0588(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StopTiltFactorForward;                                    // 0x058C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StopTiltFactorBack;                                       // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StopBounceLimit;                                          // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BounceInterpSpeed;                                        // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadStopTiltFactorLeftRight;                              // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadStopTiltFactorForward;                                // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadStopTiltFactorBack;                                   // 0x05A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadStopBounceLimit;                                      // 0x05A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeadBounceInterpSpeed;                                    // 0x05AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FastVelocityLagTime;                                      // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlowVelocityLagTime;                                      // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    StopBounce;                                               // 0x05B8(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    StopBounceWorld;                                          // 0x05C4(0x000C) (IsPlainOldData)
	struct FRotator                                    HeadStopBounce;                                           // 0x05D0(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    HeadStopBounceWorld;                                      // 0x05DC(0x000C) (IsPlainOldData)
	struct FVector                                     BounceDuck;                                               // 0x05E8(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     FastVelocity;                                             // 0x05F4(0x000C) (IsPlainOldData)
	struct FVector                                     SlowVelocity;                                             // 0x0600(0x000C) (IsPlainOldData)
	struct FVector                                     FastVelocityChangeVelocity;                               // 0x060C(0x000C) (IsPlainOldData)
	struct FVector                                     SlowVelocityChangeVelocity;                               // 0x0618(0x000C) (IsPlainOldData)
	struct FRotator                                    PreviousMeshRotation;                                     // 0x0624(0x000C) (IsPlainOldData)
	float                                              FrontBackLegsDistance;                                    // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeetShuffleWeight;                                        // 0x0634(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeetShuffleAnimRate;                                      // 0x0638(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HorseVelocity;                                            // 0x063C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0640(0x0008) MISSED OFFSET
	float                                              AnimatedHorseVelocity;                                    // 0x0648(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StopSmoothSpeed;                                          // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRate;                                         // 0x0650(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HorseDirection;                                           // 0x0654(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0658(0x0004) MISSED OFFSET
	float                                              LeanFactor;                                               // 0x065C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmoothedDirectionSmoothTime;                              // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SmoothedDirectionSmoothTimeNoMovement;                    // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    FrontHorseRotator;                                        // 0x0668(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    BackHorseRotator;                                         // 0x0674(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    HorseLeanRotator;                                         // 0x0680(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     HorseLeanOffset;                                          // 0x068C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    HorseHeadRotator;                                         // 0x0698(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              HasDriverFloat;                                           // 0x06A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x06A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.HorseAnimInstance");
		return ptr;
	}

};


// Class Mordhau.PseudoVehicleMovementComponent
// 0x0040 (0x08A0 - 0x0860)
class UPseudoVehicleMovementComponent : public UAdvancedCharacterMovement
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0860(0x0008) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 SecondaryStepCapableComponents;                           // 0x0868(0x0010) (BlueprintVisible, ExportObject, ZeroConstructor)
	float                                              TurningVelocity;                                          // 0x0878(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x087C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 TurningBrakeAccelerationByVelocity;                       // 0x0880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TurningFactorByVelocity;                                  // 0x0888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 TurningAccelerationByVelocity;                            // 0x0890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurningFactorScaleAirborne;                               // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x089C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.PseudoVehicleMovementComponent");
		return ptr;
	}

};


// Class Mordhau.HorseMovementComponent
// 0x0060 (0x0900 - 0x08A0)
class UHorseMovementComponent : public UPseudoVehicleMovementComponent
{
public:
	float                                              HeadOnCollisionMinSpeedToRear;                            // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SoftBubbleEllipseRelativeLocation;                        // 0x08A4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              SoftBubbleEllipseLength;                                  // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SoftBubbleEllipseRadius;                                  // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SoftBubbleMaxHeight;                                      // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrontAndRearCapsuleHalfHeight;                            // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrontAndRearCapsuleRadius;                                // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FrontCapsuleRelativeLocation;                             // 0x08C4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     RearCapsuleRelativeLocation;                              // 0x08D0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AvoidanceTurningAcceleration;                             // 0x08DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EHorseGear                                         Gear;                                                     // 0x08E0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x08E1(0x0007) MISSED OFFSET
	TArray<struct FHorseGearInfo>                      GearInfo;                                                 // 0x08E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	EHorseGear                                         DesiredGear;                                              // 0x08F8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x08F9(0x0003) MISSED OFFSET
	float                                              SpeedMultiplierOnBump;                                    // 0x08FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.HorseMovementComponent");
		return ptr;
	}

};


// Class Mordhau.IdleMotion
// 0x0000 (0x0090 - 0x0090)
class UIdleMotion : public UMordhauMotion
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.IdleMotion");
		return ptr;
	}

};


// Class Mordhau.InteractionComponent
// 0x0020 (0x05B0 - 0x0590)
class UInteractionComponent : public UBoxComponent
{
public:
	TArray<class UMeshComponent*>                      VisualMeshComponents;                                     // 0x0590(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	bool                                               bIsInteractable;                                          // 0x05A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHighlighted;                                           // 0x05A1(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x05A2(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.InteractionComponent");
		return ptr;
	}


	void UnHighlight();
	void OnInteractionStart(class AAdvancedCharacter* Character);
	void OnInteractionEnd();
	void OnHighlightStart();
	void OnHighlightEnd();
	void InteractionStart(class AAdvancedCharacter* Character);
	void InteractionEnd();
	void Highlight();
	bool CanInteract(class AAdvancedCharacter* Character);
};


// Class Mordhau.InteractWithMotion
// 0x0008 (0x0098 - 0x0090)
class UInteractWithMotion : public UMordhauMotion
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.InteractWithMotion");
		return ptr;
	}

};


// Class Mordhau.ItemPattern
// 0x0010 (0x0068 - 0x0058)
class UItemPattern : public UMordhauInventoryItem
{
public:
	class UTexture2D*                                  Texture;                                                  // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasColor1;                                               // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasColor2;                                               // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasColor3;                                               // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0063(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.ItemPattern");
		return ptr;
	}

};


// Class Mordhau.KickWeapon
// 0x0020 (0x1A40 - 0x1A20)
class AKickWeapon : public AVirtualWeapon
{
public:
	class UAnimSequenceBase*                           KickAnimation;                                            // 0x1A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           KickRiposteAnimation;                                     // 0x1A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           KickComboAnimation;                                       // 0x1A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                KickBounce;                                               // 0x1A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.KickWeapon");
		return ptr;
	}

};


// Class Mordhau.LateTickComponent
// 0x0008 (0x00F8 - 0x00F0)
class ULateTickComponent : public UActorComponent
{
public:
	float                                              LODDeltaTime;                                             // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LastFrameTick;                                            // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.LateTickComponent");
		return ptr;
	}

};


// Class Mordhau.LeaveVehicleMotion
// 0x0000 (0x0090 - 0x0090)
class ULeaveVehicleMotion : public UMordhauMotion
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.LeaveVehicleMotion");
		return ptr;
	}

};


// Class Mordhau.LegsWearable
// 0x0020 (0x01B8 - 0x0198)
class ULegsWearable : public UMordhauWearable
{
public:
	struct FVector                                     LegsBouncyLimits;                                         // 0x0198(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      DefaultFeet;                                              // 0x01A4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01A5(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x01A5(0x0010) UNKNOWN PROPERTY: ArrayProperty Mordhau.LegsWearable.FeetWearables

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.LegsWearable");
		return ptr;
	}


	int GetFeetWearablesNum();
	class UClass* GetFeetWearable(int Index);
};


// Class Mordhau.LODSkeletalMeshComponent
// 0x00B0 (0x0C50 - 0x0BA0)
class ULODSkeletalMeshComponent : public USkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0BA0(0x0080) MISSED OFFSET
	float                                              LODDeltaTime;                                             // 0x0C20(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastLODDeltaTime;                                         // 0x0C24(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasSkippedThisFrame;                                     // 0x0C28(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C29(0x0003) MISSED OFFSET
	int                                                FramesSinceLastLODTick;                                   // 0x0C2C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FramesUntilNextLODTick;                                   // 0x0C30(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxLODDeltaTime;                                          // 0x0C34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSmoothClothLODTransition;                                // 0x0C38(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0C39(0x0003) MISSED OFFSET
	float                                              ClothLODTransitionSpeed;                                  // 0x0C3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipTransformUpdate;                                     // 0x0C40(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPreventTicking;                                          // 0x0C41(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateLODIfPreventTicking;                               // 0x0C42(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceNextTick;                                           // 0x0C43(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0C44(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.LODSkeletalMeshComponent");
		return ptr;
	}

};


// Class Mordhau.LODStaticMeshActor
// 0x0008 (0x0330 - 0x0328)
class ALODStaticMeshActor : public AActor
{
public:
	class ULODStaticMeshComponent*                     StaticMeshComponent;                                      // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.LODStaticMeshActor");
		return ptr;
	}

};


// Class Mordhau.LODStaticMeshComponent
// 0x0000 (0x05F0 - 0x05F0)
class ULODStaticMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.LODStaticMeshComponent");
		return ptr;
	}

};


// Class Mordhau.MapCameraActor
// 0x0010 (0x0890 - 0x0880)
class AMapCameraActor : public ACameraActor
{
public:
	int                                                Team;                                                     // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AtmosphericFogMultiplierOverride;                         // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0888(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MapCameraActor");
		return ptr;
	}

};


// Class Mordhau.MapMetadata
// 0x0090 (0x00B8 - 0x0028)
class UMapMetadata : public UObject
{
public:
	struct FText                                       Name;                                                     // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Description;                                              // 0x0040(0x0018) (Edit, BlueprintVisible)
	struct FSoftObjectPath                             BaseMap;                                                  // 0x0058(0x0018) (Edit, BlueprintVisible)
	TArray<struct FSoftObjectPath>                     GameModeMaps;                                             // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  Thumbnail;                                                // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UTexture2D*>                          BackgroundImages;                                         // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UTexture2D*>                          ForegroundImages;                                         // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FText>                               Tips;                                                     // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MapMetadata");
		return ptr;
	}

};


// Class Mordhau.MasterField
// 0x0118 (0x0440 - 0x0328)
class AMasterField : public AActor
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0328(0x005C) MISSED OFFSET
	float                                              CreatedTime;                                              // 0x0384(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DeactivatedTime;                                          // 0x0388(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DeactivationStartedTime;                                  // 0x038C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAreSubfieldsHidden;                                      // 0x0390(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFieldActive;                                           // 0x0391(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasBegunDeactivation;                                    // 0x0392(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0393(0x0005) MISSED OFFSET
	TArray<class UFieldSpawnComponent*>                SubFieldSpawns;                                           // 0x0398(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	TArray<TWeakObjectPtr<class ASubField>>            SubFields;                                                // 0x03A8(0x0010) (ZeroConstructor)
	struct FBox                                        CombinedBoundsBox;                                        // 0x03B8(0x001C) (BlueprintVisible, IsPlainOldData)
	float                                              FieldLifeTime;                                            // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FieldDeactivationTime;                                    // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FieldFadeOutTime;                                         // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              CollisionFilter;                                          // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<class AActor*, int>                           ActorPresenceTickCount;                                   // 0x03F0(0x0050) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MasterField");
		return ptr;
	}


	void UpdateField();
	void SetSubFieldsHidden(bool bAreHidden);
	void RecomputeCombinedBoundingBox();
	TArray<class ASubField*> GetSubFields();
	struct FVector GetFieldBoundsCenter();
	void DeactivateAndDestroyField();
	void CreateField();
	float ComputeDistanceIntoField(const struct FVector& Location);
	void BeginFieldDeactivation();
};


// Class Mordhau.MeleeWeaponAnimationProfile
// 0x2B20 (0x2B48 - 0x0028)
class UMeleeWeaponAnimationProfile : public UObject
{
public:
	struct FAnglingSpineSpaceAdditive                  StrikeAngleAdditive;                                      // 0x0028(0x0318) (Edit, BlueprintVisible)
	struct FAnglingSpineSpaceAdditive                  StrikeAngleAdditiveWindUp;                                // 0x0340(0x0318) (Edit, BlueprintVisible)
	struct FAnglingSpineSpaceAdditive                  StrikeAngleAdditiveWindUp1P;                              // 0x0658(0x0318) (Edit, BlueprintVisible)
	struct FAnglingSpineSpaceAdditive                  StrikeRiposteAngleAdditive;                               // 0x0970(0x0318) (Edit, BlueprintVisible)
	struct FAnglingSpineSpaceAdditive                  StrikeRiposteAngleAdditiveWindUp;                         // 0x0C88(0x0318) (Edit, BlueprintVisible)
	struct FAnglingSpineSpaceAdditive                  StrikeRiposteAngleAdditiveWindUp1P;                       // 0x0FA0(0x0318) (Edit, BlueprintVisible)
	struct FAnglingSpineSpaceAdditive                  StabAngleAdditive;                                        // 0x12B8(0x0318) (Edit, BlueprintVisible)
	struct FAnglingSpineSpaceAdditive                  StabAngleAdditiveWindUp;                                  // 0x15D0(0x0318) (Edit, BlueprintVisible)
	struct FAnglingSpineSpaceAdditive                  StabAngleAdditiveWindUp1P;                                // 0x18E8(0x0318) (Edit, BlueprintVisible)
	struct FAnglingSpineSpaceAdditive                  StabRiposteAngleAdditive;                                 // 0x1C00(0x0318) (Edit, BlueprintVisible)
	struct FAnglingSpineSpaceAdditive                  StabRiposteAngleAdditiveWindUp;                           // 0x1F18(0x0318) (Edit, BlueprintVisible)
	struct FAnglingSpineSpaceAdditive                  StabRiposteAngleAdditiveWindUp1P;                         // 0x2230(0x0318) (Edit, BlueprintVisible)
	struct FAnglingSpineSpaceAdditive                  ParryAngleAdditive;                                       // 0x2548(0x0318) (Edit, BlueprintVisible)
	float                                              FeintAnimRate1P;                                          // 0x2860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeintAnimRate;                                            // 0x2864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeintAnimRateLeftStrike;                                  // 0x2868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeintAnimDurationOffset1P;                                // 0x286C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumFeintAnimDuration1P;                               // 0x2870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeintAnimDurationOffset;                                  // 0x2874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FeintAnimDurationOffsetLeftStrike;                        // 0x2878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumFeintAnimDuration;                                 // 0x287C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumFeintAnimDurationLeftStrike;                       // 0x2880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumFeintAnimDurationStab;                             // 0x2884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightWorldBounceCurve;                                    // 0x2888(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightWorldBounceScaleCurve;                               // 0x2890(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LeftWorldBounceCurve;                                     // 0x2898(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LeftWorldBounceScaleCurve;                                // 0x28A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightWorldBounceCurve1P;                                  // 0x28A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightWorldBounceScaleCurve1P;                             // 0x28B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LeftWorldBounceCurve1P;                                   // 0x28B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LeftWorldBounceScaleCurve1P;                              // 0x28C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightParryBounceCurve;                                    // 0x28C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightParryBounceScaleCurve;                               // 0x28D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LeftParryBounceCurve;                                     // 0x28D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LeftParryBounceScaleCurve;                                // 0x28E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightParryBounceCurve1P;                                  // 0x28E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightParryLateBounceCurve1P;                              // 0x28F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightParryBounceScaleCurve1P;                             // 0x28F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LeftParryBounceCurve1P;                                   // 0x2900(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LeftParryLateBounceCurve1P;                               // 0x2908(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LeftParryBounceScaleCurve1P;                              // 0x2910(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightStrikeComboBlendCurve;                               // 0x2918(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightStrikeComboWindupCurve;                              // 0x2920(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightStrikeComboBlendCurve1P;                             // 0x2928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightStrikeComboWindupCurve1P;                            // 0x2930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightStrikeReleaseCurve;                                  // 0x2938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RightStrikeAnimation;                                     // 0x2940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RightStrike1PAnimation;                                   // 0x2948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightStrikeRiposteReleaseCurve;                           // 0x2950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RightStrikeRiposteAnimation;                              // 0x2958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RightStrikeAltRiposteAnimation;                           // 0x2960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RightStrikeClashAnimation;                                // 0x2968(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RightStrikeMorphAnimation;                                // 0x2970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RightStrikeLeftComboAnimation;                            // 0x2978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           RightStrikeStabComboAnimation;                            // 0x2980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LeftStrikeComboBlendCurve;                                // 0x2988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LeftStrikeComboWindupCurve;                               // 0x2990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LeftStrikeComboBlendCurve1P;                              // 0x2998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LeftStrikeComboWindupCurve1P;                             // 0x29A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LeftStrikeReleaseCurve;                                   // 0x29A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           LeftStrikeAnimation;                                      // 0x29B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           LeftStrike1PAnimation;                                    // 0x29B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 LeftStrikeRiposteReleaseCurve;                            // 0x29C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           LeftStrikeRiposteAnimation;                               // 0x29C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           LeftStrikeAltRiposteAnimation;                            // 0x29D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           LeftStrikeClashAnimation;                                 // 0x29D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           LeftStrikeMorphAnimation;                                 // 0x29E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           LeftStrikeRightComboAnimation;                            // 0x29E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           LeftStrikeStabComboAnimation;                             // 0x29F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightStabComboBlendCurve;                                 // 0x29F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightStabComboWindupCurve;                                // 0x2A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightStabComboBlendCurve1P;                               // 0x2A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 RightStabComboWindupCurve1P;                              // 0x2A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 StabReleaseCurve;                                         // 0x2A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           StabAnimation;                                            // 0x2A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           StabRiposteAnimation;                                     // 0x2A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           StabAltRiposteAnimation;                                  // 0x2A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           StabClashAnimation;                                       // 0x2A38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           StabMorphAnimation;                                       // 0x2A40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           StabAltStabComboAnimation;                                // 0x2A48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           StabStrikeComboAnimation;                                 // 0x2A50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 AltStabComboBlendCurve;                                   // 0x2A58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 AltStabComboWindupCurve;                                  // 0x2A60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 AltStabComboBlendCurve1P;                                 // 0x2A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 AltStabComboWindupCurve1P;                                // 0x2A70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 AltStabReleaseCurve;                                      // 0x2A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AltStabAnimation;                                         // 0x2A80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AltStabRiposteAnimation;                                  // 0x2A88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AltStabAltRiposteAnimation;                               // 0x2A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AltStabClashAnimation;                                    // 0x2A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AltStabMorphAnimation;                                    // 0x2AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AltStabStabComboAnimation;                                // 0x2AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           AltStabStrikeComboAnimation;                              // 0x2AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                BashAnimation;                                            // 0x2AB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ParryAnimation;                                           // 0x2AC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                AltParryAnimation;                                        // 0x2AC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             ParryAdditive;                                            // 0x2AD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             ParryPushAdditive;                                        // 0x2AD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             ParryPushAdditive3P;                                      // 0x2AE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             AltParryPushAdditive;                                     // 0x2AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             AltParryPushAdditive3P;                                   // 0x2AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RightStabBounce;                                          // 0x2AF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LeftStabBounce;                                           // 0x2B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RightStabBounce1P;                                        // 0x2B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LeftStabBounce1P;                                         // 0x2B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RightStrikeBounce;                                        // 0x2B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LeftStrikeBounce;                                         // 0x2B20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RightStrikeBounce1P;                                      // 0x2B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LeftStrikeBounce1P;                                       // 0x2B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RightStabChambered;                                       // 0x2B38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LeftStabChambered;                                        // 0x2B40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MeleeWeaponAnimationProfile");
		return ptr;
	}

};


// Class Mordhau.Mordhau1DVehicle
// 0x0000 (0x0CA0 - 0x0CA0)
class AMordhau1DVehicle : public AMordhauVehicle
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.Mordhau1DVehicle");
		return ptr;
	}


	void OnStepChanged();
};


// Class Mordhau.MordhauAIController
// 0x01E8 (0x0620 - 0x0438)
class AMordhauAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0438(0x0010) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       FacingActor;                                              // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class USkeletalMeshComponent>       FacingSkelMesh;                                           // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       FacingBone;                                               // 0x0458(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0460(0x0028) MISSED OFFSET
	class UAISenseConfig_Sight*                        SightConfig;                                              // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAISenseConfig_Hearing*                      HearingConfig;                                            // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAISenseConfig_Damage*                       DamageConfig;                                             // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x04A0(0x0050) MISSED OFFSET
	struct FRotator                                    DesiredControlRotationOverride;                           // 0x04F0(0x000C) (IsPlainOldData)
	TWeakObjectPtr<class AMordhauCharacter>            ReallyCloseEnemyCached;                                   // 0x04FC(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AMordhauCharacter>            LastClosestEnemy;                                         // 0x0504(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x050C(0x0004) MISSED OFFSET
	bool                                               bFirstRun;                                                // 0x0510(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0511(0x0003) MISSED OFFSET
	float                                              LODDeltaTime;                                             // 0x0514(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RandomFloat;                                              // 0x0518(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x051C(0x0004) MISSED OFFSET
	class UBotProfile*                                 BotProfile;                                               // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBotBehaviorProfile*                         BehaviorProfile;                                          // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCharacterProfile                           CharacterProfile;                                         // 0x0530(0x00A0)
	class ACustomizationReplicationActor*              CustomizationReplicationActor;                            // 0x05D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsePassedCustomizationReplicationActor;                  // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x05D9(0x0003) MISSED OFFSET
	float                                              EnemyScanInterval;                                        // 0x05DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnemyScanIntervalVariance;                                // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoRespawn;                                             // 0x05E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsRespawn;                                            // 0x05E5(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x05E6(0x0002) MISSED OFFSET
	float                                              NextRespawnTime;                                          // 0x05E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAnticipateTurns;                                   // 0x05EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableObstacleAvoidance;                                 // 0x05ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSeparation;                                        // 0x05EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableOptimizeVisibility;                                // 0x05EF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableOptimizeTopology;                                  // 0x05F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnablePathOffset;                                        // 0x05F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableSlowdownAtGoal;                                    // 0x05F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x05F3(0x0001) MISSED OFFSET
	float                                              SeparationWeight;                                         // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CollisionQueryRange;                                      // 0x05F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PathOptimizationRange;                                    // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AvoidanceRangeMultiplier;                                 // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECrowdAvoidanceQuality>                AvoidanceQuality;                                         // 0x0604(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECrowdSimulationState                              SimulationState;                                          // 0x0605(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x0606(0x0002) MISSED OFFSET
	class UClass*                                      DefaultNavQueryFilter;                                    // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Team1NavQueryFilter;                                      // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Team2NavQueryFilter;                                      // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauAIController");
		return ptr;
	}


	void UpdatePerceptionInfo(class AAdvancedCharacter* InCharacter, struct FPerceptionInfo* PerceptionInfo);
	void StartFacingMovement(float LocationUpOffset);
	void StartFacingLocation(const struct FVector& WorldLocation);
	void StartFacingBone(class USkeletalMeshComponent* SkelMesh, const struct FName& BoneToFace, float LocationUpOffset, const struct FVector2D& DegreeOffset);
	void StartFacingActor2D(class AActor* Actor, float LocationUpOffset);
	void StartFacingActor(class AActor* Actor, float LocationUpOffset, const struct FVector2D& DegreeOffset);
	void RequestVoiceCommand(unsigned char Command);
	void RefreshCharacterProfile();
	bool PerceivesEnemy();
	bool PerceivesAlly();
	void OnStoppedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, const struct FPerceptionInfo& PerceptionInfo);
	void OnStartedPerceivingCharacter(class AAdvancedCharacter* PerceivedCharacter, const struct FPerceptionInfo& PerceptionInfo);
	void OnPerceptionUpdated(TArray<class AActor*> InUpdatedActors);
	void OnCharacterDiedOrDestroyed(class AAdvancedCharacter* AdvancedCharacter);
	void OnAfterUnPossess();
	int GetTeam();
	TArray<class AMordhauCharacter*> GetPerceivedEnemies();
	TArray<class AMordhauCharacter*> GetPerceivedAllies();
	float GetMotionBasedRandom();
	class AMordhauCharacter* GetKthClosestOfThree(int Idx);
	class AActor* GetCurrentlyFacingActor();
	EAIFacingMode GetCurrentFacingMode();
	class AMordhauCharacter* GetClosestEnemy();
	class AMordhauCharacter* GetClosestAlly();
	int GetAllyClearanceSides();
	void DestroyController();
};


// Class Mordhau.MordhauAnimInstance
// 0x0A90 (0x0F70 - 0x04E0)
class UMordhauAnimInstance : public UCreatureAnimInstance
{
public:
	float                                              InternalScaledTimeSeconds;                                // 0x04E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04E4(0x0004) MISSED OFFSET
	struct FAnimNodePackedFaceCustomization            FaceCustomization;                                        // 0x04E8(0x0020) (BlueprintVisible, BlueprintReadOnly)
	struct FAnimNodePackedDismemberment                Dismemberment;                                            // 0x0508(0x0010) (BlueprintVisible, BlueprintReadOnly)
	TWeakObjectPtr<class AMordhauEquipment>            PreviousRightHandEquipment;                               // 0x0518(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UParticleSystem*>                     CrouchFootstepParticles;                                  // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UParticleSystem*>                     SprintFootstepParticles;                                  // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class USoundCue*                                   FootstepSound;                                            // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       MainAnimationType;                                        // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWasRagdollFalling;                                       // 0x0550(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0551(0x0003) MISSED OFFSET
	float                                              LastRagdollFallingTime;                                   // 0x0554(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Force1PMeshCorrectionWeight;                              // 0x0558(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldPerformInstantAnimSwitch;                          // 0x055C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsGetUpFront;                                            // 0x055D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x055E(0x0002) MISSED OFFSET
	float                                              GetUpAnimationDuration;                                   // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    GetUpRotation;                                            // 0x0564(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      DeathSyncedRandom;                                        // 0x0570(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0571(0x0003) MISSED OFFSET
	float                                              IsDedicatedServer;                                        // 0x0574(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimLOD0;                                                 // 0x0578(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimLOD1;                                                 // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecentlyRendered;                                         // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecentlyRenderedNonAuth;                                  // 0x0584(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0588(0x0008) MISSED OFFSET
	float                                              AnimLOD0Distance;                                         // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimLOD1Distance;                                         // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IsFemale;                                                 // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x059C(0x0003) MISSED OFFSET
	bool                                               bIsClimbingA;                                             // 0x059F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ClimbOffsetA;                                             // 0x05A0(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     ClimbOffsetEndOffsetA;                                    // 0x05AC(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     ClimbLedgeOffsetA;                                        // 0x05B8(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              IsSlowClimbingA;                                          // 0x05C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    ClimbRotationA;                                           // 0x05C8(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bIsClimbingB;                                             // 0x05D4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x05D5(0x0003) MISSED OFFSET
	struct FVector                                     ClimbOffsetB;                                             // 0x05D8(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     ClimbOffsetEndOffsetB;                                    // 0x05E4(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     ClimbLedgeOffsetB;                                        // 0x05F0(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    ClimbRotationB;                                           // 0x05FC(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              IsSlowClimbingB;                                          // 0x0608(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FastSmoothedIsCrouching;                                  // 0x060C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UnclampedFastSmoothedIsCrouching;                         // 0x0610(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FFloatSpringState                           CrouchSpringState;                                        // 0x0614(0x0008)
	struct FVector2D                                   CrouchSpringLimits;                                       // 0x061C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CrouchSpringStiffness;                                    // 0x0624(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UncrouchSpringStiffness;                                  // 0x0628(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrouchSpringDamping;                                      // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CrouchSpringMass;                                         // 0x0630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x0634(0x0004) MISSED OFFSET
	class UAnimSequence*                               VehicleTransitionAnimation;                               // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VehicleTransitionBlendWeight;                             // 0x0640(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VehicleTransitionComponentLocation;                       // 0x0644(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    VehicleTransitionComponentRotation;                       // 0x0650(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              IsDrivingFloat;                                           // 0x065C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0660(0x0004) MISSED OFFSET
	struct FRotator                                    LowerBodyRotationOffset;                                  // 0x0664(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0670(0x0004) MISSED OFFSET
	float                                              Direction;                                                // 0x0674(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    MovementCorrectionHips;                                   // 0x0678(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              MovementCorrectionHipsInterpSpeed;                        // 0x0684(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MovementCorrectionAnimRate;                               // 0x0688(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionWithOffset;                                      // 0x068C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionOffset;                                          // 0x0690(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionOffsetSlowInterpSpeed;                           // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DirectionOffsetSlow;                                      // 0x0698(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x8];                                       // 0x069C(0x0008) MISSED OFFSET
	float                                              Velocity;                                                 // 0x06A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SmoothedVelocity;                                         // 0x06A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OneToZeroAtWalkSpeed;                                     // 0x06AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x06B0(0x0004) MISSED OFFSET
	float                                              AnimRateFactor1PMaxSprint;                                // 0x06B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MovementSpeedScale;                                       // 0x06B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MovementAnimRate;                                         // 0x06BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedWarping;                                             // 0x06C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThirdPersonVelocity;                                      // 0x06C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseBackBlendSpace;                                       // 0x06C8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x06C9(0x0003) MISSED OFFSET
	struct FRotator                                    StopBounce;                                               // 0x06CC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    StopBounceWorld;                                          // 0x06D8(0x000C) (IsPlainOldData)
	float                                              StopBounceLimit;                                          // 0x06E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BounceInterpSpeed;                                        // 0x06E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BounceDuck;                                               // 0x06EC(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              BounceDuckLimit;                                          // 0x06F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x18];                                      // 0x06FC(0x0018) MISSED OFFSET
	float                                              SlowVelocityLagTime;                                      // 0x0714(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x18];                                      // 0x0718(0x0018) MISSED OFFSET
	float                                              FastVelocityLagTime;                                      // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopTiltFactor;                                           // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopDuckFactor;                                           // 0x0738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AngularVelocityInterpSpeed;                               // 0x073C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AngularVelocity;                                          // 0x0740(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AbsoluteAngularVelocityLowerBody;                         // 0x0744(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0748(0x0004) MISSED OFFSET
	float                                              AngularVelocityLowerBody;                                 // 0x074C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x0750(0x0004) MISSED OFFSET
	float                                              AngularVelocityLowerBodyWindow;                           // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0758(0x0004) MISSED OFFSET
	struct FVector                                     AnimatedMovementDirectionInCompSpace;                     // 0x075C(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              AngularVelocityPitch;                                     // 0x0768(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   SpringPitchYawValue;                                      // 0x076C(0x0008) (BlueprintVisible, IsPlainOldData)
	struct FFloatSpringState                           PitchSpringState;                                         // 0x0774(0x0008)
	struct FFloatSpringState                           YawSpringState;                                           // 0x077C(0x0008)
	struct FVector2D                                   SpringPitchYawStiffness;                                  // 0x0784(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   SpringPitchYawDamping;                                    // 0x078C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   SpringPitchYawMass;                                       // 0x0794(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              HandSpringWeight;                                         // 0x079C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFirstPerson;                                           // 0x07A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x07A1(0x0003) MISSED OFFSET
	float                                              IsFirstPersonFloat;                                       // 0x07A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IsNotFirstPersonFloat;                                    // 0x07A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FirstPersonZoomOffset;                                    // 0x07AC(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     CameraCollisionOffset;                                    // 0x07B8(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData19[0xC];                                       // 0x07C4(0x000C) MISSED OFFSET
	struct FTransform                                  RightWeaponBoneBaseTransform;                             // 0x07D0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     WeaponSlideVector;                                        // 0x0800(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     WeaponSlideVectorInverse;                                 // 0x080C(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x0818(0x0004) MISSED OFFSET
	float                                              WeaponSlideCompensationWeight;                            // 0x081C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightShoulderOffset1P;                                    // 0x0820(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     LeftShoulderOffset1P;                                     // 0x082C(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              ShoulderOffset1PWeight;                                   // 0x0838(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RightHandIKOffset;                                        // 0x083C(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              RightHandIKOffsetWeight;                                  // 0x0848(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OffhandIKWeight;                                          // 0x084C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x0850(0x0004) MISSED OFFSET
	struct FVector                                     LeftHandGripPosition;                                     // 0x0854(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     RightHandGripPosition;                                    // 0x0860(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RightHandGripRotation;                                    // 0x086C(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              OffhandIsRightHand;                                       // 0x0878(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x087C(0x0004) MISSED OFFSET
	class UAnimSequence*                               JumpAnimation;                                            // 0x0880(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               FallingAnimation;                                         // 0x0888(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LandAnimation;                                            // 0x0890(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x18];                                      // 0x0898(0x0018) MISSED OFFSET
	float                                              BouncyMagnitudeOffset;                                    // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BouncySlowVelocityLagTime;                                // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData24[0x18];                                      // 0x08B8(0x0018) MISSED OFFSET
	float                                              BouncyFastVelocityLagTime;                                // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BouncyInterpSpeed;                                        // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BouncyFactorBreasts;                                      // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BouncyFactorArms;                                         // 0x08DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BouncyFactorBelly;                                        // 0x08E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BouncyFactorLegs;                                         // 0x08E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BreastsT;                                                 // 0x08E8(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     LowerBackBellyT;                                          // 0x08F4(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpineAdjustT;                                             // 0x0900(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     LeftArmAdjustT;                                           // 0x090C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     RightArmAdjustT;                                          // 0x0918(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     LeftUpLegAdjustT;                                         // 0x0924(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     RightUpLegAdjustT;                                        // 0x0930(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              Fat;                                                      // 0x093C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Skinny;                                                   // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Strong;                                                   // 0x0944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IsHeadDismembered;                                        // 0x0948(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    NeckDismemberedRotation;                                  // 0x094C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LeftShoulderDismemberedRotation;                          // 0x0958(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              IsLeftArmDismembered;                                     // 0x0964(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RightShoulderDismemberedRotation;                         // 0x0968(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              IsRightArmDismembered;                                    // 0x0974(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrackingWeight;                                           // 0x0978(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x4];                                       // 0x097C(0x0004) MISSED OFFSET
	struct FRotator                                    LookingAtRotationNeck;                                    // 0x0980(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LookingAtRotationHead;                                    // 0x098C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LookingAtRotationEyes;                                    // 0x0998(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              HideEars;                                                 // 0x09A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HideNose;                                                 // 0x09A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Breath;                                                   // 0x09AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x4];                                       // 0x09B0(0x0004) MISSED OFFSET
	float                                              LowerBodyBreathInternal;                                  // 0x09B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LowerBodyBreathFactor;                                    // 0x09B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LowerBodyBreathFactorTarget;                              // 0x09BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CounterCompensateLookWeight;                              // 0x09C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CounterCompensateRotation;                                // 0x09C4(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              LookUpValue;                                              // 0x09D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RightLegBendBlendWeight;                                  // 0x09D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpineBendBlendWeight;                                     // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpineArmsCompensationFactor;                              // 0x09DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnValue;                                                // 0x09E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LeftHandIsEmpty;                                          // 0x09E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AtmosphericsWeight;                                       // 0x09E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Arms3PSyncWeight;                                         // 0x09EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData27[0x8];                                       // 0x09F0(0x0008) MISSED OFFSET
	float                                              BlockDirection;                                           // 0x09F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DisarmDirection;                                          // 0x09FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FSpineSpaceAdditive                         SpineSpaceAdditive;                                       // 0x0A00(0x0084) (BlueprintVisible)
	float                                              LeftTorsoBlendWeight;                                     // 0x0A84(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LeftStabBounce;                                           // 0x0A88(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RightStabBounce;                                          // 0x0A90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LeftStrikeBounce;                                         // 0x0A98(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RightStrikeBounce;                                        // 0x0AA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               RightStabChambered;                                       // 0x0AA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LeftStabChambered;                                        // 0x0AB0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             RangedDrawnAdditive;                                      // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    SwayRotation;                                             // 0x0AC0(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              SwayWeight;                                               // 0x0ACC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             ParryAdditive;                                            // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             ParryPushAdditive;                                        // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             AltParryPushAdditive;                                     // 0x0AE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LowerBodyBlendSpaceBlendTime;                             // 0x0AE8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0x4];                                       // 0x0AEC(0x0004) MISSED OFFSET
	class UBlendSpaceBase*                             UpperBlendSpaceA;                                         // 0x0AF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpperBlendSpaceABlendTime;                                // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x4];                                       // 0x0AFC(0x0004) MISSED OFFSET
	class UAnimSequence*                               UpperAdditiveA;                                           // 0x0B00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             UpperBlendSpaceB;                                         // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpperBlendSpaceBBlendTime;                                // 0x0B10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x4];                                       // 0x0B14(0x0004) MISSED OFFSET
	class UAnimSequence*                               UpperAdditiveB;                                           // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCurrentUpperA;                                         // 0x0B20(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x0B21(0x0007) MISSED OFFSET
	class UAnimSequence*                               LowerBodyAnimationA;                                      // 0x0B28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               LowerBodyAnimationB;                                      // 0x0B30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               HorseUpperRearing;                                        // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCurrentLowerA;                                         // 0x0B40(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHorseRearing;                                          // 0x0B41(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData32[0x2];                                       // 0x0B42(0x0002) MISSED OFFSET
	float                                              Couching;                                                 // 0x0B44(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rearing;                                                  // 0x0B48(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lean;                                                     // 0x0B4C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VehicleAnimTime;                                          // 0x0B50(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VehicleAnimRate;                                          // 0x0B54(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VehicleLeftHandTarget;                                    // 0x0B58(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     VehicleRightHandTarget;                                   // 0x0B64(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              VehicleTurn;                                              // 0x0B70(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VehicleLookUp;                                            // 0x0B74(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VehicleLeftFootTarget;                                    // 0x0B78(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     VehicleRightFootTarget;                                   // 0x0B84(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    VehicleLeftFootRotation;                                  // 0x0B90(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    VehicleRightFootRotation;                                 // 0x0B9C(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              VehicleVelocity;                                          // 0x0BA8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VehicleDirection;                                         // 0x0BAC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VehicleSeat;                                              // 0x0BB0(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    VehicleActorRotation;                                     // 0x0BBC(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    VehicleRotationOffset;                                    // 0x0BC8(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    VehicleSeatRotation;                                      // 0x0BD4(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bBallistaReloading;                                       // 0x0BE0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData33[0x3];                                       // 0x0BE1(0x0003) MISSED OFFSET
	float                                              HitEffectIKWeight;                                        // 0x0BE4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitEffectLocationSlideSpeed;                              // 0x0BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitEffectDisableSpeed;                                    // 0x0BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitEffectIKLocation;                                      // 0x0BF0(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     HitEffectIKLocationStart;                                 // 0x0BFC(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    HitEffectRotation;                                        // 0x0C08(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    HitEffectRotationStart;                                   // 0x0C14(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x0C20(0x0004) MISSED OFFSET
	float                                              FlinchFreezeBlendInDuration;                              // 0x0C24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlinchFreezeRotationBlendInSpeed;                         // 0x0C28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlinchFreezeTranslationBlendInSpeed;                      // 0x0C2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlinchFreezeBlendInAlpha;                                 // 0x0C30(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlinchBlendInDuration;                                    // 0x0C34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlinchRotationBlendInSpeed;                               // 0x0C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlinchTranslationBlendInSpeed;                            // 0x0C3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlinchRotationBlendOutSpeed;                              // 0x0C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlinchTranslationBlendOutSpeed;                           // 0x0C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlinchRotationBlendOutSpeedFast;                          // 0x0C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlinchTranslationBlendOutSpeedFast;                       // 0x0C4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlinchPitchAmount;                                        // 0x0C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlinchYawAmount;                                          // 0x0C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlinchPitchYawFactor;                                     // 0x0C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlinchHipsZFactor;                                        // 0x0C5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeaponDirHipsZFactor;                                     // 0x0C60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TranslationNonHipsFactor;                                 // 0x0C64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    FlinchRotationTarget;                                     // 0x0C68(0x000C) (IsPlainOldData)
	struct FVector                                     FlinchTranslationTarget;                                  // 0x0C74(0x000C) (IsPlainOldData)
	struct FVector                                     FlinchHipsTranslationTarget;                              // 0x0C80(0x000C) (IsPlainOldData)
	int                                                FlinchHitSpineIdx;                                        // 0x0C8C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FlinchStartTime;                                          // 0x0C90(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CurrentFlinchSpineRotationsCombined;                      // 0x0C94(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    HipsFlinchRotation;                                       // 0x0CA0(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     HipsFlinchTranslation;                                    // 0x0CAC(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     HipsFlinchTranslationInternal;                            // 0x0CB8(0x000C) (IsPlainOldData)
	struct FRotator                                    LowerBackFlinchRotation;                                  // 0x0CC4(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     LowerBackFlinchTranslation;                               // 0x0CD0(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    SpineFlinchRotation;                                      // 0x0CDC(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpineFlinchTranslation;                                   // 0x0CE8(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    Spine1FlinchRotation;                                     // 0x0CF4(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     Spine1FlinchTranslation;                                  // 0x0D00(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    NeckFlinchRotation;                                       // 0x0D0C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     NeckFlinchTranslation;                                    // 0x0D18(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    HeadFlinchRotation;                                       // 0x0D24(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     HeadFlinchTranslation;                                    // 0x0D30(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              Helper_UBCrouchAlpha;                                     // 0x0D3C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Helper_LBCrouchAlpha;                                     // 0x0D40(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Helper_UBCrouchSpine;                                     // 0x0D44(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Helper_UBCrouchForearms;                                  // 0x0D50(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Helper_UBCrouchArms;                                      // 0x0D5C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Helper_UBCrouchHead;                                      // 0x0D68(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Helper_UBCrouchShoulder;                                  // 0x0D74(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Helper_UBSpineArmsCompensationAlpha;                      // 0x0D80(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Helper_UBSpineArmsCompensationRotator;                    // 0x0D84(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bHelper_LBFootShuffling;                                  // 0x0D90(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x0D91(0x0003) MISSED OFFSET
	float                                              Helper_LBFootShufflingPlayRate;                           // 0x0D94(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHelper_LBFootShufflingRight;                             // 0x0D98(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x0D99(0x0003) MISSED OFFSET
	struct FRotator                                    Helper_LBDirectionOffsetSlowRotator;                      // 0x0D9C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Helper_LBDirectionOffsetSlowRotatorInverse;               // 0x0DA8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Helper_LBDirectionOffsetSlowHipsZ;                        // 0x0DB4(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Helper_LBDirectionOffsetSlowHipsZInverse;                 // 0x0DC0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Helper_LBDirectionOffsetSlowFootRotationOffset;           // 0x0DCC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Helper_UBVelocity;                                        // 0x0DD8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHelper_LBVelocityIsZero;                                 // 0x0DDC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x0DDD(0x0003) MISSED OFFSET
	struct FVector                                     Helper_LBCrouchOffset;                                    // 0x0DE0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Helper_LBCrouchOffsetInverse;                             // 0x0DEC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Helper_LBHipsZOverrideAlpha;                              // 0x0DF8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Helper_TrackingWeightAlpha;                               // 0x0DFC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Helper_BreathAlpha;                                       // 0x0E00(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Helper_IsNotDrivingFloat;                                 // 0x0E04(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Helper_HipsFlinchTranslationInverse;                      // 0x0E08(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Helper_HipsFlinchRotationInverse;                         // 0x0E14(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Helper_ArmsShoulderFlinchInverse;                         // 0x0E20(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Helper_FirstPersonNotDead;                                // 0x0E2C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Helper_FirstPersonZoomOffsetInverse;                      // 0x0E30(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Helper_FirstPersonZoomOffsetAndCollision;                 // 0x0E3C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Helper_CameraCollisionOffsetWithNot3PArmsSync;            // 0x0E48(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Helper_FirstPersonNotDeadWith3PArmsSync;                  // 0x0E54(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Helper_IsNotFemale;                                       // 0x0E58(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Helper_SpineBendBlendWeightHalf;                          // 0x0E5C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Helper_SpineBendBlendWeightThird;                         // 0x0E60(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Helper_GroundingRightFootRotationOffset;                  // 0x0E64(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Helper_GroundingLeftFootRotationOffset;                   // 0x0E70(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Helper_GroundingRightFootTranslationOffset;               // 0x0E7C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Helper_GroundingLeftFootTranslationOffset;                // 0x0E88(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              NotFirstPersonWithAtmospherics;                           // 0x0E94(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Helper_FaceUpperLids;                                     // 0x0E98(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Helper_LeftHandIKWeight;                                  // 0x0EA4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Helper_RightHandIKWeight;                                 // 0x0EA8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Helper_RootRotationOffsetInverse;                         // 0x0EAC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Helper_StopBounceMediumWeight;                            // 0x0EB8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Helper_StopBounceLightWeight;                             // 0x0EBC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Helper_StopBounceInverse;                                 // 0x0EC0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Helper_StopBounceHips;                                    // 0x0ECC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Helper_BounceDuckWithBounceWeight;                        // 0x0ED8(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Helper_BounceDuckWithBounceWeightInverse;                 // 0x0EE4(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Helper_SpineBendRotation;                                 // 0x0EF0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Helper_HipsBendRotation;                                  // 0x0EFC(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Helper_SpineBendRotationAlpha;                            // 0x0F08(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Helper_RightLegBendRotation;                              // 0x0F0C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Helper_ArmsBendRotation;                                  // 0x0F18(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              AtmosphericsWeightWithAnimLOD0;                           // 0x0F24(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Helper_LowerBodyRotationOffsetInverse;                    // 0x0F28(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     Helper_RightWeaponBoneBaseTranslation;                    // 0x0F34(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Helper_RightWeaponBoneBaseRotation;                       // 0x0F40(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Helper_SpringPitchYawValueRotator;                        // 0x0F4C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              Helper_HandSpringWeight;                                  // 0x0F58(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Helper_ShoulderOffset1PWith1PWeight;                      // 0x0F5C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Helper_JiggleBouncyWeight;                                // 0x0F60(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData38[0xC];                                       // 0x0F64(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauAnimInstance");
		return ptr;
	}

};


// Class Mordhau.MordhauAnimMetaData
// 0x0030 (0x0058 - 0x0028)
class UMordhauAnimMetaData : public UAnimMetaData
{
public:
	float                                              OverrideIdleChangeBlendTime;                              // 0x0028(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisablesSpineBending;                                    // 0x002C(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              ForceCinematicCameraWeight;                               // 0x0030(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisablesOffhandIK;                                       // 0x0034(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bForcesOffhandIK;                                         // 0x0035(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bOverridesOffhandIKChangeSpeed;                           // 0x0036(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0037(0x0001) MISSED OFFSET
	float                                              OffhandIKChangeSpeedOverride;                             // 0x0038(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxOffhandIKDistance;                                     // 0x003C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinOffhandIKDistance;                                     // 0x0040(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bDisablesSpineArmsCompensation;                           // 0x0044(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	float                                              ParamA;                                                   // 0x0048(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ParamB;                                                   // 0x004C(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ParamC;                                                   // 0x0050(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ParamD;                                                   // 0x0054(0x0004) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauAnimMetaData");
		return ptr;
	}

};


// Class Mordhau.MordhauCameraComponent
// 0x01C0 (0x09A0 - 0x07E0)
class UMordhauCameraComponent : public UCameraComponent
{
public:
	float                                              CinematicCameraBlendWeight;                               // 0x07E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumCinematicCameraBlendWeight;                        // 0x07E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FirstPersonCinematicCameraOffset;                         // 0x07E8(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     ThirdPersonCinematicCameraOffset;                         // 0x07F4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CinematicCameraRotationOffset;                            // 0x0800(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    ThirdPersonRotationOffset;                                // 0x080C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     ThirdPersonCameraOffset;                                  // 0x0818(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     ThirdPersonAimingCameraOffset;                            // 0x0824(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AimingCameraActivateChangeSpeed;                          // 0x0830(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AimingCameraDisableChangeSpeed;                           // 0x0834(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AimingBlendWeight;                                        // 0x0838(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ThirdPersonHipsSmoothSpeed;                               // 0x083C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ThirdPersonHipsSmoothLimits;                              // 0x0840(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ThirdPersonTeleportThreshold;                             // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeadCameraLocationSmoothSpeed;                            // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeadCameraLocationSmoothMaxDistance;                      // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeadCameraRotationSmoothSpeed;                            // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SmoothedHeadLocation;                                     // 0x085C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    SmoothedHeadRotation;                                     // 0x0868(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0874(0x000C) MISSED OFFSET
	struct FTransform                                  PreviousHeadTransform;                                    // 0x0880(0x0030) (BlueprintVisible, IsPlainOldData)
	float                                              TurnOnFirstPersonModelDistance;                           // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnOnThirdPersonModelDistance;                           // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ThirdToFirstBlendCurve;                                   // 0x08B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 FirstToThirdBlendCurve;                                   // 0x08C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MapToFirstBlendCurve;                                     // 0x08C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MapToThirdBlendCurve;                                     // 0x08D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MapToFirstRotationBlendCurve;                             // 0x08D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MapToThirdRotationBlendCurve;                             // 0x08E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CameraStyleBlendingFrom;                                  // 0x08E8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CameraStyleBlendingTo;                                    // 0x08E9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x08EA(0x0002) MISSED OFFSET
	struct FPOV                                        LastCameraStyleChangeCameraPOV;                           // 0x08EC(0x001C) (BlueprintVisible)
	struct FPOV                                        LastVehicleCameraPOV;                                     // 0x0908(0x001C) (BlueprintVisible)
	struct FPOV                                        LastNonVehicleCameraPOV;                                  // 0x0924(0x001C) (BlueprintVisible)
	struct FPOV                                        LastCameraPOV;                                            // 0x0940(0x001C) (BlueprintVisible)
	bool                                               bIsBlendingCameraStyle;                                   // 0x095C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x095D(0x0003) MISSED OFFSET
	float                                              CameraStyleChangeBlendDuration;                           // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MapCameraStyleChangeBlendDuration;                        // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SmoothedHipsOffset;                                       // 0x0968(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     PreviousHipsLocation;                                     // 0x0974(0x000C) (BlueprintVisible, IsPlainOldData)
	class UCurveFloat*                                 CameraLocationScaleCurve;                                 // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CameraZoomScaleCurve;                                     // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PreviousCharacterMeshLocation;                            // 0x0990(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x099C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauCameraComponent");
		return ptr;
	}


	void UpdateCamera();
	struct FPOV ComputeCameraPOV();
};


// Class Mordhau.MordhauCameraManager
// 0x05C0 (0x2BB0 - 0x25F0)
class AMordhauCameraManager : public APlayerCameraManager
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x25F0(0x0008) MISSED OFFSET
	class AAtmosphericFog*                             AtmosphericFog;                                           // 0x25F8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x2600(0x0004) MISSED OFFSET
	float                                              AtmosphericFogMultiplierChangeSpeed;                      // 0x2604(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsInMainMenu;                                            // 0x2608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x2609(0x0007) MISSED OFFSET
	struct FMinimalViewInfo                            LastViewInfo;                                             // 0x2610(0x0570)
	TWeakObjectPtr<class AActor>                       QueuedViewTarget;                                         // 0x2B80(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              HitFlashFadeInDuration;                                   // 0x2B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitFlashStayDuration;                                     // 0x2B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HitFlashFadeOutDuration;                                  // 0x2B90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x2B94(0x0008) MISSED OFFSET
	float                                              HitFlashValue;                                            // 0x2B9C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsHitFlashDirectional;                                   // 0x2BA0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x2BA1(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       HitFlashSource;                                           // 0x2BA4(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              HitFlashDegrees;                                          // 0x2BAC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauCameraManager");
		return ptr;
	}


	void SetViewTargetBP(class AActor* NewTarget);
	void SetCameraStyleBP(const struct FName& NewCameraStyle);
	void OnHitFlash(bool bIsDirectional, class AActor* Source);
	void LeaveMapView();
	void LeaveCustomization();
	class AActor* GetViewTargetBP();
	bool GetIsInMapView();
	bool GetIsInCustomization();
	struct FName GetCameraStyleBP();
	struct FMinimalViewInfo GetCameraCache();
	void EnterMapView();
	void EnterCustomization(class AActor* CustomizationTarget);
};


// Class Mordhau.MordhauCapsuleComponent
// 0x0010 (0x05A0 - 0x0590)
class UMordhauCapsuleComponent : public UCapsuleComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0590(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauCapsuleComponent");
		return ptr;
	}

};


// Class Mordhau.MordhauCharacter
// 0x0F90 (0x1B60 - 0x0BD0)
class AMordhauCharacter : public AAdvancedCharacter
{
public:
	TMap<struct FName, class UMordhauWearable*>        WearableProtectionCoverageMap;                            // 0x0BD0(0x0050) (ZeroConstructor)
	TWeakObjectPtr<class UAudioComponent>              LastAttackYell;                                           // 0x0C20(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UAudioComponent>              LastHurtYell;                                             // 0x0C28(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0C30(0x0010) MISSED OFFSET
	bool                                               bIsHoldingBlock;                                          // 0x0C40(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0C41(0x0003) MISSED OFFSET
	struct FSpineSpaceAdditive                         OverrideSpineSpaceAdditive;                               // 0x0C44(0x0084) (Edit, BlueprintVisible)
	bool                                               bUseOverrideSpineSpaceAdditive;                           // 0x0CC8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0CC9(0x0003) MISSED OFFSET
	float                                              MaxDistFromBoneForAnyDismember;                           // 0x0CCC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAngleDistFromBoneForAnyDismember;                      // 0x0CD0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDistFromBoneForFullDismember;                          // 0x0CD4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAngleDistFromBoneForFullDismember;                     // 0x0CD8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RagdollMaxDistFromBoneForAnyDismember;                    // 0x0CDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RagdollMaxDistFromBoneForFullDismember;                   // 0x0CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeathEquipmentRagdollAngularFactor;                       // 0x0CE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeathEquipmentRagdollTranslationalFactor;                 // 0x0CE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasScaryFace;                                            // 0x0CEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0CED(0x0003) MISSED OFFSET
	struct FVector2D                                   ScaryFaceRotationLimit;                                   // 0x0CF0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ScaryFaceTranslationLimit;                                // 0x0CF8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ScaryFaceScaleLimit;                                      // 0x0D00(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FSpineSpaceAdditive                         SpineSpaceAdditiveTarget;                                 // 0x0D08(0x0084)
	struct FSpineSpaceAdditive                         SpineSpaceAdditiveFrom;                                   // 0x0D8C(0x0084)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0E10(0x000C) MISSED OFFSET
	bool                                               bIsLeftArmDisabled;                                       // 0x0E1C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRightArmDisabled;                                      // 0x0E1D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLeftLegDisabled;                                       // 0x0E1E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRightLegDisabled;                                      // 0x0E1F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeleton*                                   BodySkeleton;                                             // 0x0E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPhysicsAsset*                               BodyRagdollPhysicsAsset;                                  // 0x0E28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPhysicsAsset*                               ShadowPhysicsAsset;                                       // 0x0E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          LODMasterMaterial;                                        // 0x0E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          HelmetCoifMaterial;                                       // 0x0E40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          ChestShouldersMaterial;                                   // 0x0E48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          ArmsGlovesMaterial;                                       // 0x0E50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          LowerChestMaterial;                                       // 0x0E58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          LegsBootsMaterial;                                        // 0x0E60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          HelmetCoifChestMaterial;                                  // 0x0E68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          LegsBootsChestLowMaterial;                                // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          ArmsGlovesShouldersMaterial;                              // 0x0E78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               ServerMesh;                                               // 0x0E80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               Eyes;                                                     // 0x0E88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               FemaleEyes;                                               // 0x0E90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               LeftArm;                                                  // 0x0E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               LeftArm1P;                                                // 0x0EA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               RightArm;                                                 // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               RightArm1P;                                               // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               LeftHand;                                                 // 0x0EB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               LeftHand1P;                                               // 0x0EC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               RightHand;                                                // 0x0EC8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               RightHand1P;                                              // 0x0ED0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               LeftLeg;                                                  // 0x0ED8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               RightLeg;                                                 // 0x0EE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               LeftFoot;                                                 // 0x0EE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               RightFoot;                                                // 0x0EF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USkeletalMesh*                               Torso;                                                    // 0x0EF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BodyPart;                                                 // 0x0F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FFacialBoneSetup>                    FaceCustomizationSetup;                                   // 0x0F08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        BakedDefaultFaceValuesTranslate;                          // 0x0F18(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BakedDefaultFaceValuesRotate;                             // 0x0F28(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BakedDefaultFaceValuesScale;                              // 0x0F38(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bRegenerateBakedDefaultFaceValues;                        // 0x0F48(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDoNotAnimateBreathing;                                   // 0x0F49(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNotUseGrounding;                                       // 0x0F4A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSoundDisabled;                                         // 0x0F4B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNotLookAtOthers;                                       // 0x0F4C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0F4D(0x0003) MISSED OFFSET
	float                                              FootstepVolumeModifierWithRatPerk;                        // 0x0F50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallDamageModifierWithCatPerk;                            // 0x0F54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, int>                            BoneToParentGroupIdx;                                     // 0x0F58(0x0050) (ZeroConstructor)
	TMap<int, int>                                     BoneIdxToSculptableFaceBoneIdx;                           // 0x0FA8(0x0050) (ZeroConstructor)
	TMap<int, int>                                     SelectionBoneIdxToSculptableFaceBoneIdx;                  // 0x0FF8(0x0050) (ZeroConstructor)
	TMap<struct FName, int>                            BoneNameToSculptableFaceBoneIdx;                          // 0x1048(0x0050) (ZeroConstructor)
	unsigned char                                      ReplicatedDodge;                                          // 0x1098(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReplicatedVoiceCommand;                                   // 0x1099(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0xA];                                       // 0x109A(0x000A) MISSED OFFSET
	float                                              AttackYellVolumeMultiplierViewTarget;                     // 0x10A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VoiceCommandQueueDuration;                                // 0x10A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class ACustomizationReplicationActor> ReplicatedCustomizationReplicationActor;                  // 0x10AC(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x4];                                       // 0x10B4(0x0004) MISSED OFFSET
	TArray<struct FTransform>                          FaceCustomizationBonesTransforms;                         // 0x10B8(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData08[0x4];                                       // 0x10C8(0x0004) MISSED OFFSET
	float                                              ClothBlendWeightInterpSpeed;                              // 0x10CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          FriendlyMarkerMaterial;                                   // 0x10D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class ULODSkeletalMeshComponent*>           SlaveSkeletalMeshComponents;                              // 0x10D8(0x0010) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	class UStaticMeshComponent*                        QuiverStaticMeshComponent;                                // 0x10E8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AControlPoint*                               CurrentCapturePoint;                                      // 0x10F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CurrentCapturePointTime;                                  // 0x10F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bForceInstantMeshUpdate;                                  // 0x10FC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bForceMipStreaming;                                       // 0x10FD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x10FE(0x0002) MISSED OFFSET
	float                                              UnifiedMeshDistance;                                      // 0x1100(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SeparatedMeshDistance;                                    // 0x1104(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      LODIncreaseDistance;                                      // 0x1108(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      LODDecreaseDistance;                                      // 0x1118(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector2D                                   FOVLODDistanceScaleIn;                                    // 0x1128(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   FOVLODDistanceScaleOut;                                   // 0x1130(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                CurrentForcedLOD;                                         // 0x1138(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMeshesAreInitialized;                                    // 0x113C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasInvisibleBody;                                        // 0x113D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMaterialsAreInitialized;                                 // 0x113E(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x9];                                       // 0x113F(0x0009) MISSED OFFSET
	TArray<TWeakObjectPtr<class AActor>>               ActorsThatDestroyWithUs;                                  // 0x1148(0x0010) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class AActor>>   AttachedGoreMeshes;                                       // 0x1158(0x0050) (ZeroConstructor)
	TWeakObjectPtr<class UParticleSystemComponent>     CurrentBleedOutParticles;                                 // 0x11A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMesh*                               FPMesh;                                                   // 0x11B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               FPDeadMesh;                                               // 0x11B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               UnifiedMesh;                                              // 0x11C0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0xC];                                       // 0x11C8(0x000C) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       LastMovementFrontalHitActor;                              // 0x11D4(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x11DC(0x0004) MISSED OFFSET
	float                                              MoveBlockedBySlowMinInterval;                             // 0x11E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x11E4(0x0004) MISSED OFFSET
	class AMordhauVehicle*                             CurrentVehicle;                                           // 0x11E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VehicleEnterStartTime;                                    // 0x11F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x11F4(0x0004) MISSED OFFSET
	struct FVehicleTransitionInfo                      VehicleEnterTransitionInfo;                               // 0x11F8(0x0010) (BlueprintVisible)
	float                                              VehicleLeaveStartTime;                                    // 0x1208(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x120C(0x0004) MISSED OFFSET
	struct FVehicleTransitionInfo                      VehicleLeaveTransitionInfo;                               // 0x1210(0x0010) (BlueprintVisible)
	struct FTransform                                  LastMeshTransformWithoutVehicle;                          // 0x1220(0x0030) (BlueprintVisible, IsPlainOldData)
	struct FTransform                                  LastMeshTransformWithVehicle;                             // 0x1250(0x0030) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     ClimbTargetLocation;                                      // 0x1280(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              LastVehicleTime;                                          // 0x128C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastNonVehicleTime;                                       // 0x1290(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AMordhauVehicle>              LastUsedVehicle;                                          // 0x1294(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              LastNoticeableLookChange;                                 // 0x129C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PreviousLookValues;                                       // 0x12A0(0x0008) (BlueprintVisible, IsPlainOldData)
	float                                              NoticeableLookChangeMinRate;                              // 0x12A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x12AC(0x0004) MISSED OFFSET
	TArray<struct FDamageRecord>                       DamageHistory;                                            // 0x12B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData17[0x10];                                      // 0x12C0(0x0010) MISSED OFFSET
	float                                              StaminaCostModifier;                                      // 0x12D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeleeWindupModifier;                                      // 0x12D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeleeComboExtraWindupModifier;                            // 0x12D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeleeReleaseModifier;                                     // 0x12DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MeleeMissRecoveryModifier;                                // 0x12E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LegDamageBonusModifierAirborne;                           // 0x12E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUnflinchable;                                          // 0x12E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x12E9(0x0003) MISSED OFFSET
	float                                              DamageModifierWithWreckerPerk;                            // 0x12EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealingModifierWithSmithPerk;                             // 0x12F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReceivedFireDamageModifierWithFireproofPerk;              // 0x12F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReceivedDamageModifierWithFriendlyPerk;                   // 0x12F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Stamina;                                                  // 0x12FC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ReplicatedStamina;                                        // 0x12FD(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData19[0x1];                                       // 0x12FE(0x0001) MISSED OFFSET
	unsigned char                                      HealthRegenPerTickWithTenaciousPerk;                      // 0x12FF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      StaminaRegenPerTick;                                      // 0x1300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x1301(0x0003) MISSED OFFSET
	float                                              StaminaRegenDelay;                                        // 0x1304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StaminaOnKill;                                            // 0x1308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StaminaOnKillWithFuryPerk;                                // 0x130C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HealthOnKill;                                             // 0x1310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HealthOnKillWithBloodlustPerk;                            // 0x1314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExtraStaminaOnHitWithSecondWindPerk;                      // 0x1318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StaminaRegenTickRate;                                     // 0x131C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpStaminaCost;                                          // 0x1320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              JumpStaminaCostWithAcrobatPerk;                           // 0x1324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MovementBoostDurationWithRushPerk;                        // 0x1328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MovementRestrictionOverrideDurationWithRushPerk;          // 0x132C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastEnemyKilledTimeWithMeleeOrRanged;                     // 0x1330(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KnockbackParry;                                           // 0x1334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KnockbackWorld;                                           // 0x1338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KnockbackParried;                                         // 0x133C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KnockbackClash;                                           // 0x1340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData21[0x4];                                       // 0x1344(0x0004) MISSED OFFSET
	float                                              EasyParryUntilTime;                                       // 0x1348(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FallingTime;                                              // 0x134C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FallingTimeToRagdoll;                                     // 0x1350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastDodgeTime;                                            // 0x1354(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DodgeDuration;                                            // 0x1358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DodgeCooldown;                                            // 0x135C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DodgeStaminaCost;                                         // 0x1360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWasDodgeCanceled;                                        // 0x1364(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x1365(0x0003) MISSED OFFSET
	struct FVector                                     DodgeDirection;                                           // 0x1368(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     DodgeDirectionLocal;                                      // 0x1374(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              TotalChaseTime;                                           // 0x1380(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastChaseTime;                                            // 0x1384(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TotalChasedTime;                                          // 0x1388(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastChasedTime;                                           // 0x138C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ArmsBouncyLimits;                                         // 0x1390(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     SpineBouncyLimits;                                        // 0x139C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     BreastBouncyLimits;                                       // 0x13A8(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     BellyBouncyLimitsFat;                                     // 0x13B4(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     BellyBouncyLimitsSlim;                                    // 0x13C0(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     LegsBouncyLimits;                                         // 0x13CC(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              MinDelayBetweenVoiceCommands;                             // 0x13D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDelayBetweenBattlecries;                               // 0x13DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableBouncy;                                           // 0x13E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsVoiceMuffled;                                          // 0x13E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x13E2(0x0002) MISSED OFFSET
	float                                              MuffledVoiceLowPassFrequency;                             // 0x13E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MuffledVoiceVolumeMultiplier;                             // 0x13E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoresTeamColors;                                       // 0x13EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideEars;                                                // 0x13ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHideNose;                                                // 0x13EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData24[0x1];                                       // 0x13EF(0x0001) MISSED OFFSET
	float                                              DeathRaiseHandForce;                                      // 0x13F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeathRaiseHeadForce;                                      // 0x13F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DeathRaiseHipsForce;                                      // 0x13F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FWoundInfo                                  DismemberWoundInfo;                                       // 0x13FC(0x0014) (Edit, BlueprintVisible)
	bool                                               bIsWrithingInPain;                                        // 0x1410(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWasHitAfterDeath;                                        // 0x1411(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData25[0x2];                                       // 0x1412(0x0002) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       QueuedDismemberAgent;                                     // 0x1414(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     QueuedDismemberForceDir;                                  // 0x141C(0x000C) (BlueprintVisible, IsPlainOldData)
	TWeakObjectPtr<class ASeparatedBodyPart>           SeparatedHead;                                            // 0x1428(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<TWeakObjectPtr<class ASeparatedBodyPart>>   SeparatedBodyParts;                                       // 0x1430(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class AActor>                       CurrentlyTracking;                                        // 0x1440(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              LastTrackingUpdate;                                       // 0x1448(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData26[0x4];                                       // 0x144C(0x0004) MISSED OFFSET
	unsigned char                                      UnknownData27[0x50];                                      // 0x144C(0x0050) UNKNOWN PROPERTY: SetProperty Mordhau.MordhauCharacter.DismemberedBones
	class UMordhauCameraComponent*                     MordhauCamera;                                            // 0x14A0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsFirstPerson;                                           // 0x14A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x14A9(0x0003) MISSED OFFSET
	float                                              FirstPersonLookUpOffset;                                  // 0x14AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CameraLocationScaleCurve;                                 // 0x14B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 CameraZoomScaleCurve;                                     // 0x14B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CameraStyle;                                              // 0x14C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x14C1(0x0003) MISSED OFFSET
	float                                              LastCameraStyleChangeTime;                                // 0x14C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldBlendLastCameraStyleChange;                        // 0x14C8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x14C9(0x0003) MISSED OFFSET
	float                                              MaxThirdPersonFOV;                                        // 0x14CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentFOVOffset;                                         // 0x14D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentMotionFOVOffset;                                   // 0x14D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionFOVOffsetZeroSpeed;                                 // 0x14D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentSpeedFOVOffset;                                    // 0x14DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSprintFOVOffset;                                       // 0x14E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSprintFOVOffsetInterpSpeed;                            // 0x14E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CameraLocation1P;                                         // 0x14E8(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     CameraLocation1PCosmeticOffset;                           // 0x14F4(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     CameraLocation1PFOVOffset;                                // 0x1500(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FVector                                     CameraLocation1PZoomOffset;                               // 0x150C(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CameraRotation1P;                                         // 0x1518(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    CameraRotation1PMeshSpace;                                // 0x1524(0x000C) (BlueprintVisible, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       InteractionTarget;                                        // 0x1530(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UseHoldTime;                                              // 0x1538(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       RequestedInteractionTarget;                               // 0x153C(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData31[0x4];                                       // 0x1544(0x0004) MISSED OFFSET
	struct FVector                                     CameraCollisionLocationOffset;                            // 0x1548(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData32[0x4];                                       // 0x1554(0x0004) MISSED OFFSET
	float                                              EllipseBubbleLength;                                      // 0x1558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EllipseBubbleRadius;                                      // 0x155C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EllipseBubbleMaxHeightDiff;                               // 0x1560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   BlockColliderForwardParryDistance;                        // 0x1564(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x156C(0x0004) MISSED OFFSET
	class UBoxComponent*                               BlockCollider;                                            // 0x1570(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData34[0x8];                                       // 0x1578(0x0008) MISSED OFFSET
	struct FTransform                                  LowBlockColliderRelativeOffset;                           // 0x1580(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  HighBlockColliderRelativeOffset;                          // 0x15B0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FTransform                                  OriginalBlockColliderRelativeOffset;                      // 0x15E0(0x0030) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData35[0x20];                                      // 0x1610(0x0020) MISSED OFFSET
	struct FVector                                     LastRequestedFireOrigin;                                  // 0x1630(0x000C) (BlueprintVisible, IsPlainOldData)
	struct FRotator                                    LastRequestedFireRotation;                                // 0x163C(0x000C) (BlueprintVisible, IsPlainOldData)
	bool                                               bWantsFire;                                               // 0x1648(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsBlock;                                              // 0x1649(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsFeintOrBlock;                                       // 0x164A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData36[0x5];                                       // 0x164B(0x0005) MISSED OFFSET
	TArray<class UAnimMontage*>                        UnarmedPreviewPoses;                                      // 0x1650(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UAnimMontage*                                FaceAttackAnimation;                                      // 0x1660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FaceBattlecryAnimation;                                   // 0x1668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FaceTalkingAnimation;                                     // 0x1670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                FaceHurtAnimation;                                        // 0x1678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             UnarmedUpperBlendSpace1P;                                 // 0x1680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UnarmedUpperAdditive1P;                                   // 0x1688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             UnarmedUpperBlendSpace;                                   // 0x1690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UnarmedUpperAdditive;                                     // 0x1698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             HorseUnarmedUpperBlendSpace1P;                            // 0x16A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               HorseUnarmedUpperAdditive1P;                              // 0x16A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBlendSpaceBase*                             HorseUnarmedUpperBlendSpace;                              // 0x16B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               HorseUnarmedUpperAdditive;                                // 0x16B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UnarmedLowerAnimation;                                    // 0x16C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               HorseUnarmedRearing;                                      // 0x16C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               HorseUnarmedRearing1P;                                    // 0x16D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               HorseUnarmedJump;                                         // 0x16D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               HorseUnarmedJump1P;                                       // 0x16E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIgnoreAngularVelocityAnimation;                          // 0x16E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData37[0x7];                                       // 0x16E9(0x0007) MISSED OFFSET
	class UCurveFloat*                                 RiposteBlendInCurve;                                      // 0x16F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                InteractWithAnimation;                                    // 0x16F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                InteractWith1PAnimation;                                  // 0x1700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           StunAnimation;                                            // 0x1708(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UnarmedJumpAnimation;                                     // 0x1710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UnarmedLandAnimation;                                     // 0x1718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UnarmedFallingAnimation;                                  // 0x1720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UnarmedJumpAnimation1P;                                   // 0x1728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UnarmedLandAnimation1P;                                   // 0x1730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               UnarmedFallingAnimation1P;                                // 0x1738(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BloodHitEffect;                                           // 0x1740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BloodMetalHitEffect;                                      // 0x1748(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      DodgeCameraShake;                                         // 0x1750(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             DodgeParticleEffect;                                      // 0x1758(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BleedingOutParticleEffect;                                // 0x1760(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RunLeftHeadBobShake;                                      // 0x1768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RunRightHeadBobShake;                                     // 0x1770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WalkLeftHeadBobShake;                                     // 0x1778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WalkRightHeadBobShake;                                    // 0x1780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BlockShakeEffect;                                         // 0x1788(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BlockedShakeEffect;                                       // 0x1790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FlinchShakeEffect;                                        // 0x1798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FNetBlock                                   NetBlock;                                                 // 0x17A0(0x0010) (Net)
	unsigned char                                      DeathSyncedRandom;                                        // 0x17B0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData38[0x7];                                       // 0x17B1(0x0007) MISSED OFFSET
	TArray<struct FNetMotion>                          UnconfirmedMotionsBacklog;                                // 0x17B8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData39[0x2];                                       // 0x17C8(0x0002) MISSED OFFSET
	struct FNetMotion                                  ReplicatedNetMotion;                                      // 0x17CA(0x0006) (Net)
	struct FNetMotion                                  NetMotion;                                                // 0x17D0(0x0006)
	struct FNetMotion                                  LocallyPredictedNetMotion;                                // 0x17D6(0x0006)
	unsigned char                                      UnknownData40[0x4];                                       // 0x17DC(0x0004) MISSED OFFSET
	TArray<struct FEmoteEntry>                         CharacterEmotes;                                          // 0x17E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FEmoteEntry>                         UnarmedEmotes;                                            // 0x17F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UMordhauMotion*                              Motion;                                                   // 0x1800(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParryMotion*                                LastParryMotion;                                          // 0x1808(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFlinchMotion*                               LastFlinchMotion;                                         // 0x1810(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UFeintedMotion*                              LastFeintedMotion;                                        // 0x1818(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAttackMotion*                               LastAttackMotion;                                         // 0x1820(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UEmoteMotion*                                LastEmoteMotion;                                          // 0x1828(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData41[0x8];                                       // 0x1830(0x0008) MISSED OFFSET
	TArray<class AActor*>                              ActorIgnoreCache;                                         // 0x1838(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData42[0x50];                                      // 0x1848(0x0050) UNKNOWN PROPERTY: SetProperty Mordhau.MordhauCharacter.ActorSetCache
	bool                                               bWantsCharacterRebuild;                                   // 0x1898(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData43[0x7];                                       // 0x1899(0x0007) MISSED OFFSET
	TArray<class UMordhauWearable*>                    WearableObjectInstances;                                  // 0x18A0(0x0010) (BlueprintVisible, ZeroConstructor)
	struct FCharacterProfile                           Profile;                                                  // 0x18B0(0x00A0) (Edit, BlueprintVisible)
	bool                                               bDestroyEquipmentOnDeath;                                 // 0x1950(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData44[0x3];                                       // 0x1951(0x0003) MISSED OFFSET
	int                                                QueuedEquipmentSwitch;                                    // 0x1954(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      EquipmentInventorySize;                                   // 0x1958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData45[0x7];                                       // 0x1959(0x0007) MISSED OFFSET
	TArray<class AMordhauEquipment*>                   Equipment;                                                // 0x1960(0x0010) (BlueprintVisible, Net, ZeroConstructor)
	class AMordhauEquipment*                           RightHandEquipment;                                       // 0x1970(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData46[0x8];                                       // 0x1978(0x0008) MISSED OFFSET
	class AMordhauEquipment*                           LeftHandEquipment;                                        // 0x1980(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData47[0x8];                                       // 0x1988(0x0008) MISSED OFFSET
	class UClass*                                      Quiver;                                                   // 0x1990(0x0008) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	class AKickWeapon*                                 KickWeapon;                                               // 0x1998(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FirstPersonAttenuationVolumeMultiplier;                   // 0x19A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData48[0x4];                                       // 0x19A4(0x0004) MISSED OFFSET
	class USoundAttenuation*                           FirstPersonAttenuationOverride;                           // 0x19A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   DodgeSound;                                               // 0x19B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   DodgeSoundLocalPlayer;                                    // 0x19B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   SnappyArmorFoley;                                         // 0x19C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   NonSnappyArmorFoley;                                      // 0x19C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   CrouchStartSound;                                         // 0x19D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   CrouchEndSound;                                           // 0x19D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   ReleaseFoley;                                             // 0x19E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReducedBreathingVolume;                                   // 0x19E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData49[0x4];                                       // 0x19EC(0x0004) MISSED OFFSET
	TArray<unsigned char>                              BreathingLevels;                                          // 0x19F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              NoBreathingAtDistance;                                    // 0x1A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData50[0x4];                                       // 0x1A04(0x0004) MISSED OFFSET
	class USoundCue*                                   DismembermentGore;                                        // 0x1A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   BluntDismembermentGore;                                   // 0x1A10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutGoreMeshBlunt;                                         // 0x1A18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutGoreMesh;                                              // 0x1A20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutGoreMeshNeck;                                          // 0x1A28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             LimbExplosionParticle;                                    // 0x1A30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, float>                          MinimumDamageToExplode;                                   // 0x1A38(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FName, float>                          MinimumDamageToDismember;                                 // 0x1A88(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FName, float>                          MinimumDamageToPartialDismember;                          // 0x1AD8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector2D                                   DismemberArmsSpineYawPitchLimit;                          // 0x1B28(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	TWeakObjectPtr<class UAudioComponent>              LastArmorFoley;                                           // 0x1B30(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UAudioComponent>              LastVoiceCommand;                                         // 0x1B38(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData51[0x4];                                       // 0x1B40(0x0004) MISSED OFFSET
	float                                              LastRequestedVoiceCommandTime;                            // 0x1B44(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NextAllowedVoiceCommandTime;                              // 0x1B48(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAudioComponent>              LastBreath;                                               // 0x1B4C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UAudioComponent>              LastScream;                                               // 0x1B54(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData52[0x4];                                       // 0x1B5C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauCharacter");
		return ptr;
	}


	bool ValidateInteractionTarget(class AActor* TargetActor);
	void UseReleased();
	void UsePressed();
	void UpdateWearableInstanceColorsAndPatterns();
	void UpdateQuiverMesh();
	void UpdateLOD(float DeltaTime);
	void UpdateFPCamera(float DeltaSeconds, float InLookUpValue, bool bOnlyUpdateRotation, const struct FRotator& Offset);
	void UpdateAllSkeletalMeshComponentMaterials();
	bool TryDismember(const struct FName& bone, const struct FVector& Point, class AMordhauWeapon* Weapon, EAttackMove Move, bool bIsRagdollDismember);
	bool TryClimbing();
	void SwitchToFists();
	void SwitchModeAndReAttach(class AMordhauEquipment* ToSwitch);
	void SwitchEquipmentByIndex(unsigned char Index);
	void SwitchEquipment(class AMordhauEquipment* ToSwitch);
	void StopSupersprint();
	void StopStaminaRegen(float ExtraTime);
	void StopSprinting();
	void StopMontage(class UAnimMontage* Montage, float FadeOut);
	void StopListenForStrike360();
	void StopListenForStab360();
	void StopCurrentVoiceCommand();
	void StopCrouching();
	void StopAttackYell();
	void StopAnim(float FadeOut);
	void StartSupersprint();
	void StartSprinting();
	void StartCrouching();
	void SprintReleased();
	void SprintPressed();
	void ShowEquipmentIfViewTarget();
	void SetQuiver(class UClass* NewQuiver);
	void SetMaxAnimBlendWeight(float MaxAmount, class UAnimMontage** Montage);
	void SetMaterialParamsForMergedSlot(const struct FString& Prefix, class UMordhauWearable* Wearable, class UMaterialInstanceDynamic* Mid);
	void SetMaterialParamsForLODMasterSlot(const struct FString& Slot, class UMordhauWearable* Wearable, class UMaterialInstanceDynamic* Mid);
	void SetFaceCustomizationTranslate(const struct FName& BoneName, const struct FVector& Vector);
	void SetFaceCustomizationScale(const struct FName& BoneName, const struct FVector& Vector);
	void SetFaceCustomizationRotate(const struct FName& BoneName, const struct FVector& Vector);
	void SetCustomizationReplicationActor(class ACustomizationReplicationActor* CRA);
	void SetCurrentlyTracking(class AActor* NewTrackingTarget);
	void SetCameraStyle(unsigned char NewStyle, bool bBlendCamera);
	void SetAnimRate(class UAnimMontage* Montage, float NewRate);
	void SetAnimPosition(class UAnimMontage* Montage, float NewPosition);
	void ServerSuggestHitDetection(class AAdvancedCharacter* OtherCharacter, const struct FVector_NetQuantize& HitLocation, unsigned char BoneId);
	void ServerSetInteractionTarget(class AActor* Target);
	void ServerRequestVoiceCommand(unsigned char VoiceRequest);
	void ServerRequestPing();
	void ServerRequestPassiveInteraction(class AActor* Target);
	void ServerRequestDodge(unsigned char PackedWorldYaw);
	void ServerQueueAttack(EAttackMove Move, unsigned char Angle, unsigned char MotionID);
	void ServerDropParry(unsigned char MotionID);
	void ServerAssignNetMotion(const struct FNetMotion& NewNetMotion, unsigned char LastAuthObserved);
	void ServerAssignFireAim(const struct FVector& Orig, const struct FRotator& Rot);
	void ReweightSkinning(int BoneFrom, int BoneTo, bool bIncludeChildren, const struct FVector& ExceptNearThisPoint, float Radius, const struct FName& NearPointBone);
	TArray<class AMordhauEquipment*> RestockDefaultEquipment(int MaxSlotsToRestock);
	void RequestVoiceCommand(unsigned char CommandType, bool bAllowQueue);
	void RequestUse();
	void RequestToggleWeaponMode();
	void RequestStrike360();
	void RequestStab360();
	void RequestRightUpperStrike();
	void RequestRightStrike();
	void RequestRightStab();
	void RequestRightLowerStrike();
	void RequestRangedCancel();
	bool RequestParry(EBlockType BlockType, bool bAllowFTP);
	void RequestLeftUpperStrike();
	void RequestLeftStrike();
	void RequestLeftStab();
	void RequestLeftLowerStrike();
	void RequestKick();
	void RequestJump();
	void RequestHolster(unsigned char Mode);
	void RequestFire();
	void RequestFeint();
	void RequestEmote(unsigned char EmoteId);
	void RequestDrop();
	void RequestCouchedAttack();
	void RequestClimb(const struct FVector& TargetLocation);
	void RequestBash();
	void RequestAttack(EAttackMove Move, float Angle);
	void ReplicateStamina();
	bool QueueDismember(const struct FName& bone, bool bIsDismemberPartial, bool bIsBluntForce, const struct FVector& Force, class AActor* Agent);
	class UAudioComponent* PlaySnappyArmorFoley();
	class UAudioComponent* PlayNonSnappyArmorFoley();
	class UAudioComponent* PlayMouthSound(class USoundBase* Sound, float VolumeMultiplier);
	void PlayHurtYell();
	void PlayDeathYell(bool bIsLongYell);
	void PlayAttackYell();
	class UAnimMontage* PlayAnim(class UAnimMontage* Montage, float PlayRate, bool bStopExistingMontages);
	bool PickUpToSlot(class AMordhauEquipment* ToEquip, unsigned char Slot);
	bool PickUp(class AMordhauEquipment* ToEquip, int PreferredSlot);
	void PerformVoiceCommand(unsigned char PackedVoiceCommand);
	void OnRep_RightHandEquipment();
	void OnRep_ReplicatedVoiceCommand();
	void OnRep_ReplicatedStamina();
	void OnRep_ReplicatedNetMotion();
	void OnRep_ReplicatedDodge();
	void OnRep_ReplicatedCustomizationReplicationActor();
	void OnRep_Quiver();
	void OnRep_NetBlock();
	void OnRep_LeftHandEquipment();
	void OnRep_Equipment();
	void OnPostProfileAssigned();
	void OnPostDismember(const struct FName& bone, class ASeparatedBodyPart* SeparatedPart, class AActor* Agent);
	void OnActionFailed(const struct FName& Reason);
	void OffsetStamina(int Amount, bool bReplicate);
	void MoveBlockedBySlow(const struct FHitResult& Impact);
	void ListenForStrike360();
	void ListenForStab360();
	void LeftTeamArea(int OwningTeam);
	void JumpReleased();
	void JumpPressed();
	bool IsViewTarget();
	bool STATIC_IsRightLeg(const struct FName& bone);
	bool STATIC_IsRightArm(const struct FName& bone);
	bool IsPlayerControlledIncludingVehicle();
	bool IsLocallyPlayerControlledIncludingVehicle();
	bool IsLocallyControlledIncludingVehicle();
	bool STATIC_IsLeg(const struct FName& bone);
	bool STATIC_IsLeftLeg(const struct FName& bone);
	bool STATIC_IsLeftArm(const struct FName& bone);
	bool IsInKnockback();
	bool IsInEnemyTeamArea();
	bool IsInAnyTeamArea();
	bool IsHoldingBlock();
	bool STATIC_IsHead(const struct FName& bone);
	bool IsBoneDismembered(const struct FName& bone);
	bool STATIC_IsArm(const struct FName& bone);
	bool IsAnimActive(class UAnimMontage* Montage);
	void Holster(class AMordhauEquipment* ToHolster);
	bool HasPerk(unsigned char PerkId);
	bool HasEquipmentHeSpawnedWith();
	EMovementRestriction GetMovementRestriction();
	class UAudioComponent* GetLastVoiceCommand();
	class AMordhauVehicle* GetLastUsedVehicle(float MaximumTimeDiscrepancy);
	class AActor* GetLastMovementFrontalHitActor(float MaxAgeSeconds);
	struct FVector GetFaceCustomizationTranslate(const struct FName& BoneName);
	struct FTransform GetFaceCustomizationTransform(const struct FName& BoneName);
	struct FVector GetFaceCustomizationScale(const struct FName& BoneName);
	struct FVector GetFaceCustomizationRotate(const struct FName& BoneName);
	int GetFaceCustomizationBoneIdx(const struct FName& BoneName);
	bool GetEquipmentIndex(class AMordhauEquipment* Equip, unsigned char* OutIndex);
	class ACustomizationReplicationActor* GetCustomizationReplicationActor();
	class AController* GetControllerIncludingVehicle();
	class ULODSkeletalMeshComponent* GetClothMesh();
	float GetAnimWeight(class UAnimMontage* Montage);
	TArray<struct FName> GetAllFaceSelectionChildBonesRecursive(const struct FName& ParentBone);
	void FreeHandsForEquipment(class AMordhauEquipment* EquipmentInstigator);
	void ForceUpdateMeshVisibility();
	void FlipAttackSideReleased();
	void FlipAttackSidePressed();
	void FireReleased();
	void FirePressed();
	class AMordhauEquipment* FindEquipmentToRestock(TArray<class UClass*> ValidEquipment);
	class AController* FindBestKiller(float CutOffTime);
	void FeintOrBlockReleased();
	void FeintOrBlockPressed();
	void EquipSlot9();
	void EquipSlot8();
	void EquipSlot7();
	void EquipSlot6();
	void EquipSlot5();
	void EquipSlot4();
	void EquipSlot3();
	void EquipSlot2();
	void EquipSlot1();
	bool EquipSlot(unsigned char Index, bool bDisplayEquipmentList);
	void EnteredTeamArea(int OwningTeam);
	void EnableBlockCollider();
	void EmptyHands();
	void DropSlot(unsigned char Index);
	void DropEquipment(class AMordhauEquipment* ToDrop);
	void DoCameraShakeIfViewTarget(class UClass* Shake, float Scale, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot, bool bAllowSettingsScale);
	class ASeparatedBodyPart* Dismember(const struct FName& bone);
	void DisableLimb(const struct FName& BoneName);
	void DisableBlockCollider();
	void CycleCamera();
	struct FRotator ComputeFPRotation(const struct FRotator& Offset, float InLookUpValue);
	struct FVector ComputeFPLocation(const struct FRotator& Offset, float InLookUpValue);
	struct FVector ComputeFPCosmeticLocationOffset(const struct FRotator& Rotation, struct FVector* OutFOVOffset, struct FVector* OutZoomOffset);
	void ClientSetNetMotion(const struct FNetMotion& NewMotion, float ServerStartTime);
	void ClientPong();
	bool CheckCanEquipAlt(class AMordhauEquipment* Equip);
	bool CheckCanEquip(class AMordhauEquipment* Equip);
	void ChangeMotion(class UMordhauMotion* NewMotion, bool bSkipDeltaTimeForward);
	bool CanPerformAttack(EAttackMove Move);
	bool CanInitiateMotion(class UClass* NewMotion, bool bAttemptCancel);
	bool CanEasyParry();
	bool CanDismember(const struct FName& bone);
	bool CanAccomodate(class UClass* EquipmentToTest);
	void CalculateLedgeOffsetAndNormal(class UClimbingMotion* ClimbingMotion, struct FVector* OutOffset, struct FVector* OutNormal);
	class UAudioComponent* BP_PlayCharacterSound(class USoundBase* Sound, const struct FName& bone, const struct FVector& Location, TEnumAsByte<EAttachLocation> AttachLocation, bool bAttach);
	void BoostAnimBlendWeight(float BoostAmount, class UAnimMontage** Montage);
	void BlockReleased();
	void BlockPressed();
	void BakeFaceCustomizationTransforms(bool bDeferBake);
	void AssignProfile(const struct FCharacterProfile& NewProfile);
	void AssignNetMotionSimple(unsigned char MotionType, unsigned char Param0, unsigned char Param1, unsigned char Param2);
	void AssignNetBlock(EBlockedReason BlockedReason, unsigned char BlockType, EAttackMove BlockedMove, unsigned char BlockedAngle, class AActor* Weapon);
};


// Class Mordhau.MordhauCheatManager
// 0x0000 (0x0078 - 0x0078)
class UMordhauCheatManager : public UCheatManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauCheatManager");
		return ptr;
	}

};


// Class Mordhau.MordhauColor
// 0x0010 (0x0068 - 0x0058)
class UMordhauColor : public UMordhauInventoryItem
{
public:
	struct FLinearColor                                Color;                                                    // 0x0058(0x0010) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauColor");
		return ptr;
	}

};


// Class Mordhau.MordhauDialog
// 0x0000 (0x0208 - 0x0208)
class UMordhauDialog : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauDialog");
		return ptr;
	}


	void Show();
	void Hide();
};


// Class Mordhau.MordhauEngineMessage
// 0x0000 (0x0028 - 0x0028)
class UMordhauEngineMessage : public ULocalMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauEngineMessage");
		return ptr;
	}

};


// Class Mordhau.MordhauEQSTestingPawn
// 0x0000 (0x07E0 - 0x07E0)
class AMordhauEQSTestingPawn : public AEQSTestingPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauEQSTestingPawn");
		return ptr;
	}

};


// Class Mordhau.MordhauEquipmentPart
// 0x0020 (0x0078 - 0x0058)
class UMordhauEquipmentPart : public UMordhauInventoryItem
{
public:
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               AuxiliarySkeletalMesh;                                    // 0x0060(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrailFactor;                                              // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondTrailFactor;                                        // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasColor1;                                               // 0x0070(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasColor2;                                               // 0x0071(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasColor3;                                               // 0x0072(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0073(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauEquipmentPart");
		return ptr;
	}

};


// Class Mordhau.MordhauGameInstance
// 0x06E8 (0x0788 - 0x00A0)
class UMordhauGameInstance : public UGameInstance
{
public:
	unsigned char                                      UnknownData00[0x430];                                     // 0x00A0(0x0430) MISSED OFFSET
	struct FString                                     RecipesString;                                            // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FServerSearchResult                         ServerSession;                                            // 0x04E0(0x01F8) (BlueprintVisible)
	struct FString                                     ServerPassword;                                           // 0x06D8(0x0010) (BlueprintVisible, ZeroConstructor)
	bool                                               bServerFull;                                              // 0x06E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06E9(0x0003) MISSED OFFSET
	int                                                ChangeLevelCounter;                                       // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       NetworkErrorText;                                         // 0x06F0(0x0018) (BlueprintVisible)
	struct FString                                     AuthTicket;                                               // 0x0708(0x0010) (ZeroConstructor)
	TArray<class UClass*>                              GameModes;                                                // 0x0718(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<class UClass*>                              Maps;                                                     // 0x0728(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FText>                               Tips;                                                     // 0x0738(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnPartyUpdated;                                           // 0x0748(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	ERegion                                            MatchmakingRegion;                                        // 0x0758(0x0001) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0759(0x0007) MISSED OFFSET
	TArray<struct FString>                             MatchmakingGameModes;                                     // 0x0760(0x0010) (BlueprintVisible, ZeroConstructor, Config)
	TArray<struct FString>                             NegotiatedGameModes;                                      // 0x0770(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                StoredGameVersionDebug;                                   // 0x0780(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentGameVersionDebug;                                  // 0x0784(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauGameInstance");
		return ptr;
	}


	void UpdateParty(bool bSendProfile);
	void Shutdown();
	void ShowPasswordDialog(const struct FServerSearchResult& SearchResult);
	void ShowNetworkErrorDialog();
	void ShowJoiningDialog(const struct FServerSearchResult& SearchResult);
	void ShowInviteDialog();
	void SetPartyState(EPartyState PartyState);
	void SetPartyMemberProfile(const struct FSteamID& SteamID, const struct FPlayerProfile& Profile);
	void SetPartyMatchmakingLobbyID(const struct FSteamID& LobbyID);
	void SetPartyLeader(const struct FSteamID& SteamID);
	void SetPartyGameServer(const struct FServerSearchResult& SearchResult);
	void SetNetworkError(const struct FText& ErrorText);
	void SetMatchmakingMemberData();
	void SetMatchmakingGameServer(const struct FServerSearchResult& SearchResult);
	void SaveConfig();
	void LogMatchmakingState(const struct FString& Message);
	void LeaveParty();
	bool LeaveMatchmakingLobby();
	void KickPartyMember(const struct FSteamID& SteamID);
	void JoinPartyGameServer();
	bool JoinMatchmakingLobbyByID(const struct FSteamID& LobbyID);
	bool JoinMatchmakingLobby(const struct FLobbySearchResult& SearchResult);
	bool IsPartyReadyForMatchmaking();
	bool IsPartyMember(const struct FSteamID& SteamID);
	void Init();
	EPartyState GetPartyState();
	int GetPartySize();
	int GetPartyMMR();
	struct FString GetPartyMemberStatus(const struct FSteamID& SteamID);
	void GetPartyMemberServerAddress(const struct FSteamID& SteamID, struct FServerAddress* ServerAddress, bool* bWasSuccessful);
	TArray<struct FSteamID> GetPartyMembers();
	bool GetPartyMemberProfile(const struct FSteamID& SteamID, struct FPlayerProfile* Profile);
	struct FSteamID GetPartyMatchmakingLobbyID();
	struct FSteamID GetPartyLobbyID();
	struct FSteamID GetPartyLeader();
	int STATIC_GetMinMatchmakingMembers();
	int GetMaxMatchmakingMembers();
	void GetMatchmakingServerAddress(struct FServerAddress* ServerAddress, bool* bWasSuccessful);
	TArray<struct FSteamID> GetMatchmakingMembers();
	struct FSteamID GetMatchmakingLobbyOwner();
	struct FSteamID GetMatchmakingLobbyID();
	struct FMapInfo GetMapInfo(const struct FString& MapName);
	struct FString GetAuthTicket();
	bool CreateMatchmakingLobby(TArray<struct FString> InGameModes, ERegion InRegion);
	bool ClientTravelSession(const struct FServerSearchResult& SearchResult, const struct FString& Password);
	bool ClientTravel(const struct FString& MapName, int PlayerCount);
	void ClearPartyMemberProfile(const struct FSteamID& SteamID);
	void ClearPartyMatchmakingLobbyID();
	void ClearPartyGameServer();
	void ClearMatchmakingGameServer();
	bool CanLeaveParty();
	bool CanInviteToParty();
	void CancelAuthTicket();
	void BPStopRecordingReplay();
	void BPStopPlayingReplay();
	void BPStartRecordingReplay(const struct FString& InName, const struct FString& FriendlyName, TArray<struct FString> AdditionalOptions);
	void BPPlayReplay(const struct FString& InName, TArray<struct FString> AdditionalOptions);
};


// Class Mordhau.MordhauGameMode
// 0x00F0 (0x0500 - 0x0410)
class AMordhauGameMode : public AGameMode
{
public:
	TArray<struct FGameModeName>                       MapPrefixes;                                              // 0x0410(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FString>                             MapRotation;                                              // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config, GlobalConfig)
	TArray<TWeakObjectPtr<class AController>>          SpawnQueue;                                               // 0x0430(0x0010) (ZeroConstructor)
	TWeakObjectPtr<class AController>                  CurrentlySpawningController;                              // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData)
	class AActor*                                      CurrentlySpawningPlayerStart;                             // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentlySpawningStage;                                   // 0x0450(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bMatchTimeRanOut;                                         // 0x0454(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0455(0x0003) MISSED OFFSET
	float                                              PlayerRespawnTime;                                        // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bUsesSlowPlayerSpawning;                                  // 0x045C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayersSpawnInWaves;                                     // 0x045D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPlayersDropAllGearOnDeath;                               // 0x045E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEquipmentDoesNotDespawn;                                 // 0x045F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BallistaRespawnTime;                                      // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              CatapultRespawnTime;                                      // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              HorseRespawnTime;                                         // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x046C(0x0004) MISSED OFFSET
	TArray<struct FString>                             MapVoteMaps;                                              // 0x0470(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EOfficialServerVisibility                          OfficialServerVisibility;                                 // 0x0480(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	float                                              DamageFactor;                                             // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              TeamDamageFactor;                                         // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	float                                              SpawnProtectionDuration;                                  // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableDamage;                                           // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableStamina;                                          // 0x0491(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsScoringDisabled;                                       // 0x0492(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0493(0x0001) MISSED OFFSET
	float                                              AssistScoreFactor;                                        // 0x0494(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AssistDamageToCountAsKill;                                // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	float                                              KillScoreChange;                                          // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KillTeamScoreChange;                                      // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TeamKillScoreChange;                                      // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TeamKillTeamScoreChange;                                  // 0x04A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTeamKillsDecrementKillerKills;                           // 0x04AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bTeamKillsIncrementKilledDeaths;                          // 0x04AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSuicideDecrementsKills;                                  // 0x04AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x51];                                      // 0x04AF(0x0051) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauGameMode");
		return ptr;
	}


	bool VoteLevel(class APlayerController* Player, const struct FString& LevelName);
	void SetTeamScore(int Team, float Amount);
	void RequestedAssignTeam(class AController* Controller, int Team);
	void RemoveBots(int Amount, int Team);
	void OnTeamScoreChanged(int Team, float OldValue);
	void OnScoreChanged(class APlayerState* State, float OldValue);
	void OnMatchStateChanged(const struct FName& OldState, const struct FName& NewState);
	void OnKillsChanged(class APlayerState* State, int OldValue);
	void OnKilled(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, EMordhauDamageType Type, unsigned char SubType, class AActor* DamageSource, class AActor* DamageAgent);
	void OnDeathsChanged(class APlayerState* State, int OldValue);
	void OnAssistsChanged(class APlayerState* State, int OldValue);
	void MatchTimeRanOut();
	bool IsSpawnpointAllowed(class APlayerStart* PlayerStart, class AController* Player);
	float GetSpawnpointPreference(class APlayerStart* PlayerStart, class AController* Player);
	TArray<struct FString> GetNextMaps(int Count);
	struct FString GetNextMap();
	TArray<struct FString> GetMapVoteMaps();
	TArray<unsigned char> GetMapVoteCounts();
	float GetDamageFactor(class AActor* DamageSource, class AActor* DamageTarget);
	bool ControllerCanRestart(class AController* Controller);
	bool ChangeLevel(const struct FString& LevelName);
	bool CanDealDamage(class AActor* DamageSource, class AActor* DamageTarget);
	bool CanClash(class APawn* Source, class APawn* Target);
	bool CanChamber(class APawn* Source, class APawn* Target);
	void Broadcast(class AActor* Sender, const struct FString& Msg, const struct FName& Type);
	void AddTeamScore(int Team, float Amount);
	void AddBots(int Amount, int Team);
};


// Class Mordhau.MordhauGameSession
// 0x01F8 (0x0538 - 0x0340)
class AMordhauGameSession : public AGameSession
{
public:
	unsigned char                                      UnknownData00[0x148];                                     // 0x0340(0x0148) MISSED OFFSET
	int                                                MaxSlots;                                                 // 0x0488(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x048C(0x0004) MISSED OFFSET
	struct FString                                     ServerName;                                               // 0x0490(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0x8];                                       // 0x04A0(0x0008) MISSED OFFSET
	struct FString                                     ServerPassword;                                           // 0x04A8(0x0010) (ZeroConstructor, Config)
	struct FString                                     AdminPassword;                                            // 0x04B8(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData03[0x10];                                      // 0x04C8(0x0010) MISSED OFFSET
	TArray<uint64_t>                                   Admins;                                                   // 0x04D8(0x0010) (ZeroConstructor, Config)
	TMap<uint64_t, int64_t>                            BannedPlayers;                                            // 0x04E8(0x0050) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauGameSession");
		return ptr;
	}


	bool UnbanPlayer(const struct FSteamID& SteamID);
	void TriggerRewardDropForPlayer(class APlayerController* Player);
	void TriggerRewardDrop();
	bool ReportPlayer(class APlayerController* Player, ECheatReportType ReportType, ECheatReportSource ReportSource);
	void RemoveAdmin(class APlayerController* AdminPlayer);
	bool KickPlayer(class APlayerController* KickedPlayer, const struct FText& KickReason);
	bool BanPlayerWithDuration(class APlayerController* BannedPlayer, int BanDuration, const struct FText& BanReason);
	bool BanPlayer(class APlayerController* BannedPlayer, const struct FText& BanReason);
	bool AllowsJoin();
	void AllowJoin(bool bInAllowJoin);
	void AddAdmin(class APlayerController* AdminPlayer);
};


// Class Mordhau.MordhauGameState
// 0x0288 (0x0610 - 0x0388)
class AMordhauGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0388(0x0010) MISSED OFFSET
	TArray<float>                                      NextBudgetTime;                                           // 0x0398(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03A8(0x0008) MISSED OFFSET
	TArray<class AParticleSystemActor*>                ParticleSystemActors;                                     // 0x03B0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET
	TArray<class AAdvancedCharacter*>                  CharacterDistanceArray;                                   // 0x03C8(0x0010) (ZeroConstructor)
	TMap<class AAdvancedCharacter*, int>               CharacterToDistanceArray;                                 // 0x03D8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x50];                                      // 0x0428(0x0050) MISSED OFFSET
	TArray<TWeakObjectPtr<class AAdvancedCharacter>>   RagdollDistanceArray;                                     // 0x0478(0x0010) (ZeroConstructor)
	TMap<int64_t, class USkeletalMesh*>                EquipmentMeshCacheMap;                                    // 0x0488(0x0050) (ZeroConstructor)
	class APreSkinnedPoseOracle*                       PreSkinnedPoseOracle;                                     // 0x04D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET
	class UClass*                                      MetaData;                                                 // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableClientStats;                                      // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableChat;                                             // 0x04F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableScoreboard;                                       // 0x04F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowHealthRegen;                                        // 0x04F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNotLimitPlaceables;                                    // 0x04F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideArmorSpeedAndAccelerationFactor;                 // 0x04F5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x04F6(0x0002) MISSED OFFSET
	float                                              OverrideArmorSpeedFactor;                                 // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OverrideArmorAccelerationFactor;                          // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MatchDurationMax;                                         // 0x0500(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0504(0x0004) MISSED OFFSET
	TMap<int, class AMapCameraActor*>                  MapCameraActors;                                          // 0x0508(0x0050) (BlueprintVisible, ZeroConstructor)
	float                                              DefaultEndMatchMapChangeTime;                             // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EndMatchMapChangeEnd;                                     // 0x055C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              PostMatchScreenDelay;                                     // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DefaultWarmupTime;                                        // 0x0564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipWarmupInDevBuild;                                    // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBlockInputInWarmup;                                      // 0x0569(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x056A(0x0002) MISSED OFFSET
	int                                                MinPlayersToStart;                                        // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WarmupEnd;                                                // 0x0570(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNotGoToNextMapOnMatchEnd;                              // 0x0574(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoNotShowPostMatchScreen;                                // 0x0575(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowSpawning;                                           // 0x0576(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamCount;                                                // 0x0577(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      TeamScores;                                               // 0x0578(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor)
	bool                                               bIsTeamMode;                                              // 0x0588(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnforceTeamColors;                                       // 0x0589(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x058A(0x0006) MISSED OFFSET
	TArray<struct FLinearColor>                        TeamColors;                                               // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             TeamNames;                                                // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FLinearColor>                        SecondaryTeamColors;                                      // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AControlPoint*>                       AllCapturePoints;                                         // 0x05C0(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                Team1CapturePoints;                                       // 0x05D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Team2CapturePoints;                                       // 0x05D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Team1TopologicalProgress;                                 // 0x05D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Team2TopologicalProgress;                                 // 0x05DC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FCapturePointGroup>                  CapturePointTopologicalOrdering;                          // 0x05E0(0x0010) (BlueprintVisible, ZeroConstructor)
	float                                              LastBotVoiceCommandTime;                                  // 0x05F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastBotEmoteTime;                                         // 0x05F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastBotClimbTime;                                         // 0x05F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x14];                                      // 0x05FC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauGameState");
		return ptr;
	}


	void UpdateCapturePointData();
	void UnregisterParticleSystemActor(class AParticleSystemActor* ParticleActor);
	void StoreEquipmentMeshInCache(class USkeletalMesh* Mesh, int ID, unsigned char Skin, unsigned char Part1, unsigned char Part2, unsigned char Part3, bool bUseAuxiliaryMesh);
	bool ShouldTickThisFrame(class AAdvancedCharacter* Character);
	bool ShouldTickAnimationThisFrame(class AAdvancedCharacter* Character);
	bool ShouldPaintGearWithTeamColors();
	bool ShouldBlockPawnInput();
	void ReserveCharacterRagdoll(class AAdvancedCharacter* Character);
	void RemoveCharacterFromDistanceArray(class AAdvancedCharacter* Character);
	void RegisterParticleSystemActor(class AParticleSystemActor* ParticleActor);
	void LocalPlayerChangedTeam();
	bool IsFriendly(class AActor* ActorA, class AActor* ActorB);
	struct FString GetTeamName(int Team);
	struct FLinearColor GetTeamColor(int Team);
	TArray<int> GetPlayerCountsPerTeam(bool bOnlyLiving, bool bOnlyWithValidProfiles);
	class USkeletalMesh* GetEquipmentMeshFromCache(int ID, unsigned char Skin, unsigned char Part1, unsigned char Part2, unsigned char Part3, bool bUseAuxiliaryMesh);
	int64_t GetEquipmentCacheHash(int ID, unsigned char Skin, unsigned char Part1, unsigned char Part2, unsigned char Part3, bool bUseAuxiliaryMesh);
	int GetCurrentFrame();
	class AAdvancedCharacter* GetCharacterByDistanceRank(int DistanceRank);
	struct FTransform GetBindPoseTransform(class USkeletalMesh* Mesh, const struct FName& SocketName);
	class AMapCameraActor* GetAppropriateMapCameraActor(class APlayerController* Controller);
	bool CanPlayerJoinTeam(class AMordhauPlayerState* Player, int Team);
	bool CanImmediatelyChangeProfile(class AController* Controller);
};


// Class Mordhau.MordhauGameUserSettings
// 0x0108 (0x0218 - 0x0110)
class UMordhauGameUserSettings : public UGameUserSettings
{
public:
	struct FScriptMulticastDelegate                    OnSettingsChanged;                                        // 0x0110(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET
	TArray<struct FString>                             AvailableLanguages;                                       // 0x0130(0x0010) (ZeroConstructor)
	uint32_t                                           MordhauVersion;                                           // 0x0140(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0144(0x0004) MISSED OFFSET
	struct FString                                     Language;                                                 // 0x0148(0x0010) (ZeroConstructor, Config)
	int                                                Gore;                                                     // 0x0158(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                CharacterCloth;                                           // 0x015C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                HideDefaultLoadouts;                                      // 0x0160(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                NoTeamColorsOnGear;                                       // 0x0164(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              Headbob;                                                  // 0x0168(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxRagdolls;                                              // 0x016C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              RagdollStayTime;                                          // 0x0170(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MouseSmoothing;                                           // 0x0174(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DrawTracers;                                              // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DrawTracersStayTime;                                      // 0x017C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0180(0x0004) MISSED OFFSET
	int                                                ShowCrosshair;                                            // 0x0184(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                CrosshairType;                                            // 0x0188(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShowKilledBy;                                             // 0x018C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShowStatusBar;                                            // 0x0190(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShowTargetInfo;                                           // 0x0194(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShowSpawnInfo;                                            // 0x0198(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShowChatBox;                                              // 0x019C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShowEmotesMenu;                                           // 0x01A0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShowEquipment;                                            // 0x01A4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShowAmmo;                                                 // 0x01A8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShowAnnouncements;                                        // 0x01AC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShowTips;                                                 // 0x01B0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShowHitMarker;                                            // 0x01B4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShowScoreFeed;                                            // 0x01B8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShowKillFeed;                                             // 0x01BC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShowFriendlyMarkers;                                      // 0x01C0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                QuickSpawn;                                               // 0x01C4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ShowObservedDelay;                                        // 0x01C8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                HideWatermark;                                            // 0x01CC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              ScreenPercentage;                                         // 0x01D0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              FieldOfView;                                              // 0x01D4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              CameraDistance;                                           // 0x01D8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              Gamma;                                                    // 0x01DC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                AntiAliasing;                                             // 0x01E0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                IndirectCapsuleShadows;                                   // 0x01E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                CharacterFidelity;                                        // 0x01E8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                RagdollFidelity;                                          // 0x01EC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ScreenSpaceReflections;                                   // 0x01F0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              Bloom;                                                    // 0x01F4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MotionBlur;                                               // 0x01F8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                AmbientOcclusion;                                         // 0x01FC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                LensFlares;                                               // 0x0200(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MasterVolume;                                             // 0x0204(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              EffectsVolume;                                            // 0x0208(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MusicVolume;                                              // 0x020C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              VideoVolume;                                              // 0x0210(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0214(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauGameUserSettings");
		return ptr;
	}


	bool ShouldShowWatermark();
	bool ShouldShowTips();
	bool ShouldShowTargetInfo();
	bool ShouldShowStatusBar();
	bool ShouldShowSpawnInfo();
	bool ShouldShowScoreFeed();
	bool ShouldShowObservedDelay();
	bool ShouldShowMatchmakingOverride();
	bool ShouldShowMatchmakingDebug();
	bool ShouldShowKillFeed();
	bool ShouldShowKilledBy();
	bool ShouldShowHUD();
	bool ShouldShowHitMarker();
	bool ShouldShowFriendlyMarkers();
	bool ShouldShowEquipment();
	bool ShouldShowEmotesMenu();
	bool ShouldShowCrosshair();
	bool ShouldShowChatBox();
	bool ShouldShowBlood();
	bool ShouldShowAnnouncements();
	bool ShouldShowAmmo();
	bool ShouldQuickSpawn();
	bool ShouldDrawTracers();
	void SetVideoVolume(float NewVolume);
	void SetTracersStayTime(float NewStayTime);
	void SetShowTips(int NewShowTips);
	void SetShowTargetInfo(int NewShowTargetInfo);
	void SetShowStatusBar(int NewShowStatusBar);
	void SetShowSpawnInfo(int NewShowSpawnInfo);
	void SetShowScoreFeed(int NewShowScoreFeed);
	void SetShowObservedDelay(int NewShowObservedDelay);
	void SetShowMatchmakingOverride(int NewShowMatchmakingOverride);
	void SetShowMatchmakingDebug(int NewShowMatchmakingDebug);
	void SetShowKillFeed(int NewShowKillFeed);
	void SetShowKilledBy(int NewShowKilledBy);
	void SetShowHitMarker(int NewShowHitMarker);
	void SetShowFriendlyMarkers(int NewShowFriendlyMarkers);
	void SetShowEquipment(int NewShowEquipment);
	void SetShowEmotesMenu(int NewEmotesMenu);
	void SetShowCrosshair(int NewShowCrosshair);
	void SetShowChatBox(int NewShowChatBox);
	void SetShowAnnouncements(int NewShowAnnouncements);
	void SetShowAmmo(int NewShowAmmo);
	void SetScreenSpaceReflections(int NewScreenSpaceReflections);
	void SetScreenPercentage(float NewScreenPercentage);
	void SetRagdollStayTime(float NewTime);
	void SetRagdollFidelity(int NewFidelity);
	void SetQuickSpawn(int NewQuickSpawn);
	void SetNoTeamColorsOnGear(int NewNoTeamColorsOnGear);
	void SetMusicVolume(float NewVolume);
	void SetMouseSmoothing(float NewSmoothing);
	void SetMotionBlur(float NewMotionBlur);
	void SetMaxRagdolls(int NewMax);
	void SetMasterVolume(float NewVolume);
	void SetLensFlares(int NewLensFlares);
	void SetLanguage(const struct FString& NewLanguage);
	void SetIndirectCapsuleShadows(int NewShadows);
	void SetHideWatermark(int NewHideWatermark);
	void SetHideHUD(int NewHideHUD);
	void SetHideDefaultLoadouts(int NewHideDefaultLoadouts);
	void SetHeadbob(float NewHeadbob);
	void SetGore(int NewGore);
	void SetGamma(float NewGamma);
	void SetFieldOfView(float NewFOV);
	void SetEffectsVolume(float NewVolume);
	void SetDrawTracers(int NewDrawTracers);
	void SetCrosshairType(int NewCrosshairType);
	void SetCharacterFidelity(int NewFidelity);
	void SetCharacterCloth(int NewCharacterCloth);
	void SetCameraDistance(float NewCameraDistance);
	void SetBloom(float NewBloom);
	void SetAntiAliasing(int NewAntiAliasing);
	void SetAmbientOcclusion(int NewAmbientOcclusion);
	float GetVideoVolume();
	struct FVector2D GetTracersStayTimeLimits();
	float GetTracersStayTime();
	int GetShowTips();
	int GetShowTargetInfo();
	int GetShowStatusBar();
	int GetShowSpawnInfo();
	int GetShowScoreFeed();
	int GetShowObservedDelay();
	int GetShowKillFeed();
	int GetShowKilledBy();
	int GetShowHitMarker();
	int GetShowFriendlyMarkers();
	int GetShowEquipment();
	int GetShowEmotesMenu();
	int GetShowCrosshair();
	int GetShowChatBox();
	int GetShowAnnouncements();
	int GetShowAmmo();
	int GetScreenSpaceReflections();
	struct FVector2D GetScreenPercentageLimits();
	float GetScreenPercentage();
	float GetRagdollStayTimeLimit();
	float GetRagdollStayTime();
	int GetRagdollFidelity();
	int GetQuickSpawn();
	int GetNoTeamColorsOnGear();
	float GetMusicVolume();
	struct FVector2D GetMouseSmoothingLimits();
	float GetMouseSmoothing();
	struct FVector2D GetMotionBlurLimits();
	float GetMotionBlur();
	int GetMaxRagdollsLimit();
	int GetMaxRagdolls();
	float GetMasterVolume();
	int GetLensFlares();
	struct FString GetLanguage();
	int GetIndirectCapsuleShadows();
	int GetHideWatermark();
	int GetHideHUD();
	int GetHideDefaultLoadouts();
	struct FVector2D GetHeadbobLimits();
	float GetHeadbob();
	int GetGore();
	struct FVector2D GetGammaLimits();
	float GetGamma();
	struct FVector2D GetFrameRateLimits();
	struct FVector2D GetFieldOfViewLimits();
	float GetFieldOfView();
	float GetEffectsVolume();
	int GetDrawTracers();
	float GetCurrentMotionBlur();
	float GetCurrentGamma();
	float GetCurrentBloom();
	int GetCrosshairType();
	int GetCharacterFidelity();
	int GetCharacterCloth();
	struct FVector2D GetCameraDistanceLimits();
	float GetCameraDistance();
	struct FVector2D GetBloomLimits();
	float GetBloom();
	void GetAvailableLanguages(TArray<struct FString>* AvailableLanguages);
	int GetAntiAliasing();
	int GetAmbientOcclusion();
	int GetActualCrosshairType();
};


// Class Mordhau.MordhauHUD
// 0x0050 (0x0468 - 0x0418)
class AMordhauHUD : public AHUD
{
public:
	TArray<struct FPermutationValuePair>               TempPermutationArray;                                     // 0x0418(0x0010) (ZeroConstructor)
	TArray<class AMordhauCharacter*>                   TempCharacterArray;                                       // 0x0428(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0438(0x0004) MISSED OFFSET
	float                                              FriendlyMarkerMaxAngle;                                   // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   FriendlyMarkerSize;                                       // 0x0440(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   FriendlyMarkerScreenOffset;                               // 0x0448(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              FriendlyMarkerWorldZOffset;                               // 0x0450(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0454(0x0004) MISSED OFFSET
	TArray<class AControlPoint*>                       CapturePointsOfInterest;                                  // 0x0458(0x0010) (BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauHUD");
		return ptr;
	}


	void OnGameStateReplicated();
	void EnqueueMordhauDialog(class UMordhauDialog* Dialog);
};


// Class Mordhau.MordhauInput
// 0x0330 (0x0358 - 0x0028)
class UMordhauInput : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	bool                                               bUseSteamInput;                                           // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDefaultBindingsChecked;                                  // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	EActionSetChangeState                              ActionSetChangeState;                                     // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0033(0x0005) MISSED OFFSET
	TArray<struct FInputAxisConfigEntry>               AxisConfig;                                               // 0x0038(0x0010) (ZeroConstructor, Config)
	TArray<struct FInputActionKeyMapping>              ActionMappings;                                           // 0x0048(0x0010) (ZeroConstructor, Config)
	TArray<struct FInputAxisKeyMapping>                AxisMappings;                                             // 0x0058(0x0010) (ZeroConstructor, Config)
	TMap<struct FName, struct FDigitalActionKey>       DigitalActionKeyMap;                                      // 0x0068(0x0050) (ZeroConstructor)
	TMap<struct FName, struct FAnalogActionKey>        AnalogActionKeyMap;                                       // 0x00B8(0x0050) (ZeroConstructor)
	int                                                ControlScheme;                                            // 0x0108(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                AngleAttacksWithMovement;                                 // 0x010C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MouseXIsFlipAttackSide;                                   // 0x0110(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                InverseAttackDirectionX;                                  // 0x0114(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                InverseAttackDirectionY;                                  // 0x0118(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                AngleAttackAfterPress;                                    // 0x011C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ToggleSprint;                                             // 0x0120(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bMouseXInverted;                                          // 0x0124(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0125(0x0003) MISSED OFFSET
	float                                              MouseXSensitivity;                                        // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bMouseYInverted;                                          // 0x012C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x012D(0x0003) MISSED OFFSET
	float                                              MouseYSensitivity;                                        // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bGamepadLeftXInverted;                                    // 0x0134(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0135(0x0003) MISSED OFFSET
	float                                              GamepadLeftXSensitivity;                                  // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GamepadLeftXDeadzone;                                     // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bGamepadLeftYInverted;                                    // 0x0140(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0141(0x0003) MISSED OFFSET
	float                                              GamepadLeftYSensitivity;                                  // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GamepadLeftYDeadzone;                                     // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bGamepadRightXInverted;                                   // 0x014C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x014D(0x0003) MISSED OFFSET
	float                                              GamepadRightXSensitivity;                                 // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GamepadRightXDeadzone;                                    // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bGamepadRightYInverted;                                   // 0x0158(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0159(0x0003) MISSED OFFSET
	float                                              GamepadRightYSensitivity;                                 // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GamepadRightYDeadzone;                                    // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1F4];                                     // 0x0164(0x01F4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauInput");
		return ptr;
	}


	void ShowGamepadTextInput(EInputTextMode TextMode, EInputLineMode LineMode, const struct FString& Description, const struct FString& ExistingText, int MaxLen);
	void ShowBindingPanel();
	void SetToggleSprint(int NewToggleSprint);
	void SetMouseYSensitivity(float NewSensitivity);
	void SetMouseYInverted(bool bNewInverted);
	void SetMouseXSensitivity(float NewSensitivity);
	void SetMouseXIsFlipAttackSide(int NewIsFlipAttackSide);
	void SetMouseXInverted(bool bNewInverted);
	void SetInverseAttackDirectionY(int NewInverseAttackDirectionX);
	void SetInverseAttackDirectionX(int NewInverseAttackDirectionX);
	void SetGamepadRightYSensitivity(float NewSensitivity);
	void SetGamepadRightYInverted(bool bNewInverted);
	void SetGamepadRightYDeadzone(float NewDeadzone);
	void SetGamepadRightXSensitivity(float NewSensitivity);
	void SetGamepadRightXInverted(bool bNewInverted);
	void SetGamepadRightXDeadzone(float NewDeadzone);
	void SetGamepadLeftYSensitivity(float NewSensitivity);
	void SetGamepadLeftYInverted(bool bNewInverted);
	void SetGamepadLeftYDeadzone(float NewDeadzone);
	void SetGamepadLeftXSensitivity(float NewSensitivity);
	void SetGamepadLeftXInverted(bool bNewInverted);
	void SetGamepadLeftXDeadzone(float NewDeadzone);
	void SetControlScheme(int NewControlScheme);
	void SetAngleAttacksWithMovement(int NewAngleAttacksWithMovement);
	void SetAngleAttackAfterPress(int NewAngleAttackAfterPress);
	void SetActiveActionSet(EActionSet ActionSet);
	void SaveSettings();
	void RestoreDefaultSettings();
	int GetToggleSprint();
	float GetMouseYSensitivity();
	bool GetMouseYInverted();
	float GetMouseXSensitivity();
	int GetMouseXIsFlipAttackSide();
	bool GetMouseXInverted();
	struct FVector2D GetMouseSensitivityLimits();
	int GetInverseAttackDirectionY();
	int GetInverseAttackDirectionX();
	struct FVector2D GetGamepadSensitivityLimits();
	float GetGamepadRightYSensitivity();
	bool GetGamepadRightYInverted();
	float GetGamepadRightYDeadzone();
	float GetGamepadRightXSensitivity();
	bool GetGamepadRightXInverted();
	float GetGamepadRightXDeadzone();
	float GetGamepadLeftYSensitivity();
	bool GetGamepadLeftYInverted();
	float GetGamepadLeftYDeadzone();
	float GetGamepadLeftXSensitivity();
	bool GetGamepadLeftXInverted();
	float GetGamepadLeftXDeadzone();
	struct FVector2D GetGamepadDeadzoneLimits();
	int GetControlScheme();
	float STATIC_GetAxisScale(const struct FInputAxisKeyMapping& AxisKeyBinding);
	struct FName STATIC_GetAxisOppositeDirectionName(const struct FName& AxisName);
	struct FName STATIC_GetAxisName(const struct FInputAxisKeyMapping& AxisKeyBinding);
	void GetAxisKeyBindings(TArray<struct FInputAxisKeyMapping>* AxisKeyBindings);
	struct FInputAxisKeyMapping GetAxisKeyBinding(const struct FName& AxisName);
	struct FKey STATIC_GetAxisKey(const struct FInputAxisKeyMapping& AxisKeyBinding);
	int GetAngleAttacksWithMovement();
	int GetAngleAttackAfterPress();
	struct FName STATIC_GetActionName(const struct FInputActionKeyMapping& ActionKeyBinding);
	void GetActionKeyBindings(TArray<struct FInputActionKeyMapping>* ActionKeyBindings);
	struct FInputActionKeyMapping GetActionKeyBinding(const struct FName& ActionName);
	struct FKey STATIC_GetActionKey(const struct FInputActionKeyMapping& ActionKeyBinding);
	void ClearKeyBindings();
	void ApplySettings();
	void AddAxisKeyBinding(const struct FName& AxisName, const struct FKey& Key);
	void AddActionKeyBinding(const struct FName& ActionName, const struct FKey& Key);
};


// Class Mordhau.MordhauInventory
// 0x01D0 (0x01F8 - 0x0028)
class UMordhauInventory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0028(0x0160) MISSED OFFSET
	struct FString                                     RecipesString;                                            // 0x0188(0x0010) (ZeroConstructor)
	struct FScriptMulticastDelegate                    OnItemsRefreshed;                                         // 0x0198(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemsSerialized;                                        // 0x01A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemsDeserialized;                                      // 0x01B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemsDropped;                                           // 0x01C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnRewardsDropped;                                         // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemsUnlocked;                                          // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauInventory");
		return ptr;
	}


	bool UnlockLevelUnlocks(const struct FSteamID& SteamID);
	void UnlockItems(const struct FSteamID& SteamID, TArray<int> ItemDefIDs, ECallResult* CallResult);
	void UnlockItem(const struct FSteamID& SteamID, int ItemDefID, ECallResult* CallResult);
	void TriggerRewardDrop(TArray<class AMordhauPlayerState*> Players, ECallResult* CallResult);
	void TriggerItemDrop(int ItemDefID, ECallResult* CallResult);
	void SetItemQuantity(const struct FSteamID& SteamID, int ItemDefID, int quantity, ECallResult* CallResult);
	void SerializeItems(ECallResult* CallResult);
	void ResetInventory(ECallResult* CallResult);
	void RequestUnlockRecipes();
	void RefreshItems(ECallResult* CallResult);
	bool ParseResponseString(const struct FString& ResponseString, TArray<struct FItemStack>* ItemStacks);
	void OnWebAPIItemsDropped(const struct FSteamID& SteamID, TArray<struct FItemStack> ItemStacks);
	bool IsSkinAvailable(const struct FSteamID& SteamID, const struct FEquipmentSkinEntry& Skin);
	bool IsInventoryAvailable(const struct FSteamID& SteamID);
	bool HasSupporterPack(const struct FSteamID& SteamID);
	bool HasSkin(const struct FSteamID& SteamID, const struct FEquipmentSkinEntry& Skin);
	bool HasRewards(const struct FSteamID& SteamID);
	bool HasItem(const struct FSteamID& SteamID, int ItemDefID);
	int STATIC_GetXPItemDefID();
	void GetUnlockRequirements(int ItemDefID, ECallResult* CallResult, TArray<struct FItemStack>* Requirements);
	void GetUnlockRecipe(int ItemDefID, ECallResult* CallResult, struct FUnlockRecipe* Recipe);
	int STATIC_GetTutorialPackageItemDefID();
	int STATIC_GetStackQuantity(const struct FItemStack& ItemStack);
	int STATIC_GetStackItemDefID(const struct FItemStack& ItemStack);
	class UMordhauInventoryItem* STATIC_GetStackItem(const struct FItemStack& ItemStack);
	EItemRarity GetSkinRarity(const struct FEquipmentSkinEntry& Skin);
	void GetItemStacks(const struct FSteamID& SteamID, ECallResult* CallResult, TArray<struct FItemStack>* ItemStacks);
	void GetItemQuantity(const struct FSteamID& SteamID, int ItemDefID, ECallResult* CallResult, int* quantity);
	class UMordhauInventoryItem* STATIC_GetItem(int ItemDefID);
	int STATIC_GetGoldItemDefID();
	void FakeRewardDrop(int Gold, int XP, ECallResult* CallResult);
	void FakeItemDrop(int ItemDefID, int quantity, ECallResult* CallResult);
	void DeserializeItems(const struct FSteamID& SteamID, const struct FSerializedItems& SerializedItems, ECallResult* CallResult);
	void ConsumeItemStack(const struct FItemStack& ItemStack, ECallResult* CallResult);
	void ConsolidateItems(ECallResult* CallResult);
	TArray<struct FItemStack> CollectRewards(const struct FSteamID& SteamID);
	bool CanUnlockItems(const struct FSteamID& SteamID, TArray<int> ItemDefIDs);
	bool CanUnlockItem(const struct FSteamID& SteamID, int ItemDefID);
	bool AreUnlockRecipesAvailable();
	void AddItems(TArray<int> ItemDefIDs, ECallResult* CallResult);
	void AddItem(int ItemDefID, ECallResult* CallResult);
};


// Class Mordhau.MordhauLevelScriptActor
// 0x0000 (0x0330 - 0x0330)
class AMordhauLevelScriptActor : public ALevelScriptActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauLevelScriptActor");
		return ptr;
	}

};


// Class Mordhau.MordhauMovementComponent
// 0x00E0 (0x0940 - 0x0860)
class UMordhauMovementComponent : public UAdvancedCharacterMovement
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0860(0x000C) MISSED OFFSET
	float                                              TurnSprintPreventionDecaySpeed;                           // 0x086C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnSprintPreventionDuration;                             // 0x0870(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnSprintPreventionThreshold;                            // 0x0874(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ChasingSprintTimeStart;                                   // 0x0878(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RushSprintTimeStart;                                      // 0x087C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BeingChasedSlowdownTimeFactor;                            // 0x0880(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxAngleToChase;                                          // 0x0884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ChasingMaxDistance;                                       // 0x0888(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     ChasedMaxDistance;                                        // 0x0894(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TimeToBreakUsChasing;                                     // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeToBreakUsBeingChased;                                 // 0x08A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeToStartChasing;                                    // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeToStartBeingChased;                                // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxWalkSpeedCrouchedWithRatPerk;                          // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SprintModifier;                                           // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PartialSprintModifier;                                    // 0x08B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SupersprintModifier;                                      // 0x08BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BackpedalModifier;                                        // 0x08C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrafeModifier;                                           // 0x08C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WalkAcceleration;                                         // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PartialSprintAcceleration;                                // 0x08CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SprintAcceleration;                                       // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SprintTimeToReachMaxSprint;                               // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SprintTime;                                               // 0x08D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SupersprintAcceleration;                                  // 0x08DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionSpeedFactor;                                        // 0x08E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MotionBackpedalSpeedFactor;                               // 0x08E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EquipmentBackpedalSpeedFactor;                            // 0x08E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArmorSpeedFactor;                                         // 0x08EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ArmorAccelerationFactor;                                  // 0x08F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EquipmentSpeedBonusPercentage;                            // 0x08F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EquipmentAccelerationBonusPercentage;                     // 0x08F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMovementModifier                                  MovementModifier;                                         // 0x08FC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsSprint;                                             // 0x08FD(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSprintIsAllowed;                                         // 0x08FE(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyPartialSprint;                                       // 0x08FF(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWantsSupersprint;                                        // 0x0900(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0901(0x0003) MISSED OFFSET
	float                                              KnockbackGroundFriction;                                  // 0x0904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KnockbackFallingLateralFriction;                          // 0x0908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              KnockbackUpImpulse;                                       // 0x090C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxSpeedFalling;                                          // 0x0910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BaseGroundFriction;                                       // 0x0914(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BaseFallingLateralFriction;                               // 0x0918(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              KnockbackDuration;                                        // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BrakingDecelerationFallingTooFast;                        // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x0924(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauMovementComponent");
		return ptr;
	}


	void Knockback(const struct FVector& Amount);
	bool IsInKnockback();
	float GetSpeedFactor();
	float GetAccelerationFactor();
};


// Class Mordhau.MordhauPhysicsCollisionHandler
// 0x0000 (0x0040 - 0x0040)
class UMordhauPhysicsCollisionHandler : public UPhysicsCollisionHandler
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauPhysicsCollisionHandler");
		return ptr;
	}

};


// Class Mordhau.MordhauPlayerController
// 0x0378 (0x09F0 - 0x0678)
class AMordhauPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x44];                                      // 0x0678(0x0044) MISSED OFFSET
	bool                                               bIsInventoryAvailableOnAuthority;                         // 0x06BC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsAnythingRestockable;                                   // 0x06BD(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x06BE(0x0002) MISSED OFFSET
	int                                                SelectedCharacterProfile;                                 // 0x06C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SelectedDefaultProfile;                                   // 0x06C4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FCharacterProfile                           CharacterProfile;                                         // 0x06C8(0x00A0) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bReceivedValidProfileFromClient;                          // 0x0768(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0769(0x0003) MISSED OFFSET
	float                                              LastAskedForSpawnTime;                                    // 0x076C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpawnToken;                                               // 0x0770(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xC];                                       // 0x0774(0x000C) MISSED OFFSET
	struct FCharacterProfile                           LastSentCharacterProfile;                                 // 0x0780(0x00A0)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0820(0x0008) MISSED OFFSET
	class ACustomizationReplicationActor*              CustomizationReplicationActor;                            // 0x0828(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSendsDefaultCustomization;                               // 0x0830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0831(0x0007) MISSED OFFSET
	TArray<struct FEquipmentCustomization>             DefaultCharacterEquipment;                                // 0x0838(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData06[0x10];                                      // 0x0848(0x0010) MISSED OFFSET
	TArray<struct FCharacterGearCustomization>         DefaultCharacterTier;                                     // 0x0858(0x0010) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0868(0x0008) MISSED OFFSET
	struct FCharacterProfile                           PendingCharacterProfile;                                  // 0x0870(0x00A0) (BlueprintVisible)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0910(0x0004) MISSED OFFSET
	TWeakObjectPtr<class AMordhauCharacter>            LastControlledCharacter;                                  // 0x0914(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x54];                                      // 0x091C(0x0054) MISSED OFFSET
	float                                              NextRespawnTime;                                          // 0x0970(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0974(0x0004) MISSED OFFSET
	float                                              MaxAFKTime;                                               // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyAFKIfAlive;                                          // 0x097C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x097D(0x0003) MISSED OFFSET
	float                                              CurrentAFKTime;                                           // 0x0980(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LastAFKCheckCameraLocation;                               // 0x0984(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData12[0x8];                                       // 0x0990(0x0008) MISSED OFFSET
	struct FString                                     AuthTicket;                                               // 0x0998(0x0010) (ZeroConstructor)
	struct FServerStats                                ServerStats;                                              // 0x09A8(0x0018)
	TArray<struct FString>                             MapVoteMaps;                                              // 0x09C0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<unsigned char>                              MapVoteCounts;                                            // 0x09D0(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData13[0x10];                                      // 0x09E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauPlayerController");
		return ptr;
	}


	void VoteMap(const struct FString& MapName);
	void VoteLevel(const struct FString& LevelName);
	void VoteKick(const struct FString& PlayerNameOrSteamID);
	void Unban(const struct FString& SteamID);
	void Turn(float Value);
	void ToggleStamina();
	void ToggleDamage();
	void StopServerStatsFile();
	void StartServerStatsFile();
	void SpectatorCmd(const struct FString& SpecCmd);
	void Slomo(float Value);
	void ShowTips();
	void ShowEquipment();
	void ShowAuthTraces(bool bValue);
	void SetChoiceMenuConsumesInput(bool Value);
	void ServerVoteLevel(const struct FString& LevelName);
	void ServerUnbanPlayer(uint64_t SteamID);
	void ServerToggleStamina();
	void ServerToggleDamage();
	void ServerStopServerStatsFile();
	void ServerStartServerStatsFile();
	void ServerSlomo(float Value);
	void ServerSetSpawnToken(int NewToken);
	void ServerSetMatchmakingLobbyID(const struct FSteamID& InMatchmakingLobbyID);
	void ServerSetInventoryItems(const struct FSerializedItems& SerializedItems);
	void ServerSetBadge(unsigned char NewBadge);
	void ServerSetAuthTicket(const struct FString& InAuhTicket);
	void ServerRequestSetTeam(int NewTeam);
	void ServerRequestSetSkillsCustomization(const struct FSkillsCustomization& NewCharacterSkills);
	void ServerRequestSetGearCustomization(const struct FCharacterGearCustomization& NewCharacterGear);
	void ServerRequestSetFaceCustomization(const struct FFaceCustomization& NewCharacterFace);
	void ServerRequestSetDefaultProfile(int NewDefaultProfile);
	void ServerRequestSetDefaultCharacterTiers(TArray<struct FCharacterGearCustomization> Tiers);
	void ServerRequestSetDefaultCharacterEquipment(TArray<struct FEquipmentCustomization> Equip);
	void ServerRequestSetAppearanceCustomization(const struct FAppearanceCustomization& NewCharacterAppearance);
	void ServerRequestRewards();
	void ServerRequestAuthTraces(bool bEnabled);
	void ServerRemoveBots(int Amount, int Team);
	void ServerRemoveAdmin(uint64_t SteamID);
	void ServerKickPlayer(uint64_t SteamID, const struct FString& KickReason);
	void ServerGetServerStats();
	void ServerGetMapVoteMaps();
	void ServerGetMapVoteCounts();
	void ServerChangeLevel(const struct FString& LevelName);
	void ServerBanPlayer(uint64_t SteamID, int BanDuration, const struct FString& BanReason);
	void ServerBanList();
	void ServerAdminLogin(const struct FString& Password);
	void ServerAdminList();
	void ServerAddBots(int Amount, int Team);
	void ServerAddAdmin(uint64_t SteamID);
	void SaveCurrentProfilesAsBotProfiles();
	void RemoveBotsTeam(int Amount, int Team);
	void RemoveBots(int Amount);
	void RemoveAdmin(const struct FString& PlayerNameOrSteamID);
	void RegisterAnglingYInput(float Value);
	void RegisterAnglingXInput(float Value);
	void PrepareAndSendCustomizationIfChanged();
	void PlayerList();
	void OnSpectatorCmd(const struct FString& Cmd, const struct FString& Param);
	void OnSpectatorAction(unsigned char Action);
	void OnSettingsChanged();
	void OnRequestVoteKick(class AMordhauPlayerState* TargetPlayer);
	void OnRequestCancelVoteKick();
	void OnNewProfileFromClientPreValidation();
	void OnNewProfileFromClientPostValidation();
	void OnMordhauCharacterSpawned(class AMordhauCharacter* SpawnedCharacter);
	void OnIsAnythingRestockableChanged();
	void OnInventoryRewardsDropped(bool bWasSuccessful, const struct FSteamID& SteamID, TArray<struct FItemStack> ItemStacks);
	void OnInventoryItemsUnlocked(bool bWasSuccessful, const struct FSteamID& SteamID, TArray<struct FItemStack> ItemStacks);
	void OnInventoryItemsSerialized(bool bWasSuccessful, const struct FSteamID& SteamID, const struct FSerializedItems& SerializedItems);
	void OnHighlightStart(class AActor* Actor);
	void OnHighlightEnd(class AActor* Actor);
	void OnAmmoChanged(class AMordhauEquipment* Equipment, int AmmoDifference);
	void OnAfterPossess(class APawn* APawn);
	void OnAFKTimeExceededMaximum();
	void OnActionFailed(const struct FName& Reason);
	void LookUp(float Value);
	void Kick(const struct FString& PlayerNameOrSteamID, const struct FString& KickReason);
	bool IsInventoryAvailable();
	bool IsAuthTicketAvailable();
	bool IsAdmin();
	void GiveClientScoreBP(EScoreFeedReason Reason, int ScoreAmount);
	struct FSteamID GetSteamID();
	class UTexture2D* GetSteamAvatar(EAvatarSize Size);
	class AMordhauCharacter* GetLastControlledCharacter();
	bool GetDefaultTierCustomizationForSlot(EMainWearableSlot MainSlot, unsigned char ArmorTier, TMap<EWearableSlot, struct FWearableCustomization>* OutMap);
	bool GetDefaultEquipmentCustomizationFor(class UClass* ForEquipmentClass, struct FEquipmentCustomization* OutCustomization);
	struct FVector2D GetAnglingVector();
	float GetAnglingAngle();
	void FlushPendingAnglingInputs();
	void EquipmentCommand(int Command);
	void DisplayMessage(class APlayerState* SenderPlayerState, const struct FString& S, const struct FName& Type, float MsgLifeTime);
	void ClientWasKicked_Implementation(const struct FText& KickReason);
	void ClientSetServerStats(const struct FServerStats& InServerStats);
	void ClientSetMapVoteMaps(TArray<struct FString> InMapVoteMaps);
	void ClientSetMapVoteCounts(TArray<unsigned char> InMapVoteCounts);
	void ClientSetControlAndPawnRotation(class APawn* APawn, const struct FRotator& NewRotation);
	void ClientRequestMatchmakingLobbyID();
	void ClientRequestInventoryItems();
	void ClientRequestAuthTicket();
	void ClientReceiveScoreNoState(unsigned char ReasonAndParam, int16_t ScoreAmount);
	void ClientReceiveScoreBP(EScoreFeedReason Reason, unsigned char ReasonParam, float ScoreAmount, class AMordhauPlayerState* AssociatedPlayer);
	void ClientReceiveScore(unsigned char ReasonAndParam, int16_t ScoreAmount, class AMordhauPlayerState* AssociatedPlayer);
	void ClientReceiveRewards(TArray<struct FItemStack> Rewards);
	void ClientReceiveMessage(const struct FString& Message);
	void ClientNotifyInventoryIsAvailable();
	void ClientMessageBP(const struct FString& String);
	void ClientJoinMatchmakingLobby(const struct FSteamID& InMatchmakingLobbyID);
	void ClientDrawTracer(const struct FVector& Start, const struct FVector& End);
	void ChooseExit();
	void Choose9();
	void Choose8();
	void Choose7();
	void Choose6();
	void Choose5();
	void Choose4();
	void Choose3();
	void Choose2();
	void Choose1();
	void ChoiceMenuOptionSelected(int Choice);
	void ChoiceMenu(int Index);
	void ChangeMap(const struct FString& MapName);
	void ChangeLevel(const struct FString& LevelName);
	void CancelVoteKick();
	bool CanAskForSpawn();
	void BanList();
	void Ban(const struct FString& PlayerNameOrSteamID, int BanDuration, const struct FString& BanReason);
	void AskForSpawn();
	void AdminLogin(const struct FString& Password);
	void AdminList();
	void AddBotsTeam(int Amount, int Team);
	void AddBots(int Amount);
	void AddAdmin(const struct FString& PlayerNameOrSteamID);
};


// Class Mordhau.MordhauPlayerStart
// 0x0010 (0x0368 - 0x0358)
class AMordhauPlayerStart : public APlayerStart
{
public:
	bool                                               bIsSpawnDisabled;                                         // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	int                                                Team;                                                     // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Token;                                                    // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0364(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauPlayerStart");
		return ptr;
	}


	bool IsAllowedSpawnFor(class AController* Player);
	float GetSpawnPreferenceFor(class AController* Player);
};


// Class Mordhau.MordhauPlayerState
// 0x0060 (0x0450 - 0x03F0)
class AMordhauPlayerState : public APlayerState
{
public:
	TArray<float>                                      MedianPings;                                              // 0x03F0(0x0010) (ZeroConstructor, Transient)
	TArray<float>                                      MedianPingsSorted;                                        // 0x0400(0x0010) (ZeroConstructor, Transient)
	int                                                CurMedianPingIndex;                                       // 0x0410(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              PingMedian;                                               // 0x0414(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                LocalStableShortID;                                       // 0x0418(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int16_t                                            ReplicatedRank;                                           // 0x041C(0x0002) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int16_t                                            ReplicatedKills;                                          // 0x041E(0x0002) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int16_t                                            ReplicatedAssists;                                        // 0x0420(0x0002) (Net, ZeroConstructor, Transient, IsPlainOldData)
	uint16_t                                           ReplicatedDeathsAndFlags;                                 // 0x0422(0x0002) (Net, ZeroConstructor, Transient, IsPlainOldData)
	int8_t                                             ReplicatedTeam;                                           // 0x0424(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      Badge;                                                    // 0x0425(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsAlive;                                                 // 0x0426(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0427(0x0001) MISSED OFFSET
	int                                                Kills;                                                    // 0x0428(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                Deaths;                                                   // 0x042C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                Assists;                                                  // 0x0430(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	int                                                Team;                                                     // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class AMordhauCharacter>            LastMordhauCharacter;                                     // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsAdmin;                                                 // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0441(0x0003) MISSED OFFSET
	int                                                KilledLocalPlayerCounter;                                 // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bIsMuted;                                                 // 0x0448(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0449(0x0003) MISSED OFFSET
	int                                                KilledByLocalPlayerCounter;                               // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauPlayerState");
		return ptr;
	}


	void SetPlayerName(const struct FString& S);
	void OnRep_ReplicatedTeam();
	void OnRep_ReplicatedKills();
	void OnRep_ReplicatedDeathsAndFlags();
	void OnRep_ReplicatedAssists();
	struct FSteamID GetSteamID();
	int GetRank();
	class AMordhauCharacter* GetLastPossessedMordhauCharacter();
	void AddScore(int Amount);
	void AddKills(int Amount);
	void AddDeaths(int Amount);
	void AddAssists(int Amount);
};


// Class Mordhau.MordhauProjectile
// 0x0420 (0x0880 - 0x0460)
class AMordhauProjectile : public AMordhauActor
{
public:
	class USceneComponent*                             SpinComponent;                                            // 0x0460(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bDestroyWhenTerminated;                                   // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWasAttachedOnClient;                                     // 0x0469(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x046A(0x0006) MISSED OFFSET
	struct FText                                       ProjectileName;                                           // 0x0470(0x0018) (Edit, BlueprintVisible)
	struct FVector                                     LastProjectileLocation;                                   // 0x0488(0x000C) (IsPlainOldData)
	bool                                               bHideProjectile;                                          // 0x0494(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0495(0x000B) MISSED OFFSET
	struct FTransform                                  CosmeticOffsetToBlendOut;                                 // 0x04A0(0x0030) (BlueprintVisible, IsPlainOldData)
	float                                              CosmeticOffsetBlendOutSpeed;                              // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CosmeticOffsetBlendWeight;                                // 0x04D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x04D8(0x0008) MISSED OFFSET
	struct FTransform                                  OriginalMeshRelativeTransform;                            // 0x04E0(0x0030) (BlueprintVisible, IsPlainOldData)
	struct FQuat                                       DefaultMeshRotationOffset;                                // 0x0510(0x0010) (IsPlainOldData)
	TArray<struct FWoundInfo>                          WoundInfoArray;                                           // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EPhysicalSurface>>              WillStickyOn;                                             // 0x0530(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TEnumAsByte<EPhysicalSurface>>              WillPassThroughOn;                                        // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<TEnumAsByte<EPhysicalSurface>, class UParticleSystem*> SurfaceImpactParticles;                                   // 0x0550(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<TEnumAsByte<EPhysicalSurface>, struct FDecalInfo> SurfaceImpactDecals;                                      // 0x05A0(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector                                     RotationSpin;                                             // 0x05F0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              PathBlendDuration;                                        // 0x05FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RagdollLifeSpan;                                          // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AttackMask;                                               // 0x0604(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0605(0x0003) MISSED OFFSET
	class USoundCue*                                   FlightSound;                                              // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   ImpactSound;                                              // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   FleshImpactSound;                                         // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAudioComponent>              CurrentFlightSound;                                       // 0x0620(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FActorSetAndArray                           CosmeticIgnoreActors;                                     // 0x0628(0x0060)
	struct FActorSetAndArray                           IgnoreActors;                                             // 0x0688(0x0060)
	TArray<struct FHitResult>                          HitResultCache;                                           // 0x06E8(0x0010) (ZeroConstructor)
	struct FRotator                                    AccumulatedRotationSpin;                                  // 0x06F8(0x000C) (IsPlainOldData)
	struct FReplicatedProjectileInfo                   ReplicatedProjectileInfo;                                 // 0x0704(0x0034) (BlueprintVisible, Net)
	TWeakObjectPtr<class AActor>                       Creator;                                                  // 0x0738(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AController>                  OwningController;                                         // 0x0740(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class APawn>                        OwningPawn;                                               // 0x0748(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsFromLocalPlayer;                                       // 0x0750(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0751(0x0007) MISSED OFFSET
	class AMordhauProjectile*                          AssociatedProjectile;                                     // 0x0758(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              DamageModifierHuntsmanPerk;                               // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0764(0x0004) MISSED OFFSET
	TArray<float>                                      Damage;                                                   // 0x0768(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      HeadBonus;                                                // 0x0778(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<float>                                      LegBonus;                                                 // 0x0788(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              WoodDamage;                                               // 0x0798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StoneDamage;                                              // 0x079C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasReceivedInfo;                                         // 0x07A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x07A1(0x0003) MISSED OFFSET
	float                                              FiredTime;                                                // 0x07A4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LastProjectileSweepTime;                                  // 0x07A8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bUsesLocalProjectileBlending;                             // 0x07AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsConfirmed;                                             // 0x07AD(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasTerminated;                                           // 0x07AE(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x07AF(0x0001) MISSED OFFSET
	float                                              TerminatedTime;                                           // 0x07B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasNetworkOrigin;                                        // 0x07B4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bHasFired;                                                // 0x07B5(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x07B6(0x0002) MISSED OFFSET
	TArray<class UClass*>                              RestockAmmoForEquipment;                                  // 0x07B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      GiveEquipmentOnPickup;                                    // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAssignCustomizationOnPickup;                             // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x07D1(0x0007) MISSED OFFSET
	struct FEquipmentCustomization                     CreatorEquipmentCustomization;                            // 0x07D8(0x0030)
	bool                                               bIsActiveBlendProjectile;                                 // 0x0808(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasStartedTrail;                                         // 0x0809(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutomaticallyDetermineMeshLocation;                      // 0x080A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x080B(0x0001) MISSED OFFSET
	int                                                ProjectileCollisionPrecedence;                            // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWillIgnoreShooter;                                       // 0x0810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutomaticallyDetermineSpinLocation;                      // 0x0811(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x0812(0x0002) MISSED OFFSET
	float                                              StickySurfacePitchBlend;                                  // 0x0814(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StickySurfaceYawBlend;                                    // 0x0818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x081C(0x0004) MISSED OFFSET
	class UParticleSystem*                             TrailParticleTemplate;                                    // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UParticleSystemComponent>     CurrentTrailParticles;                                    // 0x0828(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       TrailStartSocket;                                         // 0x0830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TrailEndSocket;                                           // 0x0838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TrailWidth;                                               // 0x0840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETrailWidthMode>                       TrailWidthMode;                                           // 0x0844(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLocallyPredicted;                                      // 0x0845(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x0846(0x0002) MISSED OFFSET
	float                                              AttackBounceForce;                                        // 0x0848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParryBounceForce;                                         // 0x084C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProjectileBounceForce;                                    // 0x0850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EnvironmentBounceForce;                                   // 0x0854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BounceAngularVelocityFactor;                              // 0x0858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BounceMinAngularVelocity;                                 // 0x085C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldFlinch;                                            // 0x0860(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0861(0x0003) MISSED OFFSET
	float                                              CullDistanceRagdoll;                                      // 0x0864(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBoxComponent*                               CollisionComp;                                            // 0x0868(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData)
	class UAdvProjectileMovementComponent*             ProjectileMovement;                                       // 0x0870(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData15[0x8];                                       // 0x0878(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauProjectile");
		return ptr;
	}


	bool WillSticky(unsigned char Surface);
	bool WillPassThrough(unsigned char Surface);
	bool UsesProjectileBlending();
	void UpdateProjectileState(float DeltaTime);
	void TerminateProjectile();
	void SweepProjectile();
	void StopTrail();
	void StartTrail();
	void SpawnParticles(const struct FVector& Location, const struct FRotator& Rotation, class UParticleSystem* System);
	void SpawnDecal(const struct FVector& Location, const struct FRotator& Rotation, const struct FDecalInfo& DecalInfo);
	void SetCurrentTrailParticles(class UParticleSystemComponent* ParticleSystemComponent);
	bool RestockCharacter(class AMordhauCharacter* Character);
	void ProcessProjectileHit(bool bIsBlocking, const struct FHitResult& Hit);
	void OnRep_ReplicatedProjectileInfo();
	void OnProjectileHitCosmetic(class AActor* OtherActor, const struct FHitResult& Hit);
	void OnProjectileHit(const struct FVector& HitLocation, const struct FVector& HitNormal, float BounceForce, unsigned char Surface, bool bHasHitWorld, bool bHasStopped);
	void OnProjectileFired();
	void OnProjectileDamagedCharacter(class AAdvancedCharacter* Character, bool bWillKill, const struct FVector& WorldLocation, const struct FName& bone);
	void InitializeProjectile(class AController* InOwningController, bool bInIsLocallyPredicted, class AActor* InCreator);
	class AController* GetProjectileOwningController();
	class AActor* GetProjectileCreator();
	float GetPercentageOfMaxVelocityClamped();
	struct FTransform GetCurrentTransformWithOffsets();
	class UParticleSystemComponent* GetCurrentTrailParticles();
	struct FTransform GetBlendedTransform(float T);
	void Fire();
	void CarryOverTrail(class AMordhauProjectile* NewProjectile);
	void BounceComponent(class USkeletalMeshComponent* ComponentToBounce, const struct FVector& NewVelocity, const struct FVector& NewAngularVelocity);
	bool AttachProjectile(const struct FHitResult& Hit);
};


// Class Mordhau.MordhauQuest
// 0x0000 (0x0328 - 0x0328)
class AMordhauQuest : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauQuest");
		return ptr;
	}

};


// Class Mordhau.MordhauSceneComponent
// 0x0000 (0x0240 - 0x0240)
class UMordhauSceneComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauSceneComponent");
		return ptr;
	}

};


// Class Mordhau.FindMordhauServerSessions
// 0x0078 (0x00A8 - 0x0030)
class UFindMordhauServerSessions : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	EServerList                                        ServerList;                                               // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	int                                                MaxResults;                                               // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FFindServerSessionsFilter                   Filter;                                                   // 0x0058(0x0028)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0080(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.FindMordhauServerSessions");
		return ptr;
	}


	void OnFindServerSessionsComplete(bool bWasSuccessful);
	bool STATIC_IsVacSecured(const struct FServerSearchResult& Result);
	bool STATIC_IsRanked(const struct FServerSearchResult& Result);
	bool STATIC_IsPasswordProtected(const struct FServerSearchResult& Result);
	bool STATIC_IsOfficial(const struct FServerSearchResult& Result);
	bool STATIC_IsModded(const struct FServerSearchResult& Result);
	bool STATIC_IsMatchmaking(const struct FServerSearchResult& Result);
	bool STATIC_IsDevBuild(const struct FServerSearchResult& Result);
	struct FString STATIC_GetServerName(const struct FServerSearchResult& Result);
	EServerList STATIC_GetServerList(const struct FServerSearchResult& Result);
	ERegion STATIC_GetRegion(const struct FServerSearchResult& Result);
	int STATIC_GetPing(const struct FServerSearchResult& Result);
	int STATIC_GetMaxPlayers(const struct FServerSearchResult& Result);
	struct FString STATIC_GetMapName(const struct FServerSearchResult& Result);
	struct FSteamID STATIC_GetLobbyID(const struct FServerSearchResult& Result);
	struct FString STATIC_GetGameMode(const struct FServerSearchResult& Result);
	int STATIC_GetCurrentPlayers(const struct FServerSearchResult& Result);
	class UFindMordhauServerSessions* STATIC_FindMordhauServerSessions(EServerList ServerList, int MaxResults, const struct FFindServerSessionsFilter& Filter);
	bool STATIC_AllowsJoin(const struct FServerSearchResult& Result);
};


// Class Mordhau.FindMordhauServerSessionByAddress
// 0x0040 (0x0070 - 0x0030)
class UFindMordhauServerSessionByAddress : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FServerAddress                              Address;                                                  // 0x0050(0x0008)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0058(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.FindMordhauServerSessionByAddress");
		return ptr;
	}


	class UFindMordhauServerSessionByAddress* STATIC_FindMordhauServerSessionByAddress(const struct FServerAddress& Address);
};


// Class Mordhau.FindMordhauLobbySessions
// 0x0070 (0x00A0 - 0x0030)
class UFindMordhauLobbySessions : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0050(0x0028) MISSED OFFSET
	struct FFindLobbySessionsFilter                    Filter;                                                   // 0x0078(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.FindMordhauLobbySessions");
		return ptr;
	}


	void OnFindLobbySessionsComplete(bool bWasSuccessful);
	struct FServerAddress STATIC_GetServerAddress(const struct FLobbySearchResult& Result, bool* bWasSuccessful);
	struct FSteamID STATIC_GetOwner(const struct FLobbySearchResult& Result);
	int STATIC_GetMMR(const struct FLobbySearchResult& Result);
	int STATIC_GetMaxPlayers(const struct FLobbySearchResult& Result);
	struct FSteamID STATIC_GetLobbyID(const struct FLobbySearchResult& Result);
	int STATIC_GetCurrentPlayers(const struct FLobbySearchResult& Result);
	class UFindMordhauLobbySessions* STATIC_FindMordhauLobbySessions(const struct FFindLobbySessionsFilter& Filter);
};


// Class Mordhau.JoinMordhauServerSession
// 0x0230 (0x0260 - 0x0030)
class UJoinMordhauServerSession : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x210];                                     // 0x0050(0x0210) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.JoinMordhauServerSession");
		return ptr;
	}


	class UJoinMordhauServerSession* STATIC_JoinMordhauServerSession(const struct FServerSearchResult& SearchResult);
};


// Class Mordhau.CancelFindMordhauSessions
// 0x0000 (0x0028 - 0x0028)
class UCancelFindMordhauSessions : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.CancelFindMordhauSessions");
		return ptr;
	}


	bool STATIC_CancelFindMordhauSessions();
};


// Class Mordhau.UpdateMordhauSession
// 0x0230 (0x0260 - 0x0030)
class UUpdateMordhauSession : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x210];                                     // 0x0050(0x0210) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.UpdateMordhauSession");
		return ptr;
	}


	class UUpdateMordhauSession* STATIC_UpdateMordhauSession(const struct FServerSearchResult& Session);
};


// Class Mordhau.DestroyMordhauServerSession
// 0x0038 (0x0068 - 0x0030)
class UDestroyMordhauServerSession : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0050(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.DestroyMordhauServerSession");
		return ptr;
	}


	class UDestroyMordhauServerSession* STATIC_DestroyMordhauServerSession();
};


// Class Mordhau.CreateMatchmakingSession
// 0x0058 (0x0088 - 0x0030)
class UCreateMatchmakingSession : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0050(0x0018) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             GameModes;                                                // 0x0070(0x0010) (ZeroConstructor)
	ERegion                                            Region;                                                   // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0081(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.CreateMatchmakingSession");
		return ptr;
	}


	class UCreateMatchmakingSession* STATIC_CreateMatchmakingSession(class UObject* WorldContextObject, TArray<struct FString> InGameModes, ERegion InRegion);
};


// Class Mordhau.JoinMatchmakingSession
// 0x0258 (0x0288 - 0x0030)
class UJoinMatchmakingSession : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0050(0x0030) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x200];                                     // 0x0088(0x0200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.JoinMatchmakingSession");
		return ptr;
	}


	class UJoinMatchmakingSession* STATIC_JoinMatchmakingSessionByID(class UObject* WorldContextObject, const struct FSteamID& LobbyID);
	class UJoinMatchmakingSession* STATIC_JoinMatchmakingSession(class UObject* WorldContextObject, const struct FLobbySearchResult& SearchResult);
};


// Class Mordhau.DestroyMatchmakingSession
// 0x0040 (0x0070 - 0x0030)
class UDestroyMatchmakingSession : public UBlueprintAsyncActionBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFailure;                                                // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0050(0x0018) MISSED OFFSET
	class UWorld*                                      World;                                                    // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.DestroyMatchmakingSession");
		return ptr;
	}


	class UDestroyMatchmakingSession* STATIC_DestroyMatchmakingSession(class UObject* WorldContextObject);
};


// Class Mordhau.MordhauShield
// 0x0000 (0x1A20 - 0x1A20)
class AMordhauShield : public AMordhauWeapon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauShield");
		return ptr;
	}

};


// Class Mordhau.MordhauSingleton
// 0x04E8 (0x0510 - 0x0028)
class UMordhauSingleton : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData01[0x50];                                      // 0x0028(0x0050) UNKNOWN PROPERTY: SetProperty Mordhau.MordhauSingleton.AlwaysLoadedObjects
	unsigned char                                      UnknownData02[0x50];                                      // 0x0080(0x0050) UNKNOWN PROPERTY: MapProperty Mordhau.MordhauSingleton.CachedLoadedClassMap
	unsigned char                                      UnknownData03[0xD8];                                      // 0x00D0(0x00D8) MISSED OFFSET
	unsigned char                                      UnknownData04[0x50];                                      // 0x00D0(0x0050) UNKNOWN PROPERTY: SetProperty Mordhau.MordhauSingleton.LoadQueue
	unsigned char                                      UnknownData05[0x8];                                       // 0x01F8(0x0008) MISSED OFFSET
	unsigned char                                      UnknownData06[0x50];                                      // 0x01F8(0x0050) UNKNOWN PROPERTY: SetProperty Mordhau.MordhauSingleton.CurrentlyProcessingLoadQueue
	TArray<struct FSoftObjectPath>                     CurrentlyProcessingLoadQueueArray;                        // 0x0250(0x0010) (ZeroConstructor)
	class USkeletalMesh*                               DefaultCharacterMesh;                                     // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaxBloodPools;                                            // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SingletonVersion;                                         // 0x026C(0x0004) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	TArray<class UClass*>                              BotProfiles;                                              // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             RandomBotNames;                                           // 0x0280(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      DefaultHead;                                              // 0x0290(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0291(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData08[0x10];                                      // 0x0291(0x0010) UNKNOWN PROPERTY: ArrayProperty Mordhau.MordhauSingleton.HeadWearables
	unsigned char                                      DefaultUpperChest;                                        // 0x02A8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x02A9(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData10[0x10];                                      // 0x02A9(0x0010) UNKNOWN PROPERTY: ArrayProperty Mordhau.MordhauSingleton.UpperChestWearables
	unsigned char                                      DefaultLegs;                                              // 0x02C0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x02C1(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData12[0x10];                                      // 0x02C1(0x0010) UNKNOWN PROPERTY: ArrayProperty Mordhau.MordhauSingleton.LegsWearables
	unsigned char                                      UnknownData13[0x10];                                      // 0x02D8(0x0010) UNKNOWN PROPERTY: ArrayProperty Mordhau.MordhauSingleton.Equipment
	TArray<class UClass*>                              MaleFaces;                                                // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              FemaleFaces;                                              // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData14[0x10];                                      // 0x0308(0x0010) UNKNOWN PROPERTY: ArrayProperty Mordhau.MordhauSingleton.Voices
	TArray<class UClass*>                              Emblems;                                                  // 0x0318(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              Badges;                                                   // 0x0328(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              Perks;                                                    // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              Archetypes;                                               // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              Eyebrows;                                                 // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FMordhauColorItemTable>              ColorTables;                                              // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FMordhauColorItemTable                      SkinColorTable;                                           // 0x0378(0x0028) (Edit, BlueprintVisible)
	struct FMordhauColorItemTable                      EyeColorTable;                                            // 0x03A0(0x0028) (Edit, BlueprintVisible)
	struct FMordhauColorItemTable                      HairColorTable;                                           // 0x03C8(0x0028) (Edit, BlueprintVisible)
	struct FMordhauColorItemTable                      EmblemColorTable;                                         // 0x03F0(0x0028) (Edit, BlueprintVisible)
	struct FMordhauColorItemTable                      MetalTintsColorTable;                                     // 0x0418(0x0028) (Edit, BlueprintVisible)
	TArray<class UClass*>                              Motions;                                                  // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              EmoteMotions;                                             // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      SelectedBadge;                                            // 0x0460(0x0001) (BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x0461(0x0007) MISSED OFFSET
	TArray<struct FCharacterProfile>                   CharacterProfiles;                                        // 0x0468(0x0010) (BlueprintVisible, ZeroConstructor, Config)
	TArray<struct FCharacterProfile>                   DefaultProfiles;                                          // 0x0478(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FEquipmentCustomization>             DefaultCharacterEquipment;                                // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	TArray<struct FCharacterGearCustomization>         DefaultCharacterTier;                                     // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)
	struct FFaceCustomization                          DefaultCharacterFace;                                     // 0x04A8(0x0030) (Edit, BlueprintVisible, Config)
	struct FAppearanceCustomization                    DefaultCharacterAppearance;                               // 0x04D8(0x0028) (Edit, BlueprintVisible, Config)
	TArray<struct FCharacterProfile>                   BotCharacterProfiles;                                     // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauSingleton");
		return ptr;
	}


	class AMordhauEquipment* SpawnEquipment(class UWorld* WorldRef, const struct FEquipmentCustomization& Customization, unsigned char Emblem, unsigned char EmblemColor1, unsigned char EmblemColor2, bool bForceInstantMeshUpdate, bool bForceMipStreaming);
	void SaveToConfig();
	void LoadQueueFinishedLoadingChunk();
	void LoadFromConfig();
	int GetVoicesNum();
	class UClass* GetVoice(int Index);
	int GetUpperChestWearablesNum();
	class UClass* GetUpperChestWearable(int Index);
	class UMordhauColor* GetTableColorObject(unsigned char Table, unsigned char ID);
	struct FLinearColor GetTableColor(unsigned char Table, unsigned char ID);
	class UMordhauColor* GetSkinColorObject(unsigned char ID);
	struct FLinearColor GetSkinColor(unsigned char ID);
	class UMordhauColor* GetMetalTintsColorObject(unsigned char ID);
	struct FLinearColor GetMetalTintsColor(unsigned char ID);
	int GetLegsWearablesNum();
	class UClass* GetLegsWearable(int Index);
	bool GetIsLoadingAssets();
	int GetHeadWearablesNum();
	class UClass* GetHeadWearable(int Index);
	class UMordhauColor* GetHairColorObject(unsigned char ID);
	struct FLinearColor GetHairColor(unsigned char ID);
	class UMordhauColor* GetEyeColorObject(unsigned char ID);
	struct FLinearColor GetEyeColor(unsigned char ID);
	int GetEquipmentNum();
	unsigned char GetEquipmentID(class UClass* EquipmentType);
	class UClass* GetEquipment(int Index);
	class UMordhauColor* GetEmblemColorObject(unsigned char ID);
	struct FLinearColor GetEmblemColor(unsigned char ID);
	void ApplyProfileTo(const struct FCharacterProfile& Profile, class AMordhauCharacter* Char, unsigned char Team, bool bAddEquipment);
};


// Class Mordhau.MordhauSpectator
// 0x0028 (0x03D8 - 0x03B0)
class AMordhauSpectator : public ASpectatorPawn
{
public:
	float                                              BlockInputAfterDeathTime;                                 // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutomaticallyAsksForSpawn;                               // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	float                                              CreatedTime;                                              // 0x03B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LastSentCameraUpdate;                                     // 0x03BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MouseSmoothedTurnValue;                                   // 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MouseSmoothingTurnVelocity;                               // 0x03C4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MouseSmoothedLookUpValue;                                 // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MouseSmoothingLookUpVelocity;                             // 0x03CC(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsFirstTick;                                             // 0x03D0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x03D1(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauSpectator");
		return ptr;
	}


	void TertiarySpectatorAction();
	void SwitchToFreeCam();
	void SecondarySpectatorAction();
	void PrimarySpectatorAction();
	bool IsWatchingOwnDeath();
};


// Class Mordhau.MordhauStats
// 0x0338 (0x0360 - 0x0028)
class UMordhauStats : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET
	struct FStatInt                                    GameVersion;                                              // 0x0048(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    Blocks;                                                   // 0x0060(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    Chambers;                                                 // 0x0078(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    ProjectilesDeflected;                                     // 0x0090(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    ProjectilesBlocked;                                       // 0x00A8(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    Battlecries;                                              // 0x00C0(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    Disarms;                                                  // 0x00D8(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    Kills;                                                    // 0x00F0(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    Assists;                                                  // 0x0108(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    KillsOneMatch;                                            // 0x0120(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    AssistsOneMatch;                                          // 0x0138(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    KillsOneLife;                                             // 0x0150(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    DamageTakenOneLife;                                       // 0x0168(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    HeadsDecapitated;                                         // 0x0180(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    ProjectileHeadHits;                                       // 0x0198(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    ProjectileTorsoHits;                                      // 0x01B0(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    ProjectileLegHits;                                        // 0x01C8(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    MeleeHeadHits;                                            // 0x01E0(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    MeleeTorsoHits;                                           // 0x01F8(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    MeleeLegHits;                                             // 0x0210(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    KillsOneAttack;                                           // 0x0228(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    FireKills;                                                // 0x0240(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    CouchedHeadKills;                                         // 0x0258(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    LadderKills;                                              // 0x0270(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    TrampleKills;                                             // 0x0288(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    FunRank;                                                  // 0x02A0(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FStatInt                                    FunRankSamples;                                           // 0x02B8(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FAchievement                                TheABCs;                                                  // 0x02D0(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FAchievement                                LivedToTell;                                              // 0x02E0(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FAchievement                                Highlander;                                               // 0x02F0(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FAchievement                                KeepsComingOff;                                           // 0x0300(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FAchievement                                EagleEye;                                                 // 0x0310(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FAchievement                                Yoink;                                                    // 0x0320(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FAchievement                                JusticeFromGrave;                                         // 0x0330(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FAchievement                                NotSparta;                                                // 0x0340(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FAchievement                                BurningMan;                                               // 0x0350(0x0010) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauStats");
		return ptr;
	}


	void UpdateUserAvgRate(const struct FStatAvgRate& Stat, const struct FSteamID& SteamID, float CountThisSession, float SessionLength, ECallResult* CallResult);
	void UpdateAvgRate(const struct FStatAvgRate& Stat, float CountThisSession, float SessionLength, ECallResult* CallResult);
	void UnlockUserAchievement(const struct FAchievement& Achievement, const struct FSteamID& SteamID, ECallResult* CallResult);
	void UnlockAchievement(const struct FAchievement& Achievement, ECallResult* CallResult);
	void StoreUserStats(const struct FSteamID& SteamID, ECallResult* CallResult);
	void StoreStats(ECallResult* CallResult);
	void SetUserIntValue(const struct FStatInt& Stat, const struct FSteamID& SteamID, int Value, ECallResult* CallResult);
	void SetUserFloatValue(const struct FStatFloat& Stat, const struct FSteamID& SteamID, float Value, ECallResult* CallResult);
	void SetIntValue(const struct FStatInt& Stat, int Value, ECallResult* CallResult);
	void SetFloatValue(const struct FStatFloat& Stat, float Value, ECallResult* CallResult);
	void ResetAllStats(bool bAchievementsToo, ECallResult* CallResult);
	void RequestUserStats(const struct FSteamID& SteamID, ECallResult* CallResult);
	void RequestStats(ECallResult* CallResult);
	void LockUserAchievement(const struct FAchievement& Achievement, const struct FSteamID& SteamID, ECallResult* CallResult);
	void LockAchievement(const struct FAchievement& Achievement, ECallResult* CallResult);
	void IsUserAchievementUnlocked(const struct FAchievement& Achievement, const struct FSteamID& SteamID, ECallResult* CallResult, bool* bIsUnlocked);
	void IsAchievementUnlocked(const struct FAchievement& Achievement, ECallResult* CallResult, bool* bIsUnlocked);
	void GetUserIntValue(const struct FStatInt& Stat, const struct FSteamID& SteamID, ECallResult* CallResult, int* Value);
	void GetUserFloatValue(const struct FStatFloat& Stat, const struct FSteamID& SteamID, ECallResult* CallResult, float* Value);
	int GetUnlockIntValue(const struct FProgressAchievementInt& Achievement);
	float GetUnlockFloatValue(const struct FProgressAchievementFloat& Achievement);
	int GetMaxIntValue(const struct FStatInt& Stat);
	float GetMaxFloatValue(const struct FStatFloat& Stat);
	void GetIntValue(const struct FStatInt& Stat, ECallResult* CallResult, int* Value);
	bool GetIntStatValueByName(const struct FString& StatName, int* OutValue);
	struct FStatInt GetIntStat(const struct FProgressAchievementInt& Achievement);
	void GetFloatValue(const struct FStatFloat& Stat, ECallResult* CallResult, float* Value);
	struct FStatFloat GetFloatStat(const struct FProgressAchievementFloat& Achievement);
};


// Class Mordhau.MordhauTypes
// 0x0000 (0x0028 - 0x0028)
class UMordhauTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauTypes");
		return ptr;
	}

};


// Class Mordhau.MordhauUserWidget
// 0x0008 (0x0210 - 0x0208)
class UMordhauUserWidget : public UUserWidget
{
public:
	class UMordhauWidgetComponent*                     ParentWidgetComponent;                                    // 0x0208(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauUserWidget");
		return ptr;
	}

};


// Class Mordhau.MordhauUtilityLibrary
// 0x0000 (0x0028 - 0x0028)
class UMordhauUtilityLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauUtilityLibrary");
		return ptr;
	}


	void STATIC_VSmoothDamp(const struct FVector& Target, float SmoothTime, float DeltaTime, float MaxSpeed, struct FVector* Current, struct FVector* CurrentVelocity);
	bool STATIC_ValidateCharacterProfile(const struct FCharacterProfile& Profile);
	void STATIC_UnpossessCharacterAndHandleSpectating(class AController* Controller);
	bool STATIC_TryExecuteHeavydutyOperation(class UWorld* WorldObject);
	void STATIC_TermAllChildBodiesOf(class USkeletalMeshComponent* USMC, const struct FName& BoneName);
	struct FCharacterProfile STATIC_StripProfile(const struct FCharacterProfile& InProfile, bool bStripEquipment, bool bStripPerks, bool bStripNonTier0Armor);
	struct FString STATIC_SteamIDToString(const struct FSteamID& SteamID);
	class UDecalComponent* STATIC_SpawnBloodDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float LifeSpan);
	TArray<class AMordhauPlayerState*> STATIC_SortPlayers(TArray<class AMordhauPlayerState*> Array);
	TArray<struct FServerSearchResult> STATIC_SortForServerBrowser(TArray<struct FServerSearchResult> Array);
	TArray<struct FServerSearchResult> STATIC_SortForMatchmaking(TArray<struct FServerSearchResult> Array);
	float STATIC_Snap180AngleToSteps(float Angle180, float Step);
	bool STATIC_SLessThan(const struct FString& StringA, const struct FString& StringB);
	bool STATIC_SGreaterThan(const struct FString& StringA, const struct FString& StringB);
	void STATIC_SetSoundMixVolume(ESoundMix SoundMix, float Volume);
	void STATIC_SetPawnFromRep(class AController* Contr, class APawn* NewPawn);
	void STATIC_SetNavAreaClass(class UShapeComponent* ShapeComponent, class UClass* AreaClass);
	void STATIC_SetMousePosition(class APlayerController* Controller, float LocationX, float LocationY);
	void STATIC_SetLocalSpaceKinematics(class USkeletalMeshComponent* Mesh, bool bNewValue);
	void STATIC_SetForceMipStreaming(class USkeletalMeshComponent* SMC, bool bValue);
	void STATIC_SetDecalFadeScreenSize(class UDecalComponent* Decal, float NewFadeScreenSize);
	void STATIC_SetCustomConfigVar_Vector2D(const struct FString& SectionName, const struct FString& VariableName, const struct FVector2D& Value);
	void STATIC_SetCustomConfigVar_Vector(const struct FString& SectionName, const struct FString& VariableName, const struct FVector& Value);
	void STATIC_SetCustomConfigVar_String(const struct FString& SectionName, const struct FString& VariableName, const struct FString& Value);
	void STATIC_SetCustomConfigVar_Rotator(const struct FString& SectionName, const struct FString& VariableName, const struct FRotator& Value);
	void STATIC_SetCustomConfigVar_Int(const struct FString& SectionName, const struct FString& VariableName, int Value);
	void STATIC_SetCustomConfigVar_Float(const struct FString& SectionName, const struct FString& VariableName, float Value);
	void STATIC_SetCustomConfigVar_Color(const struct FString& SectionName, const struct FString& VariableName, const struct FLinearColor& Value);
	void STATIC_SetCustomConfigVar_Bool(const struct FString& SectionName, const struct FString& VariableName, bool Value);
	void STATIC_SetCanEverAffectNavigation(class UActorComponent* ActorComponent, bool bRelevant);
	void STATIC_SendClientAdjustment(class UCharacterMovementComponent* CMC);
	void STATIC_ResetServerPredictionData(class UCharacterMovementComponent* CMC);
	void STATIC_ResetClientPredictionData(class UCharacterMovementComponent* CMC);
	void STATIC_ReserveCharacterRagdoll(class AAdvancedCharacter* Character);
	int STATIC_RandomRangeExclude(int Min, int Max, int Exclude);
	bool STATIC_PlaneTrace(class UObject* WorldContextObject, const struct FVector& Left, const struct FVector& Right, const struct FVector& Forward, const struct FVector& Back, const struct FVector& TraceAmount, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bConnectLeftRight, bool bConnectForwardBack, const struct FVector& ConnectOffset, bool bIgnoreSelf, struct FHitResult* LeftHit, struct FHitResult* RightHit, struct FHitResult* ForwardHit, struct FHitResult* BackHit, struct FVector* OutRight, struct FVector* OutForward);
	void STATIC_OpenURL(const struct FString& URL);
	bool STATIC_NotEqual_SteamID(const struct FSteamID& A, const struct FSteamID& B);
	bool STATIC_MordhauApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, float BaseStructureDamage, float MinimumStructureDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TArray<class AActor*> IgnoreActors, float BaseKnockback, float MinimumKnockback, float RagdollFallRadius, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel);
	void STATIC_MarkRenderStateDirty(class UMeshComponent* MeshComp);
	struct FCharacterProfile STATIC_MakeEmptyProfile(class UClass* CharacterClass, bool bRandomizeVoice);
	bool STATIC_LineTraceMultiForObjectsReturnFace(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>* OutHits);
	struct FPOV STATIC_LerpPOV(const struct FPOV& A, const struct FPOV& B, float Alpha);
	bool STATIC_IsValid_SteamID(const struct FSteamID& SteamID);
	bool STATIC_IsTestingBranch();
	bool STATIC_IsSteamFriend(class APlayerController* Player);
	bool STATIC_IsStandalone();
	bool STATIC_IsServer();
	bool STATIC_IsReleaseBranch();
	bool STATIC_IsPlayInEditor();
	bool STATIC_IsPartyMember(class APlayerController* Player);
	bool STATIC_IsOfficialServer();
	bool STATIC_IsListenServer();
	bool STATIC_IsFriendlyToLocalPlayer(class UWorld* WorldReference, class AActor* OtherActor);
	bool STATIC_IsEditor();
	bool STATIC_IsDLCInstalled(int appid);
	bool STATIC_IsDevelopmentBuild();
	bool STATIC_IsDevelopmentBranch();
	bool STATIC_IsDemoPlayback(class UWorld* World);
	bool STATIC_IsDedicatedServer();
	bool STATIC_IsClient();
	bool STATIC_HasBeenReallyRecentlyRendered(class UMeshComponent* MeshComponent);
	bool STATIC_HasActorBegunPlay(class AActor* Actor);
	struct FBox STATIC_GrowBoxToIncludePoint(const struct FBox& Box, const struct FVector& Vector);
	int STATIC_GetXPFromRank(int Rank);
	class UWorld* STATIC_GetWorldOf(class UObject* Object);
	TArray<struct FText> STATIC_GetWearableNames(const struct FCharacterGearCustomization& CharacterGearCustomization, EWearableSlot Slot);
	TArray<class UClass*> STATIC_GetWearableClasses(const struct FCharacterGearCustomization& CharacterGearCustomization, EWearableSlot Slot);
	class UClass* STATIC_GetWearableClass(const struct FCharacterGearCustomization& CharacterGearCustomization, EWearableSlot Slot);
	class AMordhauCharacter* STATIC_GetViewTargetCharacter(class UObject* WorldContextObject, bool bOnlyLiving);
	struct FString STATIC_GetVersionString();
	struct FString STATIC_GetVersionName();
	float STATIC_GetTotalDemoTime(class UWorld* World);
	float STATIC_GetSyncGroupPositionBetweenMarkers(class UAnimInstance* AnimInstance, const struct FName& SyncGroup);
	bool STATIC_GetSupportedScreenResolutions(TArray<struct FString>* Resolutions);
	struct FString STATIC_GetSteamName(const struct FSteamID& SteamID);
	struct FSteamID STATIC_GetSteamIDFromPlayer(class APlayerController* Player);
	struct FSteamID STATIC_GetSteamID();
	class UTexture2D* STATIC_GetSteamAvatar(const struct FSteamID& SteamID, EAvatarSize Size);
	void STATIC_GetSoundMixInfo(const struct FString& Name, struct FSoundMixInfo* SoundMixInfo);
	struct FSteamID STATIC_GetServerSteamID();
	struct FName STATIC_GetSculptableBoneAtLine(const struct FVector& LineStart, const struct FVector& LineEnd, float SearchRadius, class USkeletalMeshComponent* MeshComponent, class AMordhauCharacter* Character, int Level);
	TEnumAsByte<ENetRole> STATIC_GetRole(class AActor* Actor);
	struct FString STATIC_GetRegionName(ERegion Region);
	ERegion STATIC_GetRegion(const struct FString& RegionName);
	int STATIC_GetRankFromXP(int XP);
	class AMordhauEquipment* STATIC_GetRandomWeapon(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	class UUpperChestWearable* STATIC_GetRandomUpperChestWearable(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	void STATIC_GetRandomSkin(class AMordhauEquipment* Equipment, EItemRarity MaxRarity, int* ID, struct FEquipmentSkinEntry* Skin);
	class UMordhauWearable* STATIC_GetRandomShouldersWearable(class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	class AMordhauEquipment* STATIC_GetRandomRangedWeapon(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	class AMordhauEquipment* STATIC_GetRandomMeleeWeapon(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	class UMordhauWearable* STATIC_GetRandomLowerChestWearable(class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	class ULegsWearable* STATIC_GetRandomLegsWearable(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	class UHeadWearable* STATIC_GetRandomHeadWearable(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	class UMordhauWearable* STATIC_GetRandomHandsWearable(class UArmsWearable* ArmsWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	class UMordhauWearable* STATIC_GetRandomFeetWearable(class ULegsWearable* LegsWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	struct FVector STATIC_GetRandomFaceCustomizationVector(float RandomExponent);
	class AMordhauEquipment* STATIC_GetRandomEquipment(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	class UMordhauWearable* STATIC_GetRandomCoifWearable(class UHeadWearable* HeadWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	class UArmsWearable* STATIC_GetRandomArmsWearable(class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int* ID);
	float STATIC_GetPing(class UObject* WorldContextObject, bool bUseMedian);
	struct FTransform STATIC_GetPhysicsBodyWorldTransform(class USkeletalMeshComponent* MeshComponent, const struct FName& BoneName);
	struct FBox STATIC_GetPhysicsBodyBounds(class USkeletalMeshComponent* MeshComponent, const struct FName& BoneName);
	int STATIC_GetPerksCost(const struct FCharacterProfile& Profile);
	TArray<class UPerk*> STATIC_GetPerks(const struct FCharacterProfile& Profile);
	int STATIC_GetPerforceRevision();
	int STATIC_GetPacketsLost(class UObject* WorldContextObject);
	bool STATIC_GetNotifyServerReceivedClientData(class UCharacterMovementComponent* CMC);
	float STATIC_GetNormalizedTime(float Start, float End, float Current);
	struct FVector2D STATIC_GetMousePosition(class APlayerController* Controller);
	class UMordhauWebAPI* STATIC_GetMordhauWebAPI();
	class UMordhauStats* STATIC_GetMordhauStats();
	class UMordhauSingleton* STATIC_GetMordhauSingleton();
	class UMordhauInventory* STATIC_GetMordhauInventory();
	class UMordhauInput* STATIC_GetMordhauInput();
	class AMordhauHUD* STATIC_GetMordhauHUD(class UObject* WorldContextObject);
	class UMordhauGameUserSettings* STATIC_GetMordhauGameUserSettings();
	class AMordhauGameSession* STATIC_GetMordhauGameSession(class UObject* WorldContextObject);
	int STATIC_GetMaxIndexWithDraw(TArray<int> inArray, bool* bFoundDraw);
	struct FString STATIC_GetMapName(class UObject* WorldContextObject);
	struct FMapInfo STATIC_GetMapInfo(class UObject* WorldContextObject, const struct FString& MapPath);
	float STATIC_GetLastReceiveTime(class UObject* WorldContextObject);
	bool STATIC_GetIsPeasant(const struct FCharacterProfile& Profile);
	struct FBoxSphereBounds STATIC_GetImportedBounds(class USkeletalMeshComponent* SkeletalMeshComponent);
	int STATIC_GetFaceIndex(const struct FHitResult& Hit);
	struct FText STATIC_GetErrorText(const struct FString& ErrorString);
	int STATIC_GetEnumValue(const struct FString& EnumName, const struct FString& EnumKey);
	struct FString STATIC_GetEnumKey(const struct FString& EnumName, int EnumValue);
	class UMordhauWearable* STATIC_GetDefaultWearable(class UClass* FromClass);
	class UObject* STATIC_GetDefaultObject(class UClass* FromClass);
	class AActor* STATIC_GetDefaultActor(class UClass* FromClass);
	struct FVector2D STATIC_GetCustomConfigVar_Vector2D(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	struct FVector STATIC_GetCustomConfigVar_Vector(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	struct FString STATIC_GetCustomConfigVar_String(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	struct FRotator STATIC_GetCustomConfigVar_Rotator(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	int STATIC_GetCustomConfigVar_Int(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	float STATIC_GetCustomConfigVar_Float(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	struct FLinearColor STATIC_GetCustomConfigVar_Color(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	bool STATIC_GetCustomConfigVar_Bool(const struct FString& SectionName, const struct FString& VariableName, bool* IsValid);
	int STATIC_GetCurrentFrameBP(class UObject* WorldContextObject);
	int STATIC_GetCurrentFrame(class UWorld* World);
	float STATIC_GetCurrentDemoTime(class UWorld* World);
	struct FString STATIC_GetConsoleVariableString(const struct FString& VariableName);
	int STATIC_GetConsoleVariableInt(const struct FString& VariableName);
	float STATIC_GetConsoleVariableFloat(const struct FString& VariableName);
	struct FVector STATIC_GetComponentsBoundingBoxInActorSpace(class AActor* Actor);
	struct FVector STATIC_GetCentroid(TArray<struct FVector> Points);
	int STATIC_GetBuildVersion();
	struct FVector STATIC_GetBoxCenter(const struct FBox& Box);
	struct FBox STATIC_GetBoundingBoxOfBoneInfluence(class USkeletalMeshComponent* MeshComponent, TArray<struct FName> Bones, float WeightThreshold);
	class AActor* STATIC_GetAttachParentActor(class AActor* Actor);
	class UArchetype* STATIC_GetArchetypeObject(const struct FCharacterProfile& Profile);
	TArray<class UClass*> STATIC_GetAllWearableClassesForSlotExhaustive(EWearableSlot Slot);
	void STATIC_FSmoothDamp(float Target, float SmoothTime, float DeltaTime, float MaxSpeed, float* Current, float* CurrentVelocity);
	struct FText STATIC_FormatText(const struct FText& Text);
	bool STATIC_ForceValidCharacterProfile(const struct FCharacterProfile& Profile, struct FCharacterProfile* ForceValidatedProfile);
	void STATIC_ForceReplicationUpdate(class UCharacterMovementComponent* CMC);
	void STATIC_FlushPlayerControllerPressedKeys(class APlayerController* Controller);
	void STATIC_FlashWindow();
	float STATIC_FInterpToSeparate(float Current, float Target, float DeltaTime, float IncreaseSpeed, float DecreaseSpeed);
	float STATIC_FInterpConstantToSeparate(float Current, float Target, float DeltaTime, float IncreaseSpeed, float DecreaseSpeed);
	bool STATIC_FindTeleportSpot(class AActor* Actor, const struct FVector& InLocation, const struct FRotator& InRotation, struct FVector* OutLocation);
	struct FSteamID STATIC_FindSteamID(const struct FString& PlayerNameOrSteamID);
	class AMordhauPlayerState* STATIC_FindPlayerState(const struct FString& PlayerNameOrSteamID);
	bool STATIC_FindCircleIntersectionPoints(const struct FVector2D& CenterA, float RadiusA, const struct FVector2D& CenterB, float RadiusB, struct FVector2D* PointA, struct FVector2D* PointB);
	struct FRotator STATIC_FindBetween(const struct FVector& A, const struct FVector& B);
	bool STATIC_Equal_SteamID(const struct FSteamID& A, const struct FSteamID& B);
	void STATIC_DrawText(class UCanvas* Canvas, class UFont* Font, int Size, const struct FString& Text, const struct FVector2D& Position, const struct FLinearColor& TextColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor);
	bool STATIC_ConsumeBudget(class AAdvancedCharacter* Character, EBudgetType BudgetType, bool bSkipInvisible, float Duration, float DistanceCutoff, bool bForce);
	int STATIC_ComputePointsLeft(const struct FCharacterProfile& Profile);
	bool STATIC_CompareGearCustomization(const struct FCharacterGearCustomization& First, const struct FCharacterGearCustomization& Second);
	bool STATIC_CompareFaceCustomization(const struct FFaceCustomization& First, const struct FFaceCustomization& Second);
	bool STATIC_CompareEquipmentCustomization(const struct FEquipmentCustomization& First, const struct FEquipmentCustomization& Second);
	bool STATIC_CompareAppearanceCustomization(const struct FAppearanceCustomization& First, const struct FAppearanceCustomization& Second);
	struct FVector STATIC_ClosestPointOnLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point);
	struct FString STATIC_Capitalize(const struct FString& String);
	int STATIC_CalculateGCD(int ValueA, int ValueB);
	float STATIC_CalculateAngle2D(const struct FVector& Direction, float Yaw);
	bool STATIC_AreProfilesEqual(const struct FCharacterProfile& First, const struct FCharacterProfile& Second);
	bool STATIC_AreActorsFromSameLevel(class AActor* ActorA, class AActor* ActorB);
};


// Class Mordhau.MordhauWebAPI
// 0x0078 (0x00A0 - 0x0028)
class UMordhauWebAPI : public UObject
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x0028(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauWebAPI");
		return ptr;
	}


	void RankBackendServers(int InPingedServerCount);
	void ProcessRequestQueue();
	bool IsAvailable();
	EAuthStatus GetAuthStatus();
	bool Authenticate();
};


// Class Mordhau.MordhauWheeledVehicle
// 0x0060 (0x0D00 - 0x0CA0)
class AMordhauWheeledVehicle : public AMordhauCompoundVehicle
{
public:
	struct FVector2D                                   RotationVelocity;                                         // 0x0CA0(0x0008) (IsPlainOldData)
	struct FName                                       MoveSoundAttachSocket;                                    // 0x0CA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveSoundFadeOut;                                         // 0x0CB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   MinRotationVelocityToPlayMoveSound;                       // 0x0CB4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MinTranslationVelocityToPlayMoveSound;                    // 0x0CBC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   RotationVelocityInterpSpeed;                              // 0x0CC8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   RotationVelocityMax;                                      // 0x0CD0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       LeftHandIKPushTarget;                                     // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RightHandIKPushTarget;                                    // 0x0CE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   MoveSoundCue;                                             // 0x0CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAudioComponent>              LastMoveSound;                                            // 0x0CF0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0CF8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauWheeledVehicle");
		return ptr;
	}

};


// Class Mordhau.MordhauWidgetComponent
// 0x0090 (0x0740 - 0x06B0)
class UMordhauWidgetComponent : public UWidgetComponent
{
public:
	float                                              WorldSpaceZOffset;                                        // 0x06B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x06B4(0x000C) MISSED OFFSET
	struct FVector2D                                   WidgetCullAngle;                                          // 0x06C0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              WidgetCullAngleZPositionOffset;                           // 0x06C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToCameraZPositionOffset;                          // 0x06CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToCamera;                                         // 0x06D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	struct FString                                     TextParameter;                                            // 0x06D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DistanceToCameraString;                                   // 0x06E8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x06F8(0x0004) MISSED OFFSET
	bool                                               bWantsDistanceToCameraStringUpdated;                      // 0x06FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x06FD(0x0003) MISSED OFFSET
	float                                              AngleToCamera;                                            // 0x0700(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                OverrideVisible;                                          // 0x0704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0708(0x0004) MISSED OFFSET
	TWeakObjectPtr<class APlayerState>                 PlayerStateAlwaysSee;                                     // 0x070C(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowInMapView;                                           // 0x0714(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowInMainMenu;                                          // 0x0715(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUsesViewTargetTeamRestriction;                           // 0x0716(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0717(0x0001) MISSED OFFSET
	int                                                ViewTargetTeamRestriction;                                // 0x0718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FrameSkip;                                                // 0x071C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x8];                                       // 0x0720(0x0008) MISSED OFFSET
	class AMordhauCameraManager*                       CachedPlayerCameraManager;                                // 0x0728(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMordhauGameState*                           CachedGameState;                                          // 0x0730(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x8];                                       // 0x0738(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.MordhauWidgetComponent");
		return ptr;
	}


	void SetPlayerStateAlwaysSee(class APlayerState* PlayerState);
};


// Class Mordhau.OneDimensionalMovementComponent
// 0x0040 (0x08A0 - 0x0860)
class UOneDimensionalMovementComponent : public UAdvancedCharacterMovement
{
public:
	float                                              StepSize;                                                 // 0x0860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalSteps;                                               // 0x0864(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bHasInitializedLine;                                      // 0x0868(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0869(0x0003) MISSED OFFSET
	int                                                CurrentStep;                                              // 0x086C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LineStart;                                                // 0x0870(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // 0x087C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     MovementDirection;                                        // 0x0888(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0894(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.OneDimensionalMovementComponent");
		return ptr;
	}


	void SetMovementLine(const struct FVector& NewLineStart, const struct FVector& NewLineEnd);
};


// Class Mordhau.ParryMotion
// 0x0100 (0x0190 - 0x0090)
class UParryMotion : public UMordhauMotion
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	TMap<class UMordhauMotion*, float>                 BlockedAttacks;                                           // 0x0098(0x0050) (ZeroConstructor)
	float                                              HeldBlockMemoryDuration;                                  // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimedBlockMemoryDuration;                                 // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EasyParryDuration;                                        // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EasyParryStaminaCost;                                     // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeldRiposteWindowExtra;                                   // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NonHeldParryExtensionAndRiposteWindowExtra;               // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMovementRestriction                               SuccessfulParryRecoveryMovementRestriction;               // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMovementRestriction                               FailedParryRecoveryMovementRestriction;                   // 0x0101(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0102(0x0006) MISSED OFFSET
	class UMeleeWeaponAnimationProfile*                MWAP;                                                     // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0110(0x0004) MISSED OFFSET
	float                                              RiposteWindowBase;                                        // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParryFailPlayRate;                                        // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParryFailFadeOut;                                         // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParryFailPlayRate1P;                                      // 0x0120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParryFailFadeOut1P;                                       // 0x0124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeldParryFailPlayRate;                                    // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeldParryFailFadeOut;                                     // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeldParryFailPlayRate1P;                                  // 0x0130(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeldParryFailFadeOut1P;                                   // 0x0134(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumHeldParryTime;                                     // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParryRecoveryTime;                                        // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeldParryRecoveryTime;                                    // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParrySuccessRecoveryTime;                                 // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HeldParrySuccessRecoveryTime;                             // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParryUpTime;                                              // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BlockStaminaRecover;                                      // 0x0150(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0154(0x0010) MISSED OFFSET
	unsigned char                                      TotalBlocks;                                              // 0x0164(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsBlockHoldable;                                         // 0x0165(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EParryStage                                        Stage;                                                    // 0x0166(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0167(0x0001) MISSED OFFSET
	float                                              ParryEnd;                                                 // 0x0168(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RiposteWindowStart;                                       // 0x016C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // 0x0170(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AMordhauWeapon>               WeaponPtr;                                                // 0x0178(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasQueuedMove;                                           // 0x0180(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0181(0x0003) MISSED OFFSET
	float                                              QueuedMoveTime;                                           // 0x0184(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              QueuedAngle;                                              // 0x0188(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EAttackMove                                        QueuedMove;                                               // 0x018C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x018D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.ParryMotion");
		return ptr;
	}

};


// Class Mordhau.ParticleSystemActor
// 0x0018 (0x0340 - 0x0328)
class AParticleSystemActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	class UParticleSystem*                             Template;                                                 // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystemComponent;                                  // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.ParticleSystemActor");
		return ptr;
	}


	void SparseTick();
};


// Class Mordhau.Perk
// 0x0038 (0x0060 - 0x0028)
class UPerk : public UObject
{
public:
	struct FText                                       Name;                                                     // 0x0028(0x0018) (Edit, BlueprintVisible)
	int                                                Cost;                                                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
	struct FText                                       Description;                                              // 0x0048(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.Perk");
		return ptr;
	}

};


// Class Mordhau.PhysicsProxy
// 0x0048 (0x0370 - 0x0328)
class APhysicsProxy : public AActor
{
public:
	TWeakObjectPtr<class AActor>                       Original;                                                 // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Offset;                                                   // 0x0330(0x0030) (IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh;                                             // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              IdleTime;                                                 // 0x0368(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x036C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.PhysicsProxy");
		return ptr;
	}

};


// Class Mordhau.PommelThrowDrawMotion
// 0x0028 (0x00B8 - 0x0090)
class UPommelThrowDrawMotion : public UMordhauMotion
{
public:
	class AMordhauEquipment*                           RangedEquipment;                                          // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Stage;                                                    // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0099(0x0003) MISSED OFFSET
	float                                              FirstStageEnd;                                            // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SecondStageEnd;                                           // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ThirdStageEnd;                                            // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasFiredLocally;                                         // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsPlaying1P;                                             // 0x00A9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00AA(0x0006) MISSED OFFSET
	class UAnimMontage*                                CurrentMontage;                                           // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.PommelThrowDrawMotion");
		return ptr;
	}

};


// Class Mordhau.PommelThrowReleaseMotion
// 0x0018 (0x00A8 - 0x0090)
class UPommelThrowReleaseMotion : public UMordhauMotion
{
public:
	class AMordhauEquipment*                           RangedEquipment;                                          // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AMordhauProjectile>           CreatedLocalProjectile;                                   // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Stage;                                                    // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              FirstStageEnd;                                            // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.PommelThrowReleaseMotion");
		return ptr;
	}

};


// Class Mordhau.PreSkinnedPoseOracle
// 0x0050 (0x0378 - 0x0328)
class APreSkinnedPoseOracle : public AActor
{
public:
	TMap<class USkeleton*, class USkeletalMeshComponent*> SkeletonToMeshComp;                                       // 0x0328(0x0050) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.PreSkinnedPoseOracle");
		return ptr;
	}

};


// Class Mordhau.ProgressActor
// 0x0000 (0x0460 - 0x0460)
class AProgressActor : public AMordhauActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.ProgressActor");
		return ptr;
	}

};


// Class Mordhau.ProgressDriver
// 0x0000 (0x0460 - 0x0460)
class AProgressDriver : public AMordhauActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.ProgressDriver");
		return ptr;
	}

};


// Class Mordhau.PushableActor
// 0x0060 (0x04C0 - 0x0460)
class APushableActor : public AMordhauActor
{
public:
	TArray<float>                                      NonPullableThresholds;                                    // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Team1Presence;                                            // 0x0470(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Team2Presence;                                            // 0x0474(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Team1PushSpeedByPushers;                                  // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 Team2PushSpeedByPushers;                                  // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStopPushingIfContested;                                  // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0489(0x0007) MISSED OFFSET
	class UPrimitiveComponent*                         PushArea;                                                 // 0x0490(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              ProgressStepToAwardScoreFor;                              // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ScoreAwardedPerProgressStep;                              // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NetworkInterpolationSpeed;                                // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NetworkInterpolationSpeedConstant;                        // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsNetworkInterpolationConstant;                          // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x04A9(0x0001) MISSED OFFSET
	uint16_t                                           ReplicatedProgress;                                       // 0x04AA(0x0002) (Net, ZeroConstructor, IsPlainOldData)
	float                                              Progress;                                                 // 0x04AC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x04B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.PushableActor");
		return ptr;
	}


	void SetProgress(float NewProgress);
	void OnRep_ReplicatedProgress();
	void OnProgressUpdated(float OldProgress);
};


// Class Mordhau.QuickthrowDrawMotion
// 0x0020 (0x00B0 - 0x0090)
class UQuickthrowDrawMotion : public UMordhauMotion
{
public:
	class AMordhauEquipment*                           RangedEquipment;                                          // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Slot;                                                     // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Stage;                                                    // 0x0099(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x009A(0x0002) MISSED OFFSET
	float                                              FirstStageEnd;                                            // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SecondStageEnd;                                           // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ThirdStageEnd;                                            // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bHasFiredLocally;                                         // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.QuickthrowDrawMotion");
		return ptr;
	}

};


// Class Mordhau.QuickthrowReleaseMotion
// 0x0018 (0x00A8 - 0x0090)
class UQuickthrowReleaseMotion : public UMordhauMotion
{
public:
	class AMordhauEquipment*                           RangedEquipment;                                          // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AMordhauProjectile>           CreatedLocalProjectile;                                   // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Stage;                                                    // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	float                                              FirstStageEnd;                                            // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.QuickthrowReleaseMotion");
		return ptr;
	}

};


// Class Mordhau.Quiver
// 0x0048 (0x0070 - 0x0028)
class UQuiver : public UObject
{
public:
	struct FName                                       AttachSocketName;                                         // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  AttachSocketTransform;                                    // 0x0030(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<class UStaticMesh*>                         QuiverMeshes;                                             // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.Quiver");
		return ptr;
	}


	class UStaticMesh* FindAppropriateQuiverMesh(unsigned char Ammo, unsigned char MaxAmmo);
};


// Class Mordhau.RagdollFallingMotion
// 0x0008 (0x0098 - 0x0090)
class URagdollFallingMotion : public UMordhauMotion
{
public:
	bool                                               bIsGettingUp;                                             // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0091(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.RagdollFallingMotion");
		return ptr;
	}

};


// Class Mordhau.RangedCancelMotion
// 0x0018 (0x00A8 - 0x0090)
class URangedCancelMotion : public UMordhauMotion
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0090(0x0008) MISSED OFFSET
	class AMordhauEquipment*                           RangedEquipment;                                          // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             CurrentlyPlayingRangedCancel;                             // 0x00A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.RangedCancelMotion");
		return ptr;
	}

};


// Class Mordhau.RangedDrawMotion
// 0x00B0 (0x0140 - 0x0090)
class URangedDrawMotion : public UMordhauMotion
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0090(0x0030) MISSED OFFSET
	unsigned char                                      RandomValue;                                              // 0x00C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	struct FRotator                                    AimRotationOffset;                                        // 0x00C4(0x000C) (BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x00D0(0x000C) MISSED OFFSET
	struct FRotator                                    AimVisualRotationOffset;                                  // 0x00DC(0x000C) (IsPlainOldData)
	class AMordhauEquipment*                           RangedEquipment;                                          // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class UAnimMontage*                                DrawMontage;                                              // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Draw1PMontage;                                            // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                DrawEquipmentMontage;                                     // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                DrawEquipment1PMontage;                                   // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CurrentMontage;                                           // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CurrentEquipmentMontage;                                  // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0128(0x0010) MISSED OFFSET
	class UAudioComponent*                             CurrentlyPlayingDraw;                                     // 0x0138(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.RangedDrawMotion");
		return ptr;
	}

};


// Class Mordhau.RangedReleaseMotion
// 0x0050 (0x00E0 - 0x0090)
class URangedReleaseMotion : public UMordhauMotion
{
public:
	TWeakObjectPtr<class AMordhauEquipment>            RangedEquipment;                                          // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      RangedEquipmentClass;                                     // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AMordhauProjectile>           CreatedLocalProjectile;                                   // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CurrentMontage;                                           // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CurrentEquipmentMontage;                                  // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
	class UAnimMontage*                                ReleaseMontage;                                           // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Release1PMontage;                                         // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReleaseEquipmentMontage;                                  // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReleaseEquipment1PMontage;                                // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.RangedReleaseMotion");
		return ptr;
	}

};


// Class Mordhau.ReloadMotion
// 0x0050 (0x00E0 - 0x0090)
class UReloadMotion : public UMordhauMotion
{
public:
	TWeakObjectPtr<class AMordhauEquipment>            RangedEquipment;                                          // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CurrentMontage;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                CurrentEquipmentMontage;                                  // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReloadMontage;                                            // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Reload1PMontage;                                          // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReloadEquipmentMontage;                                   // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Reload1PEquipmentMontage;                                 // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UAudioComponent>              CurrentReloadSound;                                       // 0x00C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D0(0x0008) MISSED OFFSET
	float                                              ReachTime;                                                // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ReloadTime;                                               // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.ReloadMotion");
		return ptr;
	}

};


// Class Mordhau.SeparatedBodyPart
// 0x0118 (0x0440 - 0x0328)
class ASeparatedBodyPart : public AActor
{
public:
	class ULODSkeletalMeshComponent*                   Mesh;                                                     // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMeshAsset;                                        // 0x0330(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class APhysicsConstraintActor>      PhysicsConstraintActor;                                   // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AAdvancedCharacter>           SourceCharacter;                                          // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               HeadPhysicsAsset;                                         // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               LeftArmPhysicsAsset;                                      // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               LeftForearmPhysicsAsset;                                  // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               LeftHandPhysicsAsset;                                     // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               RightArmPhysicsAsset;                                     // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               RightForearmPhysicsAsset;                                 // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               RightHandPhysicsAsset;                                    // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               LeftUpLegPhysicsAsset;                                    // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               LeftLegPhysicsAsset;                                      // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               LeftFootPhysicsAsset;                                     // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               RightUpLegPhysicsAsset;                                   // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               RightLegPhysicsAsset;                                     // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               RightFootPhysicsAsset;                                    // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InGoreMesh;                                               // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InGoreMeshBlunt;                                          // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InGoreMeshHead;                                           // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       FakeRootBone;                                             // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<TWeakObjectPtr<class AActor>>               InstancedGoreMeshes;                                      // 0x03D0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x60];                                      // 0x03E0(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.SeparatedBodyPart");
		return ptr;
	}


	void OnCosmeticHit(EMordhauDamageType DamageType, unsigned char SubType, const struct FHitResult& Hit, class AActor* Agent);
	bool IsPartiallyDismembered();
	bool IsDismembered(const struct FName& bone);
	void InitializeDismemberment(class AMordhauCharacter* Source, const struct FName& bone, const struct FTransform& SourceBoneTransform, bool bIsPartial, bool bIsBluntForce);
};


// Class Mordhau.SeparatedBodyPartAnimInstance
// 0x0020 (0x0380 - 0x0360)
class USeparatedBodyPartAnimInstance : public UAnimInstance
{
public:
	bool                                               bIsLeftForeArmDismembered;                                // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRightForeArmDismembered;                               // 0x0361(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLeftLegDismembered;                                    // 0x0362(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRightLegDismembered;                                   // 0x0363(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLeftFootDismembered;                                   // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRightFootDismembered;                                  // 0x0365(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsLeftHandDismembered;                                   // 0x0366(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRightHandDismembered;                                  // 0x0367(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRootIsHead;                                              // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRootIsLeftArm;                                           // 0x0369(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRootIsLeftForeArm;                                       // 0x036A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRootIsLeftHand;                                          // 0x036B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRootIsRightArm;                                          // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRootIsRightForeArm;                                      // 0x036D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRootIsRightHand;                                         // 0x036E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRootIsLeftUpLeg;                                         // 0x036F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRootIsLeftLeg;                                           // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRootIsLeftFoot;                                          // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRootIsRightUpLeg;                                        // 0x0372(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRootIsRightLeg;                                          // 0x0373(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bRootIsRightFoot;                                         // 0x0374(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0375(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.SeparatedBodyPartAnimInstance");
		return ptr;
	}

};


// Class Mordhau.SkeletalMeshCapturePointBanner
// 0x0070 (0x03C0 - 0x0350)
class ASkeletalMeshCapturePointBanner : public ACapturePointBanner
{
public:
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAudioComponent*                             CapturingAudioComponent;                                  // 0x0358(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USoundCue*                                   RaisingSound;                                             // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   LoweringSound;                                            // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAddWindActor;                                            // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	float                                              WindDisabledIfLessThanProgress;                           // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindStrength;                                             // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindSpeed;                                                // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindRadius;                                               // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindMinGustAmount;                                        // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WindMaxGustAmount;                                        // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentWindSpeed;                                         // 0x038C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AWindDirectionalSource*                      WindActor;                                                // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             WavingAudioComponent;                                     // 0x0398(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   AudioVolumeByProgressIn;                                  // 0x03A0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   AudioVolumeByProgressOut;                                 // 0x03A8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   AudioPitchByProgressIn;                                   // 0x03B0(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   AudioPitchByProgressOut;                                  // 0x03B8(0x0008) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.SkeletalMeshCapturePointBanner");
		return ptr;
	}

};


// Class Mordhau.SkeletalMeshMordhauActor
// 0x0000 (0x0460 - 0x0460)
class ASkeletalMeshMordhauActor : public AMordhauActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.SkeletalMeshMordhauActor");
		return ptr;
	}

};


// Class Mordhau.SlaveProgressDriver
// 0x0000 (0x0460 - 0x0460)
class ASlaveProgressDriver : public AProgressDriver
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.SlaveProgressDriver");
		return ptr;
	}

};


// Class Mordhau.StaticMeshCapturePointBanner
// 0x0008 (0x0358 - 0x0350)
class AStaticMeshCapturePointBanner : public ACapturePointBanner
{
public:
	class UStaticMeshComponent*                        StaticMeshComponent;                                      // 0x0350(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.StaticMeshCapturePointBanner");
		return ptr;
	}

};


// Class Mordhau.StaticMeshMordhauActor
// 0x0000 (0x0460 - 0x0460)
class AStaticMeshMordhauActor : public AMordhauActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.StaticMeshMordhauActor");
		return ptr;
	}

};


// Class Mordhau.StunMotion
// 0x0008 (0x0098 - 0x0090)
class UStunMotion : public UMordhauMotion
{
public:
	float                                              StunGracePeriodExtraTime;                                 // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StunDuration;                                             // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.StunMotion");
		return ptr;
	}

};


// Class Mordhau.SubField
// 0x0018 (0x0340 - 0x0328)
class ASubField : public AActor
{
public:
	class UPrimitiveComponent*                         Area;                                                     // 0x0328(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bIsSubFieldDeactivated;                                   // 0x0330(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSubFieldHidden;                                        // 0x0331(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0332(0x0002) MISSED OFFSET
	TWeakObjectPtr<class AMasterField>                 Master;                                                   // 0x0334(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x033C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.SubField");
		return ptr;
	}


	void SetSubFieldHidden(bool bValue);
	class AMasterField* GetMaster();
	void DeactivateSubField();
	void BeginSubFieldDeactivation();
};


// Class Mordhau.ThudderComponent
// 0x0040 (0x0130 - 0x00F0)
class UThudderComponent : public UActorComponent
{
public:
	struct FScriptMulticastDelegate                    OnThud;                                                   // 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	bool                                               bOnlyIfBoneIsSimulatingPhysics;                           // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0101(0x0007) MISSED OFFSET
	class UPrimitiveComponent*                         MonitoredComponent;                                       // 0x0108(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       MonitoredBone;                                            // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinTimeBetweenThuds;                                      // 0x0118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThudMinVelocityThreshold;                                 // 0x011C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NextThudTime;                                             // 0x0120(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PreviousVelocity;                                         // 0x0124(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentVelocity;                                          // 0x0128(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x012C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.ThudderComponent");
		return ptr;
	}


	void DoTick();
};


// Class Mordhau.Turret
// 0x0000 (0x0BD0 - 0x0BD0)
class ATurret : public AAdvancedCharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.Turret");
		return ptr;
	}

};


// Class Mordhau.UpperChestWearable
// 0x0078 (0x0210 - 0x0198)
class UUpperChestWearable : public UMordhauWearable
{
public:
	struct FVector                                     SpineBouncyLimits;                                        // 0x0198(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BreastBouncyLimits;                                       // 0x01A4(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BellyBouncyLimitsFat;                                     // 0x01B0(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     BellyBouncyLimitsSlim;                                    // 0x01BC(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      DefaultLowerChest;                                        // 0x01C8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C9(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x01C9(0x0010) UNKNOWN PROPERTY: ArrayProperty Mordhau.UpperChestWearable.LowerChestWearables
	unsigned char                                      DefaultArms;                                              // 0x01E0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01E1(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData03[0x10];                                      // 0x01E1(0x0010) UNKNOWN PROPERTY: ArrayProperty Mordhau.UpperChestWearable.ArmsWearables
	unsigned char                                      DefaultShoulders;                                         // 0x01F8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x01F9(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData05[0x10];                                      // 0x01F9(0x0010) UNKNOWN PROPERTY: ArrayProperty Mordhau.UpperChestWearable.ShouldersWearables

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.UpperChestWearable");
		return ptr;
	}


	int GetShouldersWearablesNum();
	class UClass* GetShouldersWearable(int Index);
	int GetLowerChestWearablesNum();
	class UClass* GetLowerChestWearable(int Index);
	int GetArmsWearablesNum();
	class UClass* GetArmsWearable(int Index);
};


// Class Mordhau.VelocityBoxComponent
// 0x0040 (0x05D0 - 0x0590)
class UVelocityBoxComponent : public UBoxComponent
{
public:
	bool                                               bOnlyRunOnAuthority;                                      // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0591(0x0003) MISSED OFFSET
	float                                              TriggerVelocity;                                          // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseVelocityAxis;                                         // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0599(0x0003) MISSED OFFSET
	struct FVector                                     VelocityAxis;                                             // 0x059C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bVelocityAxisAccountForPawnVelocity;                      // 0x05A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x05A9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTriggered;                                              // 0x05B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector                                     PreviousLocation;                                         // 0x05C0(0x000C) (BlueprintVisible, IsPlainOldData)
	float                                              CurrentVelocity;                                          // 0x05CC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.VelocityBoxComponent");
		return ptr;
	}

};


// Class Mordhau.WheeledVehicleAnimInstance
// 0x0000 (0x0430 - 0x0430)
class UWheeledVehicleAnimInstance : public UAdvancedCharacterAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Mordhau.WheeledVehicleAnimInstance");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
