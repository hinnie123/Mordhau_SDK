#pragma once

// Mordhau (Dumped by Hinnie) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum modio.EModioBooleanCustomizableType
enum class EModioBooleanCustomizableType : uint8_t
{
	UNDEFINED                      = 0,
	SET_TO_TRUE                    = 1,
	SET_TO_FALSE                   = 2,
	EModioBooleanCustomizableType_MAX = 3
};


// Enum modio.EModioFieldFilterType
enum class EModioFieldFilterType : uint8_t
{
	FIELD_FILTER_EQUAL             = 0,
	FIELD_FILTER_NOT_EQUAL         = 1,
	FIELD_FILTER_LIKE              = 2,
	FIELD_FILTER_NOT_LIKE          = 3,
	FIELD_FILTER_IN                = 4,
	FIELD_FILTER_NOT_IN            = 5,
	FIELD_FILTER_MIN               = 6,
	FIELD_FILTER_MAX               = 7,
	FIELD_FILTER_SMALLER_THAN      = 8,
	FIELD_FILTER_GREATER_THAN      = 9
};


// Enum modio.EModioMaturityOption
enum class EModioMaturityOption : uint8_t
{
	ALCOHOL                        = 0,
	DRUGS                          = 1,
	VIOLENCE                       = 2,
	EXPLICIT                       = 3,
	UNDEFINED                      = 4,
	EModioMaturityOption_MAX       = 5
};


// Enum modio.EModioModSortType
enum class EModioModSortType : uint8_t
{
	SORT_BY_ID                     = 0,
	SORT_BY_DATE_ADDED             = 1,
	SORT_BY_DATE_UPDATED           = 2,
	SORT_BY_DATE_LIVE              = 3,
	SORT_BY_NAME                   = 4,
	SORT_BY_DOWNLOADS              = 5,
	SORT_BY_POPULAR                = 6,
	SORT_BY_RATING                 = 7,
	SORT_BY_SUBSCRIBERS            = 8,
	SORT_BY_MAX                    = 9
};


// Enum modio.EModioModState
enum class EModioModState : uint8_t
{
	NOT_DEFINED                    = 0,
	NOT_INSTALLED                  = 1,
	QUEUED                         = 2,
	STARTING_DOWNLOAD              = 3,
	DOWNLOADING                    = 4,
	PAUSING                        = 5,
	PAUSED                         = 6,
	INSTALLED                      = 7,
	PRIORITIZING_OTHER_DOWNLOAD    = 8,
	STARTING_UPLOAD                = 9,
	DOWNLOADED                     = 10,
	UPLOADING                      = 11,
	EModioModState_MAX             = 12
};


// Enum modio.EModioRatingType
enum class EModioRatingType : uint8_t
{
	RATING_NOT_DEFINED             = 0,
	RATING_NEGATIVE                = 1,
	RATING_POSITIVE                = 2,
	RATING_MAX                     = 3
};


// Enum modio.ERunInEditorOn
enum class ERunInEditorOn : uint8_t
{
	FirstServer                    = 0,
	FirstClient                    = 1,
	DedicatedServer                = 2,
	EditorOnly                     = 3,
	ERunInEditorOn_MAX             = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct modio.ModioModCreator
// 0x0088
struct FModioModCreator
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     LogoPath;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Summary;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     NameId;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     HomepageUrl;                                              // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MetadataBlob;                                             // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             Tags;                                                     // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EModioBooleanCustomizableType>         Visible;                                                  // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                MaturityOption;                                           // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct modio.ModioModEditor
// 0x0068
struct FModioModEditor
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Summary;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     NameId;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     HomepageUrl;                                              // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MetadataBlob;                                             // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EModioBooleanCustomizableType>         Visible;                                                  // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	int                                                MaturityOption;                                           // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct modio.ModioSortCreator
// 0x0002
struct FModioSortCreator
{
	TEnumAsByte<EModioModSortType>                     ModSortType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Ascending;                                                // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct modio.ModioFieldFilterCreator
// 0x0028
struct FModioFieldFilterCreator
{
	struct FString                                     Field;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EModioFieldFilterType>                 Type;                                                     // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FString                                     Value;                                                    // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct modio.ModioFilterCreator
// 0x0028
struct FModioFilterCreator
{
	struct FModioSortCreator                           Sort;                                                     // 0x0000(0x0002) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FString                                     FullTextSearch;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FModioFieldFilterCreator>            FieldFilters;                                             // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct modio.ModioQueuedModfileUpload
// 0x0020
struct FModioQueuedModfileUpload
{
	int                                                State;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentProgress;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalSize;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct modio.ModioLogo
// 0x0050
struct FModioLogo
{
	struct FString                                     Filename;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Original;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Thumb320x180;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Thumb640x360;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Thumb1280x720;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct modio.ModioAvatar
// 0x0040
struct FModioAvatar
{
	struct FString                                     Filename;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Original;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Thumb50x50;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Thumb100x100;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct modio.ModioUser
// 0x0098
struct FModioUser
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DateOnline;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Username;                                                 // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     NameId;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Timezone;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Language;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ProfileUrl;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FModioAvatar                                Avatar;                                                   // 0x0058(0x0040) (Edit, BlueprintVisible)
};

// ScriptStruct modio.ModioFilehash
// 0x0010
struct FModioFilehash
{
	struct FString                                     Md5;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct modio.ModioDownload
// 0x0018
struct FModioDownload
{
	int                                                DateExpires;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     BinaryUrl;                                                // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct modio.ModioModfile
// 0x0098
struct FModioModfile
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VirusStats;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                VirusPositive;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DateAdded;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DateScanned;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FInt64                                      Filesize;                                                 // 0x0018(0x0008) (Edit, BlueprintVisible)
	struct FString                                     Filename;                                                 // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Version;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     VirustotalHash;                                           // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Changelog;                                                // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MetadataBlob;                                             // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FModioFilehash                              Filehash;                                                 // 0x0070(0x0010) (Edit, BlueprintVisible)
	struct FModioDownload                              Download;                                                 // 0x0080(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct modio.ModioImage
// 0x0030
struct FModioImage
{
	struct FString                                     Filename;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Original;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Thumb320x180;                                             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct modio.ModioMedia
// 0x0030
struct FModioMedia
{
	TArray<struct FString>                             Youtube;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             Sketchfab;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FModioImage>                         Images;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct modio.ModioStats
// 0x0040
struct FModioStats
{
	int                                                ModId;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PopularityRankPosition;                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PopularityRankTotalMods;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DownloadsTotal;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SubscribersTotal;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RatingsTotal;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RatingsPositive;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RatingsNegative;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RatingsPercentagePositive;                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DateExpires;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RatingsWeightedAggregate;                                 // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FString                                     RatingsDisplayText;                                       // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct modio.ModioModTag
// 0x0018
struct FModioModTag
{
	int                                                DateAdded;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct modio.ModioMetadataKVP
// 0x0020
struct FModioMetadataKVP
{
	struct FString                                     Metakey;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Metavalue;                                                // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct modio.ModioMod
// 0x02B0
struct FModioMod
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GameId;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Status;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Visible;                                                  // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MaturityOption;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DateAdded;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DateUpdated;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DateLive;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     HomepageUrl;                                              // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Name;                                                     // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     NameId;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Summary;                                                  // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Description;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DescriptionPlainText;                                     // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     MetadataBlob;                                             // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ProfileUrl;                                               // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FModioLogo                                  Logo;                                                     // 0x00A0(0x0050) (Edit, BlueprintVisible)
	struct FModioUser                                  SubmittedBy;                                              // 0x00F0(0x0098) (Edit, BlueprintVisible)
	struct FModioModfile                               Modfile;                                                  // 0x0188(0x0098) (Edit, BlueprintVisible)
	struct FModioMedia                                 Media;                                                    // 0x0220(0x0030) (Edit, BlueprintVisible)
	struct FModioStats                                 Stats;                                                    // 0x0250(0x0040) (Edit, BlueprintVisible)
	TArray<struct FModioModTag>                        Tags;                                                     // 0x0290(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FModioMetadataKVP>                   MetadataKVP;                                              // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct modio.ModioQueuedModDownload
// 0x02D0
struct FModioQueuedModDownload
{
	struct FString                                     Path;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FInt64                                      CurrentProgress;                                          // 0x0010(0x0008) (Edit, BlueprintVisible)
	struct FInt64                                      TotalSize;                                                // 0x0018(0x0008) (Edit, BlueprintVisible)
	struct FModioMod                                   Mod;                                                      // 0x0020(0x02B0) (Edit, BlueprintVisible)
};

// ScriptStruct modio.ModioInstalledMod
// 0x02C0
struct FModioInstalledMod
{
	struct FString                                     Path;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FModioMod                                   Mod;                                                      // 0x0010(0x02B0) (Edit, BlueprintVisible)
};

// ScriptStruct modio.ModioModfileCreator
// 0x0048
struct FModioModfileCreator
{
	struct FString                                     Path;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Version;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Changelog;                                                // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TEnumAsByte<EModioBooleanCustomizableType>         Active;                                                   // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	struct FString                                     Filehash;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct modio.ModioError
// 0x0028
struct FModioError
{
	int                                                Code;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FString                                     Message;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             Errors;                                                   // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct modio.ModioResponse
// 0x0040
struct FModioResponse
{
	int                                                Code;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ResultCount;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ResultLimit;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ResultOffset;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ResultTotal;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ResultCached;                                             // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	struct FModioError                                 Error;                                                    // 0x0018(0x0028) (Edit, BlueprintVisible)
};

// ScriptStruct modio.ModioModDependency
// 0x0008
struct FModioModDependency
{
	int                                                ModId;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DateAdded;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct modio.ModioUserEvent
// 0x0018
struct FModioUserEvent
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GameId;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UserId;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventType;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DateAdded;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct modio.ModioRating
// 0x0010
struct FModioRating
{
	int                                                GameId;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Rating;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DateAdded;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct modio.ModioModEvent
// 0x0014
struct FModioModEvent
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ModId;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                UserId;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                EventType;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DateAdded;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
