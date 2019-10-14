#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function modio.CallbackProxy_AddMetadataKVP.AddMetadataKVP
struct UCallbackProxy_AddMetadataKVP_AddMetadataKVP_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               MetadataKVP;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCallbackProxy_AddMetadataKVP*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_AddMod.AddMod
struct UCallbackProxy_AddMod_AddMod_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FModioModCreator                            ModCreator;                                               // (Parm)
	class UCallbackProxy_AddMod*                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_AddModDependencies.AddModDependencies
struct UCallbackProxy_AddModDependencies_AddModDependencies_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Dependencies;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCallbackProxy_AddModDependencies*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_AddModImages.AddModImages
struct UCallbackProxy_AddModImages_AddModImages_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ImagePaths;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCallbackProxy_AddModImages*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_AddModLogo.AddModLogo
struct UCallbackProxy_AddModLogo_AddModLogo_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     LogoPath;                                                 // (Parm, ZeroConstructor)
	class UCallbackProxy_AddModLogo*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_AddModRating.AddModRating
struct UCallbackProxy_AddModRating_AddModRating_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsRatingPositive;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UCallbackProxy_AddModRating*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_AddModSketchfabLinks.AddModSketchfabLinks
struct UCallbackProxy_AddModSketchfabLinks_AddModSketchfabLinks_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SketchfabLinks;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCallbackProxy_AddModSketchfabLinks*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_AddModTags.AddModTags
struct UCallbackProxy_AddModTags_AddModTags_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Tags;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCallbackProxy_AddModTags*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_AddModYoutubeLinks.AddModYoutubeLinks
struct UCallbackProxy_AddModYoutubeLinks_AddModYoutubeLinks_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             YoutubeLinks;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCallbackProxy_AddModYoutubeLinks*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_DeleteMetadataKVP.DeleteMetadataKVP
struct UCallbackProxy_DeleteMetadataKVP_DeleteMetadataKVP_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               MetadataKVP;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCallbackProxy_DeleteMetadataKVP*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_DeleteModDependencies.DeleteModDependencies
struct UCallbackProxy_DeleteModDependencies_DeleteModDependencies_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        Dependencies;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCallbackProxy_DeleteModDependencies*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_DeleteModImages.DeleteModImages
struct UCallbackProxy_DeleteModImages_DeleteModImages_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ImagePaths;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCallbackProxy_DeleteModImages*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_DeleteModSketchfabLinks.DeleteModSketchfabLinks
struct UCallbackProxy_DeleteModSketchfabLinks_DeleteModSketchfabLinks_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             SketchfabLinks;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCallbackProxy_DeleteModSketchfabLinks*      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_DeleteModTags.DeleteModTags
struct UCallbackProxy_DeleteModTags_DeleteModTags_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             Tags;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCallbackProxy_DeleteModTags*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_DeleteModYoutubeLinks.DeleteModYoutubeLinks
struct UCallbackProxy_DeleteModYoutubeLinks_DeleteModYoutubeLinks_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             YoutubeLinks;                                             // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCallbackProxy_DeleteModYoutubeLinks*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_EditMod.EditMod
struct UCallbackProxy_EditMod_EditMod_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FModioModEditor                             ModEditor;                                                // (Parm)
	class UCallbackProxy_EditMod*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_EmailExchange.EmailExchange
struct UCallbackProxy_EmailExchange_EmailExchange_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SecurityCode;                                             // (Parm, ZeroConstructor)
	class UCallbackProxy_EmailExchange*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_EmailRequest.EmailRequest
struct UCallbackProxy_EmailRequest_EmailRequest_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Email;                                                    // (Parm, ZeroConstructor)
	class UCallbackProxy_EmailRequest*                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_GalaxyAuth.GalaxyAuth
struct UCallbackProxy_GalaxyAuth_GalaxyAuth_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Appdata;                                                  // (Parm, ZeroConstructor)
	class UCallbackProxy_GalaxyAuth*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_GetAllMetadataKVP.GetAllMetadataKVP
struct UCallbackProxy_GetAllMetadataKVP_GetAllMetadataKVP_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCallbackProxy_GetAllMetadataKVP*            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_GetAllModDependencies.GetAllModDependencies
struct UCallbackProxy_GetAllModDependencies_GetAllModDependencies_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCallbackProxy_GetAllModDependencies*        ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_GetAllMods.GetAllMods
struct UCallbackProxy_GetAllMods_GetAllMods_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FModioFilterCreator                         Filter;                                                   // (Parm)
	TArray<struct FString>                             ModTags;                                                  // (Parm, ZeroConstructor)
	int                                                Limit;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UCallbackProxy_GetAllMods*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_GetAllModTags.GetAllModTags
struct UCallbackProxy_GetAllModTags_GetAllModTags_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCallbackProxy_GetAllModTags*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_GetAuthenticatedUser.GetAuthenticatedUser
struct UCallbackProxy_GetAuthenticatedUser_GetAuthenticatedUser_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UCallbackProxy_GetAuthenticatedUser*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_GetUserEvents.GetUserEvents
struct UCallbackProxy_GetUserEvents_GetUserEvents_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Limit;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UCallbackProxy_GetUserEvents*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_GetUserModfiles.GetUserModfiles
struct UCallbackProxy_GetUserModfiles_GetUserModfiles_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Limit;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UCallbackProxy_GetUserModfiles*              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_GetUserMods.GetUserMods
struct UCallbackProxy_GetUserMods_GetUserMods_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FModioFilterCreator                         FilterCreator;                                            // (Parm)
	TArray<struct FString>                             ModTags;                                                  // (Parm, ZeroConstructor)
	int                                                Limit;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UCallbackProxy_GetUserMods*                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_GetUserRatings.GetUserRatings
struct UCallbackProxy_GetUserRatings_GetUserRatings_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Limit;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UCallbackProxy_GetUserRatings*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_GetUserSubscriptions.GetUserSubscriptions
struct UCallbackProxy_GetUserSubscriptions_GetUserSubscriptions_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FModioFilterCreator                         FilterCreator;                                            // (Parm)
	TArray<struct FString>                             ModTags;                                                  // (Parm, ZeroConstructor)
	int                                                Limit;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UCallbackProxy_GetUserSubscriptions*         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_OculusAuth.OculusAuth
struct UCallbackProxy_OculusAuth_OculusAuth_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Nonce;                                                    // (Parm, ZeroConstructor)
	struct FString                                     OculusUserId;                                             // (Parm, ZeroConstructor)
	struct FString                                     AccessToken;                                              // (Parm, ZeroConstructor)
	struct FString                                     Email;                                                    // (Parm, ZeroConstructor)
	int                                                DateExpires;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	class UCallbackProxy_OculusAuth*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_SetModDownloadListener.SetModDownloadListener
struct UCallbackProxy_SetModDownloadListener_SetModDownloadListener_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UCallbackProxy_SetModDownloadListener*       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_SetModfileUploadListener.SetModfileUploadListener
struct UCallbackProxy_SetModfileUploadListener_SetModfileUploadListener_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class UCallbackProxy_SetModfileUploadListener*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_SteamAuth.SteamAuth
struct UCallbackProxy_SteamAuth_SteamAuth_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Base64Ticket;                                             // (Parm, ZeroConstructor)
	class UCallbackProxy_SteamAuth*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_SubscribeToMod.SubscribeToMod
struct UCallbackProxy_SubscribeToMod_SubscribeToMod_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCallbackProxy_SubscribeToMod*               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.CallbackProxy_UnsubscribeFromMod.UnsubscribeFromMod
struct UCallbackProxy_UnsubscribeFromMod_UnsubscribeFromMod_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UCallbackProxy_UnsubscribeFromMod*           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function modio.ModioFunctionLibrary.ModioSetUserEventsPollInterval
struct UModioFunctionLibrary_ModioSetUserEventsPollInterval_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IntervalInSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function modio.ModioFunctionLibrary.ModioSetModEventsPollInterval
struct UModioFunctionLibrary_ModioSetModEventsPollInterval_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                IntervalInSeconds;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function modio.ModioFunctionLibrary.ModioProcess
struct UModioFunctionLibrary_ModioProcess_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function modio.ModioFunctionLibrary.ModioPrioritizeModDownload
struct UModioFunctionLibrary_ModioPrioritizeModDownload_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function modio.ModioFunctionLibrary.ModioLogout
struct UModioFunctionLibrary_ModioLogout_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function modio.ModioFunctionLibrary.ModioIsLoggedIn
struct UModioFunctionLibrary_ModioIsLoggedIn_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsLoggedIn;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function modio.ModioFunctionLibrary.ModioInstallDownloadedMods
struct UModioFunctionLibrary_ModioInstallDownloadedMods_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function modio.ModioFunctionLibrary.ModioGetUserModRating
struct UModioFunctionLibrary_ModioGetUserModRating_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ModRating;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function modio.ModioFunctionLibrary.ModioGetModState
struct UModioFunctionLibrary_ModioGetModState_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char                                      ModState;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function modio.ModioFunctionLibrary.ModioGetModfileUploadQueue
struct UModioFunctionLibrary_ModioGetModfileUploadQueue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FModioQueuedModfileUpload>           UploadQueue;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function modio.ModioFunctionLibrary.ModioGetModDownloadQueue
struct UModioFunctionLibrary_ModioGetModDownloadQueue_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FModioQueuedModDownload>             QueuedMods;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function modio.ModioFunctionLibrary.ModioGetInstalledMod
struct UModioFunctionLibrary_ModioGetInstalledMod_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // (Parm, OutParm, ZeroConstructor)
	struct FModioMod                                   Mod;                                                      // (Parm, OutParm)
};

// Function modio.ModioFunctionLibrary.ModioGetAllInstalledMods
struct UModioFunctionLibrary_ModioGetAllInstalledMods_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FModioInstalledMod>                  InstalledMods;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function modio.ModioFunctionLibrary.ModioGetAllDownloadedMods
struct UModioFunctionLibrary_ModioGetAllDownloadedMods_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        DownloadedMods;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function modio.ModioFunctionLibrary.ModioCurrentUser
struct UModioFunctionLibrary_ModioCurrentUser_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FModioUser                                  user;                                                     // (Parm, OutParm)
};

// Function modio.ModioFunctionLibrary.ModioAddModfile
struct UModioFunctionLibrary_ModioAddModfile_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FModioModfileCreator                        ModfileCreator;                                           // (Parm)
};

// Function modio.ModioFunctionLibrary.AuthenticateViaToken
struct UModioFunctionLibrary_AuthenticateViaToken_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AccessToken;                                              // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
