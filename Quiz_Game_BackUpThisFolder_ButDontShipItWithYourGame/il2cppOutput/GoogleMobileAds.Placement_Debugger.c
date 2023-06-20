#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[117] = 
{
	{ 0, 0 } /* 0x06000001 System.Void GoogleMobileAds.Api.AdErrorEvent::.ctor() */,
	{ 0, 0 } /* 0x06000002 System.Void GoogleMobileAds.Api.AdFailedToLoadEvent::.ctor() */,
	{ 0, 0 } /* 0x06000003 TAdGameObject GoogleMobileAds.Api.MobileAdsExtensions::GetAd(GoogleMobileAds.Api.MobileAds,System.String) */,
	{ 0, 0 } /* 0x06000004 System.Void GoogleMobileAds.Api.UserEarnedRewardEvent::.ctor() */,
	{ 0, 0 } /* 0x06000005 System.Void GoogleMobileAds.Placement.AdGameObject::.ctor() */,
	{ 0, 0 } /* 0x06000006 System.Void GoogleMobileAds.Placement.AdGameObject::set_AndroidAdUnitId(System.String) */,
	{ 0, 0 } /* 0x06000007 System.Void GoogleMobileAds.Placement.AdGameObject::set_IOSAdUnitId(System.String) */,
	{ 0, 0 } /* 0x06000008 System.String GoogleMobileAds.Placement.AdGameObject::get_AdUnitId() */,
	{ 0, 0 } /* 0x06000009 System.Void GoogleMobileAds.Placement.AdGameObject::Start() */,
	{ 0, 0 } /* 0x0600000A System.Void GoogleMobileAds.Placement.AdGameObject::LoadAd() */,
	{ 0, 0 } /* 0x0600000B System.Void GoogleMobileAds.Placement.AdGameObject::LoadAd(GoogleMobileAds.Api.AdRequest) */,
	{ 0, 0 } /* 0x0600000C System.Void GoogleMobileAds.Placement.AdGameObject::AddCallbacks() */,
	{ 0, 0 } /* 0x0600000D System.Void GoogleMobileAds.Placement.AdGameObject::AutoLoadAd() */,
	{ 0, 0 } /* 0x0600000E System.Boolean GoogleMobileAds.Placement.AdGameObject::AddGameObjectToPool() */,
	{ 0, 0 } /* 0x0600000F System.Boolean GoogleMobileAds.Placement.AdGameObject::RemoveGameObjectFromPoolIfNeeded() */,
	{ 0, 0 } /* 0x06000010 System.Void GoogleMobileAds.Placement.AdGameObject::<AutoLoadAd>m__0() */,
	{ 0, 0 } /* 0x06000011 System.Void GoogleMobileAds.Placement.AdGameObjectPool::.ctor() */,
	{ 0, 0 } /* 0x06000012 GoogleMobileAds.Placement.AdGameObjectPool GoogleMobileAds.Placement.AdGameObjectPool::get_Instance() */,
	{ 0, 0 } /* 0x06000013 System.Void GoogleMobileAds.Placement.AdGameObjectPool::Add(System.Type,UnityEngine.GameObject,System.Boolean) */,
	{ 0, 0 } /* 0x06000014 System.Void GoogleMobileAds.Placement.AdGameObjectPool::Remove(System.Type,UnityEngine.GameObject,System.Boolean) */,
	{ 0, 0 } /* 0x06000015 TAdGameObject GoogleMobileAds.Placement.AdGameObjectPool::GetAd(System.String) */,
	{ 0, 0 } /* 0x06000016 TAdGameObject GoogleMobileAds.Placement.AdGameObjectPool::GetAdFromGameObject(UnityEngine.GameObject) */,
	{ 0, 0 } /* 0x06000017 UnityEngine.GameObject GoogleMobileAds.Placement.AdGameObjectPool::GetAdGameObject(System.String) */,
	{ 0, 0 } /* 0x06000018 System.String GoogleMobileAds.Placement.AdGameObjectPool::GenerateObjectKey(System.Type,System.String) */,
	{ 0, 0 } /* 0x06000019 System.Void GoogleMobileAds.Placement.AdGameObjectPool::Finalize() */,
	{ 0, 0 } /* 0x0600001A System.Void GoogleMobileAds.Placement.PoolEntry::.ctor(UnityEngine.GameObject,System.Boolean) */,
	{ 0, 0 } /* 0x0600001B UnityEngine.GameObject GoogleMobileAds.Placement.PoolEntry::get_GameObject() */,
	{ 0, 0 } /* 0x0600001C System.String GoogleMobileAds.Placement.PoolEntry::get_SceneNameOrigin() */,
	{ 0, 0 } /* 0x0600001D System.Boolean GoogleMobileAds.Placement.PoolEntry::get_IsPersistent() */,
	{ 0, 0 } /* 0x0600001E System.Void GoogleMobileAds.Placement.AdSizeProperty::.ctor() */,
	{ 0, 0 } /* 0x0600001F GoogleMobileAds.Api.AdSize GoogleMobileAds.Placement.AdSizeProperty::ToAdSize() */,
	{ 0, 0 } /* 0x06000020 GoogleMobileAds.Api.AdSize GoogleMobileAds.Placement.AdSizeProperty::ToAnchoredAdaptiveAdSize() */,
	{ 0, 0 } /* 0x06000021 System.Int32 GoogleMobileAds.Placement.AdSizeProperty::CalculateAdWidth(System.Int32) */,
	{ 0, 0 } /* 0x06000022 System.Void GoogleMobileAds.Placement.BannerAdGameObject::.ctor() */,
	{ 0, 0 } /* 0x06000023 GoogleMobileAds.Api.BannerView GoogleMobileAds.Placement.BannerAdGameObject::get_BannerView() */,
	{ 0, 0 } /* 0x06000024 System.Void GoogleMobileAds.Placement.BannerAdGameObject::Awake() */,
	{ 0, 0 } /* 0x06000025 System.Void GoogleMobileAds.Placement.BannerAdGameObject::OnDestroy() */,
	{ 0, 0 } /* 0x06000026 System.Void GoogleMobileAds.Placement.BannerAdGameObject::LoadAd(GoogleMobileAds.Api.AdRequest) */,
	{ 0, 0 } /* 0x06000027 System.Void GoogleMobileAds.Placement.BannerAdGameObject::Hide() */,
	{ 0, 0 } /* 0x06000028 System.Void GoogleMobileAds.Placement.BannerAdGameObject::Show() */,
	{ 0, 0 } /* 0x06000029 System.Void GoogleMobileAds.Placement.BannerAdGameObject::DestroyAd() */,
	{ 0, 0 } /* 0x0600002A System.Void GoogleMobileAds.Placement.BannerAdGameObject::AddCallbacks() */,
	{ 0, 0 } /* 0x0600002B System.Void GoogleMobileAds.Placement.BannerAdGameObject::<AddCallbacks>m__0(System.Object,System.EventArgs) */,
	{ 0, 0 } /* 0x0600002C System.Void GoogleMobileAds.Placement.BannerAdGameObject::<AddCallbacks>m__1(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs) */,
	{ 0, 0 } /* 0x0600002D System.Void GoogleMobileAds.Placement.BannerAdGameObject::<AddCallbacks>m__2(System.Object,System.EventArgs) */,
	{ 0, 0 } /* 0x0600002E System.Void GoogleMobileAds.Placement.BannerAdGameObject::<AddCallbacks>m__3(System.Object,System.EventArgs) */,
	{ 0, 0 } /* 0x0600002F System.Void GoogleMobileAds.Placement.BannerAdGameObject::<AddCallbacks>m__4(System.Object,System.EventArgs) */,
	{ 0, 0 } /* 0x06000030 System.Void GoogleMobileAds.Placement.BannerAdGameObject/<AddCallbacks>c__AnonStorey0::.ctor() */,
	{ 0, 0 } /* 0x06000031 System.Void GoogleMobileAds.Placement.BannerAdGameObject/<AddCallbacks>c__AnonStorey0::<>m__0() */,
	{ 0, 0 } /* 0x06000032 System.Void GoogleMobileAds.Placement.GoogleMobileAdsPlacements::.ctor() */,
	{ 0, 0 } /* 0x06000033 GoogleMobileAds.Placement.GoogleMobileAdsPlacements GoogleMobileAds.Placement.GoogleMobileAdsPlacements::get_Instance() */,
	{ 0, 0 } /* 0x06000034 System.Void GoogleMobileAds.Placement.AdPlacement::.ctor() */,
	{ 0, 0 } /* 0x06000035 System.String GoogleMobileAds.Placement.AdPlacement::get_AdUnitId() */,
	{ 0, 0 } /* 0x06000036 System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::.ctor() */,
	{ 0, 0 } /* 0x06000037 GoogleMobileAds.Api.InterstitialAd GoogleMobileAds.Placement.InterstitialAdGameObject::get_InterstitialAd() */,
	{ 0, 0 } /* 0x06000038 System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::Awake() */,
	{ 0, 0 } /* 0x06000039 System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::OnDestroy() */,
	{ 0, 0 } /* 0x0600003A System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::LoadAd(GoogleMobileAds.Api.AdRequest) */,
	{ 0, 0 } /* 0x0600003B System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::ShowIfLoaded() */,
	{ 0, 0 } /* 0x0600003C System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::DestroyAd() */,
	{ 0, 0 } /* 0x0600003D System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::AddCallbacks() */,
	{ 0, 0 } /* 0x0600003E System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::<AddCallbacks>m__0(System.Object,System.EventArgs) */,
	{ 0, 0 } /* 0x0600003F System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::<AddCallbacks>m__1(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs) */,
	{ 0, 0 } /* 0x06000040 System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::<AddCallbacks>m__2(System.Object,System.EventArgs) */,
	{ 0, 0 } /* 0x06000041 System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::<AddCallbacks>m__3(System.Object,System.EventArgs) */,
	{ 0, 0 } /* 0x06000042 System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::<AddCallbacks>m__4(System.Object,System.EventArgs) */,
	{ 0, 0 } /* 0x06000043 System.Void GoogleMobileAds.Placement.InterstitialAdGameObject/<AddCallbacks>c__AnonStorey0::.ctor() */,
	{ 0, 0 } /* 0x06000044 System.Void GoogleMobileAds.Placement.InterstitialAdGameObject/<AddCallbacks>c__AnonStorey0::<>m__0() */,
	{ 0, 0 } /* 0x06000045 System.Void GoogleMobileAds.Placement.RewardedAdGameObject::.ctor() */,
	{ 0, 0 } /* 0x06000046 GoogleMobileAds.Api.RewardedAd GoogleMobileAds.Placement.RewardedAdGameObject::get_RewardedAd() */,
	{ 0, 0 } /* 0x06000047 System.Void GoogleMobileAds.Placement.RewardedAdGameObject::Awake() */,
	{ 0, 0 } /* 0x06000048 System.Void GoogleMobileAds.Placement.RewardedAdGameObject::OnDestroy() */,
	{ 0, 0 } /* 0x06000049 System.Void GoogleMobileAds.Placement.RewardedAdGameObject::LoadAd(GoogleMobileAds.Api.AdRequest) */,
	{ 0, 0 } /* 0x0600004A System.Void GoogleMobileAds.Placement.RewardedAdGameObject::ShowIfLoaded() */,
	{ 0, 0 } /* 0x0600004B System.Void GoogleMobileAds.Placement.RewardedAdGameObject::AddCallbacks() */,
	{ 0, 0 } /* 0x0600004C System.Void GoogleMobileAds.Placement.RewardedAdGameObject::<AddCallbacks>m__0(System.Object,System.EventArgs) */,
	{ 0, 0 } /* 0x0600004D System.Void GoogleMobileAds.Placement.RewardedAdGameObject::<AddCallbacks>m__1(System.Object,GoogleMobileAds.Api.AdErrorEventArgs) */,
	{ 0, 0 } /* 0x0600004E System.Void GoogleMobileAds.Placement.RewardedAdGameObject::<AddCallbacks>m__2(System.Object,GoogleMobileAds.Api.AdErrorEventArgs) */,
	{ 0, 0 } /* 0x0600004F System.Void GoogleMobileAds.Placement.RewardedAdGameObject::<AddCallbacks>m__3(System.Object,System.EventArgs) */,
	{ 0, 0 } /* 0x06000050 System.Void GoogleMobileAds.Placement.RewardedAdGameObject::<AddCallbacks>m__4(System.Object,GoogleMobileAds.Api.Reward) */,
	{ 0, 0 } /* 0x06000051 System.Void GoogleMobileAds.Placement.RewardedAdGameObject::<AddCallbacks>m__5(System.Object,System.EventArgs) */,
	{ 0, 0 } /* 0x06000052 System.Void GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey0::.ctor() */,
	{ 0, 0 } /* 0x06000053 System.Void GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey0::<>m__0() */,
	{ 0, 0 } /* 0x06000054 System.Void GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey1::.ctor() */,
	{ 0, 0 } /* 0x06000055 System.Void GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey1::<>m__0() */,
	{ 0, 0 } /* 0x06000056 System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::.ctor() */,
	{ 0, 0 } /* 0x06000057 GoogleMobileAds.Api.RewardedInterstitialAd GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::get_RewardedInterstitialAd() */,
	{ 0, 0 } /* 0x06000058 System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::Awake() */,
	{ 0, 0 } /* 0x06000059 System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::OnDestroy() */,
	{ 0, 0 } /* 0x0600005A System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::LoadAd(GoogleMobileAds.Api.AdRequest) */,
	{ 0, 0 } /* 0x0600005B System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::ShowIfLoaded() */,
	{ 0, 0 } /* 0x0600005C System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::AddCallbacks() */,
	{ 0, 0 } /* 0x0600005D System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::<LoadAd>m__0(GoogleMobileAds.Api.RewardedInterstitialAd,System.String) */,
	{ 0, 0 } /* 0x0600005E System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::<ShowIfLoaded>m__1(GoogleMobileAds.Api.Reward) */,
	{ 0, 0 } /* 0x0600005F System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::<AddCallbacks>m__2(System.Object,System.EventArgs) */,
	{ 0, 0 } /* 0x06000060 System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::<AddCallbacks>m__3(System.Object,System.EventArgs) */,
	{ 0, 0 } /* 0x06000061 System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::<AddCallbacks>m__4(System.Object,GoogleMobileAds.Api.AdErrorEventArgs) */,
	{ 0, 0 } /* 0x06000062 System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<LoadAd>c__AnonStorey0::.ctor() */,
	{ 0, 0 } /* 0x06000063 System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<LoadAd>c__AnonStorey0::<>m__0() */,
	{ 0, 0 } /* 0x06000064 System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<ShowIfLoaded>c__AnonStorey1::.ctor() */,
	{ 0, 0 } /* 0x06000065 System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<ShowIfLoaded>c__AnonStorey1::<>m__0() */,
	{ 0, 0 } /* 0x06000066 System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<AddCallbacks>c__AnonStorey2::.ctor() */,
	{ 0, 0 } /* 0x06000067 System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<AddCallbacks>c__AnonStorey2::<>m__0() */,
	{ 0, 0 } /* 0x06000068 System.Void TestController::.ctor() */,
	{ 0, 0 } /* 0x06000069 System.Void TestController::Start() */,
	{ 0, 0 } /* 0x0600006A System.Void TestController::Update() */,
	{ 0, 0 } /* 0x0600006B System.Void TestController::RequestAndLoadBannerAd() */,
	{ 0, 0 } /* 0x0600006C System.Void TestController::DestroyBannerAd() */,
	{ 0, 0 } /* 0x0600006D System.Void TestController::RequestAndLoadRewardedAd() */,
	{ 0, 0 } /* 0x0600006E System.Void TestController::ShowRewardedAd() */,
	{ 0, 0 } /* 0x0600006F System.Void TestController::RequestAndLoadInterstitialAd() */,
	{ 0, 0 } /* 0x06000070 System.Void TestController::ShowInterstitialAd() */,
	{ 0, 0 } /* 0x06000071 System.Void TestController::DestroyInterstitialAd() */,
	{ 0, 0 } /* 0x06000072 System.Void TestController::RequestAndLoadRewardedInterstitialAd() */,
	{ 0, 0 } /* 0x06000073 System.Void TestController::ShowRewardedInterstitialAd() */,
	{ 0, 0 } /* 0x06000074 System.Void TestController::HandleInitCompleteAction(GoogleMobileAds.Api.InitializationStatus) */,
	{ 0, 0 } /* 0x06000075 GoogleMobileAds.Api.AdRequest TestController::CreateAdRequest() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
extern Il2CppSequencePoint g_sequencePointsGoogleMobileAds_Placement[];
Il2CppSequencePoint g_sequencePointsGoogleMobileAds_Placement[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#else
extern Il2CppSequencePoint g_sequencePointsGoogleMobileAds_Placement[];
Il2CppSequencePoint g_sequencePointsGoogleMobileAds_Placement[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[] = {
{ 24603, 4220, 33, 0, -1 },
{ 24603, 6770, 52, 0, -1 },
};
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[117] = 
{
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdErrorEvent::.ctor() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.AdFailedToLoadEvent::.ctor() */,
	{ 0, 0, 0 } /* TAdGameObject GoogleMobileAds.Api.MobileAdsExtensions::GetAd(GoogleMobileAds.Api.MobileAds,System.String) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Api.UserEarnedRewardEvent::.ctor() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.AdGameObject::.ctor() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.AdGameObject::set_AndroidAdUnitId(System.String) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.AdGameObject::set_IOSAdUnitId(System.String) */,
	{ 0, 0, 0 } /* System.String GoogleMobileAds.Placement.AdGameObject::get_AdUnitId() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.AdGameObject::Start() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.AdGameObject::LoadAd() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.AdGameObject::LoadAd(GoogleMobileAds.Api.AdRequest) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.AdGameObject::AddCallbacks() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.AdGameObject::AutoLoadAd() */,
	{ 0, 0, 0 } /* System.Boolean GoogleMobileAds.Placement.AdGameObject::AddGameObjectToPool() */,
	{ 0, 0, 0 } /* System.Boolean GoogleMobileAds.Placement.AdGameObject::RemoveGameObjectFromPoolIfNeeded() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.AdGameObject::<AutoLoadAd>m__0() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.AdGameObjectPool::.ctor() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Placement.AdGameObjectPool GoogleMobileAds.Placement.AdGameObjectPool::get_Instance() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.AdGameObjectPool::Add(System.Type,UnityEngine.GameObject,System.Boolean) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.AdGameObjectPool::Remove(System.Type,UnityEngine.GameObject,System.Boolean) */,
	{ 0, 0, 0 } /* TAdGameObject GoogleMobileAds.Placement.AdGameObjectPool::GetAd(System.String) */,
	{ 0, 0, 0 } /* TAdGameObject GoogleMobileAds.Placement.AdGameObjectPool::GetAdFromGameObject(UnityEngine.GameObject) */,
	{ 0, 0, 0 } /* UnityEngine.GameObject GoogleMobileAds.Placement.AdGameObjectPool::GetAdGameObject(System.String) */,
	{ 0, 0, 0 } /* System.String GoogleMobileAds.Placement.AdGameObjectPool::GenerateObjectKey(System.Type,System.String) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.AdGameObjectPool::Finalize() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.PoolEntry::.ctor(UnityEngine.GameObject,System.Boolean) */,
	{ 0, 0, 0 } /* UnityEngine.GameObject GoogleMobileAds.Placement.PoolEntry::get_GameObject() */,
	{ 0, 0, 0 } /* System.String GoogleMobileAds.Placement.PoolEntry::get_SceneNameOrigin() */,
	{ 0, 0, 0 } /* System.Boolean GoogleMobileAds.Placement.PoolEntry::get_IsPersistent() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.AdSizeProperty::.ctor() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.AdSize GoogleMobileAds.Placement.AdSizeProperty::ToAdSize() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.AdSize GoogleMobileAds.Placement.AdSizeProperty::ToAnchoredAdaptiveAdSize() */,
	{ 0, 0, 0 } /* System.Int32 GoogleMobileAds.Placement.AdSizeProperty::CalculateAdWidth(System.Int32) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.BannerAdGameObject::.ctor() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.BannerView GoogleMobileAds.Placement.BannerAdGameObject::get_BannerView() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.BannerAdGameObject::Awake() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.BannerAdGameObject::OnDestroy() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.BannerAdGameObject::LoadAd(GoogleMobileAds.Api.AdRequest) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.BannerAdGameObject::Hide() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.BannerAdGameObject::Show() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.BannerAdGameObject::DestroyAd() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.BannerAdGameObject::AddCallbacks() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.BannerAdGameObject::<AddCallbacks>m__0(System.Object,System.EventArgs) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.BannerAdGameObject::<AddCallbacks>m__1(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.BannerAdGameObject::<AddCallbacks>m__2(System.Object,System.EventArgs) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.BannerAdGameObject::<AddCallbacks>m__3(System.Object,System.EventArgs) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.BannerAdGameObject::<AddCallbacks>m__4(System.Object,System.EventArgs) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.BannerAdGameObject/<AddCallbacks>c__AnonStorey0::.ctor() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.BannerAdGameObject/<AddCallbacks>c__AnonStorey0::<>m__0() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.GoogleMobileAdsPlacements::.ctor() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Placement.GoogleMobileAdsPlacements GoogleMobileAds.Placement.GoogleMobileAdsPlacements::get_Instance() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.AdPlacement::.ctor() */,
	{ 0, 0, 0 } /* System.String GoogleMobileAds.Placement.AdPlacement::get_AdUnitId() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::.ctor() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.InterstitialAd GoogleMobileAds.Placement.InterstitialAdGameObject::get_InterstitialAd() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::Awake() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::OnDestroy() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::LoadAd(GoogleMobileAds.Api.AdRequest) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::ShowIfLoaded() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::DestroyAd() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::AddCallbacks() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::<AddCallbacks>m__0(System.Object,System.EventArgs) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::<AddCallbacks>m__1(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::<AddCallbacks>m__2(System.Object,System.EventArgs) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::<AddCallbacks>m__3(System.Object,System.EventArgs) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.InterstitialAdGameObject::<AddCallbacks>m__4(System.Object,System.EventArgs) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.InterstitialAdGameObject/<AddCallbacks>c__AnonStorey0::.ctor() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.InterstitialAdGameObject/<AddCallbacks>c__AnonStorey0::<>m__0() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedAdGameObject::.ctor() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.RewardedAd GoogleMobileAds.Placement.RewardedAdGameObject::get_RewardedAd() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedAdGameObject::Awake() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedAdGameObject::OnDestroy() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedAdGameObject::LoadAd(GoogleMobileAds.Api.AdRequest) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedAdGameObject::ShowIfLoaded() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedAdGameObject::AddCallbacks() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedAdGameObject::<AddCallbacks>m__0(System.Object,System.EventArgs) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedAdGameObject::<AddCallbacks>m__1(System.Object,GoogleMobileAds.Api.AdErrorEventArgs) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedAdGameObject::<AddCallbacks>m__2(System.Object,GoogleMobileAds.Api.AdErrorEventArgs) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedAdGameObject::<AddCallbacks>m__3(System.Object,System.EventArgs) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedAdGameObject::<AddCallbacks>m__4(System.Object,GoogleMobileAds.Api.Reward) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedAdGameObject::<AddCallbacks>m__5(System.Object,System.EventArgs) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey0::.ctor() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey0::<>m__0() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey1::.ctor() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedAdGameObject/<AddCallbacks>c__AnonStorey1::<>m__0() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::.ctor() */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.RewardedInterstitialAd GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::get_RewardedInterstitialAd() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::Awake() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::OnDestroy() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::LoadAd(GoogleMobileAds.Api.AdRequest) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::ShowIfLoaded() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::AddCallbacks() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::<LoadAd>m__0(GoogleMobileAds.Api.RewardedInterstitialAd,System.String) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::<ShowIfLoaded>m__1(GoogleMobileAds.Api.Reward) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::<AddCallbacks>m__2(System.Object,System.EventArgs) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::<AddCallbacks>m__3(System.Object,System.EventArgs) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject::<AddCallbacks>m__4(System.Object,GoogleMobileAds.Api.AdErrorEventArgs) */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<LoadAd>c__AnonStorey0::.ctor() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<LoadAd>c__AnonStorey0::<>m__0() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<ShowIfLoaded>c__AnonStorey1::.ctor() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<ShowIfLoaded>c__AnonStorey1::<>m__0() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<AddCallbacks>c__AnonStorey2::.ctor() */,
	{ 0, 0, 0 } /* System.Void GoogleMobileAds.Placement.RewardedInterstitialAdGameObject/<AddCallbacks>c__AnonStorey2::<>m__0() */,
	{ 0, 0, 0 } /* System.Void TestController::.ctor() */,
	{ 0, 0, 0 } /* System.Void TestController::Start() */,
	{ 0, 0, 0 } /* System.Void TestController::Update() */,
	{ 0, 0, 0 } /* System.Void TestController::RequestAndLoadBannerAd() */,
	{ 0, 0, 0 } /* System.Void TestController::DestroyBannerAd() */,
	{ 0, 0, 0 } /* System.Void TestController::RequestAndLoadRewardedAd() */,
	{ 0, 0, 0 } /* System.Void TestController::ShowRewardedAd() */,
	{ 0, 0, 0 } /* System.Void TestController::RequestAndLoadInterstitialAd() */,
	{ 0, 0, 0 } /* System.Void TestController::ShowInterstitialAd() */,
	{ 0, 0, 0 } /* System.Void TestController::DestroyInterstitialAd() */,
	{ 0, 0, 0 } /* System.Void TestController::RequestAndLoadRewardedInterstitialAd() */,
	{ 0, 0, 0 } /* System.Void TestController::ShowRewardedInterstitialAd() */,
	{ 0, 0, 0 } /* System.Void TestController::HandleInitCompleteAction(GoogleMobileAds.Api.InitializationStatus) */,
	{ 0, 0, 0 } /* GoogleMobileAds.Api.AdRequest TestController::CreateAdRequest() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationGoogleMobileAds_Placement;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationGoogleMobileAds_Placement = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	0,
	(Il2CppSequencePoint*)g_sequencePointsGoogleMobileAds_Placement,
	2,
	(Il2CppCatchPoint*)g_catchPoints,
	0,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
