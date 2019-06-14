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

// Class PlayFab.PlayFabAdminAPI
// 0x07A0 (0x07C8 - 0x0028)
class UPlayFabAdminAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x728];                                     // 0x0038(0x0728) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x0760(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x0768(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x0770(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0778(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabAdminAPI");
		return ptr;
	}


	class UPlayFabAdminAPI* STATIC_UpdateUserTitleDisplayName(const struct FAdminUpdateUserTitleDisplayNameRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_UpdateUserReadOnlyData(const struct FAdminUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_UpdateUserPublisherReadOnlyData(const struct FAdminUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_UpdateUserPublisherInternalData(const struct FAdminUpdateUserInternalDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_UpdateUserPublisherData(const struct FAdminUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_UpdateUserInternalData(const struct FAdminUpdateUserInternalDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_UpdateUserData(const struct FAdminUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_UpdateTask(const struct FAdminUpdateTaskRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_UpdateStoreItems(const struct FAdminUpdateStoreItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_UpdateRandomResultTables(const struct FAdminUpdateRandomResultTablesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_UpdatePolicy(const struct FAdminUpdatePolicyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_UpdatePlayerStatisticDefinition(const struct FAdminUpdatePlayerStatisticDefinitionRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_UpdatePlayerSharedSecret(const struct FAdminUpdatePlayerSharedSecretRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_UpdateOpenIdConnection(const struct FAdminUpdateOpenIdConnectionRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_UpdateCloudScript(const struct FAdminUpdateCloudScriptRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_UpdateCatalogItems(const struct FAdminUpdateCatalogItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_UpdateBans(const struct FAdminUpdateBansRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_SubtractUserVirtualCurrency(const struct FAdminSubtractUserVirtualCurrencyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_SetupPushNotification(const struct FAdminSetupPushNotificationRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_SetTitleInternalData(const struct FAdminSetTitleDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_SetTitleData(const struct FAdminSetTitleDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_SetStoreItems(const struct FAdminUpdateStoreItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_SetPublisherData(const struct FAdminSetPublisherDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_SetPublishedRevision(const struct FAdminSetPublishedRevisionRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_SetPlayerSecret(const struct FAdminSetPlayerSecretRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_SetCatalogItems(const struct FAdminUpdateCatalogItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_SendAccountRecoveryEmail(const struct FAdminSendAccountRecoveryEmailRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_RunTask(const struct FAdminRunTaskRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_RevokeInventoryItems(const struct FAdminRevokeInventoryItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_RevokeInventoryItem(const struct FAdminRevokeInventoryItemRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_RevokeBans(const struct FAdminRevokeBansRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_RevokeAllBansForUser(const struct FAdminRevokeAllBansForUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_ResolvePurchaseDispute(const struct FAdminResolvePurchaseDisputeRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_ResetUserStatistics(const struct FAdminResetUserStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_ResetPassword(const struct FAdminResetPasswordRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_ResetCharacterStatistics(const struct FAdminResetCharacterStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_RemoveVirtualCurrencyTypes(const struct FAdminRemoveVirtualCurrencyTypesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_RemoveServerBuild(const struct FAdminRemoveServerBuildRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_RemovePlayerTag(const struct FAdminRemovePlayerTagRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_RefundPurchase(const struct FAdminRefundPurchaseRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_ModifyServerBuild(const struct FAdminModifyServerBuildRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_ModifyMatchmakerGameModes(const struct FAdminModifyMatchmakerGameModesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_ListVirtualCurrencyTypes(const struct FAdminListVirtualCurrencyTypesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_ListServerBuilds(const struct FAdminListBuildsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_ListOpenIdConnection(const struct FAdminListOpenIdConnectionRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_IncrementPlayerStatisticVersion(const struct FAdminIncrementPlayerStatisticVersionRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_IncrementLimitedEditionItemAvailability(const struct FAdminIncrementLimitedEditionItemAvailabilityRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void HelperUpdateUserTitleDisplayName(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateUserReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateUserPublisherReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateUserPublisherInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateUserPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateUserInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateUserData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateTask(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateStoreItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateRandomResultTables(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdatePolicy(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdatePlayerStatisticDefinition(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdatePlayerSharedSecret(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateOpenIdConnection(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateCloudScript(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateCatalogItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateBans(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSubtractUserVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetupPushNotification(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetTitleInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetTitleData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetStoreItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetPublishedRevision(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetPlayerSecret(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetCatalogItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSendAccountRecoveryEmail(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRunTask(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRevokeInventoryItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRevokeInventoryItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRevokeBans(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRevokeAllBansForUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperResolvePurchaseDispute(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperResetUserStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperResetPassword(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperResetCharacterStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRemoveVirtualCurrencyTypes(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRemoveServerBuild(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRemovePlayerTag(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRefundPurchase(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperModifyServerBuild(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperModifyMatchmakerGameModes(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListVirtualCurrencyTypes(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListServerBuilds(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListOpenIdConnection(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperIncrementPlayerStatisticVersion(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperIncrementLimitedEditionItemAvailability(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGrantItemsToUsers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserPublisherReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserPublisherInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserInventory(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserBans(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserAccountInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetTitleInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetTitleData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetTasks(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetTaskInstances(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetStoreItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetServerBuildUploadUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetServerBuildInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetRandomResultTables(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPolicy(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerStatisticVersions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerStatisticDefinitions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayersInSegment(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerSharedSecrets(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerSegments(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerProfile(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerIdFromAuthToken(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayedTitleList(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetMatchmakerGameModes(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetMatchmakerGameInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetDataReport(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetContentUploadUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetContentList(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetCloudScriptVersions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetCloudScriptTaskInstance(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetCloudScriptRevision(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetCatalogItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetAllSegments(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetActionsOnPlayersInSegmentTaskInstance(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperExportMasterPlayerData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeleteTitle(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeleteTask(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeleteStore(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeletePlayerSharedSecret(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeletePlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeleteOpenIdConnection(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeleteMasterPlayerAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeleteContent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperCreatePlayerStatisticDefinition(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperCreatePlayerSharedSecret(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperCreateOpenIdConnection(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperCreateCloudScriptTask(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperCreateActionsOnPlayersInSegmentTask(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperCheckLimitedEditionItemAvailability(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperBanUsers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddVirtualCurrencyTypes(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddUserVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddServerBuild(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddPlayerTag(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddNews(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddLocalizedNews(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAbortTaskInstance(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	class UPlayFabAdminAPI* STATIC_GrantItemsToUsers(const struct FAdminGrantItemsToUsersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetUserReadOnlyData(const struct FAdminGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetUserPublisherReadOnlyData(const struct FAdminGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetUserPublisherInternalData(const struct FAdminGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetUserPublisherData(const struct FAdminGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetUserInventory(const struct FAdminGetUserInventoryRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetUserInternalData(const struct FAdminGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetUserData(const struct FAdminGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetUserBans(const struct FAdminGetUserBansRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetUserAccountInfo(const struct FAdminLookupUserAccountInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetTitleInternalData(const struct FAdminGetTitleDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetTitleData(const struct FAdminGetTitleDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetTasks(const struct FAdminGetTasksRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetTaskInstances(const struct FAdminGetTaskInstancesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetStoreItems(const struct FAdminGetStoreItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetServerBuildUploadUrl(const struct FAdminGetServerBuildUploadURLRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetServerBuildInfo(const struct FAdminGetServerBuildInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetRandomResultTables(const struct FAdminGetRandomResultTablesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetPublisherData(const struct FAdminGetPublisherDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetPolicy(const struct FAdminGetPolicyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetPlayerTags(const struct FAdminGetPlayerTagsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetPlayerStatisticVersions(const struct FAdminGetPlayerStatisticVersionsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetPlayerStatisticDefinitions(const struct FAdminGetPlayerStatisticDefinitionsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetPlayersInSegment(const struct FAdminGetPlayersInSegmentRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetPlayerSharedSecrets(const struct FAdminGetPlayerSharedSecretsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetPlayerSegments(const struct FAdminGetPlayersSegmentsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetPlayerProfile(const struct FAdminGetPlayerProfileRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetPlayerIdFromAuthToken(const struct FAdminGetPlayerIdFromAuthTokenRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetPlayedTitleList(const struct FAdminGetPlayedTitleListRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetMatchmakerGameModes(const struct FAdminGetMatchmakerGameModesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetMatchmakerGameInfo(const struct FAdminGetMatchmakerGameInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetDataReport(const struct FAdminGetDataReportRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetContentUploadUrl(const struct FAdminGetContentUploadUrlRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetContentList(const struct FAdminGetContentListRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetCloudScriptVersions(const struct FAdminGetCloudScriptVersionsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetCloudScriptTaskInstance(const struct FAdminGetTaskInstanceRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetCloudScriptRevision(const struct FAdminGetCloudScriptRevisionRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetCatalogItems(const struct FAdminGetCatalogItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetAllSegments(const struct FAdminGetAllSegmentsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_GetActionsOnPlayersInSegmentTaskInstance(const struct FAdminGetTaskInstanceRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_ExportMasterPlayerData(const struct FAdminExportMasterPlayerDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_DeleteTitle(const struct FAdminDeleteTitleRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_DeleteTask(const struct FAdminDeleteTaskRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_DeleteStore(const struct FAdminDeleteStoreRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_DeletePlayerSharedSecret(const struct FAdminDeletePlayerSharedSecretRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_DeletePlayer(const struct FAdminDeletePlayerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_DeleteOpenIdConnection(const struct FAdminDeleteOpenIdConnectionRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_DeleteMasterPlayerAccount(const struct FAdminDeleteMasterPlayerAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_DeleteContent(const struct FAdminDeleteContentRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void DelegateOnSuccessUpdateUserTitleDisplayName__DelegateSignature(const struct FAdminUpdateUserTitleDisplayNameResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateUserReadOnlyData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateUserPublisherReadOnlyData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateUserPublisherInternalData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateUserPublisherData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateUserInternalData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateUserData__DelegateSignature(const struct FAdminUpdateUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateTask__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessUpdateStoreItems__DelegateSignature(const struct FAdminUpdateStoreItemsResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateRandomResultTables__DelegateSignature(const struct FAdminUpdateRandomResultTablesResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdatePolicy__DelegateSignature(const struct FAdminUpdatePolicyResponse& Result, class UObject* customData);
	void DelegateOnSuccessUpdatePlayerStatisticDefinition__DelegateSignature(const struct FAdminUpdatePlayerStatisticDefinitionResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdatePlayerSharedSecret__DelegateSignature(const struct FAdminUpdatePlayerSharedSecretResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateOpenIdConnection__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessUpdateCloudScript__DelegateSignature(const struct FAdminUpdateCloudScriptResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateCatalogItems__DelegateSignature(const struct FAdminUpdateCatalogItemsResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateBans__DelegateSignature(const struct FAdminUpdateBansResult& Result, class UObject* customData);
	void DelegateOnSuccessSubtractUserVirtualCurrency__DelegateSignature(const struct FAdminModifyUserVirtualCurrencyResult& Result, class UObject* customData);
	void DelegateOnSuccessSetupPushNotification__DelegateSignature(const struct FAdminSetupPushNotificationResult& Result, class UObject* customData);
	void DelegateOnSuccessSetTitleInternalData__DelegateSignature(const struct FAdminSetTitleDataResult& Result, class UObject* customData);
	void DelegateOnSuccessSetTitleData__DelegateSignature(const struct FAdminSetTitleDataResult& Result, class UObject* customData);
	void DelegateOnSuccessSetStoreItems__DelegateSignature(const struct FAdminUpdateStoreItemsResult& Result, class UObject* customData);
	void DelegateOnSuccessSetPublisherData__DelegateSignature(const struct FAdminSetPublisherDataResult& Result, class UObject* customData);
	void DelegateOnSuccessSetPublishedRevision__DelegateSignature(const struct FAdminSetPublishedRevisionResult& Result, class UObject* customData);
	void DelegateOnSuccessSetPlayerSecret__DelegateSignature(const struct FAdminSetPlayerSecretResult& Result, class UObject* customData);
	void DelegateOnSuccessSetCatalogItems__DelegateSignature(const struct FAdminUpdateCatalogItemsResult& Result, class UObject* customData);
	void DelegateOnSuccessSendAccountRecoveryEmail__DelegateSignature(const struct FAdminSendAccountRecoveryEmailResult& Result, class UObject* customData);
	void DelegateOnSuccessRunTask__DelegateSignature(const struct FAdminRunTaskResult& Result, class UObject* customData);
	void DelegateOnSuccessRevokeInventoryItems__DelegateSignature(const struct FAdminRevokeInventoryItemsResult& Result, class UObject* customData);
	void DelegateOnSuccessRevokeInventoryItem__DelegateSignature(const struct FAdminRevokeInventoryResult& Result, class UObject* customData);
	void DelegateOnSuccessRevokeBans__DelegateSignature(const struct FAdminRevokeBansResult& Result, class UObject* customData);
	void DelegateOnSuccessRevokeAllBansForUser__DelegateSignature(const struct FAdminRevokeAllBansForUserResult& Result, class UObject* customData);
	void DelegateOnSuccessResolvePurchaseDispute__DelegateSignature(const struct FAdminResolvePurchaseDisputeResponse& Result, class UObject* customData);
	void DelegateOnSuccessResetUserStatistics__DelegateSignature(const struct FAdminResetUserStatisticsResult& Result, class UObject* customData);
	void DelegateOnSuccessResetPassword__DelegateSignature(const struct FAdminResetPasswordResult& Result, class UObject* customData);
	void DelegateOnSuccessResetCharacterStatistics__DelegateSignature(const struct FAdminResetCharacterStatisticsResult& Result, class UObject* customData);
	void DelegateOnSuccessRemoveVirtualCurrencyTypes__DelegateSignature(const struct FAdminBlankResult& Result, class UObject* customData);
	void DelegateOnSuccessRemoveServerBuild__DelegateSignature(const struct FAdminRemoveServerBuildResult& Result, class UObject* customData);
	void DelegateOnSuccessRemovePlayerTag__DelegateSignature(const struct FAdminRemovePlayerTagResult& Result, class UObject* customData);
	void DelegateOnSuccessRefundPurchase__DelegateSignature(const struct FAdminRefundPurchaseResponse& Result, class UObject* customData);
	void DelegateOnSuccessModifyServerBuild__DelegateSignature(const struct FAdminModifyServerBuildResult& Result, class UObject* customData);
	void DelegateOnSuccessModifyMatchmakerGameModes__DelegateSignature(const struct FAdminModifyMatchmakerGameModesResult& Result, class UObject* customData);
	void DelegateOnSuccessListVirtualCurrencyTypes__DelegateSignature(const struct FAdminListVirtualCurrencyTypesResult& Result, class UObject* customData);
	void DelegateOnSuccessListServerBuilds__DelegateSignature(const struct FAdminListBuildsResult& Result, class UObject* customData);
	void DelegateOnSuccessListOpenIdConnection__DelegateSignature(const struct FAdminListOpenIdConnectionResponse& Result, class UObject* customData);
	void DelegateOnSuccessIncrementPlayerStatisticVersion__DelegateSignature(const struct FAdminIncrementPlayerStatisticVersionResult& Result, class UObject* customData);
	void DelegateOnSuccessIncrementLimitedEditionItemAvailability__DelegateSignature(const struct FAdminIncrementLimitedEditionItemAvailabilityResult& Result, class UObject* customData);
	void DelegateOnSuccessGrantItemsToUsers__DelegateSignature(const struct FAdminGrantItemsToUsersResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserReadOnlyData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserPublisherReadOnlyData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserPublisherInternalData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserPublisherData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserInventory__DelegateSignature(const struct FAdminGetUserInventoryResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserInternalData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserData__DelegateSignature(const struct FAdminGetUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserBans__DelegateSignature(const struct FAdminGetUserBansResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserAccountInfo__DelegateSignature(const struct FAdminLookupUserAccountInfoResult& Result, class UObject* customData);
	void DelegateOnSuccessGetTitleInternalData__DelegateSignature(const struct FAdminGetTitleDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetTitleData__DelegateSignature(const struct FAdminGetTitleDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetTasks__DelegateSignature(const struct FAdminGetTasksResult& Result, class UObject* customData);
	void DelegateOnSuccessGetTaskInstances__DelegateSignature(const struct FAdminGetTaskInstancesResult& Result, class UObject* customData);
	void DelegateOnSuccessGetStoreItems__DelegateSignature(const struct FAdminGetStoreItemsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetServerBuildUploadUrl__DelegateSignature(const struct FAdminGetServerBuildUploadURLResult& Result, class UObject* customData);
	void DelegateOnSuccessGetServerBuildInfo__DelegateSignature(const struct FAdminGetServerBuildInfoResult& Result, class UObject* customData);
	void DelegateOnSuccessGetRandomResultTables__DelegateSignature(const struct FAdminGetRandomResultTablesResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPublisherData__DelegateSignature(const struct FAdminGetPublisherDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPolicy__DelegateSignature(const struct FAdminGetPolicyResponse& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerTags__DelegateSignature(const struct FAdminGetPlayerTagsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerStatisticVersions__DelegateSignature(const struct FAdminGetPlayerStatisticVersionsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerStatisticDefinitions__DelegateSignature(const struct FAdminGetPlayerStatisticDefinitionsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayersInSegment__DelegateSignature(const struct FAdminGetPlayersInSegmentResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerSharedSecrets__DelegateSignature(const struct FAdminGetPlayerSharedSecretsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerSegments__DelegateSignature(const struct FAdminGetPlayerSegmentsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerProfile__DelegateSignature(const struct FAdminGetPlayerProfileResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerIdFromAuthToken__DelegateSignature(const struct FAdminGetPlayerIdFromAuthTokenResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayedTitleList__DelegateSignature(const struct FAdminGetPlayedTitleListResult& Result, class UObject* customData);
	void DelegateOnSuccessGetMatchmakerGameModes__DelegateSignature(const struct FAdminGetMatchmakerGameModesResult& Result, class UObject* customData);
	void DelegateOnSuccessGetMatchmakerGameInfo__DelegateSignature(const struct FAdminGetMatchmakerGameInfoResult& Result, class UObject* customData);
	void DelegateOnSuccessGetDataReport__DelegateSignature(const struct FAdminGetDataReportResult& Result, class UObject* customData);
	void DelegateOnSuccessGetContentUploadUrl__DelegateSignature(const struct FAdminGetContentUploadUrlResult& Result, class UObject* customData);
	void DelegateOnSuccessGetContentList__DelegateSignature(const struct FAdminGetContentListResult& Result, class UObject* customData);
	void DelegateOnSuccessGetCloudScriptVersions__DelegateSignature(const struct FAdminGetCloudScriptVersionsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetCloudScriptTaskInstance__DelegateSignature(const struct FAdminGetCloudScriptTaskInstanceResult& Result, class UObject* customData);
	void DelegateOnSuccessGetCloudScriptRevision__DelegateSignature(const struct FAdminGetCloudScriptRevisionResult& Result, class UObject* customData);
	void DelegateOnSuccessGetCatalogItems__DelegateSignature(const struct FAdminGetCatalogItemsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetAllSegments__DelegateSignature(const struct FAdminGetAllSegmentsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetActionsOnPlayersInSegmentTaskInstance__DelegateSignature(const struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult& Result, class UObject* customData);
	void DelegateOnSuccessExportMasterPlayerData__DelegateSignature(const struct FAdminExportMasterPlayerDataResult& Result, class UObject* customData);
	void DelegateOnSuccessDeleteTitle__DelegateSignature(const struct FAdminDeleteTitleResult& Result, class UObject* customData);
	void DelegateOnSuccessDeleteTask__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessDeleteStore__DelegateSignature(const struct FAdminDeleteStoreResult& Result, class UObject* customData);
	void DelegateOnSuccessDeletePlayerSharedSecret__DelegateSignature(const struct FAdminDeletePlayerSharedSecretResult& Result, class UObject* customData);
	void DelegateOnSuccessDeletePlayer__DelegateSignature(const struct FAdminDeletePlayerResult& Result, class UObject* customData);
	void DelegateOnSuccessDeleteOpenIdConnection__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessDeleteMasterPlayerAccount__DelegateSignature(const struct FAdminDeleteMasterPlayerAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessDeleteContent__DelegateSignature(const struct FAdminBlankResult& Result, class UObject* customData);
	void DelegateOnSuccessCreatePlayerStatisticDefinition__DelegateSignature(const struct FAdminCreatePlayerStatisticDefinitionResult& Result, class UObject* customData);
	void DelegateOnSuccessCreatePlayerSharedSecret__DelegateSignature(const struct FAdminCreatePlayerSharedSecretResult& Result, class UObject* customData);
	void DelegateOnSuccessCreateOpenIdConnection__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessCreateCloudScriptTask__DelegateSignature(const struct FAdminCreateTaskResult& Result, class UObject* customData);
	void DelegateOnSuccessCreateActionsOnPlayersInSegmentTask__DelegateSignature(const struct FAdminCreateTaskResult& Result, class UObject* customData);
	void DelegateOnSuccessCheckLimitedEditionItemAvailability__DelegateSignature(const struct FAdminCheckLimitedEditionItemAvailabilityResult& Result, class UObject* customData);
	void DelegateOnSuccessBanUsers__DelegateSignature(const struct FAdminBanUsersResult& Result, class UObject* customData);
	void DelegateOnSuccessAddVirtualCurrencyTypes__DelegateSignature(const struct FAdminBlankResult& Result, class UObject* customData);
	void DelegateOnSuccessAddUserVirtualCurrency__DelegateSignature(const struct FAdminModifyUserVirtualCurrencyResult& Result, class UObject* customData);
	void DelegateOnSuccessAddServerBuild__DelegateSignature(const struct FAdminAddServerBuildResult& Result, class UObject* customData);
	void DelegateOnSuccessAddPlayerTag__DelegateSignature(const struct FAdminAddPlayerTagResult& Result, class UObject* customData);
	void DelegateOnSuccessAddNews__DelegateSignature(const struct FAdminAddNewsResult& Result, class UObject* customData);
	void DelegateOnSuccessAddLocalizedNews__DelegateSignature(const struct FAdminAddLocalizedNewsResult& Result, class UObject* customData);
	void DelegateOnSuccessAbortTaskInstance__DelegateSignature(const struct FAdminEmptyResponse& Result, class UObject* customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_CreatePlayerStatisticDefinition(const struct FAdminCreatePlayerStatisticDefinitionRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_CreatePlayerSharedSecret(const struct FAdminCreatePlayerSharedSecretRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_CreateOpenIdConnection(const struct FAdminCreateOpenIdConnectionRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_CreateCloudScriptTask(const struct FAdminCreateCloudScriptTaskRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_CreateActionsOnPlayersInSegmentTask(const struct FAdminCreateActionsOnPlayerSegmentTaskRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_CheckLimitedEditionItemAvailability(const struct FAdminCheckLimitedEditionItemAvailabilityRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_BanUsers(const struct FAdminBanUsersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_AddVirtualCurrencyTypes(const struct FAdminAddVirtualCurrencyTypesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_AddUserVirtualCurrency(const struct FAdminAddUserVirtualCurrencyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_AddServerBuild(const struct FAdminAddServerBuildRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_AddPlayerTag(const struct FAdminAddPlayerTagRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_AddNews(const struct FAdminAddNewsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_AddLocalizedNews(const struct FAdminAddLocalizedNewsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabAdminAPI* STATIC_AbortTaskInstance(const struct FAdminAbortTaskInstanceRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
};


// Class PlayFab.PlayFabAdminModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabAdminModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabAdminModelDecoder");
		return ptr;
	}


	struct FAdminUpdateUserTitleDisplayNameResult STATIC_decodeUpdateUserTitleDisplayNameResultResponse(class UPlayFabJsonObject* response);
	struct FAdminUpdateUserDataResult STATIC_decodeUpdateUserDataResultResponse(class UPlayFabJsonObject* response);
	struct FAdminUpdateStoreItemsResult STATIC_decodeUpdateStoreItemsResultResponse(class UPlayFabJsonObject* response);
	struct FAdminUpdateRandomResultTablesResult STATIC_decodeUpdateRandomResultTablesResultResponse(class UPlayFabJsonObject* response);
	struct FAdminUpdatePolicyResponse STATIC_decodeUpdatePolicyResponseResponse(class UPlayFabJsonObject* response);
	struct FAdminUpdatePlayerStatisticDefinitionResult STATIC_decodeUpdatePlayerStatisticDefinitionResultResponse(class UPlayFabJsonObject* response);
	struct FAdminUpdatePlayerSharedSecretResult STATIC_decodeUpdatePlayerSharedSecretResultResponse(class UPlayFabJsonObject* response);
	struct FAdminUpdateCloudScriptResult STATIC_decodeUpdateCloudScriptResultResponse(class UPlayFabJsonObject* response);
	struct FAdminUpdateCatalogItemsResult STATIC_decodeUpdateCatalogItemsResultResponse(class UPlayFabJsonObject* response);
	struct FAdminUpdateBansResult STATIC_decodeUpdateBansResultResponse(class UPlayFabJsonObject* response);
	struct FAdminSetupPushNotificationResult STATIC_decodeSetupPushNotificationResultResponse(class UPlayFabJsonObject* response);
	struct FAdminSetTitleDataResult STATIC_decodeSetTitleDataResultResponse(class UPlayFabJsonObject* response);
	struct FAdminSetPublisherDataResult STATIC_decodeSetPublisherDataResultResponse(class UPlayFabJsonObject* response);
	struct FAdminSetPublishedRevisionResult STATIC_decodeSetPublishedRevisionResultResponse(class UPlayFabJsonObject* response);
	struct FAdminSetPlayerSecretResult STATIC_decodeSetPlayerSecretResultResponse(class UPlayFabJsonObject* response);
	struct FAdminSendAccountRecoveryEmailResult STATIC_decodeSendAccountRecoveryEmailResultResponse(class UPlayFabJsonObject* response);
	struct FAdminRunTaskResult STATIC_decodeRunTaskResultResponse(class UPlayFabJsonObject* response);
	struct FAdminRevokeInventoryResult STATIC_decodeRevokeInventoryResultResponse(class UPlayFabJsonObject* response);
	struct FAdminRevokeInventoryItemsResult STATIC_decodeRevokeInventoryItemsResultResponse(class UPlayFabJsonObject* response);
	struct FAdminRevokeBansResult STATIC_decodeRevokeBansResultResponse(class UPlayFabJsonObject* response);
	struct FAdminRevokeAllBansForUserResult STATIC_decodeRevokeAllBansForUserResultResponse(class UPlayFabJsonObject* response);
	struct FAdminResolvePurchaseDisputeResponse STATIC_decodeResolvePurchaseDisputeResponseResponse(class UPlayFabJsonObject* response);
	struct FAdminResetUserStatisticsResult STATIC_decodeResetUserStatisticsResultResponse(class UPlayFabJsonObject* response);
	struct FAdminResetPasswordResult STATIC_decodeResetPasswordResultResponse(class UPlayFabJsonObject* response);
	struct FAdminResetCharacterStatisticsResult STATIC_decodeResetCharacterStatisticsResultResponse(class UPlayFabJsonObject* response);
	struct FAdminRemoveServerBuildResult STATIC_decodeRemoveServerBuildResultResponse(class UPlayFabJsonObject* response);
	struct FAdminRemovePlayerTagResult STATIC_decodeRemovePlayerTagResultResponse(class UPlayFabJsonObject* response);
	struct FAdminRefundPurchaseResponse STATIC_decodeRefundPurchaseResponseResponse(class UPlayFabJsonObject* response);
	struct FAdminModifyUserVirtualCurrencyResult STATIC_decodeModifyUserVirtualCurrencyResultResponse(class UPlayFabJsonObject* response);
	struct FAdminModifyServerBuildResult STATIC_decodeModifyServerBuildResultResponse(class UPlayFabJsonObject* response);
	struct FAdminModifyMatchmakerGameModesResult STATIC_decodeModifyMatchmakerGameModesResultResponse(class UPlayFabJsonObject* response);
	struct FAdminLookupUserAccountInfoResult STATIC_decodeLookupUserAccountInfoResultResponse(class UPlayFabJsonObject* response);
	struct FAdminListVirtualCurrencyTypesResult STATIC_decodeListVirtualCurrencyTypesResultResponse(class UPlayFabJsonObject* response);
	struct FAdminListOpenIdConnectionResponse STATIC_decodeListOpenIdConnectionResponseResponse(class UPlayFabJsonObject* response);
	struct FAdminListBuildsResult STATIC_decodeListBuildsResultResponse(class UPlayFabJsonObject* response);
	struct FAdminIncrementPlayerStatisticVersionResult STATIC_decodeIncrementPlayerStatisticVersionResultResponse(class UPlayFabJsonObject* response);
	struct FAdminIncrementLimitedEditionItemAvailabilityResult STATIC_decodeIncrementLimitedEditionItemAvailabilityResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGrantItemsToUsersResult STATIC_decodeGrantItemsToUsersResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetUserInventoryResult STATIC_decodeGetUserInventoryResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetUserDataResult STATIC_decodeGetUserDataResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetUserBansResult STATIC_decodeGetUserBansResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetTitleDataResult STATIC_decodeGetTitleDataResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetTasksResult STATIC_decodeGetTasksResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetTaskInstancesResult STATIC_decodeGetTaskInstancesResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetStoreItemsResult STATIC_decodeGetStoreItemsResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetServerBuildUploadURLResult STATIC_decodeGetServerBuildUploadURLResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetServerBuildInfoResult STATIC_decodeGetServerBuildInfoResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetRandomResultTablesResult STATIC_decodeGetRandomResultTablesResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetPublisherDataResult STATIC_decodeGetPublisherDataResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetPolicyResponse STATIC_decodeGetPolicyResponseResponse(class UPlayFabJsonObject* response);
	struct FAdminGetPlayerTagsResult STATIC_decodeGetPlayerTagsResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetPlayerStatisticVersionsResult STATIC_decodeGetPlayerStatisticVersionsResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetPlayerStatisticDefinitionsResult STATIC_decodeGetPlayerStatisticDefinitionsResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetPlayersInSegmentResult STATIC_decodeGetPlayersInSegmentResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetPlayerSharedSecretsResult STATIC_decodeGetPlayerSharedSecretsResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetPlayerSegmentsResult STATIC_decodeGetPlayerSegmentsResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetPlayerProfileResult STATIC_decodeGetPlayerProfileResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetPlayerIdFromAuthTokenResult STATIC_decodeGetPlayerIdFromAuthTokenResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetPlayedTitleListResult STATIC_decodeGetPlayedTitleListResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetMatchmakerGameModesResult STATIC_decodeGetMatchmakerGameModesResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetMatchmakerGameInfoResult STATIC_decodeGetMatchmakerGameInfoResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetDataReportResult STATIC_decodeGetDataReportResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetContentUploadUrlResult STATIC_decodeGetContentUploadUrlResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetContentListResult STATIC_decodeGetContentListResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetCloudScriptVersionsResult STATIC_decodeGetCloudScriptVersionsResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetCloudScriptTaskInstanceResult STATIC_decodeGetCloudScriptTaskInstanceResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetCloudScriptRevisionResult STATIC_decodeGetCloudScriptRevisionResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetCatalogItemsResult STATIC_decodeGetCatalogItemsResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetAllSegmentsResult STATIC_decodeGetAllSegmentsResultResponse(class UPlayFabJsonObject* response);
	struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult STATIC_decodeGetActionsOnPlayersInSegmentTaskInstanceResultResponse(class UPlayFabJsonObject* response);
	struct FAdminExportMasterPlayerDataResult STATIC_decodeExportMasterPlayerDataResultResponse(class UPlayFabJsonObject* response);
	struct FAdminEmptyResponse STATIC_decodeEmptyResponseResponse(class UPlayFabJsonObject* response);
	struct FAdminDeleteTitleResult STATIC_decodeDeleteTitleResultResponse(class UPlayFabJsonObject* response);
	struct FAdminDeleteStoreResult STATIC_decodeDeleteStoreResultResponse(class UPlayFabJsonObject* response);
	struct FAdminDeletePlayerSharedSecretResult STATIC_decodeDeletePlayerSharedSecretResultResponse(class UPlayFabJsonObject* response);
	struct FAdminDeletePlayerResult STATIC_decodeDeletePlayerResultResponse(class UPlayFabJsonObject* response);
	struct FAdminDeleteMasterPlayerAccountResult STATIC_decodeDeleteMasterPlayerAccountResultResponse(class UPlayFabJsonObject* response);
	struct FAdminCreateTaskResult STATIC_decodeCreateTaskResultResponse(class UPlayFabJsonObject* response);
	struct FAdminCreatePlayerStatisticDefinitionResult STATIC_decodeCreatePlayerStatisticDefinitionResultResponse(class UPlayFabJsonObject* response);
	struct FAdminCreatePlayerSharedSecretResult STATIC_decodeCreatePlayerSharedSecretResultResponse(class UPlayFabJsonObject* response);
	struct FAdminCheckLimitedEditionItemAvailabilityResult STATIC_decodeCheckLimitedEditionItemAvailabilityResultResponse(class UPlayFabJsonObject* response);
	struct FAdminBlankResult STATIC_decodeBlankResultResponse(class UPlayFabJsonObject* response);
	struct FAdminBanUsersResult STATIC_decodeBanUsersResultResponse(class UPlayFabJsonObject* response);
	struct FAdminAddServerBuildResult STATIC_decodeAddServerBuildResultResponse(class UPlayFabJsonObject* response);
	struct FAdminAddPlayerTagResult STATIC_decodeAddPlayerTagResultResponse(class UPlayFabJsonObject* response);
	struct FAdminAddNewsResult STATIC_decodeAddNewsResultResponse(class UPlayFabJsonObject* response);
	struct FAdminAddLocalizedNewsResult STATIC_decodeAddLocalizedNewsResultResponse(class UPlayFabJsonObject* response);
};


// Class PlayFab.PlayFabAuthenticationAPI
// 0x00D0 (0x00F8 - 0x0028)
class UPlayFabAuthenticationAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabAuthenticationAPI");
		return ptr;
	}


	void HelperGetEntityToken(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	class UPlayFabAuthenticationAPI* STATIC_GetEntityToken(const struct FAuthenticationGetEntityTokenRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void DelegateOnSuccessGetEntityToken__DelegateSignature(const struct FAuthenticationGetEntityTokenResponse& Result, class UObject* customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
};


// Class PlayFab.PlayFabAuthenticationModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabAuthenticationModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabAuthenticationModelDecoder");
		return ptr;
	}


	struct FAuthenticationGetEntityTokenResponse STATIC_decodeGetEntityTokenResponseResponse(class UPlayFabJsonObject* response);
};


// Class PlayFab.PlayFabClientAPI
// 0x0A80 (0x0AA8 - 0x0028)
class UPlayFabClientAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xA08];                                     // 0x0038(0x0A08) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x0A40(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x0A48(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x0A50(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0A58(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabClientAPI");
		return ptr;
	}


	class UPlayFabClientAPI* STATIC_WriteTitleEvent(const struct FClientWriteTitleEventRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_WritePlayerEvent(const struct FClientWriteClientPlayerEventRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_WriteCharacterEvent(const struct FClientWriteClientCharacterEventRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_ValidateWindowsStoreReceipt(const struct FClientValidateWindowsReceiptRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_ValidateIOSReceipt(const struct FClientValidateIOSReceiptRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_ValidateGooglePlayPurchase(const struct FClientValidateGooglePlayPurchaseRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_ValidateAmazonIAPReceipt(const struct FClientValidateAmazonReceiptRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UpdateUserTitleDisplayName(const struct FClientUpdateUserTitleDisplayNameRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UpdateUserPublisherData(const struct FClientUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UpdateUserData(const struct FClientUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UpdateSharedGroupData(const struct FClientUpdateSharedGroupDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UpdatePlayerStatistics(const struct FClientUpdatePlayerStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UpdateCharacterStatistics(const struct FClientUpdateCharacterStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UpdateCharacterData(const struct FClientUpdateCharacterDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UpdateAvatarUrl(const struct FClientUpdateAvatarUrlRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UnlockContainerItem(const struct FClientUnlockContainerItemRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UnlockContainerInstance(const struct FClientUnlockContainerInstanceRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UnlinkXboxAccount(const struct FClientUnlinkXboxAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UnlinkWindowsHello(const struct FClientUnlinkWindowsHelloAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UnlinkTwitch(const struct FClientUnlinkTwitchAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UnlinkSteamAccount(const struct FClientUnlinkSteamAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UnlinkPSNAccount(const struct FClientUnlinkPSNAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UnlinkOpenIdConnect(const struct FClientUninkOpenIdConnectRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UnlinkNintendoSwitchDeviceId(const struct FClientUnlinkNintendoSwitchDeviceIdRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UnlinkKongregate(const struct FClientUnlinkKongregateAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UnlinkIOSDeviceID(const struct FClientUnlinkIOSDeviceIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UnlinkGoogleAccount(const struct FClientUnlinkGoogleAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UnlinkGameCenterAccount(const struct FClientUnlinkGameCenterAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UnlinkFacebookInstantGamesId(const struct FClientUnlinkFacebookInstantGamesIdRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UnlinkFacebookAccount(const struct FClientUnlinkFacebookAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UnlinkCustomID(const struct FClientUnlinkCustomIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_UnlinkAndroidDeviceID(const struct FClientUnlinkAndroidDeviceIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_SubtractUserVirtualCurrency(const struct FClientSubtractUserVirtualCurrencyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_StartPurchase(const struct FClientStartPurchaseRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_StartGame(const struct FClientStartGameRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_SetPlayerSecret(const struct FClientSetPlayerSecretRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_SetFriendTags(const struct FClientSetFriendTagsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_SendAccountRecoveryEmail(const struct FClientSendAccountRecoveryEmailRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_RestoreIOSPurchases(const struct FClientRestoreIOSPurchasesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_ReportPlayer(const struct FClientReportPlayerClientRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_ReportDeviceInfo(const struct FClientDeviceInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_RemoveSharedGroupMembers(const struct FClientRemoveSharedGroupMembersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_RemoveGenericID(const struct FClientRemoveGenericIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_RemoveFriend(const struct FClientRemoveFriendRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_RemoveContactEmail(const struct FClientRemoveContactEmailRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_RegisterWithWindowsHello(const struct FClientRegisterWithWindowsHelloRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_RegisterPlayFabUser(const struct FClientRegisterPlayFabUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_RegisterForIOSPushNotification(const struct FClientRegisterForIOSPushNotificationRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_RefreshPSNAuthToken(const struct FClientRefreshPSNAuthTokenRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_RedeemCoupon(const struct FClientRedeemCouponRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_PurchaseItem(const struct FClientPurchaseItemRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_PayForPurchase(const struct FClientPayForPurchaseRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_OpenTrade(const struct FClientOpenTradeRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_Matchmake(const struct FClientMatchmakeRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LoginWithXbox(const struct FClientLoginWithXboxRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LoginWithWindowsHello(const struct FClientLoginWithWindowsHelloRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LoginWithTwitch(const struct FClientLoginWithTwitchRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LoginWithSteam(const struct FClientLoginWithSteamRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LoginWithPSN(const struct FClientLoginWithPSNRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LoginWithPlayFab(const struct FClientLoginWithPlayFabRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LoginWithOpenIdConnect(const struct FClientLoginWithOpenIdConnectRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LoginWithNintendoSwitchDeviceId(const struct FClientLoginWithNintendoSwitchDeviceIdRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LoginWithKongregate(const struct FClientLoginWithKongregateRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LoginWithIOSDeviceID(const struct FClientLoginWithIOSDeviceIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LoginWithGoogleAccount(const struct FClientLoginWithGoogleAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LoginWithGameCenter(const struct FClientLoginWithGameCenterRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LoginWithFacebookInstantGamesId(const struct FClientLoginWithFacebookInstantGamesIdRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LoginWithFacebook(const struct FClientLoginWithFacebookRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LoginWithEmailAddress(const struct FClientLoginWithEmailAddressRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LoginWithCustomID(const struct FClientLoginWithCustomIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LoginWithAndroidDeviceID(const struct FClientLoginWithAndroidDeviceIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LinkXboxAccount(const struct FClientLinkXboxAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LinkWindowsHello(const struct FClientLinkWindowsHelloAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LinkTwitch(const struct FClientLinkTwitchAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LinkSteamAccount(const struct FClientLinkSteamAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LinkPSNAccount(const struct FClientLinkPSNAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LinkOpenIdConnect(const struct FClientLinkOpenIdConnectRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LinkNintendoSwitchDeviceId(const struct FClientLinkNintendoSwitchDeviceIdRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LinkKongregate(const struct FClientLinkKongregateAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LinkIOSDeviceID(const struct FClientLinkIOSDeviceIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LinkGoogleAccount(const struct FClientLinkGoogleAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LinkGameCenterAccount(const struct FClientLinkGameCenterAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LinkFacebookInstantGamesId(const struct FClientLinkFacebookInstantGamesIdRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LinkFacebookAccount(const struct FClientLinkFacebookAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LinkCustomID(const struct FClientLinkCustomIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_LinkAndroidDeviceID(const struct FClientLinkAndroidDeviceIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void HelperWriteTitleEvent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperWritePlayerEvent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperWriteCharacterEvent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperValidateWindowsStoreReceipt(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperValidateIOSReceipt(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperValidateGooglePlayPurchase(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperValidateAmazonIAPReceipt(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateUserTitleDisplayName(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateUserPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateUserData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateSharedGroupData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdatePlayerStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateCharacterStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateCharacterData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateAvatarUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlockContainerItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlockContainerInstance(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlinkXboxAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlinkWindowsHello(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlinkTwitch(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlinkSteamAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlinkPSNAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlinkOpenIdConnect(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlinkNintendoSwitchDeviceId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlinkKongregate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlinkIOSDeviceID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlinkGoogleAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlinkGameCenterAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlinkFacebookInstantGamesId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlinkFacebookAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlinkCustomID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlinkAndroidDeviceID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSubtractUserVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperStartPurchase(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperStartGame(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetPlayerSecret(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetFriendTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSendAccountRecoveryEmail(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRestoreIOSPurchases(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperReportPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperReportDeviceInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRemoveSharedGroupMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRemoveGenericID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRemoveFriend(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRemoveContactEmail(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRegisterWithWindowsHello(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRegisterPlayFabUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRegisterForIOSPushNotification(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRefreshPSNAuthToken(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRedeemCoupon(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperPurchaseItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperPayForPurchase(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperOpenTrade(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperMatchmake(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithXbox(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithWindowsHello(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithTwitch(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithSteam(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithPSN(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithPlayFab(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithOpenIdConnect(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithNintendoSwitchDeviceId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithKongregate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithIOSDeviceID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithGoogleAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithGameCenter(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithFacebookInstantGamesId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithFacebook(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithEmailAddress(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithCustomID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithAndroidDeviceID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLinkXboxAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLinkWindowsHello(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLinkTwitch(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLinkSteamAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLinkPSNAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLinkOpenIdConnect(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLinkNintendoSwitchDeviceId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLinkKongregate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLinkIOSDeviceID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLinkGoogleAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLinkGameCenterAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLinkFacebookInstantGamesId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLinkFacebookAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLinkCustomID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLinkAndroidDeviceID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGrantCharacterToUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetWindowsHelloChallenge(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserPublisherReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserInventory(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetTradeStatus(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetTitlePublicKey(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetTitleNews(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetTitleData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetTime(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetStoreItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetSharedGroupData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPurchase(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayFabIDsFromXboxLiveIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayFabIDsFromTwitchIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayFabIDsFromSteamIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayFabIDsFromPSNAccountIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayFabIDsFromNintendoSwitchDeviceIds(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayFabIDsFromKongregateIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayFabIDsFromGoogleIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayFabIDsFromGenericIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayFabIDsFromGameCenterIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayFabIDsFromFacebookInstantGamesIds(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayFabIDsFromFacebookIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerTrades(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerStatisticVersions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerSegments(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerProfile(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerCombinedInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPhotonAuthenticationToken(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPaymentToken(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetLeaderboardForUserCharacters(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetLeaderboardAroundPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetLeaderboardAroundCharacter(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetLeaderboard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetGameServerRegions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetFriendsList(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetFriendLeaderboardAroundPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetFriendLeaderboard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetCurrentGames(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetContentDownloadUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetCharacterStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetCharacterReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetCharacterLeaderboard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetCharacterInventory(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetCharacterData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetCatalogItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetAllUsersCharacters(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetAccountInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperExecuteCloudScript(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperCreateSharedGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperConsumeXboxEntitlements(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperConsumePSNEntitlements(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperConsumeItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperConfirmPurchase(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperCancelTrade(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAttributeInstall(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAndroidDevicePushNotificationRegistration(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddUserVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddUsernamePassword(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddSharedGroupMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddOrUpdateContactEmail(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddGenericID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddFriend(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAcceptTrade(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	class UPlayFabClientAPI* STATIC_GrantCharacterToUser(const struct FClientGrantCharacterToUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetWindowsHelloChallenge(const struct FClientGetWindowsHelloChallengeRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetUserReadOnlyData(const struct FClientGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetUserPublisherReadOnlyData(const struct FClientGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetUserPublisherData(const struct FClientGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetUserInventory(const struct FClientGetUserInventoryRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetUserData(const struct FClientGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetTradeStatus(const struct FClientGetTradeStatusRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetTitlePublicKey(const struct FClientGetTitlePublicKeyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetTitleNews(const struct FClientGetTitleNewsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetTitleData(const struct FClientGetTitleDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetTime(const struct FClientGetTimeRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetStoreItems(const struct FClientGetStoreItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetSharedGroupData(const struct FClientGetSharedGroupDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPurchase(const struct FClientGetPurchaseRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPublisherData(const struct FClientGetPublisherDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromXboxLiveIDs(const struct FClientGetPlayFabIDsFromXboxLiveIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromTwitchIDs(const struct FClientGetPlayFabIDsFromTwitchIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromSteamIDs(const struct FClientGetPlayFabIDsFromSteamIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromPSNAccountIDs(const struct FClientGetPlayFabIDsFromPSNAccountIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromNintendoSwitchDeviceIds(const struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromKongregateIDs(const struct FClientGetPlayFabIDsFromKongregateIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromGoogleIDs(const struct FClientGetPlayFabIDsFromGoogleIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromGenericIDs(const struct FClientGetPlayFabIDsFromGenericIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromGameCenterIDs(const struct FClientGetPlayFabIDsFromGameCenterIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromFacebookInstantGamesIds(const struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromFacebookIDs(const struct FClientGetPlayFabIDsFromFacebookIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPlayerTrades(const struct FClientGetPlayerTradesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPlayerTags(const struct FClientGetPlayerTagsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPlayerStatisticVersions(const struct FClientGetPlayerStatisticVersionsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPlayerStatistics(const struct FClientGetPlayerStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPlayerSegments(const struct FClientGetPlayerSegmentsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPlayerProfile(const struct FClientGetPlayerProfileRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPlayerCombinedInfo(const struct FClientGetPlayerCombinedInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPhotonAuthenticationToken(const struct FClientGetPhotonAuthenticationTokenRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetPaymentToken(const struct FClientGetPaymentTokenRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetLeaderboardForUserCharacters(const struct FClientGetLeaderboardForUsersCharactersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetLeaderboardAroundPlayer(const struct FClientGetLeaderboardAroundPlayerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetLeaderboardAroundCharacter(const struct FClientGetLeaderboardAroundCharacterRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetLeaderboard(const struct FClientGetLeaderboardRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetGameServerRegions(const struct FClientGameServerRegionsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetFriendsList(const struct FClientGetFriendsListRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetFriendLeaderboardAroundPlayer(const struct FClientGetFriendLeaderboardAroundPlayerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetFriendLeaderboard(const struct FClientGetFriendLeaderboardRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetCurrentGames(const struct FClientCurrentGamesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetContentDownloadUrl(const struct FClientGetContentDownloadUrlRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetCharacterStatistics(const struct FClientGetCharacterStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetCharacterReadOnlyData(const struct FClientGetCharacterDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetCharacterLeaderboard(const struct FClientGetCharacterLeaderboardRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetCharacterInventory(const struct FClientGetCharacterInventoryRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetCharacterData(const struct FClientGetCharacterDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetCatalogItems(const struct FClientGetCatalogItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetAllUsersCharacters(const struct FClientListUsersCharactersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_GetAccountInfo(const struct FClientGetAccountInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_ExecuteCloudScript(const struct FClientExecuteCloudScriptRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void DelegateOnSuccessWriteTitleEvent__DelegateSignature(const struct FClientWriteEventResponse& Result, class UObject* customData);
	void DelegateOnSuccessWritePlayerEvent__DelegateSignature(const struct FClientWriteEventResponse& Result, class UObject* customData);
	void DelegateOnSuccessWriteCharacterEvent__DelegateSignature(const struct FClientWriteEventResponse& Result, class UObject* customData);
	void DelegateOnSuccessValidateWindowsStoreReceipt__DelegateSignature(const struct FClientValidateWindowsReceiptResult& Result, class UObject* customData);
	void DelegateOnSuccessValidateIOSReceipt__DelegateSignature(const struct FClientValidateIOSReceiptResult& Result, class UObject* customData);
	void DelegateOnSuccessValidateGooglePlayPurchase__DelegateSignature(const struct FClientValidateGooglePlayPurchaseResult& Result, class UObject* customData);
	void DelegateOnSuccessValidateAmazonIAPReceipt__DelegateSignature(const struct FClientValidateAmazonReceiptResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateUserTitleDisplayName__DelegateSignature(const struct FClientUpdateUserTitleDisplayNameResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateUserPublisherData__DelegateSignature(const struct FClientUpdateUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateUserData__DelegateSignature(const struct FClientUpdateUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateSharedGroupData__DelegateSignature(const struct FClientUpdateSharedGroupDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdatePlayerStatistics__DelegateSignature(const struct FClientUpdatePlayerStatisticsResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateCharacterStatistics__DelegateSignature(const struct FClientUpdateCharacterStatisticsResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateCharacterData__DelegateSignature(const struct FClientUpdateCharacterDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateAvatarUrl__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessUnlockContainerItem__DelegateSignature(const struct FClientUnlockContainerItemResult& Result, class UObject* customData);
	void DelegateOnSuccessUnlockContainerInstance__DelegateSignature(const struct FClientUnlockContainerItemResult& Result, class UObject* customData);
	void DelegateOnSuccessUnlinkXboxAccount__DelegateSignature(const struct FClientUnlinkXboxAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessUnlinkWindowsHello__DelegateSignature(const struct FClientUnlinkWindowsHelloAccountResponse& Result, class UObject* customData);
	void DelegateOnSuccessUnlinkTwitch__DelegateSignature(const struct FClientUnlinkTwitchAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessUnlinkSteamAccount__DelegateSignature(const struct FClientUnlinkSteamAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessUnlinkPSNAccount__DelegateSignature(const struct FClientUnlinkPSNAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessUnlinkOpenIdConnect__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessUnlinkNintendoSwitchDeviceId__DelegateSignature(const struct FClientUnlinkNintendoSwitchDeviceIdResult& Result, class UObject* customData);
	void DelegateOnSuccessUnlinkKongregate__DelegateSignature(const struct FClientUnlinkKongregateAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessUnlinkIOSDeviceID__DelegateSignature(const struct FClientUnlinkIOSDeviceIDResult& Result, class UObject* customData);
	void DelegateOnSuccessUnlinkGoogleAccount__DelegateSignature(const struct FClientUnlinkGoogleAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessUnlinkGameCenterAccount__DelegateSignature(const struct FClientUnlinkGameCenterAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessUnlinkFacebookInstantGamesId__DelegateSignature(const struct FClientUnlinkFacebookInstantGamesIdResult& Result, class UObject* customData);
	void DelegateOnSuccessUnlinkFacebookAccount__DelegateSignature(const struct FClientUnlinkFacebookAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessUnlinkCustomID__DelegateSignature(const struct FClientUnlinkCustomIDResult& Result, class UObject* customData);
	void DelegateOnSuccessUnlinkAndroidDeviceID__DelegateSignature(const struct FClientUnlinkAndroidDeviceIDResult& Result, class UObject* customData);
	void DelegateOnSuccessSubtractUserVirtualCurrency__DelegateSignature(const struct FClientModifyUserVirtualCurrencyResult& Result, class UObject* customData);
	void DelegateOnSuccessStartPurchase__DelegateSignature(const struct FClientStartPurchaseResult& Result, class UObject* customData);
	void DelegateOnSuccessStartGame__DelegateSignature(const struct FClientStartGameResult& Result, class UObject* customData);
	void DelegateOnSuccessSetPlayerSecret__DelegateSignature(const struct FClientSetPlayerSecretResult& Result, class UObject* customData);
	void DelegateOnSuccessSetFriendTags__DelegateSignature(const struct FClientSetFriendTagsResult& Result, class UObject* customData);
	void DelegateOnSuccessSendAccountRecoveryEmail__DelegateSignature(const struct FClientSendAccountRecoveryEmailResult& Result, class UObject* customData);
	void DelegateOnSuccessRestoreIOSPurchases__DelegateSignature(const struct FClientRestoreIOSPurchasesResult& Result, class UObject* customData);
	void DelegateOnSuccessReportPlayer__DelegateSignature(const struct FClientReportPlayerClientResult& Result, class UObject* customData);
	void DelegateOnSuccessReportDeviceInfo__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessRemoveSharedGroupMembers__DelegateSignature(const struct FClientRemoveSharedGroupMembersResult& Result, class UObject* customData);
	void DelegateOnSuccessRemoveGenericID__DelegateSignature(const struct FClientRemoveGenericIDResult& Result, class UObject* customData);
	void DelegateOnSuccessRemoveFriend__DelegateSignature(const struct FClientRemoveFriendResult& Result, class UObject* customData);
	void DelegateOnSuccessRemoveContactEmail__DelegateSignature(const struct FClientRemoveContactEmailResult& Result, class UObject* customData);
	void DelegateOnSuccessRegisterWithWindowsHello__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessRegisterPlayFabUser__DelegateSignature(const struct FClientRegisterPlayFabUserResult& Result, class UObject* customData);
	void DelegateOnSuccessRegisterForIOSPushNotification__DelegateSignature(const struct FClientRegisterForIOSPushNotificationResult& Result, class UObject* customData);
	void DelegateOnSuccessRefreshPSNAuthToken__DelegateSignature(const struct FClientEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessRedeemCoupon__DelegateSignature(const struct FClientRedeemCouponResult& Result, class UObject* customData);
	void DelegateOnSuccessPurchaseItem__DelegateSignature(const struct FClientPurchaseItemResult& Result, class UObject* customData);
	void DelegateOnSuccessPayForPurchase__DelegateSignature(const struct FClientPayForPurchaseResult& Result, class UObject* customData);
	void DelegateOnSuccessOpenTrade__DelegateSignature(const struct FClientOpenTradeResponse& Result, class UObject* customData);
	void DelegateOnSuccessMatchmake__DelegateSignature(const struct FClientMatchmakeResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithXbox__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithWindowsHello__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithTwitch__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithSteam__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithPSN__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithPlayFab__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithOpenIdConnect__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithNintendoSwitchDeviceId__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithKongregate__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithIOSDeviceID__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithGoogleAccount__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithGameCenter__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithFacebookInstantGamesId__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithFacebook__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithEmailAddress__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithCustomID__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithAndroidDeviceID__DelegateSignature(const struct FClientLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLinkXboxAccount__DelegateSignature(const struct FClientLinkXboxAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessLinkWindowsHello__DelegateSignature(const struct FClientLinkWindowsHelloAccountResponse& Result, class UObject* customData);
	void DelegateOnSuccessLinkTwitch__DelegateSignature(const struct FClientLinkTwitchAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessLinkSteamAccount__DelegateSignature(const struct FClientLinkSteamAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessLinkPSNAccount__DelegateSignature(const struct FClientLinkPSNAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessLinkOpenIdConnect__DelegateSignature(const struct FClientEmptyResult& Result, class UObject* customData);
	void DelegateOnSuccessLinkNintendoSwitchDeviceId__DelegateSignature(const struct FClientLinkNintendoSwitchDeviceIdResult& Result, class UObject* customData);
	void DelegateOnSuccessLinkKongregate__DelegateSignature(const struct FClientLinkKongregateAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessLinkIOSDeviceID__DelegateSignature(const struct FClientLinkIOSDeviceIDResult& Result, class UObject* customData);
	void DelegateOnSuccessLinkGoogleAccount__DelegateSignature(const struct FClientLinkGoogleAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessLinkGameCenterAccount__DelegateSignature(const struct FClientLinkGameCenterAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessLinkFacebookInstantGamesId__DelegateSignature(const struct FClientLinkFacebookInstantGamesIdResult& Result, class UObject* customData);
	void DelegateOnSuccessLinkFacebookAccount__DelegateSignature(const struct FClientLinkFacebookAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessLinkCustomID__DelegateSignature(const struct FClientLinkCustomIDResult& Result, class UObject* customData);
	void DelegateOnSuccessLinkAndroidDeviceID__DelegateSignature(const struct FClientLinkAndroidDeviceIDResult& Result, class UObject* customData);
	void DelegateOnSuccessGrantCharacterToUser__DelegateSignature(const struct FClientGrantCharacterToUserResult& Result, class UObject* customData);
	void DelegateOnSuccessGetWindowsHelloChallenge__DelegateSignature(const struct FClientGetWindowsHelloChallengeResponse& Result, class UObject* customData);
	void DelegateOnSuccessGetUserReadOnlyData__DelegateSignature(const struct FClientGetUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserPublisherReadOnlyData__DelegateSignature(const struct FClientGetUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserPublisherData__DelegateSignature(const struct FClientGetUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserInventory__DelegateSignature(const struct FClientGetUserInventoryResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserData__DelegateSignature(const struct FClientGetUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetTradeStatus__DelegateSignature(const struct FClientGetTradeStatusResponse& Result, class UObject* customData);
	void DelegateOnSuccessGetTitlePublicKey__DelegateSignature(const struct FClientGetTitlePublicKeyResult& Result, class UObject* customData);
	void DelegateOnSuccessGetTitleNews__DelegateSignature(const struct FClientGetTitleNewsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetTitleData__DelegateSignature(const struct FClientGetTitleDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetTime__DelegateSignature(const struct FClientGetTimeResult& Result, class UObject* customData);
	void DelegateOnSuccessGetStoreItems__DelegateSignature(const struct FClientGetStoreItemsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetSharedGroupData__DelegateSignature(const struct FClientGetSharedGroupDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPurchase__DelegateSignature(const struct FClientGetPurchaseResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPublisherData__DelegateSignature(const struct FClientGetPublisherDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromXboxLiveIDsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayFabIDsFromTwitchIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromTwitchIDsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayFabIDsFromSteamIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromSteamIDsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromPSNAccountIDsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds__DelegateSignature(const struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayFabIDsFromKongregateIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromKongregateIDsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayFabIDsFromGoogleIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromGoogleIDsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayFabIDsFromGenericIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromGenericIDsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayFabIDsFromGameCenterIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromGameCenterIDsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds__DelegateSignature(const struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayFabIDsFromFacebookIDs__DelegateSignature(const struct FClientGetPlayFabIDsFromFacebookIDsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerTrades__DelegateSignature(const struct FClientGetPlayerTradesResponse& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerTags__DelegateSignature(const struct FClientGetPlayerTagsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerStatisticVersions__DelegateSignature(const struct FClientGetPlayerStatisticVersionsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerStatistics__DelegateSignature(const struct FClientGetPlayerStatisticsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerSegments__DelegateSignature(const struct FClientGetPlayerSegmentsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerProfile__DelegateSignature(const struct FClientGetPlayerProfileResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerCombinedInfo__DelegateSignature(const struct FClientGetPlayerCombinedInfoResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPhotonAuthenticationToken__DelegateSignature(const struct FClientGetPhotonAuthenticationTokenResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPaymentToken__DelegateSignature(const struct FClientGetPaymentTokenResult& Result, class UObject* customData);
	void DelegateOnSuccessGetLeaderboardForUserCharacters__DelegateSignature(const struct FClientGetLeaderboardForUsersCharactersResult& Result, class UObject* customData);
	void DelegateOnSuccessGetLeaderboardAroundPlayer__DelegateSignature(const struct FClientGetLeaderboardAroundPlayerResult& Result, class UObject* customData);
	void DelegateOnSuccessGetLeaderboardAroundCharacter__DelegateSignature(const struct FClientGetLeaderboardAroundCharacterResult& Result, class UObject* customData);
	void DelegateOnSuccessGetLeaderboard__DelegateSignature(const struct FClientGetLeaderboardResult& Result, class UObject* customData);
	void DelegateOnSuccessGetGameServerRegions__DelegateSignature(const struct FClientGameServerRegionsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetFriendsList__DelegateSignature(const struct FClientGetFriendsListResult& Result, class UObject* customData);
	void DelegateOnSuccessGetFriendLeaderboardAroundPlayer__DelegateSignature(const struct FClientGetFriendLeaderboardAroundPlayerResult& Result, class UObject* customData);
	void DelegateOnSuccessGetFriendLeaderboard__DelegateSignature(const struct FClientGetLeaderboardResult& Result, class UObject* customData);
	void DelegateOnSuccessGetCurrentGames__DelegateSignature(const struct FClientCurrentGamesResult& Result, class UObject* customData);
	void DelegateOnSuccessGetContentDownloadUrl__DelegateSignature(const struct FClientGetContentDownloadUrlResult& Result, class UObject* customData);
	void DelegateOnSuccessGetCharacterStatistics__DelegateSignature(const struct FClientGetCharacterStatisticsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetCharacterReadOnlyData__DelegateSignature(const struct FClientGetCharacterDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetCharacterLeaderboard__DelegateSignature(const struct FClientGetCharacterLeaderboardResult& Result, class UObject* customData);
	void DelegateOnSuccessGetCharacterInventory__DelegateSignature(const struct FClientGetCharacterInventoryResult& Result, class UObject* customData);
	void DelegateOnSuccessGetCharacterData__DelegateSignature(const struct FClientGetCharacterDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetCatalogItems__DelegateSignature(const struct FClientGetCatalogItemsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetAllUsersCharacters__DelegateSignature(const struct FClientListUsersCharactersResult& Result, class UObject* customData);
	void DelegateOnSuccessGetAccountInfo__DelegateSignature(const struct FClientGetAccountInfoResult& Result, class UObject* customData);
	void DelegateOnSuccessExecuteCloudScript__DelegateSignature(const struct FClientExecuteCloudScriptResult& Result, class UObject* customData);
	void DelegateOnSuccessCreateSharedGroup__DelegateSignature(const struct FClientCreateSharedGroupResult& Result, class UObject* customData);
	void DelegateOnSuccessConsumeXboxEntitlements__DelegateSignature(const struct FClientConsumeXboxEntitlementsResult& Result, class UObject* customData);
	void DelegateOnSuccessConsumePSNEntitlements__DelegateSignature(const struct FClientConsumePSNEntitlementsResult& Result, class UObject* customData);
	void DelegateOnSuccessConsumeItem__DelegateSignature(const struct FClientConsumeItemResult& Result, class UObject* customData);
	void DelegateOnSuccessConfirmPurchase__DelegateSignature(const struct FClientConfirmPurchaseResult& Result, class UObject* customData);
	void DelegateOnSuccessCancelTrade__DelegateSignature(const struct FClientCancelTradeResponse& Result, class UObject* customData);
	void DelegateOnSuccessAttributeInstall__DelegateSignature(const struct FClientAttributeInstallResult& Result, class UObject* customData);
	void DelegateOnSuccessAndroidDevicePushNotificationRegistration__DelegateSignature(const struct FClientAndroidDevicePushNotificationRegistrationResult& Result, class UObject* customData);
	void DelegateOnSuccessAddUserVirtualCurrency__DelegateSignature(const struct FClientModifyUserVirtualCurrencyResult& Result, class UObject* customData);
	void DelegateOnSuccessAddUsernamePassword__DelegateSignature(const struct FClientAddUsernamePasswordResult& Result, class UObject* customData);
	void DelegateOnSuccessAddSharedGroupMembers__DelegateSignature(const struct FClientAddSharedGroupMembersResult& Result, class UObject* customData);
	void DelegateOnSuccessAddOrUpdateContactEmail__DelegateSignature(const struct FClientAddOrUpdateContactEmailResult& Result, class UObject* customData);
	void DelegateOnSuccessAddGenericID__DelegateSignature(const struct FClientAddGenericIDResult& Result, class UObject* customData);
	void DelegateOnSuccessAddFriend__DelegateSignature(const struct FClientAddFriendResult& Result, class UObject* customData);
	void DelegateOnSuccessAcceptTrade__DelegateSignature(const struct FClientAcceptTradeResponse& Result, class UObject* customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
	class UPlayFabClientAPI* STATIC_CreateSharedGroup(const struct FClientCreateSharedGroupRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_ConsumeXboxEntitlements(const struct FClientConsumeXboxEntitlementsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_ConsumePSNEntitlements(const struct FClientConsumePSNEntitlementsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_ConsumeItem(const struct FClientConsumeItemRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_ConfirmPurchase(const struct FClientConfirmPurchaseRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_CancelTrade(const struct FClientCancelTradeRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_AttributeInstall(const struct FClientAttributeInstallRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_AndroidDevicePushNotificationRegistration(const struct FClientAndroidDevicePushNotificationRegistrationRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_AddUserVirtualCurrency(const struct FClientAddUserVirtualCurrencyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_AddUsernamePassword(const struct FClientAddUsernamePasswordRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_AddSharedGroupMembers(const struct FClientAddSharedGroupMembersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_AddOrUpdateContactEmail(const struct FClientAddOrUpdateContactEmailRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_AddGenericID(const struct FClientAddGenericIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_AddFriend(const struct FClientAddFriendRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabClientAPI* STATIC_AcceptTrade(const struct FClientAcceptTradeRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
};


// Class PlayFab.PlayFabClientModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabClientModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabClientModelDecoder");
		return ptr;
	}


	struct FClientWriteEventResponse STATIC_decodeWriteEventResponseResponse(class UPlayFabJsonObject* response);
	struct FClientValidateWindowsReceiptResult STATIC_decodeValidateWindowsReceiptResultResponse(class UPlayFabJsonObject* response);
	struct FClientValidateIOSReceiptResult STATIC_decodeValidateIOSReceiptResultResponse(class UPlayFabJsonObject* response);
	struct FClientValidateGooglePlayPurchaseResult STATIC_decodeValidateGooglePlayPurchaseResultResponse(class UPlayFabJsonObject* response);
	struct FClientValidateAmazonReceiptResult STATIC_decodeValidateAmazonReceiptResultResponse(class UPlayFabJsonObject* response);
	struct FClientUpdateUserTitleDisplayNameResult STATIC_decodeUpdateUserTitleDisplayNameResultResponse(class UPlayFabJsonObject* response);
	struct FClientUpdateUserDataResult STATIC_decodeUpdateUserDataResultResponse(class UPlayFabJsonObject* response);
	struct FClientUpdateSharedGroupDataResult STATIC_decodeUpdateSharedGroupDataResultResponse(class UPlayFabJsonObject* response);
	struct FClientUpdatePlayerStatisticsResult STATIC_decodeUpdatePlayerStatisticsResultResponse(class UPlayFabJsonObject* response);
	struct FClientUpdateCharacterStatisticsResult STATIC_decodeUpdateCharacterStatisticsResultResponse(class UPlayFabJsonObject* response);
	struct FClientUpdateCharacterDataResult STATIC_decodeUpdateCharacterDataResultResponse(class UPlayFabJsonObject* response);
	struct FClientUnlockContainerItemResult STATIC_decodeUnlockContainerItemResultResponse(class UPlayFabJsonObject* response);
	struct FClientUnlinkXboxAccountResult STATIC_decodeUnlinkXboxAccountResultResponse(class UPlayFabJsonObject* response);
	struct FClientUnlinkWindowsHelloAccountResponse STATIC_decodeUnlinkWindowsHelloAccountResponseResponse(class UPlayFabJsonObject* response);
	struct FClientUnlinkTwitchAccountResult STATIC_decodeUnlinkTwitchAccountResultResponse(class UPlayFabJsonObject* response);
	struct FClientUnlinkSteamAccountResult STATIC_decodeUnlinkSteamAccountResultResponse(class UPlayFabJsonObject* response);
	struct FClientUnlinkPSNAccountResult STATIC_decodeUnlinkPSNAccountResultResponse(class UPlayFabJsonObject* response);
	struct FClientUnlinkNintendoSwitchDeviceIdResult STATIC_decodeUnlinkNintendoSwitchDeviceIdResultResponse(class UPlayFabJsonObject* response);
	struct FClientUnlinkKongregateAccountResult STATIC_decodeUnlinkKongregateAccountResultResponse(class UPlayFabJsonObject* response);
	struct FClientUnlinkIOSDeviceIDResult STATIC_decodeUnlinkIOSDeviceIDResultResponse(class UPlayFabJsonObject* response);
	struct FClientUnlinkGoogleAccountResult STATIC_decodeUnlinkGoogleAccountResultResponse(class UPlayFabJsonObject* response);
	struct FClientUnlinkGameCenterAccountResult STATIC_decodeUnlinkGameCenterAccountResultResponse(class UPlayFabJsonObject* response);
	struct FClientUnlinkFacebookInstantGamesIdResult STATIC_decodeUnlinkFacebookInstantGamesIdResultResponse(class UPlayFabJsonObject* response);
	struct FClientUnlinkFacebookAccountResult STATIC_decodeUnlinkFacebookAccountResultResponse(class UPlayFabJsonObject* response);
	struct FClientUnlinkCustomIDResult STATIC_decodeUnlinkCustomIDResultResponse(class UPlayFabJsonObject* response);
	struct FClientUnlinkAndroidDeviceIDResult STATIC_decodeUnlinkAndroidDeviceIDResultResponse(class UPlayFabJsonObject* response);
	struct FClientStartPurchaseResult STATIC_decodeStartPurchaseResultResponse(class UPlayFabJsonObject* response);
	struct FClientStartGameResult STATIC_decodeStartGameResultResponse(class UPlayFabJsonObject* response);
	struct FClientSetPlayerSecretResult STATIC_decodeSetPlayerSecretResultResponse(class UPlayFabJsonObject* response);
	struct FClientSetFriendTagsResult STATIC_decodeSetFriendTagsResultResponse(class UPlayFabJsonObject* response);
	struct FClientSendAccountRecoveryEmailResult STATIC_decodeSendAccountRecoveryEmailResultResponse(class UPlayFabJsonObject* response);
	struct FClientRestoreIOSPurchasesResult STATIC_decodeRestoreIOSPurchasesResultResponse(class UPlayFabJsonObject* response);
	struct FClientReportPlayerClientResult STATIC_decodeReportPlayerClientResultResponse(class UPlayFabJsonObject* response);
	struct FClientRemoveSharedGroupMembersResult STATIC_decodeRemoveSharedGroupMembersResultResponse(class UPlayFabJsonObject* response);
	struct FClientRemoveGenericIDResult STATIC_decodeRemoveGenericIDResultResponse(class UPlayFabJsonObject* response);
	struct FClientRemoveFriendResult STATIC_decodeRemoveFriendResultResponse(class UPlayFabJsonObject* response);
	struct FClientRemoveContactEmailResult STATIC_decodeRemoveContactEmailResultResponse(class UPlayFabJsonObject* response);
	struct FClientRegisterPlayFabUserResult STATIC_decodeRegisterPlayFabUserResultResponse(class UPlayFabJsonObject* response);
	struct FClientRegisterForIOSPushNotificationResult STATIC_decodeRegisterForIOSPushNotificationResultResponse(class UPlayFabJsonObject* response);
	struct FClientRedeemCouponResult STATIC_decodeRedeemCouponResultResponse(class UPlayFabJsonObject* response);
	struct FClientPurchaseItemResult STATIC_decodePurchaseItemResultResponse(class UPlayFabJsonObject* response);
	struct FClientPayForPurchaseResult STATIC_decodePayForPurchaseResultResponse(class UPlayFabJsonObject* response);
	struct FClientOpenTradeResponse STATIC_decodeOpenTradeResponseResponse(class UPlayFabJsonObject* response);
	struct FClientModifyUserVirtualCurrencyResult STATIC_decodeModifyUserVirtualCurrencyResultResponse(class UPlayFabJsonObject* response);
	struct FClientMatchmakeResult STATIC_decodeMatchmakeResultResponse(class UPlayFabJsonObject* response);
	struct FClientLoginResult STATIC_decodeLoginResultResponse(class UPlayFabJsonObject* response);
	struct FClientListUsersCharactersResult STATIC_decodeListUsersCharactersResultResponse(class UPlayFabJsonObject* response);
	struct FClientLinkXboxAccountResult STATIC_decodeLinkXboxAccountResultResponse(class UPlayFabJsonObject* response);
	struct FClientLinkWindowsHelloAccountResponse STATIC_decodeLinkWindowsHelloAccountResponseResponse(class UPlayFabJsonObject* response);
	struct FClientLinkTwitchAccountResult STATIC_decodeLinkTwitchAccountResultResponse(class UPlayFabJsonObject* response);
	struct FClientLinkSteamAccountResult STATIC_decodeLinkSteamAccountResultResponse(class UPlayFabJsonObject* response);
	struct FClientLinkPSNAccountResult STATIC_decodeLinkPSNAccountResultResponse(class UPlayFabJsonObject* response);
	struct FClientLinkNintendoSwitchDeviceIdResult STATIC_decodeLinkNintendoSwitchDeviceIdResultResponse(class UPlayFabJsonObject* response);
	struct FClientLinkKongregateAccountResult STATIC_decodeLinkKongregateAccountResultResponse(class UPlayFabJsonObject* response);
	struct FClientLinkIOSDeviceIDResult STATIC_decodeLinkIOSDeviceIDResultResponse(class UPlayFabJsonObject* response);
	struct FClientLinkGoogleAccountResult STATIC_decodeLinkGoogleAccountResultResponse(class UPlayFabJsonObject* response);
	struct FClientLinkGameCenterAccountResult STATIC_decodeLinkGameCenterAccountResultResponse(class UPlayFabJsonObject* response);
	struct FClientLinkFacebookInstantGamesIdResult STATIC_decodeLinkFacebookInstantGamesIdResultResponse(class UPlayFabJsonObject* response);
	struct FClientLinkFacebookAccountResult STATIC_decodeLinkFacebookAccountResultResponse(class UPlayFabJsonObject* response);
	struct FClientLinkCustomIDResult STATIC_decodeLinkCustomIDResultResponse(class UPlayFabJsonObject* response);
	struct FClientLinkAndroidDeviceIDResult STATIC_decodeLinkAndroidDeviceIDResultResponse(class UPlayFabJsonObject* response);
	struct FClientGrantCharacterToUserResult STATIC_decodeGrantCharacterToUserResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetWindowsHelloChallengeResponse STATIC_decodeGetWindowsHelloChallengeResponseResponse(class UPlayFabJsonObject* response);
	struct FClientGetUserInventoryResult STATIC_decodeGetUserInventoryResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetUserDataResult STATIC_decodeGetUserDataResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetTradeStatusResponse STATIC_decodeGetTradeStatusResponseResponse(class UPlayFabJsonObject* response);
	struct FClientGetTitlePublicKeyResult STATIC_decodeGetTitlePublicKeyResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetTitleNewsResult STATIC_decodeGetTitleNewsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetTitleDataResult STATIC_decodeGetTitleDataResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetTimeResult STATIC_decodeGetTimeResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetStoreItemsResult STATIC_decodeGetStoreItemsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetSharedGroupDataResult STATIC_decodeGetSharedGroupDataResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPurchaseResult STATIC_decodeGetPurchaseResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPublisherDataResult STATIC_decodeGetPublisherDataResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPlayFabIDsFromXboxLiveIDsResult STATIC_decodeGetPlayFabIDsFromXboxLiveIDsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPlayFabIDsFromTwitchIDsResult STATIC_decodeGetPlayFabIDsFromTwitchIDsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPlayFabIDsFromSteamIDsResult STATIC_decodeGetPlayFabIDsFromSteamIDsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPlayFabIDsFromPSNAccountIDsResult STATIC_decodeGetPlayFabIDsFromPSNAccountIDsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult STATIC_decodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPlayFabIDsFromKongregateIDsResult STATIC_decodeGetPlayFabIDsFromKongregateIDsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPlayFabIDsFromGoogleIDsResult STATIC_decodeGetPlayFabIDsFromGoogleIDsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPlayFabIDsFromGenericIDsResult STATIC_decodeGetPlayFabIDsFromGenericIDsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPlayFabIDsFromGameCenterIDsResult STATIC_decodeGetPlayFabIDsFromGameCenterIDsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult STATIC_decodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPlayFabIDsFromFacebookIDsResult STATIC_decodeGetPlayFabIDsFromFacebookIDsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPlayerTradesResponse STATIC_decodeGetPlayerTradesResponseResponse(class UPlayFabJsonObject* response);
	struct FClientGetPlayerTagsResult STATIC_decodeGetPlayerTagsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPlayerStatisticVersionsResult STATIC_decodeGetPlayerStatisticVersionsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPlayerStatisticsResult STATIC_decodeGetPlayerStatisticsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPlayerSegmentsResult STATIC_decodeGetPlayerSegmentsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPlayerProfileResult STATIC_decodeGetPlayerProfileResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPlayerCombinedInfoResult STATIC_decodeGetPlayerCombinedInfoResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPhotonAuthenticationTokenResult STATIC_decodeGetPhotonAuthenticationTokenResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetPaymentTokenResult STATIC_decodeGetPaymentTokenResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetLeaderboardResult STATIC_decodeGetLeaderboardResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetLeaderboardForUsersCharactersResult STATIC_decodeGetLeaderboardForUsersCharactersResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetLeaderboardAroundPlayerResult STATIC_decodeGetLeaderboardAroundPlayerResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetLeaderboardAroundCharacterResult STATIC_decodeGetLeaderboardAroundCharacterResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetFriendsListResult STATIC_decodeGetFriendsListResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetFriendLeaderboardAroundPlayerResult STATIC_decodeGetFriendLeaderboardAroundPlayerResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetContentDownloadUrlResult STATIC_decodeGetContentDownloadUrlResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetCharacterStatisticsResult STATIC_decodeGetCharacterStatisticsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetCharacterLeaderboardResult STATIC_decodeGetCharacterLeaderboardResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetCharacterInventoryResult STATIC_decodeGetCharacterInventoryResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetCharacterDataResult STATIC_decodeGetCharacterDataResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetCatalogItemsResult STATIC_decodeGetCatalogItemsResultResponse(class UPlayFabJsonObject* response);
	struct FClientGetAccountInfoResult STATIC_decodeGetAccountInfoResultResponse(class UPlayFabJsonObject* response);
	struct FClientGameServerRegionsResult STATIC_decodeGameServerRegionsResultResponse(class UPlayFabJsonObject* response);
	struct FClientExecuteCloudScriptResult STATIC_decodeExecuteCloudScriptResultResponse(class UPlayFabJsonObject* response);
	struct FClientEmptyResult STATIC_decodeEmptyResultResponse(class UPlayFabJsonObject* response);
	struct FClientEmptyResponse STATIC_decodeEmptyResponseResponse(class UPlayFabJsonObject* response);
	struct FClientCurrentGamesResult STATIC_decodeCurrentGamesResultResponse(class UPlayFabJsonObject* response);
	struct FClientCreateSharedGroupResult STATIC_decodeCreateSharedGroupResultResponse(class UPlayFabJsonObject* response);
	struct FClientConsumeXboxEntitlementsResult STATIC_decodeConsumeXboxEntitlementsResultResponse(class UPlayFabJsonObject* response);
	struct FClientConsumePSNEntitlementsResult STATIC_decodeConsumePSNEntitlementsResultResponse(class UPlayFabJsonObject* response);
	struct FClientConsumeItemResult STATIC_decodeConsumeItemResultResponse(class UPlayFabJsonObject* response);
	struct FClientConfirmPurchaseResult STATIC_decodeConfirmPurchaseResultResponse(class UPlayFabJsonObject* response);
	struct FClientCancelTradeResponse STATIC_decodeCancelTradeResponseResponse(class UPlayFabJsonObject* response);
	struct FClientAttributeInstallResult STATIC_decodeAttributeInstallResultResponse(class UPlayFabJsonObject* response);
	struct FClientAndroidDevicePushNotificationRegistrationResult STATIC_decodeAndroidDevicePushNotificationRegistrationResultResponse(class UPlayFabJsonObject* response);
	struct FClientAddUsernamePasswordResult STATIC_decodeAddUsernamePasswordResultResponse(class UPlayFabJsonObject* response);
	struct FClientAddSharedGroupMembersResult STATIC_decodeAddSharedGroupMembersResultResponse(class UPlayFabJsonObject* response);
	struct FClientAddOrUpdateContactEmailResult STATIC_decodeAddOrUpdateContactEmailResultResponse(class UPlayFabJsonObject* response);
	struct FClientAddGenericIDResult STATIC_decodeAddGenericIDResultResponse(class UPlayFabJsonObject* response);
	struct FClientAddFriendResult STATIC_decodeAddFriendResultResponse(class UPlayFabJsonObject* response);
	struct FClientAcceptTradeResponse STATIC_decodeAcceptTradeResponseResponse(class UPlayFabJsonObject* response);
};


// Class PlayFab.PlayFabCloudScriptAPI
// 0x00E0 (0x0108 - 0x0028)
class UPlayFabCloudScriptAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0038(0x0068) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00B8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabCloudScriptAPI");
		return ptr;
	}


	void HelperExecuteEntityCloudScript(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	class UPlayFabCloudScriptAPI* STATIC_ExecuteEntityCloudScript(const struct FCloudScriptExecuteEntityCloudScriptRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature(const struct FCloudScriptExecuteCloudScriptResult& Result, class UObject* customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
};


// Class PlayFab.PlayFabCloudScriptModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabCloudScriptModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabCloudScriptModelDecoder");
		return ptr;
	}


	struct FCloudScriptExecuteCloudScriptResult STATIC_decodeExecuteCloudScriptResultResponse(class UPlayFabJsonObject* response);
};


// Class PlayFab.PlayFabDataAPI
// 0x0130 (0x0158 - 0x0028)
class UPlayFabDataAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0038(0x00B8) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0108(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabDataAPI");
		return ptr;
	}


	class UPlayFabDataAPI* STATIC_SetObjects(const struct FDataSetObjectsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabDataAPI* STATIC_InitiateFileUploads(const struct FDataInitiateFileUploadsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void HelperSetObjects(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperInitiateFileUploads(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetObjects(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetFiles(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperFinalizeFileUploads(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeleteFiles(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAbortFileUploads(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	class UPlayFabDataAPI* STATIC_GetObjects(const struct FDataGetObjectsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabDataAPI* STATIC_GetFiles(const struct FDataGetFilesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabDataAPI* STATIC_FinalizeFileUploads(const struct FDataFinalizeFileUploadsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabDataAPI* STATIC_DeleteFiles(const struct FDataDeleteFilesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void DelegateOnSuccessSetObjects__DelegateSignature(const struct FDataSetObjectsResponse& Result, class UObject* customData);
	void DelegateOnSuccessInitiateFileUploads__DelegateSignature(const struct FDataInitiateFileUploadsResponse& Result, class UObject* customData);
	void DelegateOnSuccessGetObjects__DelegateSignature(const struct FDataGetObjectsResponse& Result, class UObject* customData);
	void DelegateOnSuccessGetFiles__DelegateSignature(const struct FDataGetFilesResponse& Result, class UObject* customData);
	void DelegateOnSuccessFinalizeFileUploads__DelegateSignature(const struct FDataFinalizeFileUploadsResponse& Result, class UObject* customData);
	void DelegateOnSuccessDeleteFiles__DelegateSignature(const struct FDataDeleteFilesResponse& Result, class UObject* customData);
	void DelegateOnSuccessAbortFileUploads__DelegateSignature(const struct FDataAbortFileUploadsResponse& Result, class UObject* customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
	class UPlayFabDataAPI* STATIC_AbortFileUploads(const struct FDataAbortFileUploadsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
};


// Class PlayFab.PlayFabDataModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabDataModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabDataModelDecoder");
		return ptr;
	}


	struct FDataSetObjectsResponse STATIC_decodeSetObjectsResponseResponse(class UPlayFabJsonObject* response);
	struct FDataInitiateFileUploadsResponse STATIC_decodeInitiateFileUploadsResponseResponse(class UPlayFabJsonObject* response);
	struct FDataGetObjectsResponse STATIC_decodeGetObjectsResponseResponse(class UPlayFabJsonObject* response);
	struct FDataGetFilesResponse STATIC_decodeGetFilesResponseResponse(class UPlayFabJsonObject* response);
	struct FDataFinalizeFileUploadsResponse STATIC_decodeFinalizeFileUploadsResponseResponse(class UPlayFabJsonObject* response);
	struct FDataDeleteFilesResponse STATIC_decodeDeleteFilesResponseResponse(class UPlayFabJsonObject* response);
	struct FDataAbortFileUploadsResponse STATIC_decodeAbortFileUploadsResponseResponse(class UPlayFabJsonObject* response);
};


// Class PlayFab.PlayFabEventsAPI
// 0x00D0 (0x00F8 - 0x0028)
class UPlayFabEventsAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabEventsAPI");
		return ptr;
	}


	class UPlayFabEventsAPI* STATIC_WriteEvents(const struct FEventsWriteEventsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void HelperWriteEvents(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void DelegateOnSuccessWriteEvents__DelegateSignature(const struct FEventsWriteEventsResponse& Result, class UObject* customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
};


// Class PlayFab.PlayFabEventsModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabEventsModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabEventsModelDecoder");
		return ptr;
	}


	struct FEventsWriteEventsResponse STATIC_decodeWriteEventsResponseResponse(class UPlayFabJsonObject* response);
};


// Class PlayFab.PlayFabGroupsAPI
// 0x0250 (0x0278 - 0x0028)
class UPlayFabGroupsAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x1D8];                                     // 0x0038(0x01D8) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x0210(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0228(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabGroupsAPI");
		return ptr;
	}


	class UPlayFabGroupsAPI* STATIC_UpdateRole(const struct FGroupsUpdateGroupRoleRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_UpdateGroup(const struct FGroupsUpdateGroupRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_UnblockEntity(const struct FGroupsUnblockEntityRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_RemoveMembers(const struct FGroupsRemoveMembersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_RemoveGroupInvitation(const struct FGroupsRemoveGroupInvitationRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_RemoveGroupApplication(const struct FGroupsRemoveGroupApplicationRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_ListMembershipOpportunities(const struct FGroupsListMembershipOpportunitiesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_ListMembership(const struct FGroupsListMembershipRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_ListGroupMembers(const struct FGroupsListGroupMembersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_ListGroupInvitations(const struct FGroupsListGroupInvitationsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_ListGroupBlocks(const struct FGroupsListGroupBlocksRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_ListGroupApplications(const struct FGroupsListGroupApplicationsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_IsMember(const struct FGroupsIsMemberRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_InviteToGroup(const struct FGroupsInviteToGroupRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void HelperUpdateRole(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnblockEntity(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRemoveMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRemoveGroupInvitation(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRemoveGroupApplication(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListMembershipOpportunities(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListMembership(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListGroupMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListGroupInvitations(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListGroupBlocks(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListGroupApplications(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperIsMember(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperInviteToGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeleteRole(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeleteGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperCreateRole(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperCreateGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperChangeMemberRole(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperBlockEntity(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperApplyToGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAcceptGroupInvitation(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAcceptGroupApplication(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	class UPlayFabGroupsAPI* STATIC_GetGroup(const struct FGroupsGetGroupRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_DeleteRole(const struct FGroupsDeleteRoleRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_DeleteGroup(const struct FGroupsDeleteGroupRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void DelegateOnSuccessUpdateRole__DelegateSignature(const struct FGroupsUpdateGroupRoleResponse& Result, class UObject* customData);
	void DelegateOnSuccessUpdateGroup__DelegateSignature(const struct FGroupsUpdateGroupResponse& Result, class UObject* customData);
	void DelegateOnSuccessUnblockEntity__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessRemoveMembers__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessRemoveGroupInvitation__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessRemoveGroupApplication__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessListMembershipOpportunities__DelegateSignature(const struct FGroupsListMembershipOpportunitiesResponse& Result, class UObject* customData);
	void DelegateOnSuccessListMembership__DelegateSignature(const struct FGroupsListMembershipResponse& Result, class UObject* customData);
	void DelegateOnSuccessListGroupMembers__DelegateSignature(const struct FGroupsListGroupMembersResponse& Result, class UObject* customData);
	void DelegateOnSuccessListGroupInvitations__DelegateSignature(const struct FGroupsListGroupInvitationsResponse& Result, class UObject* customData);
	void DelegateOnSuccessListGroupBlocks__DelegateSignature(const struct FGroupsListGroupBlocksResponse& Result, class UObject* customData);
	void DelegateOnSuccessListGroupApplications__DelegateSignature(const struct FGroupsListGroupApplicationsResponse& Result, class UObject* customData);
	void DelegateOnSuccessIsMember__DelegateSignature(const struct FGroupsIsMemberResponse& Result, class UObject* customData);
	void DelegateOnSuccessInviteToGroup__DelegateSignature(const struct FGroupsInviteToGroupResponse& Result, class UObject* customData);
	void DelegateOnSuccessGetGroup__DelegateSignature(const struct FGroupsGetGroupResponse& Result, class UObject* customData);
	void DelegateOnSuccessDeleteRole__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessDeleteGroup__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessCreateRole__DelegateSignature(const struct FGroupsCreateGroupRoleResponse& Result, class UObject* customData);
	void DelegateOnSuccessCreateGroup__DelegateSignature(const struct FGroupsCreateGroupResponse& Result, class UObject* customData);
	void DelegateOnSuccessChangeMemberRole__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessBlockEntity__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessApplyToGroup__DelegateSignature(const struct FGroupsApplyToGroupResponse& Result, class UObject* customData);
	void DelegateOnSuccessAddMembers__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessAcceptGroupInvitation__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessAcceptGroupApplication__DelegateSignature(const struct FGroupsEmptyResponse& Result, class UObject* customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_CreateRole(const struct FGroupsCreateGroupRoleRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_CreateGroup(const struct FGroupsCreateGroupRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_ChangeMemberRole(const struct FGroupsChangeMemberRoleRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_BlockEntity(const struct FGroupsBlockEntityRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_ApplyToGroup(const struct FGroupsApplyToGroupRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_AddMembers(const struct FGroupsAddMembersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_AcceptGroupInvitation(const struct FGroupsAcceptGroupInvitationRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabGroupsAPI* STATIC_AcceptGroupApplication(const struct FGroupsAcceptGroupApplicationRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
};


// Class PlayFab.PlayFabGroupsModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabGroupsModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabGroupsModelDecoder");
		return ptr;
	}


	struct FGroupsUpdateGroupRoleResponse STATIC_decodeUpdateGroupRoleResponseResponse(class UPlayFabJsonObject* response);
	struct FGroupsUpdateGroupResponse STATIC_decodeUpdateGroupResponseResponse(class UPlayFabJsonObject* response);
	struct FGroupsListMembershipResponse STATIC_decodeListMembershipResponseResponse(class UPlayFabJsonObject* response);
	struct FGroupsListMembershipOpportunitiesResponse STATIC_decodeListMembershipOpportunitiesResponseResponse(class UPlayFabJsonObject* response);
	struct FGroupsListGroupMembersResponse STATIC_decodeListGroupMembersResponseResponse(class UPlayFabJsonObject* response);
	struct FGroupsListGroupInvitationsResponse STATIC_decodeListGroupInvitationsResponseResponse(class UPlayFabJsonObject* response);
	struct FGroupsListGroupBlocksResponse STATIC_decodeListGroupBlocksResponseResponse(class UPlayFabJsonObject* response);
	struct FGroupsListGroupApplicationsResponse STATIC_decodeListGroupApplicationsResponseResponse(class UPlayFabJsonObject* response);
	struct FGroupsIsMemberResponse STATIC_decodeIsMemberResponseResponse(class UPlayFabJsonObject* response);
	struct FGroupsInviteToGroupResponse STATIC_decodeInviteToGroupResponseResponse(class UPlayFabJsonObject* response);
	struct FGroupsGetGroupResponse STATIC_decodeGetGroupResponseResponse(class UPlayFabJsonObject* response);
	struct FGroupsEmptyResponse STATIC_decodeEmptyResponseResponse(class UPlayFabJsonObject* response);
	struct FGroupsCreateGroupRoleResponse STATIC_decodeCreateGroupRoleResponseResponse(class UPlayFabJsonObject* response);
	struct FGroupsCreateGroupResponse STATIC_decodeCreateGroupResponseResponse(class UPlayFabJsonObject* response);
	struct FGroupsApplyToGroupResponse STATIC_decodeApplyToGroupResponseResponse(class UPlayFabJsonObject* response);
};


// Class PlayFab.PlayFabJsonObject
// 0x0010 (0x0038 - 0x0028)
class UPlayFabJsonObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabJsonObject");
		return ptr;
	}


	void SetStringField(const struct FString& FieldName, const struct FString& StringValue);
	void SetStringArrayField(const struct FString& FieldName, TArray<struct FString> StringArray);
	void SetObjectField(const struct FString& FieldName, class UPlayFabJsonObject* JsonObject);
	void SetObjectArrayField(const struct FString& FieldName, TArray<class UPlayFabJsonObject*> ObjectArray);
	void SetNumberField(const struct FString& FieldName, float Number);
	void SetNumberArrayField(const struct FString& FieldName, TArray<float> NumberArray);
	void SetFieldNull(const struct FString& FieldName);
	void SetField(const struct FString& FieldName, class UPlayFabJsonValue* JsonValue);
	void SetBoolField(const struct FString& FieldName, bool InValue);
	void SetBoolArrayField(const struct FString& FieldName, TArray<bool> BoolArray);
	void SetArrayField(const struct FString& FieldName, TArray<class UPlayFabJsonValue*> inArray);
	void Reset();
	void RemoveField(const struct FString& FieldName);
	void MergeJsonObject(class UPlayFabJsonObject* InJsonObject, bool Overwrite);
	bool HasField(const struct FString& FieldName);
	struct FString GetStringField(const struct FString& FieldName);
	TArray<struct FString> GetStringArrayField(const struct FString& FieldName);
	class UPlayFabJsonObject* GetObjectField(const struct FString& FieldName);
	TArray<class UPlayFabJsonObject*> GetObjectArrayField(const struct FString& FieldName);
	float GetNumberField(const struct FString& FieldName);
	TArray<float> GetNumberArrayField(const struct FString& FieldName);
	TArray<struct FString> GetFieldNames();
	class UPlayFabJsonValue* GetField(const struct FString& FieldName);
	bool GetBoolField(const struct FString& FieldName);
	TArray<bool> GetBoolArrayField(const struct FString& FieldName);
	TArray<class UPlayFabJsonValue*> GetArrayField(const struct FString& FieldName);
	struct FString EncodeJson();
	bool DecodeJson(const struct FString& JsonString);
	class UPlayFabJsonObject* STATIC_ConstructJsonObject(class UObject* WorldContextObject);
};


// Class PlayFab.PlayFabJsonValue
// 0x0010 (0x0038 - 0x0028)
class UPlayFabJsonValue : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabJsonValue");
		return ptr;
	}


	bool IsNull();
	struct FString GetTypeString();
	TEnumAsByte<EPFJson> GetType();
	class UPlayFabJsonValue* STATIC_ConstructJsonValueString(class UObject* WorldContextObject, const struct FString& StringValue);
	class UPlayFabJsonValue* STATIC_ConstructJsonValueObject(class UObject* WorldContextObject, class UPlayFabJsonObject* JsonObject);
	class UPlayFabJsonValue* STATIC_ConstructJsonValueNumber(class UObject* WorldContextObject, float Number);
	class UPlayFabJsonValue* STATIC_ConstructJsonValueBool(class UObject* WorldContextObject, bool InValue);
	class UPlayFabJsonValue* STATIC_ConstructJsonValueArray(class UObject* WorldContextObject, TArray<class UPlayFabJsonValue*> inArray);
	struct FString AsString();
	class UPlayFabJsonObject* AsObject();
	float AsNumber();
	bool AsBool();
	TArray<class UPlayFabJsonValue*> AsArray();
};


// Class PlayFab.PlayFabLocalizationAPI
// 0x00D0 (0x00F8 - 0x0028)
class UPlayFabLocalizationAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0038(0x0058) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabLocalizationAPI");
		return ptr;
	}


	void HelperGetLanguageList(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	class UPlayFabLocalizationAPI* STATIC_GetLanguageList(const struct FLocalizationGetLanguageListRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void DelegateOnSuccessGetLanguageList__DelegateSignature(const struct FLocalizationGetLanguageListResponse& Result, class UObject* customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
};


// Class PlayFab.PlayFabLocalizationModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabLocalizationModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabLocalizationModelDecoder");
		return ptr;
	}


	struct FLocalizationGetLanguageListResponse STATIC_decodeGetLanguageListResponseResponse(class UPlayFabJsonObject* response);
};


// Class PlayFab.PlayFabMatchmakerAPI
// 0x0110 (0x0138 - 0x0028)
class UPlayFabMatchmakerAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x98];                                      // 0x0038(0x0098) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00E8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabMatchmakerAPI");
		return ptr;
	}


	class UPlayFabMatchmakerAPI* STATIC_UserInfo(const struct FMatchmakerUserInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMatchmakerAPI* STATIC_StartGame(const struct FMatchmakerStartGameRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMatchmakerAPI* STATIC_PlayerLeft(const struct FMatchmakerPlayerLeftRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMatchmakerAPI* STATIC_PlayerJoined(const struct FMatchmakerPlayerJoinedRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void HelperUserInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperStartGame(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperPlayerLeft(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperPlayerJoined(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAuthUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void DelegateOnSuccessUserInfo__DelegateSignature(const struct FMatchmakerUserInfoResponse& Result, class UObject* customData);
	void DelegateOnSuccessStartGame__DelegateSignature(const struct FMatchmakerStartGameResponse& Result, class UObject* customData);
	void DelegateOnSuccessPlayerLeft__DelegateSignature(const struct FMatchmakerPlayerLeftResponse& Result, class UObject* customData);
	void DelegateOnSuccessPlayerJoined__DelegateSignature(const struct FMatchmakerPlayerJoinedResponse& Result, class UObject* customData);
	void DelegateOnSuccessAuthUser__DelegateSignature(const struct FMatchmakerAuthUserResponse& Result, class UObject* customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
	class UPlayFabMatchmakerAPI* STATIC_AuthUser(const struct FMatchmakerAuthUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
};


// Class PlayFab.PlayFabMatchmakerModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabMatchmakerModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabMatchmakerModelDecoder");
		return ptr;
	}


	struct FMatchmakerUserInfoResponse STATIC_decodeUserInfoResponseResponse(class UPlayFabJsonObject* response);
	struct FMatchmakerStartGameResponse STATIC_decodeStartGameResponseResponse(class UPlayFabJsonObject* response);
	struct FMatchmakerPlayerLeftResponse STATIC_decodePlayerLeftResponseResponse(class UPlayFabJsonObject* response);
	struct FMatchmakerPlayerJoinedResponse STATIC_decodePlayerJoinedResponseResponse(class UPlayFabJsonObject* response);
	struct FMatchmakerAuthUserResponse STATIC_decodeAuthUserResponseResponse(class UPlayFabJsonObject* response);
};


// Class PlayFab.PlayFabMultiplayerAPI
// 0x0320 (0x0348 - 0x0028)
class UPlayFabMultiplayerAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x2A8];                                     // 0x0038(0x02A8) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x02E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x02E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x02F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x02F8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabMultiplayerAPI");
		return ptr;
	}


	class UPlayFabMultiplayerAPI* STATIC_UploadCertificate(const struct FMultiplayerUploadCertificateRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_UpdateBuildRegions(const struct FMultiplayerUpdateBuildRegionsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_ShutdownMultiplayerServer(const struct FMultiplayerShutdownMultiplayerServerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_RolloverContainerRegistryCredentials(const struct FMultiplayerRolloverContainerRegistryCredentialsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_RequestMultiplayerServer(const struct FMultiplayerRequestMultiplayerServerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_ListVirtualMachineSummaries(const struct FMultiplayerListVirtualMachineSummariesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_ListQosServers(const struct FMultiplayerListQosServersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_ListMultiplayerServers(const struct FMultiplayerListMultiplayerServersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_ListMatchmakingTicketsForPlayer(const struct FMultiplayerListMatchmakingTicketsForPlayerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_ListContainerImageTags(const struct FMultiplayerListContainerImageTagsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_ListContainerImages(const struct FMultiplayerListContainerImagesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_ListCertificateSummaries(const struct FMultiplayerListCertificateSummariesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_ListBuildSummaries(const struct FMultiplayerListBuildSummariesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_ListAssetSummaries(const struct FMultiplayerListAssetSummariesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_ListArchivedMultiplayerServers(const struct FMultiplayerListMultiplayerServersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_JoinMatchmakingTicket(const struct FMultiplayerJoinMatchmakingTicketRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void HelperUploadCertificate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateBuildRegions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperShutdownMultiplayerServer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRolloverContainerRegistryCredentials(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRequestMultiplayerServer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListVirtualMachineSummaries(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListQosServers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListMultiplayerServers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListMatchmakingTicketsForPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListContainerImageTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListContainerImages(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListCertificateSummaries(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListBuildSummaries(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListAssetSummaries(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperListArchivedMultiplayerServers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperJoinMatchmakingTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetTitleMultiplayerServersQuotas(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetTitleEnabledForMultiplayerServersStatus(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetRemoteLoginEndpoint(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetQueueStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetMultiplayerServerDetails(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetMatchmakingTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetMatch(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetContainerRegistryCredentials(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetBuild(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetAssetUploadUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperEnableMultiplayerServersForTitle(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeleteRemoteUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeleteCertificate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeleteBuild(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeleteAsset(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperCreateServerMatchmakingTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperCreateRemoteUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperCreateMatchmakingTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperCreateBuildWithManagedContainer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperCreateBuildWithCustomContainer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperCancelMatchmakingTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperCancelAllMatchmakingTicketsForPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	class UPlayFabMultiplayerAPI* STATIC_GetTitleMultiplayerServersQuotas(const struct FMultiplayerGetTitleMultiplayerServersQuotasRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_GetTitleEnabledForMultiplayerServersStatus(const struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_GetRemoteLoginEndpoint(const struct FMultiplayerGetRemoteLoginEndpointRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_GetQueueStatistics(const struct FMultiplayerGetQueueStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_GetMultiplayerServerDetails(const struct FMultiplayerGetMultiplayerServerDetailsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_GetMatchmakingTicket(const struct FMultiplayerGetMatchmakingTicketRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_GetMatch(const struct FMultiplayerGetMatchRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_GetContainerRegistryCredentials(const struct FMultiplayerGetContainerRegistryCredentialsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_GetBuild(const struct FMultiplayerGetBuildRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_GetAssetUploadUrl(const struct FMultiplayerGetAssetUploadUrlRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_EnableMultiplayerServersForTitle(const struct FMultiplayerEnableMultiplayerServersForTitleRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_DeleteRemoteUser(const struct FMultiplayerDeleteRemoteUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_DeleteCertificate(const struct FMultiplayerDeleteCertificateRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_DeleteBuild(const struct FMultiplayerDeleteBuildRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_DeleteAsset(const struct FMultiplayerDeleteAssetRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void DelegateOnSuccessUploadCertificate__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessUpdateBuildRegions__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessShutdownMultiplayerServer__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessRolloverContainerRegistryCredentials__DelegateSignature(const struct FMultiplayerRolloverContainerRegistryCredentialsResponse& Result, class UObject* customData);
	void DelegateOnSuccessRequestMultiplayerServer__DelegateSignature(const struct FMultiplayerRequestMultiplayerServerResponse& Result, class UObject* customData);
	void DelegateOnSuccessListVirtualMachineSummaries__DelegateSignature(const struct FMultiplayerListVirtualMachineSummariesResponse& Result, class UObject* customData);
	void DelegateOnSuccessListQosServers__DelegateSignature(const struct FMultiplayerListQosServersResponse& Result, class UObject* customData);
	void DelegateOnSuccessListMultiplayerServers__DelegateSignature(const struct FMultiplayerListMultiplayerServersResponse& Result, class UObject* customData);
	void DelegateOnSuccessListMatchmakingTicketsForPlayer__DelegateSignature(const struct FMultiplayerListMatchmakingTicketsForPlayerResult& Result, class UObject* customData);
	void DelegateOnSuccessListContainerImageTags__DelegateSignature(const struct FMultiplayerListContainerImageTagsResponse& Result, class UObject* customData);
	void DelegateOnSuccessListContainerImages__DelegateSignature(const struct FMultiplayerListContainerImagesResponse& Result, class UObject* customData);
	void DelegateOnSuccessListCertificateSummaries__DelegateSignature(const struct FMultiplayerListCertificateSummariesResponse& Result, class UObject* customData);
	void DelegateOnSuccessListBuildSummaries__DelegateSignature(const struct FMultiplayerListBuildSummariesResponse& Result, class UObject* customData);
	void DelegateOnSuccessListAssetSummaries__DelegateSignature(const struct FMultiplayerListAssetSummariesResponse& Result, class UObject* customData);
	void DelegateOnSuccessListArchivedMultiplayerServers__DelegateSignature(const struct FMultiplayerListMultiplayerServersResponse& Result, class UObject* customData);
	void DelegateOnSuccessJoinMatchmakingTicket__DelegateSignature(const struct FMultiplayerJoinMatchmakingTicketResult& Result, class UObject* customData);
	void DelegateOnSuccessGetTitleMultiplayerServersQuotas__DelegateSignature(const struct FMultiplayerGetTitleMultiplayerServersQuotasResponse& Result, class UObject* customData);
	void DelegateOnSuccessGetTitleEnabledForMultiplayerServersStatus__DelegateSignature(const struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse& Result, class UObject* customData);
	void DelegateOnSuccessGetRemoteLoginEndpoint__DelegateSignature(const struct FMultiplayerGetRemoteLoginEndpointResponse& Result, class UObject* customData);
	void DelegateOnSuccessGetQueueStatistics__DelegateSignature(const struct FMultiplayerGetQueueStatisticsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetMultiplayerServerDetails__DelegateSignature(const struct FMultiplayerGetMultiplayerServerDetailsResponse& Result, class UObject* customData);
	void DelegateOnSuccessGetMatchmakingTicket__DelegateSignature(const struct FMultiplayerGetMatchmakingTicketResult& Result, class UObject* customData);
	void DelegateOnSuccessGetMatch__DelegateSignature(const struct FMultiplayerGetMatchResult& Result, class UObject* customData);
	void DelegateOnSuccessGetContainerRegistryCredentials__DelegateSignature(const struct FMultiplayerGetContainerRegistryCredentialsResponse& Result, class UObject* customData);
	void DelegateOnSuccessGetBuild__DelegateSignature(const struct FMultiplayerGetBuildResponse& Result, class UObject* customData);
	void DelegateOnSuccessGetAssetUploadUrl__DelegateSignature(const struct FMultiplayerGetAssetUploadUrlResponse& Result, class UObject* customData);
	void DelegateOnSuccessEnableMultiplayerServersForTitle__DelegateSignature(const struct FMultiplayerEnableMultiplayerServersForTitleResponse& Result, class UObject* customData);
	void DelegateOnSuccessDeleteRemoteUser__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessDeleteCertificate__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessDeleteBuild__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessDeleteAsset__DelegateSignature(const struct FMultiplayerEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessCreateServerMatchmakingTicket__DelegateSignature(const struct FMultiplayerCreateMatchmakingTicketResult& Result, class UObject* customData);
	void DelegateOnSuccessCreateRemoteUser__DelegateSignature(const struct FMultiplayerCreateRemoteUserResponse& Result, class UObject* customData);
	void DelegateOnSuccessCreateMatchmakingTicket__DelegateSignature(const struct FMultiplayerCreateMatchmakingTicketResult& Result, class UObject* customData);
	void DelegateOnSuccessCreateBuildWithManagedContainer__DelegateSignature(const struct FMultiplayerCreateBuildWithManagedContainerResponse& Result, class UObject* customData);
	void DelegateOnSuccessCreateBuildWithCustomContainer__DelegateSignature(const struct FMultiplayerCreateBuildWithCustomContainerResponse& Result, class UObject* customData);
	void DelegateOnSuccessCancelMatchmakingTicket__DelegateSignature(const struct FMultiplayerCancelMatchmakingTicketResult& Result, class UObject* customData);
	void DelegateOnSuccessCancelAllMatchmakingTicketsForPlayer__DelegateSignature(const struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult& Result, class UObject* customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_CreateServerMatchmakingTicket(const struct FMultiplayerCreateServerMatchmakingTicketRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_CreateRemoteUser(const struct FMultiplayerCreateRemoteUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_CreateMatchmakingTicket(const struct FMultiplayerCreateMatchmakingTicketRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_CreateBuildWithManagedContainer(const struct FMultiplayerCreateBuildWithManagedContainerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_CreateBuildWithCustomContainer(const struct FMultiplayerCreateBuildWithCustomContainerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_CancelMatchmakingTicket(const struct FMultiplayerCancelMatchmakingTicketRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabMultiplayerAPI* STATIC_CancelAllMatchmakingTicketsForPlayer(const struct FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
};


// Class PlayFab.PlayFabMultiplayerModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabMultiplayerModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabMultiplayerModelDecoder");
		return ptr;
	}


	struct FMultiplayerRolloverContainerRegistryCredentialsResponse STATIC_decodeRolloverContainerRegistryCredentialsResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerRequestMultiplayerServerResponse STATIC_decodeRequestMultiplayerServerResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerListVirtualMachineSummariesResponse STATIC_decodeListVirtualMachineSummariesResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerListQosServersResponse STATIC_decodeListQosServersResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerListMultiplayerServersResponse STATIC_decodeListMultiplayerServersResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerListMatchmakingTicketsForPlayerResult STATIC_decodeListMatchmakingTicketsForPlayerResultResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerListContainerImageTagsResponse STATIC_decodeListContainerImageTagsResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerListContainerImagesResponse STATIC_decodeListContainerImagesResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerListCertificateSummariesResponse STATIC_decodeListCertificateSummariesResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerListBuildSummariesResponse STATIC_decodeListBuildSummariesResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerListAssetSummariesResponse STATIC_decodeListAssetSummariesResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerJoinMatchmakingTicketResult STATIC_decodeJoinMatchmakingTicketResultResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerGetTitleMultiplayerServersQuotasResponse STATIC_decodeGetTitleMultiplayerServersQuotasResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse STATIC_decodeGetTitleEnabledForMultiplayerServersStatusResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerGetRemoteLoginEndpointResponse STATIC_decodeGetRemoteLoginEndpointResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerGetQueueStatisticsResult STATIC_decodeGetQueueStatisticsResultResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerGetMultiplayerServerDetailsResponse STATIC_decodeGetMultiplayerServerDetailsResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerGetMatchResult STATIC_decodeGetMatchResultResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerGetMatchmakingTicketResult STATIC_decodeGetMatchmakingTicketResultResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerGetContainerRegistryCredentialsResponse STATIC_decodeGetContainerRegistryCredentialsResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerGetBuildResponse STATIC_decodeGetBuildResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerGetAssetUploadUrlResponse STATIC_decodeGetAssetUploadUrlResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerEnableMultiplayerServersForTitleResponse STATIC_decodeEnableMultiplayerServersForTitleResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerEmptyResponse STATIC_decodeEmptyResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerCreateRemoteUserResponse STATIC_decodeCreateRemoteUserResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerCreateMatchmakingTicketResult STATIC_decodeCreateMatchmakingTicketResultResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerCreateBuildWithManagedContainerResponse STATIC_decodeCreateBuildWithManagedContainerResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerCreateBuildWithCustomContainerResponse STATIC_decodeCreateBuildWithCustomContainerResponseResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerCancelMatchmakingTicketResult STATIC_decodeCancelMatchmakingTicketResultResponse(class UPlayFabJsonObject* response);
	struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult STATIC_decodeCancelAllMatchmakingTicketsForPlayerResultResponse(class UPlayFabJsonObject* response);
};


// Class PlayFab.PlayFabProfilesAPI
// 0x0120 (0x0148 - 0x0028)
class UPlayFabProfilesAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xA8];                                      // 0x0038(0x00A8) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x00F8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabProfilesAPI");
		return ptr;
	}


	class UPlayFabProfilesAPI* STATIC_SetProfilePolicy(const struct FProfilesSetEntityProfilePolicyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabProfilesAPI* STATIC_SetProfileLanguage(const struct FProfilesSetProfileLanguageRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabProfilesAPI* STATIC_SetGlobalPolicy(const struct FProfilesSetGlobalPolicyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void HelperSetProfilePolicy(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetProfileLanguage(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetGlobalPolicy(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetProfiles(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetProfile(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetGlobalPolicy(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	class UPlayFabProfilesAPI* STATIC_GetProfiles(const struct FProfilesGetEntityProfilesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabProfilesAPI* STATIC_GetProfile(const struct FProfilesGetEntityProfileRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabProfilesAPI* STATIC_GetGlobalPolicy(const struct FProfilesGetGlobalPolicyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void DelegateOnSuccessSetProfilePolicy__DelegateSignature(const struct FProfilesSetEntityProfilePolicyResponse& Result, class UObject* customData);
	void DelegateOnSuccessSetProfileLanguage__DelegateSignature(const struct FProfilesSetProfileLanguageResponse& Result, class UObject* customData);
	void DelegateOnSuccessSetGlobalPolicy__DelegateSignature(const struct FProfilesSetGlobalPolicyResponse& Result, class UObject* customData);
	void DelegateOnSuccessGetProfiles__DelegateSignature(const struct FProfilesGetEntityProfilesResponse& Result, class UObject* customData);
	void DelegateOnSuccessGetProfile__DelegateSignature(const struct FProfilesGetEntityProfileResponse& Result, class UObject* customData);
	void DelegateOnSuccessGetGlobalPolicy__DelegateSignature(const struct FProfilesGetGlobalPolicyResponse& Result, class UObject* customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
};


// Class PlayFab.PlayFabProfilesModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabProfilesModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabProfilesModelDecoder");
		return ptr;
	}


	struct FProfilesSetProfileLanguageResponse STATIC_decodeSetProfileLanguageResponseResponse(class UPlayFabJsonObject* response);
	struct FProfilesSetGlobalPolicyResponse STATIC_decodeSetGlobalPolicyResponseResponse(class UPlayFabJsonObject* response);
	struct FProfilesSetEntityProfilePolicyResponse STATIC_decodeSetEntityProfilePolicyResponseResponse(class UPlayFabJsonObject* response);
	struct FProfilesGetGlobalPolicyResponse STATIC_decodeGetGlobalPolicyResponseResponse(class UPlayFabJsonObject* response);
	struct FProfilesGetEntityProfilesResponse STATIC_decodeGetEntityProfilesResponseResponse(class UPlayFabJsonObject* response);
	struct FProfilesGetEntityProfileResponse STATIC_decodeGetEntityProfileResponseResponse(class UPlayFabJsonObject* response);
};


// Class PlayFab.PlayFabServerAPI
// 0x08C0 (0x08E8 - 0x0028)
class UPlayFabServerAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x848];                                     // 0x0038(0x0848) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x0880(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x0888(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x0890(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0898(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabServerAPI");
		return ptr;
	}


	class UPlayFabServerAPI* STATIC_WriteTitleEvent(const struct FServerWriteTitleEventRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_WritePlayerEvent(const struct FServerWriteServerPlayerEventRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_WriteCharacterEvent(const struct FServerWriteServerCharacterEventRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UpdateUserReadOnlyData(const struct FServerUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UpdateUserPublisherReadOnlyData(const struct FServerUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UpdateUserPublisherInternalData(const struct FServerUpdateUserInternalDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UpdateUserPublisherData(const struct FServerUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UpdateUserInventoryItemCustomData(const struct FServerUpdateUserInventoryItemDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UpdateUserInternalData(const struct FServerUpdateUserInternalDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UpdateUserData(const struct FServerUpdateUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UpdateSharedGroupData(const struct FServerUpdateSharedGroupDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UpdatePlayerStatistics(const struct FServerUpdatePlayerStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UpdateCharacterStatistics(const struct FServerUpdateCharacterStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UpdateCharacterReadOnlyData(const struct FServerUpdateCharacterDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UpdateCharacterInternalData(const struct FServerUpdateCharacterDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UpdateCharacterData(const struct FServerUpdateCharacterDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UpdateBans(const struct FServerUpdateBansRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UpdateAvatarUrl(const struct FServerUpdateAvatarUrlRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UnlockContainerItem(const struct FServerUnlockContainerItemRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UnlockContainerInstance(const struct FServerUnlockContainerInstanceRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UnlinkXboxAccount(const struct FServerUnlinkXboxAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_UnlinkServerCustomId(const struct FServerUnlinkServerCustomIdRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_SubtractUserVirtualCurrency(const struct FServerSubtractUserVirtualCurrencyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_SubtractCharacterVirtualCurrency(const struct FServerSubtractCharacterVirtualCurrencyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_SetTitleInternalData(const struct FServerSetTitleDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_SetTitleData(const struct FServerSetTitleDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_SetPublisherData(const struct FServerSetPublisherDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_SetPlayerSecret(const struct FServerSetPlayerSecretRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_SetGameServerInstanceTags(const struct FServerSetGameServerInstanceTagsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_SetGameServerInstanceState(const struct FServerSetGameServerInstanceStateRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_SetGameServerInstanceData(const struct FServerSetGameServerInstanceDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_SetFriendTags(const struct FServerSetFriendTagsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_SendPushNotificationFromTemplate(const struct FServerSendPushNotificationFromTemplateRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_SendPushNotification(const struct FServerSendPushNotificationRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_SendEmailFromTemplate(const struct FServerSendEmailFromTemplateRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_SendCustomAccountRecoveryEmail(const struct FServerSendCustomAccountRecoveryEmailRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_SavePushNotificationTemplate(const struct FServerSavePushNotificationTemplateRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_RevokeInventoryItems(const struct FServerRevokeInventoryItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_RevokeInventoryItem(const struct FServerRevokeInventoryItemRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_RevokeBans(const struct FServerRevokeBansRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_RevokeAllBansForUser(const struct FServerRevokeAllBansForUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_ReportPlayer(const struct FServerReportPlayerServerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_RemoveSharedGroupMembers(const struct FServerRemoveSharedGroupMembersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_RemovePlayerTag(const struct FServerRemovePlayerTagRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_RemoveGenericID(const struct FServerRemoveGenericIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_RemoveFriend(const struct FServerRemoveFriendRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_RegisterGame(const struct FServerRegisterGameRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_RefreshGameServerInstanceHeartbeat(const struct FServerRefreshGameServerInstanceHeartbeatRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_RedeemMatchmakerTicket(const struct FServerRedeemMatchmakerTicketRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_RedeemCoupon(const struct FServerRedeemCouponRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_NotifyMatchmakerPlayerLeft(const struct FServerNotifyMatchmakerPlayerLeftRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_MoveItemToUserFromCharacter(const struct FServerMoveItemToUserFromCharacterRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_MoveItemToCharacterFromUser(const struct FServerMoveItemToCharacterFromUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_MoveItemToCharacterFromCharacter(const struct FServerMoveItemToCharacterFromCharacterRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_ModifyItemUses(const struct FServerModifyItemUsesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_LoginWithXbox(const struct FServerLoginWithXboxRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_LoginWithServerCustomId(const struct FServerLoginWithServerCustomIdRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_LinkXboxAccount(const struct FServerLinkXboxAccountRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_LinkServerCustomId(const struct FServerLinkServerCustomIdRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void HelperWriteTitleEvent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperWritePlayerEvent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperWriteCharacterEvent(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateUserReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateUserPublisherReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateUserPublisherInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateUserPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateUserInventoryItemCustomData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateUserInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateUserData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateSharedGroupData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdatePlayerStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateCharacterStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateCharacterReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateCharacterInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateCharacterData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateBans(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUpdateAvatarUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlockContainerItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlockContainerInstance(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlinkXboxAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperUnlinkServerCustomId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSubtractUserVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSubtractCharacterVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetTitleInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetTitleData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetPlayerSecret(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetGameServerInstanceTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetGameServerInstanceState(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetGameServerInstanceData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSetFriendTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSendPushNotificationFromTemplate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSendPushNotification(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSendEmailFromTemplate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSendCustomAccountRecoveryEmail(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperSavePushNotificationTemplate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRevokeInventoryItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRevokeInventoryItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRevokeBans(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRevokeAllBansForUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperReportPlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRemoveSharedGroupMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRemovePlayerTag(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRemoveGenericID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRemoveFriend(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRegisterGame(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRefreshGameServerInstanceHeartbeat(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRedeemMatchmakerTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperRedeemCoupon(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperNotifyMatchmakerPlayerLeft(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperMoveItemToUserFromCharacter(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperMoveItemToCharacterFromUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperMoveItemToCharacterFromCharacter(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperModifyItemUses(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithXbox(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLoginWithServerCustomId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLinkXboxAccount(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperLinkServerCustomId(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGrantItemsToUsers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGrantItemsToUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGrantItemsToCharacter(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGrantCharacterToUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserPublisherReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserPublisherInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserInventory(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserBans(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetUserAccountInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetTitleNews(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetTitleInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetTitleData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetTime(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetSharedGroupData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetServerCustomIDsFromPlayFabIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetRandomResultTables(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPublisherData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayFabIDsFromXboxLiveIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayFabIDsFromSteamIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayFabIDsFromPSNAccountIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayFabIDsFromNintendoSwitchDeviceIds(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayFabIDsFromGenericIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayFabIDsFromFacebookInstantGamesIds(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayFabIDsFromFacebookIDs(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerTags(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerStatisticVersions(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayersInSegment(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerSegments(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerProfile(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetPlayerCombinedInfo(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetLeaderboardForUserCharacters(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetLeaderboardAroundUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetLeaderboardAroundCharacter(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetLeaderboard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetFriendsList(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetFriendLeaderboard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetContentDownloadUrl(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetCharacterStatistics(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetCharacterReadOnlyData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetCharacterLeaderboard(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetCharacterInventory(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetCharacterInternalData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetCharacterData(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetCatalogItems(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetAllUsersCharacters(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperGetAllSegments(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperExecuteCloudScript(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperEvaluateRandomResultTable(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeregisterGame(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeleteSharedGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeletePushNotificationTemplate(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeletePlayer(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperDeleteCharacterFromUser(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperCreateSharedGroup(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperConsumeItem(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperBanUsers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAwardSteamAchievement(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAuthenticateSessionTicket(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddUserVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddSharedGroupMembers(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddPlayerTag(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddGenericID(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddFriend(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	void HelperAddCharacterVirtualCurrency(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
	class UPlayFabServerAPI* STATIC_GrantItemsToUsers(const struct FServerGrantItemsToUsersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GrantItemsToUser(const struct FServerGrantItemsToUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GrantItemsToCharacter(const struct FServerGrantItemsToCharacterRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GrantCharacterToUser(const struct FServerGrantCharacterToUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetUserReadOnlyData(const struct FServerGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetUserPublisherReadOnlyData(const struct FServerGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetUserPublisherInternalData(const struct FServerGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetUserPublisherData(const struct FServerGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetUserInventory(const struct FServerGetUserInventoryRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetUserInternalData(const struct FServerGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetUserData(const struct FServerGetUserDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetUserBans(const struct FServerGetUserBansRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetUserAccountInfo(const struct FServerGetUserAccountInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetTitleNews(const struct FServerGetTitleNewsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetTitleInternalData(const struct FServerGetTitleDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetTitleData(const struct FServerGetTitleDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetTime(const struct FServerGetTimeRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetSharedGroupData(const struct FServerGetSharedGroupDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetServerCustomIDsFromPlayFabIDs(const struct FServerGetServerCustomIDsFromPlayFabIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetRandomResultTables(const struct FServerGetRandomResultTablesRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetPublisherData(const struct FServerGetPublisherDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromXboxLiveIDs(const struct FServerGetPlayFabIDsFromXboxLiveIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromSteamIDs(const struct FServerGetPlayFabIDsFromSteamIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromPSNAccountIDs(const struct FServerGetPlayFabIDsFromPSNAccountIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromNintendoSwitchDeviceIds(const struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromGenericIDs(const struct FServerGetPlayFabIDsFromGenericIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromFacebookInstantGamesIds(const struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromFacebookIDs(const struct FServerGetPlayFabIDsFromFacebookIDsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetPlayerTags(const struct FServerGetPlayerTagsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetPlayerStatisticVersions(const struct FServerGetPlayerStatisticVersionsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetPlayerStatistics(const struct FServerGetPlayerStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetPlayersInSegment(const struct FServerGetPlayersInSegmentRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetPlayerSegments(const struct FServerGetPlayersSegmentsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetPlayerProfile(const struct FServerGetPlayerProfileRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetPlayerCombinedInfo(const struct FServerGetPlayerCombinedInfoRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetLeaderboardForUserCharacters(const struct FServerGetLeaderboardForUsersCharactersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetLeaderboardAroundUser(const struct FServerGetLeaderboardAroundUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetLeaderboardAroundCharacter(const struct FServerGetLeaderboardAroundCharacterRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetLeaderboard(const struct FServerGetLeaderboardRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetFriendsList(const struct FServerGetFriendsListRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetFriendLeaderboard(const struct FServerGetFriendLeaderboardRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetContentDownloadUrl(const struct FServerGetContentDownloadUrlRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetCharacterStatistics(const struct FServerGetCharacterStatisticsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetCharacterReadOnlyData(const struct FServerGetCharacterDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetCharacterLeaderboard(const struct FServerGetCharacterLeaderboardRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetCharacterInventory(const struct FServerGetCharacterInventoryRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetCharacterInternalData(const struct FServerGetCharacterDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetCharacterData(const struct FServerGetCharacterDataRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetCatalogItems(const struct FServerGetCatalogItemsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetAllUsersCharacters(const struct FServerListUsersCharactersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_GetAllSegments(const struct FServerGetAllSegmentsRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_ExecuteCloudScript(const struct FServerExecuteCloudScriptServerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_EvaluateRandomResultTable(const struct FServerEvaluateRandomResultTableRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_DeregisterGame(const struct FServerDeregisterGameRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_DeleteSharedGroup(const struct FServerDeleteSharedGroupRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_DeletePushNotificationTemplate(const struct FServerDeletePushNotificationTemplateRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_DeletePlayer(const struct FServerDeletePlayerRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_DeleteCharacterFromUser(const struct FServerDeleteCharacterFromUserRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	void DelegateOnSuccessWriteTitleEvent__DelegateSignature(const struct FServerWriteEventResponse& Result, class UObject* customData);
	void DelegateOnSuccessWritePlayerEvent__DelegateSignature(const struct FServerWriteEventResponse& Result, class UObject* customData);
	void DelegateOnSuccessWriteCharacterEvent__DelegateSignature(const struct FServerWriteEventResponse& Result, class UObject* customData);
	void DelegateOnSuccessUpdateUserReadOnlyData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateUserPublisherReadOnlyData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateUserPublisherInternalData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateUserPublisherData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateUserInventoryItemCustomData__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessUpdateUserInternalData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateUserData__DelegateSignature(const struct FServerUpdateUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateSharedGroupData__DelegateSignature(const struct FServerUpdateSharedGroupDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdatePlayerStatistics__DelegateSignature(const struct FServerUpdatePlayerStatisticsResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateCharacterStatistics__DelegateSignature(const struct FServerUpdateCharacterStatisticsResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateCharacterReadOnlyData__DelegateSignature(const struct FServerUpdateCharacterDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateCharacterInternalData__DelegateSignature(const struct FServerUpdateCharacterDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateCharacterData__DelegateSignature(const struct FServerUpdateCharacterDataResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateBans__DelegateSignature(const struct FServerUpdateBansResult& Result, class UObject* customData);
	void DelegateOnSuccessUpdateAvatarUrl__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessUnlockContainerItem__DelegateSignature(const struct FServerUnlockContainerItemResult& Result, class UObject* customData);
	void DelegateOnSuccessUnlockContainerInstance__DelegateSignature(const struct FServerUnlockContainerItemResult& Result, class UObject* customData);
	void DelegateOnSuccessUnlinkXboxAccount__DelegateSignature(const struct FServerUnlinkXboxAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessUnlinkServerCustomId__DelegateSignature(const struct FServerUnlinkServerCustomIdResult& Result, class UObject* customData);
	void DelegateOnSuccessSubtractUserVirtualCurrency__DelegateSignature(const struct FServerModifyUserVirtualCurrencyResult& Result, class UObject* customData);
	void DelegateOnSuccessSubtractCharacterVirtualCurrency__DelegateSignature(const struct FServerModifyCharacterVirtualCurrencyResult& Result, class UObject* customData);
	void DelegateOnSuccessSetTitleInternalData__DelegateSignature(const struct FServerSetTitleDataResult& Result, class UObject* customData);
	void DelegateOnSuccessSetTitleData__DelegateSignature(const struct FServerSetTitleDataResult& Result, class UObject* customData);
	void DelegateOnSuccessSetPublisherData__DelegateSignature(const struct FServerSetPublisherDataResult& Result, class UObject* customData);
	void DelegateOnSuccessSetPlayerSecret__DelegateSignature(const struct FServerSetPlayerSecretResult& Result, class UObject* customData);
	void DelegateOnSuccessSetGameServerInstanceTags__DelegateSignature(const struct FServerSetGameServerInstanceTagsResult& Result, class UObject* customData);
	void DelegateOnSuccessSetGameServerInstanceState__DelegateSignature(const struct FServerSetGameServerInstanceStateResult& Result, class UObject* customData);
	void DelegateOnSuccessSetGameServerInstanceData__DelegateSignature(const struct FServerSetGameServerInstanceDataResult& Result, class UObject* customData);
	void DelegateOnSuccessSetFriendTags__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessSendPushNotificationFromTemplate__DelegateSignature(const struct FServerSendPushNotificationResult& Result, class UObject* customData);
	void DelegateOnSuccessSendPushNotification__DelegateSignature(const struct FServerSendPushNotificationResult& Result, class UObject* customData);
	void DelegateOnSuccessSendEmailFromTemplate__DelegateSignature(const struct FServerSendEmailFromTemplateResult& Result, class UObject* customData);
	void DelegateOnSuccessSendCustomAccountRecoveryEmail__DelegateSignature(const struct FServerSendCustomAccountRecoveryEmailResult& Result, class UObject* customData);
	void DelegateOnSuccessSavePushNotificationTemplate__DelegateSignature(const struct FServerSavePushNotificationTemplateResult& Result, class UObject* customData);
	void DelegateOnSuccessRevokeInventoryItems__DelegateSignature(const struct FServerRevokeInventoryItemsResult& Result, class UObject* customData);
	void DelegateOnSuccessRevokeInventoryItem__DelegateSignature(const struct FServerRevokeInventoryResult& Result, class UObject* customData);
	void DelegateOnSuccessRevokeBans__DelegateSignature(const struct FServerRevokeBansResult& Result, class UObject* customData);
	void DelegateOnSuccessRevokeAllBansForUser__DelegateSignature(const struct FServerRevokeAllBansForUserResult& Result, class UObject* customData);
	void DelegateOnSuccessReportPlayer__DelegateSignature(const struct FServerReportPlayerServerResult& Result, class UObject* customData);
	void DelegateOnSuccessRemoveSharedGroupMembers__DelegateSignature(const struct FServerRemoveSharedGroupMembersResult& Result, class UObject* customData);
	void DelegateOnSuccessRemovePlayerTag__DelegateSignature(const struct FServerRemovePlayerTagResult& Result, class UObject* customData);
	void DelegateOnSuccessRemoveGenericID__DelegateSignature(const struct FServerEmptyResult& Result, class UObject* customData);
	void DelegateOnSuccessRemoveFriend__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessRegisterGame__DelegateSignature(const struct FServerRegisterGameResponse& Result, class UObject* customData);
	void DelegateOnSuccessRefreshGameServerInstanceHeartbeat__DelegateSignature(const struct FServerRefreshGameServerInstanceHeartbeatResult& Result, class UObject* customData);
	void DelegateOnSuccessRedeemMatchmakerTicket__DelegateSignature(const struct FServerRedeemMatchmakerTicketResult& Result, class UObject* customData);
	void DelegateOnSuccessRedeemCoupon__DelegateSignature(const struct FServerRedeemCouponResult& Result, class UObject* customData);
	void DelegateOnSuccessNotifyMatchmakerPlayerLeft__DelegateSignature(const struct FServerNotifyMatchmakerPlayerLeftResult& Result, class UObject* customData);
	void DelegateOnSuccessMoveItemToUserFromCharacter__DelegateSignature(const struct FServerMoveItemToUserFromCharacterResult& Result, class UObject* customData);
	void DelegateOnSuccessMoveItemToCharacterFromUser__DelegateSignature(const struct FServerMoveItemToCharacterFromUserResult& Result, class UObject* customData);
	void DelegateOnSuccessMoveItemToCharacterFromCharacter__DelegateSignature(const struct FServerMoveItemToCharacterFromCharacterResult& Result, class UObject* customData);
	void DelegateOnSuccessModifyItemUses__DelegateSignature(const struct FServerModifyItemUsesResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithXbox__DelegateSignature(const struct FServerServerLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLoginWithServerCustomId__DelegateSignature(const struct FServerServerLoginResult& Result, class UObject* customData);
	void DelegateOnSuccessLinkXboxAccount__DelegateSignature(const struct FServerLinkXboxAccountResult& Result, class UObject* customData);
	void DelegateOnSuccessLinkServerCustomId__DelegateSignature(const struct FServerLinkServerCustomIdResult& Result, class UObject* customData);
	void DelegateOnSuccessGrantItemsToUsers__DelegateSignature(const struct FServerGrantItemsToUsersResult& Result, class UObject* customData);
	void DelegateOnSuccessGrantItemsToUser__DelegateSignature(const struct FServerGrantItemsToUserResult& Result, class UObject* customData);
	void DelegateOnSuccessGrantItemsToCharacter__DelegateSignature(const struct FServerGrantItemsToCharacterResult& Result, class UObject* customData);
	void DelegateOnSuccessGrantCharacterToUser__DelegateSignature(const struct FServerGrantCharacterToUserResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserReadOnlyData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserPublisherReadOnlyData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserPublisherInternalData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserPublisherData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserInventory__DelegateSignature(const struct FServerGetUserInventoryResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserInternalData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserData__DelegateSignature(const struct FServerGetUserDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserBans__DelegateSignature(const struct FServerGetUserBansResult& Result, class UObject* customData);
	void DelegateOnSuccessGetUserAccountInfo__DelegateSignature(const struct FServerGetUserAccountInfoResult& Result, class UObject* customData);
	void DelegateOnSuccessGetTitleNews__DelegateSignature(const struct FServerGetTitleNewsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetTitleInternalData__DelegateSignature(const struct FServerGetTitleDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetTitleData__DelegateSignature(const struct FServerGetTitleDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetTime__DelegateSignature(const struct FServerGetTimeResult& Result, class UObject* customData);
	void DelegateOnSuccessGetSharedGroupData__DelegateSignature(const struct FServerGetSharedGroupDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetServerCustomIDsFromPlayFabIDs__DelegateSignature(const struct FServerGetServerCustomIDsFromPlayFabIDsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetRandomResultTables__DelegateSignature(const struct FServerGetRandomResultTablesResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPublisherData__DelegateSignature(const struct FServerGetPublisherDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromXboxLiveIDsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayFabIDsFromSteamIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromSteamIDsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromPSNAccountIDsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds__DelegateSignature(const struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayFabIDsFromGenericIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromGenericIDsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds__DelegateSignature(const struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayFabIDsFromFacebookIDs__DelegateSignature(const struct FServerGetPlayFabIDsFromFacebookIDsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerTags__DelegateSignature(const struct FServerGetPlayerTagsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerStatisticVersions__DelegateSignature(const struct FServerGetPlayerStatisticVersionsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerStatistics__DelegateSignature(const struct FServerGetPlayerStatisticsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayersInSegment__DelegateSignature(const struct FServerGetPlayersInSegmentResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerSegments__DelegateSignature(const struct FServerGetPlayerSegmentsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerProfile__DelegateSignature(const struct FServerGetPlayerProfileResult& Result, class UObject* customData);
	void DelegateOnSuccessGetPlayerCombinedInfo__DelegateSignature(const struct FServerGetPlayerCombinedInfoResult& Result, class UObject* customData);
	void DelegateOnSuccessGetLeaderboardForUserCharacters__DelegateSignature(const struct FServerGetLeaderboardForUsersCharactersResult& Result, class UObject* customData);
	void DelegateOnSuccessGetLeaderboardAroundUser__DelegateSignature(const struct FServerGetLeaderboardAroundUserResult& Result, class UObject* customData);
	void DelegateOnSuccessGetLeaderboardAroundCharacter__DelegateSignature(const struct FServerGetLeaderboardAroundCharacterResult& Result, class UObject* customData);
	void DelegateOnSuccessGetLeaderboard__DelegateSignature(const struct FServerGetLeaderboardResult& Result, class UObject* customData);
	void DelegateOnSuccessGetFriendsList__DelegateSignature(const struct FServerGetFriendsListResult& Result, class UObject* customData);
	void DelegateOnSuccessGetFriendLeaderboard__DelegateSignature(const struct FServerGetLeaderboardResult& Result, class UObject* customData);
	void DelegateOnSuccessGetContentDownloadUrl__DelegateSignature(const struct FServerGetContentDownloadUrlResult& Result, class UObject* customData);
	void DelegateOnSuccessGetCharacterStatistics__DelegateSignature(const struct FServerGetCharacterStatisticsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetCharacterReadOnlyData__DelegateSignature(const struct FServerGetCharacterDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetCharacterLeaderboard__DelegateSignature(const struct FServerGetCharacterLeaderboardResult& Result, class UObject* customData);
	void DelegateOnSuccessGetCharacterInventory__DelegateSignature(const struct FServerGetCharacterInventoryResult& Result, class UObject* customData);
	void DelegateOnSuccessGetCharacterInternalData__DelegateSignature(const struct FServerGetCharacterDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetCharacterData__DelegateSignature(const struct FServerGetCharacterDataResult& Result, class UObject* customData);
	void DelegateOnSuccessGetCatalogItems__DelegateSignature(const struct FServerGetCatalogItemsResult& Result, class UObject* customData);
	void DelegateOnSuccessGetAllUsersCharacters__DelegateSignature(const struct FServerListUsersCharactersResult& Result, class UObject* customData);
	void DelegateOnSuccessGetAllSegments__DelegateSignature(const struct FServerGetAllSegmentsResult& Result, class UObject* customData);
	void DelegateOnSuccessExecuteCloudScript__DelegateSignature(const struct FServerExecuteCloudScriptResult& Result, class UObject* customData);
	void DelegateOnSuccessEvaluateRandomResultTable__DelegateSignature(const struct FServerEvaluateRandomResultTableResult& Result, class UObject* customData);
	void DelegateOnSuccessDeregisterGame__DelegateSignature(const struct FServerDeregisterGameResponse& Result, class UObject* customData);
	void DelegateOnSuccessDeleteSharedGroup__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessDeletePushNotificationTemplate__DelegateSignature(const struct FServerDeletePushNotificationTemplateResult& Result, class UObject* customData);
	void DelegateOnSuccessDeletePlayer__DelegateSignature(const struct FServerDeletePlayerResult& Result, class UObject* customData);
	void DelegateOnSuccessDeleteCharacterFromUser__DelegateSignature(const struct FServerDeleteCharacterFromUserResult& Result, class UObject* customData);
	void DelegateOnSuccessCreateSharedGroup__DelegateSignature(const struct FServerCreateSharedGroupResult& Result, class UObject* customData);
	void DelegateOnSuccessConsumeItem__DelegateSignature(const struct FServerConsumeItemResult& Result, class UObject* customData);
	void DelegateOnSuccessBanUsers__DelegateSignature(const struct FServerBanUsersResult& Result, class UObject* customData);
	void DelegateOnSuccessAwardSteamAchievement__DelegateSignature(const struct FServerAwardSteamAchievementResult& Result, class UObject* customData);
	void DelegateOnSuccessAuthenticateSessionTicket__DelegateSignature(const struct FServerAuthenticateSessionTicketResult& Result, class UObject* customData);
	void DelegateOnSuccessAddUserVirtualCurrency__DelegateSignature(const struct FServerModifyUserVirtualCurrencyResult& Result, class UObject* customData);
	void DelegateOnSuccessAddSharedGroupMembers__DelegateSignature(const struct FServerAddSharedGroupMembersResult& Result, class UObject* customData);
	void DelegateOnSuccessAddPlayerTag__DelegateSignature(const struct FServerAddPlayerTagResult& Result, class UObject* customData);
	void DelegateOnSuccessAddGenericID__DelegateSignature(const struct FServerEmptyResult& Result, class UObject* customData);
	void DelegateOnSuccessAddFriend__DelegateSignature(const struct FServerEmptyResponse& Result, class UObject* customData);
	void DelegateOnSuccessAddCharacterVirtualCurrency__DelegateSignature(const struct FServerModifyCharacterVirtualCurrencyResult& Result, class UObject* customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(const struct FPlayFabError& Error, class UObject* customData);
	class UPlayFabServerAPI* STATIC_CreateSharedGroup(const struct FServerCreateSharedGroupRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_ConsumeItem(const struct FServerConsumeItemRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_BanUsers(const struct FServerBanUsersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_AwardSteamAchievement(const struct FServerAwardSteamAchievementRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_AuthenticateSessionTicket(const struct FServerAuthenticateSessionTicketRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_AddUserVirtualCurrency(const struct FServerAddUserVirtualCurrencyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_AddSharedGroupMembers(const struct FServerAddSharedGroupMembersRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_AddPlayerTag(const struct FServerAddPlayerTagRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_AddGenericID(const struct FServerAddGenericIDRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_AddFriend(const struct FServerAddFriendRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
	class UPlayFabServerAPI* STATIC_AddCharacterVirtualCurrency(const struct FServerAddCharacterVirtualCurrencyRequest& Request, const struct FScriptDelegate& onSuccess, const struct FScriptDelegate& onFailure, class UObject* customData);
};


// Class PlayFab.PlayFabServerModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabServerModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabServerModelDecoder");
		return ptr;
	}


	struct FServerWriteEventResponse STATIC_decodeWriteEventResponseResponse(class UPlayFabJsonObject* response);
	struct FServerUpdateUserDataResult STATIC_decodeUpdateUserDataResultResponse(class UPlayFabJsonObject* response);
	struct FServerUpdateSharedGroupDataResult STATIC_decodeUpdateSharedGroupDataResultResponse(class UPlayFabJsonObject* response);
	struct FServerUpdatePlayerStatisticsResult STATIC_decodeUpdatePlayerStatisticsResultResponse(class UPlayFabJsonObject* response);
	struct FServerUpdateCharacterStatisticsResult STATIC_decodeUpdateCharacterStatisticsResultResponse(class UPlayFabJsonObject* response);
	struct FServerUpdateCharacterDataResult STATIC_decodeUpdateCharacterDataResultResponse(class UPlayFabJsonObject* response);
	struct FServerUpdateBansResult STATIC_decodeUpdateBansResultResponse(class UPlayFabJsonObject* response);
	struct FServerUnlockContainerItemResult STATIC_decodeUnlockContainerItemResultResponse(class UPlayFabJsonObject* response);
	struct FServerUnlinkXboxAccountResult STATIC_decodeUnlinkXboxAccountResultResponse(class UPlayFabJsonObject* response);
	struct FServerUnlinkServerCustomIdResult STATIC_decodeUnlinkServerCustomIdResultResponse(class UPlayFabJsonObject* response);
	struct FServerSetTitleDataResult STATIC_decodeSetTitleDataResultResponse(class UPlayFabJsonObject* response);
	struct FServerSetPublisherDataResult STATIC_decodeSetPublisherDataResultResponse(class UPlayFabJsonObject* response);
	struct FServerSetPlayerSecretResult STATIC_decodeSetPlayerSecretResultResponse(class UPlayFabJsonObject* response);
	struct FServerSetGameServerInstanceTagsResult STATIC_decodeSetGameServerInstanceTagsResultResponse(class UPlayFabJsonObject* response);
	struct FServerSetGameServerInstanceStateResult STATIC_decodeSetGameServerInstanceStateResultResponse(class UPlayFabJsonObject* response);
	struct FServerSetGameServerInstanceDataResult STATIC_decodeSetGameServerInstanceDataResultResponse(class UPlayFabJsonObject* response);
	struct FServerServerLoginResult STATIC_decodeServerLoginResultResponse(class UPlayFabJsonObject* response);
	struct FServerSendPushNotificationResult STATIC_decodeSendPushNotificationResultResponse(class UPlayFabJsonObject* response);
	struct FServerSendEmailFromTemplateResult STATIC_decodeSendEmailFromTemplateResultResponse(class UPlayFabJsonObject* response);
	struct FServerSendCustomAccountRecoveryEmailResult STATIC_decodeSendCustomAccountRecoveryEmailResultResponse(class UPlayFabJsonObject* response);
	struct FServerSavePushNotificationTemplateResult STATIC_decodeSavePushNotificationTemplateResultResponse(class UPlayFabJsonObject* response);
	struct FServerRevokeInventoryResult STATIC_decodeRevokeInventoryResultResponse(class UPlayFabJsonObject* response);
	struct FServerRevokeInventoryItemsResult STATIC_decodeRevokeInventoryItemsResultResponse(class UPlayFabJsonObject* response);
	struct FServerRevokeBansResult STATIC_decodeRevokeBansResultResponse(class UPlayFabJsonObject* response);
	struct FServerRevokeAllBansForUserResult STATIC_decodeRevokeAllBansForUserResultResponse(class UPlayFabJsonObject* response);
	struct FServerReportPlayerServerResult STATIC_decodeReportPlayerServerResultResponse(class UPlayFabJsonObject* response);
	struct FServerRemoveSharedGroupMembersResult STATIC_decodeRemoveSharedGroupMembersResultResponse(class UPlayFabJsonObject* response);
	struct FServerRemovePlayerTagResult STATIC_decodeRemovePlayerTagResultResponse(class UPlayFabJsonObject* response);
	struct FServerRegisterGameResponse STATIC_decodeRegisterGameResponseResponse(class UPlayFabJsonObject* response);
	struct FServerRefreshGameServerInstanceHeartbeatResult STATIC_decodeRefreshGameServerInstanceHeartbeatResultResponse(class UPlayFabJsonObject* response);
	struct FServerRedeemMatchmakerTicketResult STATIC_decodeRedeemMatchmakerTicketResultResponse(class UPlayFabJsonObject* response);
	struct FServerRedeemCouponResult STATIC_decodeRedeemCouponResultResponse(class UPlayFabJsonObject* response);
	struct FServerNotifyMatchmakerPlayerLeftResult STATIC_decodeNotifyMatchmakerPlayerLeftResultResponse(class UPlayFabJsonObject* response);
	struct FServerMoveItemToUserFromCharacterResult STATIC_decodeMoveItemToUserFromCharacterResultResponse(class UPlayFabJsonObject* response);
	struct FServerMoveItemToCharacterFromUserResult STATIC_decodeMoveItemToCharacterFromUserResultResponse(class UPlayFabJsonObject* response);
	struct FServerMoveItemToCharacterFromCharacterResult STATIC_decodeMoveItemToCharacterFromCharacterResultResponse(class UPlayFabJsonObject* response);
	struct FServerModifyUserVirtualCurrencyResult STATIC_decodeModifyUserVirtualCurrencyResultResponse(class UPlayFabJsonObject* response);
	struct FServerModifyItemUsesResult STATIC_decodeModifyItemUsesResultResponse(class UPlayFabJsonObject* response);
	struct FServerModifyCharacterVirtualCurrencyResult STATIC_decodeModifyCharacterVirtualCurrencyResultResponse(class UPlayFabJsonObject* response);
	struct FServerListUsersCharactersResult STATIC_decodeListUsersCharactersResultResponse(class UPlayFabJsonObject* response);
	struct FServerLinkXboxAccountResult STATIC_decodeLinkXboxAccountResultResponse(class UPlayFabJsonObject* response);
	struct FServerLinkServerCustomIdResult STATIC_decodeLinkServerCustomIdResultResponse(class UPlayFabJsonObject* response);
	struct FServerGrantItemsToUsersResult STATIC_decodeGrantItemsToUsersResultResponse(class UPlayFabJsonObject* response);
	struct FServerGrantItemsToUserResult STATIC_decodeGrantItemsToUserResultResponse(class UPlayFabJsonObject* response);
	struct FServerGrantItemsToCharacterResult STATIC_decodeGrantItemsToCharacterResultResponse(class UPlayFabJsonObject* response);
	struct FServerGrantCharacterToUserResult STATIC_decodeGrantCharacterToUserResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetUserInventoryResult STATIC_decodeGetUserInventoryResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetUserDataResult STATIC_decodeGetUserDataResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetUserBansResult STATIC_decodeGetUserBansResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetUserAccountInfoResult STATIC_decodeGetUserAccountInfoResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetTitleNewsResult STATIC_decodeGetTitleNewsResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetTitleDataResult STATIC_decodeGetTitleDataResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetTimeResult STATIC_decodeGetTimeResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetSharedGroupDataResult STATIC_decodeGetSharedGroupDataResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetServerCustomIDsFromPlayFabIDsResult STATIC_decodeGetServerCustomIDsFromPlayFabIDsResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetRandomResultTablesResult STATIC_decodeGetRandomResultTablesResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetPublisherDataResult STATIC_decodeGetPublisherDataResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetPlayFabIDsFromXboxLiveIDsResult STATIC_decodeGetPlayFabIDsFromXboxLiveIDsResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetPlayFabIDsFromSteamIDsResult STATIC_decodeGetPlayFabIDsFromSteamIDsResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetPlayFabIDsFromPSNAccountIDsResult STATIC_decodeGetPlayFabIDsFromPSNAccountIDsResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult STATIC_decodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetPlayFabIDsFromGenericIDsResult STATIC_decodeGetPlayFabIDsFromGenericIDsResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult STATIC_decodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetPlayFabIDsFromFacebookIDsResult STATIC_decodeGetPlayFabIDsFromFacebookIDsResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetPlayerTagsResult STATIC_decodeGetPlayerTagsResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetPlayerStatisticVersionsResult STATIC_decodeGetPlayerStatisticVersionsResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetPlayerStatisticsResult STATIC_decodeGetPlayerStatisticsResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetPlayersInSegmentResult STATIC_decodeGetPlayersInSegmentResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetPlayerSegmentsResult STATIC_decodeGetPlayerSegmentsResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetPlayerProfileResult STATIC_decodeGetPlayerProfileResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetPlayerCombinedInfoResult STATIC_decodeGetPlayerCombinedInfoResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetLeaderboardResult STATIC_decodeGetLeaderboardResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetLeaderboardForUsersCharactersResult STATIC_decodeGetLeaderboardForUsersCharactersResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetLeaderboardAroundUserResult STATIC_decodeGetLeaderboardAroundUserResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetLeaderboardAroundCharacterResult STATIC_decodeGetLeaderboardAroundCharacterResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetFriendsListResult STATIC_decodeGetFriendsListResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetContentDownloadUrlResult STATIC_decodeGetContentDownloadUrlResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetCharacterStatisticsResult STATIC_decodeGetCharacterStatisticsResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetCharacterLeaderboardResult STATIC_decodeGetCharacterLeaderboardResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetCharacterInventoryResult STATIC_decodeGetCharacterInventoryResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetCharacterDataResult STATIC_decodeGetCharacterDataResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetCatalogItemsResult STATIC_decodeGetCatalogItemsResultResponse(class UPlayFabJsonObject* response);
	struct FServerGetAllSegmentsResult STATIC_decodeGetAllSegmentsResultResponse(class UPlayFabJsonObject* response);
	struct FServerExecuteCloudScriptResult STATIC_decodeExecuteCloudScriptResultResponse(class UPlayFabJsonObject* response);
	struct FServerEvaluateRandomResultTableResult STATIC_decodeEvaluateRandomResultTableResultResponse(class UPlayFabJsonObject* response);
	struct FServerEmptyResult STATIC_decodeEmptyResultResponse(class UPlayFabJsonObject* response);
	struct FServerEmptyResponse STATIC_decodeEmptyResponseResponse(class UPlayFabJsonObject* response);
	struct FServerDeregisterGameResponse STATIC_decodeDeregisterGameResponseResponse(class UPlayFabJsonObject* response);
	struct FServerDeletePushNotificationTemplateResult STATIC_decodeDeletePushNotificationTemplateResultResponse(class UPlayFabJsonObject* response);
	struct FServerDeletePlayerResult STATIC_decodeDeletePlayerResultResponse(class UPlayFabJsonObject* response);
	struct FServerDeleteCharacterFromUserResult STATIC_decodeDeleteCharacterFromUserResultResponse(class UPlayFabJsonObject* response);
	struct FServerCreateSharedGroupResult STATIC_decodeCreateSharedGroupResultResponse(class UPlayFabJsonObject* response);
	struct FServerConsumeItemResult STATIC_decodeConsumeItemResultResponse(class UPlayFabJsonObject* response);
	struct FServerBanUsersResult STATIC_decodeBanUsersResultResponse(class UPlayFabJsonObject* response);
	struct FServerAwardSteamAchievementResult STATIC_decodeAwardSteamAchievementResultResponse(class UPlayFabJsonObject* response);
	struct FServerAuthenticateSessionTicketResult STATIC_decodeAuthenticateSessionTicketResultResponse(class UPlayFabJsonObject* response);
	struct FServerAddSharedGroupMembersResult STATIC_decodeAddSharedGroupMembersResultResponse(class UPlayFabJsonObject* response);
	struct FServerAddPlayerTagResult STATIC_decodeAddPlayerTagResultResponse(class UPlayFabJsonObject* response);
};


// Class PlayFab.PlayFabUtilities
// 0x0000 (0x0028 - 0x0028)
class UPlayFabUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabUtilities");
		return ptr;
	}


	void STATIC_setPlayFabSettings(const struct FString& GameTitleId, const struct FString& PlayFabSecretApiKey, const struct FString& PhotonRealtimeAppId, const struct FString& PhotonTurnbasedAppId, const struct FString& PhotonChatAppId);
	struct FString STATIC_getPhotonAppId(bool Realtime, bool Chat, bool Turnbased);
	struct FString STATIC_getErrorText(int code);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
