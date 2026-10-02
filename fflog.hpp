#pragma once

#define REBASE(addr)(addr+reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    namespace FLog
    {
        namespace AdContentLoaderLog
        {
            const uintptr_t DownloadingExternalVideoAdsFailedUrl=REBASE(0x1191E00);
        }
        namespace AdGuiLog
        {
            const uintptr_t AdGuiLoadContentDoesMatchCurrent=REBASE(0x1182940);
            const uintptr_t AdGuiPreloadContentFailedAdServiceFound=REBASE(0x1182340);
        }
        namespace AdOpportunityTracker
        {
            const uintptr_t IsInstanceCurrentlyMeetingImpressionCrit=REBASE(0x117C1A0);
        }
        namespace AdPlayerBrowser
        {
            const uintptr_t AdPlayerGetsWebWindowRequestOpen=REBASE(0x17BEE00);
            const uintptr_t AdPlayerLetActiveTabPostWebMessageAsStri=REBASE(0x17BAC60);
            const uintptr_t AdPlayerResizeContainerWindowWebView2Bro=REBASE(0x17A8060);
            const uintptr_t AdPlayerStep1HandleTabNavCompletedAdPlay=REBASE(0x17B94D0);
            const uintptr_t AdPlayerStep1TabInitializeWebviewNavigat=REBASE(0x17BC000);
            const uintptr_t AdPlayerStep2AdPlayerLoadAdSetActiveCall=REBASE(0x85DD10);
            const uintptr_t AdPlayerStep4AdPlayerShowAdPostMessage=REBASE(0x85E080);
            const uintptr_t AdPlayerStep4AdPlayerShowAdSetActiveCall=REBASE(0x85E0B0);
            const uintptr_t WebView2BrowserActiveTabWebViewHasGone=REBASE(0x17BAC70);
            const uintptr_t WebView2BrowserSetWebRenderingTabsHasGon=REBASE(0x17BFB60);
            const uintptr_t WebView2BrowserTabContentWebViewDoesExis=REBASE(0x17BBDE0);
            const uintptr_t WebView2BrowserTabWebViewControllerDoesE=REBASE(0x17BBEF0);
            const uintptr_t WebView2BrowserWebMessageReceivedButBrow=REBASE(0x17C5E30);
            const uintptr_t WebView2BrowserWebMessageReceivedButHand=REBASE(0x17C5F70);
        }
        namespace AdService
        {
            const uintptr_t AdServiceOnServiceProviderFailedSubmitGa=REBASE(0x1147FF0);
            const uintptr_t FailedFindPlayerDemandAdResult=REBASE(0x115AE10);
            const uintptr_t FailedGetTranslationKey=REBASE(0x115A440);
            const uintptr_t InvalidTeleportPlaceId=REBASE(0x114C700);
        }
        namespace AdaptiveConfig
        {
            const uintptr_t ACSPoll200ButRecognizedBoolean=REBASE(0x5A61770);
            const uintptr_t IssuingACSPollUrlPlaceId=REBASE(0x5A60210);
            const uintptr_t ResponseReceivedStatusErr=REBASE(0x5A60B10);
        }
        namespace AdornRenderStats
        {
            const uintptr_t Rendering2DAdornItemsItems=REBASE(0x3F47C20);
        }
        namespace AdornableLifetime
        {
            const uintptr_t AdornableCollectorDeleted=REBASE(0x3F472F0);
            const uintptr_t CollectorAdding3DAdorn=REBASE(0x3F47690);
        }
        namespace AdsLifecycleManager
        {
            const uintptr_t FurtherSDKInitializationRequiredDebuggin=REBASE(0x11383F0);
            const uintptr_t GMASDKGetQueryInfoComplete=REBASE(0x113CBB0);
            const uintptr_t GMASDKInitGetQueryInfoSucceeded=REBASE(0x113A220);
            const uintptr_t LifecycleIDMismatchExpectedGotApplyGmaEl=REBASE(0x1137F90);
            const uintptr_t NewLocalPlayerDetectedStartingAds=REBASE(0x113A4A0);
        }
        namespace AerodynamicsLogs
        {
            const uintptr_t BlockingRequestMeshPartMeshAeroOcclusion=REBASE(0xE80F10);
            const uintptr_t BlockingRequestPartOperationMeshAeroSeri=REBASE(0xE68FA0);
            const uintptr_t CreatedInterpolationBasedForceModelOcclu=REBASE(0x2E58A50);
            const uintptr_t EmptyMeshZeroAerodynamicForceModel=REBASE(0x2E582E0);
            const uintptr_t ErrorWhileDecodingAeroMeshData=REBASE(0x16740A0);
            const uintptr_t ProcessingInterpolationBasedForceModelOc=REBASE(0x2E578B0);
            const uintptr_t SerializeTriangleCount=REBASE(0xE26440);
            const uintptr_t SetAeroBooleanPrimitive=REBASE(0xECE2C0);
            const uintptr_t SettingEmptySerializedAeroMeshFetched=REBASE(0xE80A10);
            const uintptr_t SettingEmptySerializedMeshEmptyIndices=REBASE(0xE68EC0);
        }
        namespace AgeCheck
        {
            const uintptr_t AgeCheckedRCCManagerAMPConfirmedUserIdAg=REBASE(0x49CC230);
            const uintptr_t AgeCheckedRCCManagerAttemptFailedUserIdH=REBASE(0x49CC150);
            const uintptr_t AgeCheckedRCCManagerAttemptSendingAMPReq=REBASE(0x49CB960);
            const uintptr_t AgeCheckedRCCManagerRetrySkippedDMGone=REBASE(0x49CCDE0);
            const uintptr_t AgeCheckedRCCManagerRetryTimerFiredAttem=REBASE(0x49CCFB0);
            const uintptr_t PlayerPromptAgeCheckEnteredUserIdName=REBASE(0x3E08CD0);
            const uintptr_t PlayerPromptAgeCheckThrottledLastFireSAg=REBASE(0x3E08C80);
        }
        namespace AnalyticsDeferredEphemeralReportingDiagnostic
        {
            const uintptr_t AddingCounterBulk=REBASE(0x2BA9660);
            const uintptr_t AddingStat=REBASE(0x2BAC1D0);
            const uintptr_t AddingStatBulk=REBASE(0x2BA9410);
            const uintptr_t ConvertingCSVBulkCounters=REBASE(0x2BAC640);
            const uintptr_t SendNowBlocking=REBASE(0x2BACF10);
            const uintptr_t StartingDeferredEphemeralTimerThread=REBASE(0x2BA9EB0);
            const uintptr_t TimerThreadImplSendingSessionCount=REBASE(0x2BAA050);
        }
        namespace AnalyticsDeferredReporterDiagnostic
        {
            const uintptr_t ExitingDeferredReporterTimerThread=REBASE(0x2BB5DF0);
            const uintptr_t RequestShutdownEarlyReturnBecauseAlready=REBASE(0x2BB4BD0);
            const uintptr_t SentQueuedEventsTarget=REBASE(0x2BB6690);
            const uintptr_t StartingDeferredReporterTimerThread=REBASE(0x2BB5C50);
            const uintptr_t StartingSendWaitLoop=REBASE(0x2BB5E00);
            const uintptr_t UnsentEventsExitTargetZu=REBASE(0x2BB4CE0);
        }
        namespace AnalyticsService
        {
            const uintptr_t AnalyticsProcessorCouldnTParseInputJson=REBASE(0x3B92060);
            const uintptr_t AnalyticsServiceFailedParseEventValueErr=REBASE(0x5FA73C0);
            const uintptr_t ClassCanOnlyInitializedThroughInitialize=REBASE(0x3B92E90);
            const uintptr_t HttpRequestGetImplCallbackHttpErrCodeSta=REBASE(0x3B9EA90);
            const uintptr_t HttpRequestGetImplRequestUrl=REBASE(0x3B9E7E0);
            const uintptr_t HttpRequestPostImplHttpErrCodeStatusErrM=REBASE(0x3BA1160);
            const uintptr_t HttpRequestPostImplRequestOKUrlBodySizeB=REBASE(0x3B9E420);
            const uintptr_t SendBatchEventsSentEventsBody=REBASE(0x3B9F730);
        }
        namespace AnimatingEverythingLog
        {
            const uintptr_t AnimationRigGetPropertyValueTypeTargetIn=REBASE(0x1A633B0);
            const uintptr_t AnimationRigParseAnimatableCouldParseWir=REBASE(0x1A63590);
        }
        namespace AnimationClipProvider
        {
            const uintptr_t SerializerLoadInstances=REBASE(0x188F000);
        }
        namespace AnimationGraphSA
        {
            const uintptr_t AnimationGraphGraphExceedsNodesServerAut=REBASE(0x1ACF7A0);
            const uintptr_t AnimationGraphRobloxReplicatedStorageFou=REBASE(0x1ACE650);
            const uintptr_t PreparingServerAuthorityPredictionPredic=REBASE(0x1ACE630);
            const uintptr_t RollbackNodeFoundAttributeSkipping=REBASE(0x1AD14D0);
            const uintptr_t RollbackNodeFoundIdSkipping=REBASE(0x1AD1880);
        }
        namespace AnimationStreamTrackTrace
        {
            const uintptr_t AnimationStreamTrackPlay=REBASE(0x1878930);
            const uintptr_t AnimationStreamTrackStop=REBASE(0x1878D70);
        }
        namespace AppBridge
        {
            const uintptr_t AppBridgeComponentsHaveBeenFinalized=REBASE(0x4C0C830);
            const uintptr_t AppBridgeComponentsHaveBeenInitialized=REBASE(0x4C0D470);
            const uintptr_t EndAppBridgeCustomEmergencyStopPolicy=REBASE(0x4C0F850);
            const uintptr_t FlipTimeStampFastStringCouldParsed=REBASE(0x6007030);
            const uintptr_t OnUserInitiatedLaunch=REBASE(0x4C0E570);
            const uintptr_t SignalUpdateEmergencyStatus=REBASE(0x4C0FA70);
            const uintptr_t StartAppBridgeCustomEmergencyStopPolicy=REBASE(0x4C0F960);
        }
        namespace AppBridgeWebRequest
        {
            const uintptr_t AccountSettingsEmailRequestDestructor=REBASE(0x84EEF0);
            const uintptr_t AccountSettingsEmailRequestLoadAsyncURL=REBASE(0x4C2D380);
            const uintptr_t AccountSettingsEmailRequestVerifiedBoolM=REBASE(0x4C2D870);
            const uintptr_t UserAppLaunchInfoRequestDestructor=REBASE(0x84F030);
            const uintptr_t UserAppLaunchInfoRequestResponseObject=REBASE(0x4C23B40);
            const uintptr_t UserRoleRequestDestructor=REBASE(0x84EF90);
            const uintptr_t UserRoleRequestLoadAsyncURL=REBASE(0x4C2BAF0);
            const uintptr_t UserRoleRequestResponseValidJsonObject=REBASE(0x4C2BFE0);
        }
        namespace AppConfiguration
        {
            const uintptr_t AppConfigurationFetchResponseCodeBody=REBASE(0x12EC2B0);
            const uintptr_t AppConfigurationFetchUrl=REBASE(0x12EBBB0);
            const uintptr_t AppConfigurationFetchWasForced=REBASE(0x12EA7C0);
            const uintptr_t AppConfigurationGetCachedDataStorageKeyD=REBASE(0x12E83B0);
            const uintptr_t AppConfigurationGetConfigurationByBehavi=REBASE(0x12E9510);
            const uintptr_t AppConfigurationGetConfigurationTypeUser=REBASE(0x12E8EE0);
            const uintptr_t AppConfigurationReadDeviceCacheData=REBASE(0x12E86B0);
            const uintptr_t AppConfigurationReset=REBASE(0x12E9E20);
            const uintptr_t AppConfigurationResetExpires=REBASE(0x12EA730);
            const uintptr_t AppConfigurationSetCachedDataStorageKeyD=REBASE(0x12EB280);
            const uintptr_t AppConfigurationUpdateConfigurationByBeh=REBASE(0x16BD770);
            const uintptr_t AppConfigurationUpdateConfigurationDEPRE=REBASE(0x12EB810);
            const uintptr_t AppConfigurationUpdateConfigurationTypeU=REBASE(0x12EB9D0);
            const uintptr_t AppConfigurationWriteDeviceCacheData=REBASE(0x12E8A30);
            const uintptr_t GetUrlGotChannelBehavior=REBASE(0x12E73A0);
        }
        namespace AppLifecycleManager
        {
            const uintptr_t AppLifecycleStateManagerPerformingStateT=REBASE(0x4CEC630);
        }
        namespace AppPlatformQoSEmergency
        {
            const uintptr_t AppPlatformQoSEmergencyHandlerWasDestroy=REBASE(0x4CEE840);
            const uintptr_t BackendLevelDetailEnabledBasedCookie=REBASE(0x4CEEA60);
            const uintptr_t CannotEndEmergencyType=REBASE(0x4CEFB90);
            const uintptr_t CannotExecuteEmergencyType=REBASE(0x4CEF470);
            const uintptr_t ForceAddThrottlingDomainEndpoint=REBASE(0x4CEF460);
            const uintptr_t ForceRemoveThrottlingDomainEndpoint=REBASE(0x4CEFB70);
            const uintptr_t OnUpdatedFlagsEmergencyIgnoredBecauseUse=REBASE(0x4CEF0A0);
            const uintptr_t PlatformCouldExecuteCancelAllActions=REBASE(0x4CF1DF0);
            const uintptr_t PlatformCouldExecuteWarningActionBecause=REBASE(0x39915E0);
            const uintptr_t PlatformCouldOpenSystemDialog=REBASE(0x4CF17F0);
        }
        namespace AppRemoteCheckStarterModule
        {
            const uintptr_t AppRemoteCheckStarterModuleFinishedStage=REBASE(0x50FC460);
            const uintptr_t AppRemoteCheckStarterModuleStarted=REBASE(0x50FBE40);
        }
        namespace AppShellReporter
        {
            const uintptr_t AppShellReporterActionEnabled=REBASE(0x4CE2D10);
            const uintptr_t AppShellReporterActionTaken=REBASE(0x4CE5B00);
            const uintptr_t ConnectingFPSCounterRenderStepped=REBASE(0x4CE4340);
            const uintptr_t DisconnectingFPSCounterRenderStepped=REBASE(0x4CE50F0);
            const uintptr_t FiringAppShellFeatureSwitchedSignalType=REBASE(0x31BCD00);
            const uintptr_t LuaAppMemoryCategoryUsage=REBASE(0x4CE4990);
            const uintptr_t ReportingLoadTimeTookSeconds=REBASE(0x4CE2E40);
            const uintptr_t StartingCollectPostStatsTimer=REBASE(0x4CE4740);
        }
        namespace AppTracing
        {
            const uintptr_t AppTracingReportErrorFoundDoReport=REBASE(0x5AB0430);
            const uintptr_t TracerServiceStartSpanStartupSpanCreated=REBASE(0x5AB1020);
            const uintptr_t TracingTransportSendFailedHTTPStatusCode=REBASE(0x2BA7A10);
        }
        namespace AppUpdate
        {
            const uintptr_t AppUpdateAdapterCheckForProtocolLaunchUp=REBASE(0x4C16DF0);
            const uintptr_t AppUpdateAdapterCheckForUpdateCouldnTGet=REBASE(0x4C112A0);
            const uintptr_t AppUpdateAdapterCheckForUpdateCouldnTSet=REBASE(0x4C18A50);
            const uintptr_t AppUpdateAdapterCheckForUpdateGetUserCha=REBASE(0x4C16810);
            const uintptr_t AppUpdateAdapterCheckForUpdateSkippingUp=REBASE(0x4C14090);
            const uintptr_t AppUpdateAdapterCheckForUpdateUsingDebug=REBASE(0x4C10B30);
            const uintptr_t AppUpdateAdapterGetLatestVersionAndProce=REBASE(0x4C15190);
            const uintptr_t AppUpdateAdapterGetLatestVersionRequestF=REBASE(0x4C13100);
            const uintptr_t AppUpdateAdapterGetUserChannelRequestFai=REBASE(0x4C11B30);
            const uintptr_t AppUpdateAdapterInit=REBASE(0x4C10450);
            const uintptr_t AppUpdateAdapterStop=REBASE(0x832AA0);
            const uintptr_t ChannelProductionUpdateChecksAreBeing=REBASE(0x4C10BC0);
            const uintptr_t CheckforUpdateAdapterSetSoRespondingNotS=REBASE(0x32D2CA0);
            const uintptr_t CouldnTFindUpdaterPath=REBASE(0x4C20260);
            const uintptr_t DebugAppUpdateStatusRecognizedDefaulting=REBASE(0x4C10690);
            const uintptr_t GetChannelAndTokenAdapterSetReturningEmp=REBASE(0x32D3780);
            const uintptr_t GetProtocolLaunchUpdateTypeAdapterSetRet=REBASE(0x32D3540);
            const uintptr_t PerformManagedUpdateAdapterSetReturningF=REBASE(0x32D34B0);
            const uintptr_t WindowsUpdateAdapterPerformManagedUpdate=REBASE(0x4C20410);
            const uintptr_t WindowsUpdateAdapterSetChannelPreference=REBASE(0x4C21CB0);
            const uintptr_t WindowsUpdateAdapterStartBackgroundDownl=REBASE(0x4C20F60);
        }
        namespace AppendOnlyBuffer
        {
            const uintptr_t CacheDirectoryPathEmpty=REBASE(0x2AB2EC0);
            const uintptr_t ExpectedSizeMustGreaterThanZeroAuto=REBASE(0x2AB32E0);
            const uintptr_t FailedCloseFileRc=REBASE(0x2AB21F0);
            const uintptr_t FailedCloseFileWhileExtractingFile=REBASE(0x2AB2BC0);
            const uintptr_t FailedFlushFileRc=REBASE(0x2AB2880);
            const uintptr_t FailedGetFilePosition=REBASE(0x2AB2780);
            const uintptr_t FailedGetTemporaryDirectoryPath=REBASE(0x5F46D00);
            const uintptr_t FailedRemoveTemporaryFile=REBASE(0x2AB23E0);
            const uintptr_t FailedWriteFile=REBASE(0x2AB2630);
            const uintptr_t FileAppendOnlyBufferFailedCreateTemporar=REBASE(0x2AB1F00);
            const uintptr_t GrowableHeapAppendOnlyBufferFailedAlloca=REBASE(0x2AB1B90);
            const uintptr_t GrowableHeapAppendOnlyBufferFailedGrowBy=REBASE(0x2AB1900);
            const uintptr_t GrowableHeapAppendOnlyBufferRequestedCap=REBASE(0x2AB37A0);
        }
        namespace AssetDeliveryProxy
        {
            const uintptr_t AssetDeliveryProxyErrorOccurredRetrievin=REBASE(0x16EA6F0);
            const uintptr_t AssetDeliveryProxyErrorOccurredWhilePars=REBASE(0x5EF83D0);
            const uintptr_t AssetDeliveryProxyExceptionThrownWhileGe=REBASE(0x5EF8330);
            const uintptr_t AssetDeliveryProxyRestartTaskNeedRestart=REBASE(0x16EC2C0);
            const uintptr_t AssetDeliveryProxyScheduleRestartNeedRes=REBASE(0x16EBF40);
            const uintptr_t AssetDeliveryProxyStartStartingHttpServe=REBASE(0x16EB8D0);
        }
        namespace AssetPreloading
        {
            const uintptr_t PreloadSuccessAssetUrlPrio=REBASE(0x342E980);
            const uintptr_t SignalFired=REBASE(0x3432BF0);
            const uintptr_t StatsCacheHitCounterNotFetchedCounterFet=REBASE(0x3431B60);
        }
        namespace AssetProvider
        {
            const uintptr_t CreatedWorkflowIdLoadAssetAssetType=REBASE(0x26F6260);
            const uintptr_t ExecutingCallbackWorkflowId=REBASE(0x12752F0);
            const uintptr_t UnsupportedAssetDeliveryQueryParamAsseti=REBASE(0x26E57F0);
        }
        namespace AssetQualityService
        {
            const uintptr_t AllUploadsCompleteDispatchingSchedule=REBASE(0x3420490);
            const uintptr_t DispatchingUploadRbxmBytesAssetTypeId=REBASE(0x3422D80);
            const uintptr_t FetchedGltfContentOk=REBASE(0x341AA20);
            const uintptr_t FetchedSummaryContentOk=REBASE(0x3419B70);
            const uintptr_t FetchedValidationContent=REBASE(0x3419480);
            const uintptr_t Log=REBASE(0x34213F0);
            const uintptr_t PollErrorStatusMessage=REBASE(0x342A070);
            const uintptr_t PollIterationTaskIdElapsedMs=REBASE(0x3417500);
            const uintptr_t PollParsedJobStatusValidationStages=REBASE(0x3418290);
            const uintptr_t ScheduleErrorStatusMessage=REBASE(0x341DFF0);
            const uintptr_t ScheduleGotTaskIdEnteringPollLoop=REBASE(0x341D6E0);
            const uintptr_t ScheduleRewroteEmptySettingsOptionsProto=REBASE(0x341C6C0);
            const uintptr_t UploadErrorStatusMessage=REBASE(0x3429D30);
            const uintptr_t UploadOKContentUrl=REBASE(0x3424D60);
            const uintptr_t UploadResponseMissingContentUrlStoreHash=REBASE(0x341B9C0);
            const uintptr_t VisualizationMeshFaceReferencesOutBounds=REBASE(0x340BB00);
            const uintptr_t VisualizationMeshTruncatedTrianglesExcee=REBASE(0x5F7D890);
        }
        namespace AssetReadLogger
        {
            const uintptr_t AssetReadLoggerAssetPathRawStageIsFirstR=REBASE(0x3AD3C40);
        }
        namespace AssetReader
        {
            const uintptr_t AssetRelativePathBasePath=REBASE(0x3AD09C0);
            const uintptr_t SetBasePathSetBasePath=REBASE(0x3AD19B0);
        }
        namespace AssetRequestTrace
        {
            const uintptr_t FailedBatchAssetApiURLValidityCheck=REBASE(0x12E1FE0);
        }
        namespace AssetUpdateNotificationSubscriber
        {
            const uintptr_t AssetUpdateCSMSubscriptionFailed=REBASE(0x33BE780);
        }
        namespace AssetsManifestManager
        {
            const uintptr_t CheckingExistenceOTAAssetsManifestOTA=REBASE(0x16B8970);
            const uintptr_t ReadingOTAAssetsManifestOTAConfig=REBASE(0x16D1240);
            const uintptr_t ValidAssetsManifestSaveOTAConfig=REBASE(0x16D0EF0);
        }
        namespace AssetsUploadApiFlow
        {
            const uintptr_t AssetIdModerationStatusPollingMissing=REBASE(0x35C1E80);
            const uintptr_t AssetIdModerationStatusPollingReached=REBASE(0x35C1AC0);
            const uintptr_t AssetsUploadSucceededAssetIdVersionNumbe=REBASE(0x35C2F90);
            const uintptr_t CompressionMultiPartFailed=REBASE(0x3BF3450);
            const uintptr_t CreateAssetsAssetVersionsSinglePart=REBASE(0x35D6900);
            const uintptr_t OperationIdUploadUrlModelInvalidAddition=REBASE(0x3BF3340);
        }
        namespace AsyncCodecTrace
        {
            const uintptr_t ERRORDroppingFrameCurrentPtsMs=REBASE(0x3D13400);
            const uintptr_t RvCodecStepPushDecoderEOS=REBASE(0x1E8DC60);
            const uintptr_t RvCodecStepPushEncoderEOS=REBASE(0x1E8DE00);
            const uintptr_t WebmReadPacketReturnFrameIndex=REBASE(0x1E91FD0);
        }
        namespace AsyncCodecTraceVerbose
        {
            const uintptr_t RvCodecStepPopDecoderPts=REBASE(0x1E8DFA0);
            const uintptr_t RvCodecStepPopEncoderPts=REBASE(0x1E8E0D0);
        }
        namespace AsyncHttpQueue
        {
            const uintptr_t FillMemoryCacheURLFormat=REBASE(0x121CE00);
            const uintptr_t FoundUrlFailedListCodeMsg=REBASE(0x12DAF10);
        }
        namespace AtomicCacheWrite
        {
            const uintptr_t FailedRename=REBASE(0x16D00B0);
        }
        namespace Audio
        {
            const uintptr_t FailedRestartSharedRecordingDeviceIndex=REBASE(0x28F1C70);
            const uintptr_t InputDevice=REBASE(0x28F4060);
            const uintptr_t OnRecordListChanged=REBASE(0x28F4F60);
            const uintptr_t OutputDevice=REBASE(0x28EC610);
            const uintptr_t RecordingBufferUnderrunStopped=REBASE(0x29059E0);
            const uintptr_t RecordingStoppedShared=REBASE(0x28F3E50);
            const uintptr_t SharedFmodRecordingFailedStartRecordingD=REBASE(0x2902030);
            const uintptr_t SharedFmodRecordingFormatMismatchDriverE=REBASE(0x2901720);
            const uintptr_t SharedFmodRecordingStoppedDriver=REBASE(0x29024E0);
            const uintptr_t SharedFmodRecordingUpdateFailedRequestin=REBASE(0x28F1F60);
        }
        namespace AudioDeviceInputLog
        {
            const uintptr_t AttachOutputReferenceSink=REBASE(0x455DAC0);
            const uintptr_t DestroyAudioProcessing=REBASE(0x455DF90);
            const uintptr_t ParticipantSelfRecorder=REBASE(0x455CB20);
            const uintptr_t ParticipantSubscriberCalling=REBASE(0x455C870);
            const uintptr_t PlaybackNodeAttachDsp=REBASE(0x4559760);
        }
        namespace AudioFocusManager
        {
            const uintptr_t AudioFocusManagerAudioFocusManagerConstr=REBASE(0x5ADF080);
            const uintptr_t AudioFocusManagerAudioFocusManagerDestru=REBASE(0x5ADF300);
        }
        namespace AudioFocusService
        {
            const uintptr_t AudioFocusServiceAudioFocusServiceConstr=REBASE(0x5ADDF40);
            const uintptr_t AudioFocusServiceAudioFocusServiceDestru=REBASE(0x5ADE180);
            const uintptr_t AudioFocusServiceAudioFocusServiceUnregi=REBASE(0x5ADE330);
        }
        namespace AudioInputProcessorTrace
        {
            const uintptr_t ConnectedAudioInputViaFmod=REBASE(0x1A9A9C0);
            const uintptr_t CreatingCallbackAudioNode=REBASE(0x1A9C1B0);
            const uintptr_t Deactivating=REBASE(0x1A90500);
            const uintptr_t DisconnectAudioNode=REBASE(0x1A9C0C0);
            const uintptr_t FmodOpenFailedInitializeDsp=REBASE(0x1A9A330);
            const uintptr_t InputCaptureAudioSinkAvailableConnecting=REBASE(0x1A9C240);
            const uintptr_t RemovingCallbackAudioNode=REBASE(0x1A9C640);
            const uintptr_t StartProcessingAudioInput=REBASE(0x1A90830);
            const uintptr_t StopProcessingAudioInput=REBASE(0x1A90FF0);
        }
        namespace AudioSpeechToTextLog
        {
            const uintptr_t AudioSpeechToTextSoundServiceFound=REBASE(0x4532780);
            const uintptr_t ForwardDataVADQuery=REBASE(0x4536550);
            const uintptr_t STTSeqResponseIDCanceled=REBASE(0x5A02630);
            const uintptr_t STTSeqResponseIDPushedInto=REBASE(0x5A00CB0);
            const uintptr_t STTSeqResponseIDReceivedText=REBASE(0x4534300);
            const uintptr_t SendDataVAD=REBASE(0x4531780);
            const uintptr_t UpdateStepSoundServiceFoundDeferring=REBASE(0x4533590);
        }
        namespace AuroraInputLogging
        {
            const uintptr_t ClientFailedWriteEvenSingleFrame=REBASE(0x4726A20);
            const uintptr_t ClientMultipleStatesOneTickAction=REBASE(0x40F1F90);
            const uintptr_t InputActionTypeNoneAction=REBASE(0x4725FB0);
            const uintptr_t ServerControlStateFieldSizeExceedsRemain=REBASE(0x472B4A0);
            const uintptr_t ServerDroppingMisalignedControlStateEntr=REBASE(0x472A430);
            const uintptr_t ServerMultipleStatesReceivedAction=REBASE(0x47281A0);
            const uintptr_t ServerPeerUpdatingStepIDOffset=REBASE(0x3444BE0);
            const uintptr_t ServerSmoothStepOffsetUpwardsLockResultC=REBASE(0x40F94A0);
            const uintptr_t ServerUnexpectedScratchVersion=REBASE(0x472B820);
        }
        namespace AuroraRollback
        {
            const uintptr_t ClientReceivedDataFromReplicatorRemoteTi=REBASE(0x343C480);
            const uintptr_t InstancePredicted=REBASE(0x343C220);
            const uintptr_t LastServerUpdateSomehowAheadNOW=REBASE(0x3448930);
            const uintptr_t NowResimulatingDelta=REBASE(0x3447E10);
            const uintptr_t ScriptsUnableRollbackWorldstepLanded=REBASE(0x3446C90);
        }
        namespace AuroraScript
        {
            const uintptr_t AuroraScriptUpdateFixedStepAligned=REBASE(0x4258ED0);
            const uintptr_t InstanceNetAttributeSchemaChangedSignalW=REBASE(0x4259C30);
            const uintptr_t MessageUnableReceivedInstanceGUIDFound=REBASE(0x4253DE0);
            const uintptr_t NumberFieldsMoreThanNumberSynchronized=REBASE(0x4257F70);
            const uintptr_t ObjectFrameReadySendMessagesScheduled=REBASE(0x4254D80);
            const uintptr_t ObjectOutSyncFrameShould=REBASE(0x4257000);
            const uintptr_t ObjectReceivedMessagePredictedSourceRunn=REBASE(0x4261C10);
            const uintptr_t RollingObjectBackBecauseReceivedMessage=REBASE(0x4253E10);
            const uintptr_t ThrowingAwayMessagesResimulatedDelayedCa=REBASE(0x4262830);
            const uintptr_t ThrowingAwayMessagesResimulatedTouchEven=REBASE(0x4262110);
            const uintptr_t ThrowingAwayMessagesWhenEnqueuingUnpredi=REBASE(0x42559F0);
        }
        namespace AuroraScriptAPI
        {
            const uintptr_t SafeUseAuroraScriptsMayCauseMispredictio=REBASE(0x41DAF70);
        }
        namespace AuroraScriptRollback
        {
            const uintptr_t ClientRelativeServerSteps=REBASE(0x424AC60);
            const uintptr_t ERRORSomeObjectsWereAbleRolled=REBASE(0x4245770);
            const uintptr_t ObjectsFrameRolledBack=REBASE(0x4245820);
            const uintptr_t RollingBackUnalignedWorldstepIdMoreLikel=REBASE(0x4245210);
            const uintptr_t UnableRunWorldStepIdBecauseWorldStep=REBASE(0x42464E0);
            const uintptr_t UnableSuccessfullyRollBackFrameLanded=REBASE(0x42451B0);
        }
        namespace AuroraScriptService
        {
            const uintptr_t BehaviorWasAlreadyBoundInstance=REBASE(0x424B8B0);
            const uintptr_t BehaviorWasBoundInstance=REBASE(0x424CA10);
            const uintptr_t OverwritingDuplicateAuroraScript=REBASE(0x42477F0);
            const uintptr_t TryingAccessBehaviorButSService=REBASE(0x42474C0);
            const uintptr_t TryingAccessBehaviorGUIDButS=REBASE(0x4246C70);
        }
        namespace AutoUpgradeLog
        {
            const uintptr_t AutoUpgradeAppStartArgs=REBASE(0x834420);
        }
        namespace AvatarAutoSetup
        {
            const uintptr_t AvatarAutoSetupBaseJobPollingResponse=REBASE(0x1D00660);
            const uintptr_t AvatarAutoSetupBaseJobSaveResultSuccessf=REBASE(0x1CFF340);
            const uintptr_t AvatarAutoSetupCreateJobReceivedInvalidJ=REBASE(0x1CFFCA0);
            const uintptr_t AvatarAutoSetupDownloadResultError=REBASE(0x1D02B10);
            const uintptr_t AvatarAutoSetupUploadModelUploadedSucces=REBASE(0x1CCA710);
            const uintptr_t CancelJobFailed=REBASE(0x1D03250);
            const uintptr_t CouldOpenFileWriting=REBASE(0x1CFF470);
            const uintptr_t FailedDeleteAutoSetupResultError=REBASE(0x1CFF7C0);
            const uintptr_t FailedPollJobStatus=REBASE(0x1D00F30);
            const uintptr_t HandleJobDone=REBASE(0x1D01170);
            const uintptr_t JobCompletedSuccessfullyIDGenerationId=REBASE(0x1CFED00);
        }
        namespace AvatarChangeTelemetry
        {
            const uintptr_t HeartbeatFiredAfter1fSInterval=REBASE(0x5261480);
            const uintptr_t UserIdJoinDelayElapsed1fS=REBASE(0x5260610);
            const uintptr_t UserIdSkippedUniverseIdAllowList=REBASE(0x5260600);
        }
        namespace AvatarChatServiceTrace
        {
            const uintptr_t AvatarChatServiceAvatarChatServiceDestru=REBASE(0x1A28500);
            const uintptr_t AvatarChatServiceLuaEnableVoiceCalledEna=REBASE(0x1A298F0);
            const uintptr_t AvatarChatServiceOnServiceProviderInvoke=REBASE(0x1A284B0);
            const uintptr_t AvatarChatServicePostEnableUserVoiceInvo=REBASE(0x1A2A7C0);
            const uintptr_t AvatarChatServicePostEnableUserVoiceReso=REBASE(0x1A2A840);
            const uintptr_t AvatarChatServiceProcessRemoteEventGotEn=REBASE(0x1A29A30);
            const uintptr_t AvatarChatServiceResolveClientFeaturesOn=REBASE(0x1A2A6A0);
            const uintptr_t AvatarChatServiceSetClientFeaturesInvoke=REBASE(0x1A2E5D0);
            const uintptr_t AvatarChatServiceSetServerFeaturesInvoke=REBASE(0x1A29F20);
            const uintptr_t AvatarChatServiceUpdateSubsessionStatsPl=REBASE(0x1A2ADD0);
            const uintptr_t ClearingCacheUser=REBASE(0x1A29100);
        }
        namespace AvatarChatSubsessionAnalyticsV3Trace
        {
            const uintptr_t CameraOn=REBASE(0x1A08E90);
            const uintptr_t FacialAnimationStreamingSubsessionStatsS=REBASE(0x1A091B0);
            const uintptr_t LastSendRecvStateHhuCurrentStateHhu=REBASE(0x1A08C20);
            const uintptr_t MicOn=REBASE(0x1A09030);
            const uintptr_t UpdateTrackerAudioVideoStateAudioOnVideo=REBASE(0x1A08E20);
            const uintptr_t UpdateTrackerModeMode=REBASE(0x1A8CDC0);
        }
        namespace AvatarCreation
        {
            const uintptr_t AvatarCreationSubmitFailedStatus=REBASE(0x1CF8D00);
            const uintptr_t FailedDeleteAutoSetupResultError=REBASE(0x1CC3790);
            const uintptr_t FailedDownloadContentStatus=REBASE(0x1CC41F0);
            const uintptr_t FailedPollJobStatus=REBASE(0x1CF9990);
            const uintptr_t HandleJobDone2D=REBASE(0x1CBDF10);
            const uintptr_t HandleJobDone3D=REBASE(0x1CC5600);
            const uintptr_t JobFailedIDError=REBASE(0x1CF81E0);
            const uintptr_t PollingJobJobType=REBASE(0x1CFA400);
        }
        namespace AvatarJoinMetrics
        {
            const uintptr_t AllSurfaceAppearancesLoadedLocalHumanoid=REBASE(0x5247EE0);
            const uintptr_t FCEndedHumanoid=REBASE(0x524D860);
            const uintptr_t FCStartedHumanoid=REBASE(0x524D0C0);
            const uintptr_t ReceivedGlobalsTime=REBASE(0x45FE9D0);
            const uintptr_t TCEndedHumanoid=REBASE(0x524C9B0);
            const uintptr_t TCStartedHumanoid=REBASE(0x524C200);
            const uintptr_t TotalClientAssetRequestTime=REBASE(0x524AF50);
        }
        namespace AvatarMemoryTracker
        {
            const uintptr_t AvatarMemoryTrackerAliveWhenSynchronizin=REBASE(0x3B2F6F0);
            const uintptr_t DereferenceMeshXTotalReferencers=REBASE(0x3B33760);
            const uintptr_t InvalidateHumanoid=REBASE(0x3A2B1E0);
            const uintptr_t TrackHumanoidRole=REBASE(0x3B2EF70);
            const uintptr_t TrackMeshXBodyPart=REBASE(0x3B35100);
            const uintptr_t TrackMeshXFileMesh=REBASE(0x3B34ED0);
            const uintptr_t TrackMeshXHead=REBASE(0x3B353A0);
            const uintptr_t TrackTextureXDecal=REBASE(0x3B38B50);
            const uintptr_t TrackTextureXEditableImage=REBASE(0x3B38D60);
            const uintptr_t TrackTextureXMaterialVariant=REBASE(0x3B39980);
            const uintptr_t TrackTextureXMeshPart=REBASE(0x3B39740);
            const uintptr_t TrackTextureXSurfaceAppearance=REBASE(0x3B39300);
            const uintptr_t TrackTextureXTextureComposition=REBASE(0x3B39090);
            const uintptr_t UntrackTextureX=REBASE(0x3B37F00);
        }
        namespace AvatarSettings
        {
            const uintptr_t AvatarSettingsDeserializeData=REBASE(0x1A15FE0);
            const uintptr_t AvatarSettingsDiscardServerCanOnlyCalled=REBASE(0x1A14770);
            const uintptr_t AvatarSettingsDiscardServerError=REBASE(0x1A14AE0);
            const uintptr_t AvatarSettingsDoInitialDefaultAvatarRule=REBASE(0x1A12420);
            const uintptr_t AvatarSettingsOnUniverseConfigurationLoa=REBASE(0x1A17830);
            const uintptr_t AvatarSettingsPublishRequestBody=REBASE(0x1A13BD0);
        }
        namespace BackPressureThrottling
        {
            const uintptr_t SuccessfulRequestUrlRemovingEntryEndpoin=REBASE(0x2CD6570);
        }
        namespace BackendAdsProviderLog
        {
            const uintptr_t AdsAPICommunicationFailed=REBASE(0x112F870);
        }
        namespace BacktraceReporter
        {
            const uintptr_t BacktraceSubmissionRequestBody=REBASE(0x5A70740);
            const uintptr_t FileUploadReturnedErrorCodeBody=REBASE(0x5A73BC0);
            const uintptr_t FileUploadSucceeded=REBASE(0x5A73BD0);
            const uintptr_t MainThreadCannotEmptyNullMustKey=REBASE(0x5A6F0F0);
        }
        namespace BadgeService
        {
            const uintptr_t CheckUserBadgesAsyncGotBadgeAwardEntries=REBASE(0x32C76D0);
            const uintptr_t CheckUserBadgesAsyncProvidedBadgeIdTypeN=REBASE(0x32C4980);
            const uintptr_t GetUserBadgesAsyncFailedParseAwardedDate=REBASE(0x32C05E0);
            const uintptr_t GetUserBadgesAsyncProvidedBadgeIdTypeNum=REBASE(0x32C5B90);
            const uintptr_t ResponseJsonObject=REBASE(0x32CADA0);
            const uintptr_t UserHasBadgeAsyncDataModelNull=REBASE(0x32C3890);
            const uintptr_t UserHasBadgeAsyncResponseBadgeIdDoesMatc=REBASE(0x32C4210);
        }
        namespace BandwidthTracker
        {
            const uintptr_t BandwidthStabilizedMbpsDownloadedTotalBy=REBASE(0x2AB3DC0);
            const uintptr_t BwDataRecordCurRecordBwMbpsAggregateByte=REBASE(0x2AB4AE0);
            const uintptr_t ErrorWritingBwDataRecordCacheFile=REBASE(0x2AB42E0);
            const uintptr_t FoundBwDataRecordMyNetworkIdCacheIndexBw=REBASE(0x2AB5A80);
            const uintptr_t GotNetworkId=REBASE(0x2AB42F0);
        }
        namespace BaseExperienceController
        {
            const uintptr_t BaseExperienceControllerBaseExperienceCo=REBASE(0x4CE5E10);
        }
        namespace BaseUrlProtocol
        {
            const uintptr_t CurrentBaseHostTargetBaseHost=REBASE(0x5A9B970);
            const uintptr_t FinishedSettingUpLinkingProtocolHandler=REBASE(0x5A9A0D0);
            const uintptr_t ReceivingDeepLinkingMessageMatchedURL=REBASE(0x5A9A7B0);
            const uintptr_t TargetBaseURLEmpty=REBASE(0x5A9B960);
            const uintptr_t TargetBaseURLRestartAppApply=REBASE(0x5A9AB50);
        }
        namespace BatchAssetApiLog
        {
            const uintptr_t BatchAssetApiCreated=REBASE(0x11E97A0);
            const uintptr_t BatchAssetApiDeleted=REBASE(0x11E9B30);
            const uintptr_t InvalidAssetQueryParameter=REBASE(0x11E8700);
        }
        namespace BenchmarkCapture
        {
            const uintptr_t MoreThanDataModelsRegisteredSessionAddit=REBASE(0x4A762B0);
        }
        namespace BrowserServiceDiagnose
        {
            const uintptr_t BrowserServiceDiagnoseApplicationCloseBr=REBASE(0x83B140);
            const uintptr_t BrowserServiceDiagnoseApplicationDoClose=REBASE(0x83AC10);
            const uintptr_t BrowserServiceDiagnoseApplicationDoOpenU=REBASE(0x839C20);
            const uintptr_t BrowserServiceDiagnoseApplicationExecute=REBASE(0x84CBD0);
            const uintptr_t BrowserServiceDiagnoseApplicationProcess=REBASE(0x83A320);
            const uintptr_t BrowserServiceDiagnoseBrowserServiceEmit=REBASE(0x306C940);
            const uintptr_t BrowserServiceDiagnoseBrowserServiceExec=REBASE(0x306C2F0);
            const uintptr_t BrowserServiceDiagnoseBrowserServiceOnSe=REBASE(0x3069FE0);
            const uintptr_t BrowserServiceDiagnoseBrowserServiceOpen=REBASE(0x306BF30);
            const uintptr_t BrowserServiceDiagnoseBrowserServiceRetu=REBASE(0x306C510);
            const uintptr_t BrowserServiceDiagnoseBrowserServiceSend=REBASE(0x306B390);
            const uintptr_t BrowserServiceDiagnoseCanFindSvcVersionL=REBASE(0x17B30D0);
            const uintptr_t BrowserServiceDiagnoseRbxEmbeddedWebView=REBASE(0x17B52B0);
        }
        namespace BtidUtil
        {
            const uintptr_t BrowserTrackerIdRequestRBXEventTrackerV2=REBASE(0x4C07860);
            const uintptr_t ErrorConvertingBTIDStringNumberInput=REBASE(0x6006C00);
        }
        namespace BufferPool
        {
            const uintptr_t Buffer0xDestroyed=REBASE(0x381BC40);
            const uintptr_t Buffer0xRecycled=REBASE(0x381BB70);
            const uintptr_t Buffer0xRequestFoundMatchSize=REBASE(0x381B810);
        }
        namespace CDEC
        {
            const uintptr_t FailedConvertConvexDecompositionIntoCSGC=REBASE(0x2B92CC0);
            const uintptr_t MaxIterationsExceededMixedSignEdgesSize=REBASE(0x2B9CFB0);
        }
        namespace CSG3Details
        {
            const uintptr_t CSG3AssetFetchContinuatorAllJoinedError=REBASE(0x5071B30);
            const uintptr_t CSG3AssetFetchContinuatorErrorCallingCom=REBASE(0x5072910);
            const uintptr_t CSGAPIEmptyResult=REBASE(0xDE3DD0);
            const uintptr_t CSGAPISuccess=REBASE(0xDE3DC0);
            const uintptr_t GetCSG3PrimitiveTypeSpecialShapeUnknownT=REBASE(0x5044BB0);
            const uintptr_t InstanceTransformPartOperationScale=REBASE(0x5044E10);
            const uintptr_t ReportingCSGV3OperationElapsedMsec=REBASE(0x5017100);
            const uintptr_t SolidModelingAPIEmptyResult=REBASE(0x50685D0);
            const uintptr_t SolidModelingAPIError=REBASE(0x5068400);
        }
        namespace CSG3Errors
        {
            const uintptr_t CSGAPIBadMesh=REBASE(0x50328D0);
            const uintptr_t CSGExceptionCompute=REBASE(0x6015900);
            const uintptr_t CSGManifoldException=REBASE(0x6014AE0);
            const uintptr_t CSGOperations3UnableCombineSelectionInva=REBASE(0x505EDE0);
            const uintptr_t CSGOperationsDumpCSGV3DCDSerializeFailed=REBASE(0x5023510);
            const uintptr_t CsgfloatInitIterationsExhaustedWhileCalc=REBASE(0x4132AA0);
            const uintptr_t DCDRecomputeTaskSilentlyFailedRecomputeP=REBASE(0x502C730);
            const uintptr_t DCDStageHasRecomputePromise=REBASE(0x50300C0);
        }
        namespace CSGErrors
        {
            const uintptr_t TaskSerializeException=REBASE(0x6015A70);
            const uintptr_t UnknownCSG4Operation=REBASE(0x506D0E0);
            const uintptr_t UnknownTaskOpType=REBASE(0x5068FD0);
            const uintptr_t UnknownTaskPartType=REBASE(0x5070420);
        }
        namespace CallLegStatusesParse
        {
            const uintptr_t ParseCallLegStatusesCallLegsExceedsCapDr=REBASE(0x4E1A250);
        }
        namespace CallManager
        {
            const uintptr_t CallManagerAcceptedCallBeingCancelled=REBASE(0x5A29710);
            const uintptr_t CallManagerAcceptedCallBeingRejected=REBASE(0x5A29B00);
            const uintptr_t CallManagerBadTransitCallState=REBASE(0x5A280C0);
            const uintptr_t CallManagerReceivedCallWhileOne=REBASE(0x5A20950);
            const uintptr_t CallManagerRequestAcceptCallFailed=REBASE(0x5A29CE0);
            const uintptr_t CallManagerRequestCancelCallFailed=REBASE(0x5A29610);
            const uintptr_t CallManagerRequestFinishCallFailed=REBASE(0x5A298F0);
            const uintptr_t CallManagerRequestRejectCallFailed=REBASE(0x5A29A00);
            const uintptr_t CallManagerRequestUpdateCallDetails=REBASE(0x5A29420);
        }
        namespace Calling
        {
            const uintptr_t CallBackendEndLegRequestFailed=REBASE(0x4E18590);
        }
        namespace CallingCore
        {
            const uintptr_t BroadcastRemoved=REBASE(0x4E09B00);
            const uintptr_t BroadcastState=REBASE(0x4E097B0);
            const uintptr_t HandleAnswerIncomingCall=REBASE(0x4E09EE0);
            const uintptr_t HandleCreateCallOutgoingCallParticipantS=REBASE(0x4E0A080);
            const uintptr_t HandleEndCallReason=REBASE(0x4E0A340);
            const uintptr_t HandleReceiveIncomingCallIncomingVoIPPus=REBASE(0x4E09D40);
        }
        namespace CallingLegClient
        {
            const uintptr_t BrowserTrackerIdUnavailableValueSendingD=REBASE(0x4E10190);
            const uintptr_t CreateCallSucceededStatusButResponseHad=REBASE(0x4E0F730);
            const uintptr_t RequestFailedErrStatusBody=REBASE(0x4E0F110);
        }
        namespace CallingManager
        {
            const uintptr_t AnswerCallSuchCallIgnoring=REBASE(0x4E0C7F0);
            const uintptr_t CreateCallCreateAlreadyPendingRejecting=REBASE(0x4E0CA60);
            const uintptr_t CreateCallResponseLongerPendingCreateIgn=REBASE(0x4E0D160);
            const uintptr_t EndCallReasonRecognizedIgnoring=REBASE(0x4E0E110);
            const uintptr_t EndCallSuchCallIgnoring=REBASE(0x4E0E120);
            const uintptr_t ReceiveIncomingCallPayloadHadCallIdChann=REBASE(0x4E0BAB0);
        }
        namespace CameraTrace
        {
            const uintptr_t CameraCaptureCameraCapture=REBASE(0x5843480);
            const uintptr_t CameraCaptureClose=REBASE(0x5843F70);
            const uintptr_t CameraCaptureOpenGetBestCapabilitiesCall=REBASE(0x58443A0);
            const uintptr_t CameraCapturePause=REBASE(0x5844750);
            const uintptr_t CameraCapturePlay=REBASE(0x5844180);
            const uintptr_t FailedSetAutoExposurePriorityUnable=REBASE(0x58429F0);
            const uintptr_t InvalidIAMCameraControlInterfaceUnableSe=REBASE(0x58428E0);
            const uintptr_t UnableGetYUVBufferVideoStream=REBASE(0x5842AB0);
        }
        namespace CaptureEngine
        {
            const uintptr_t AttachAudioOutputNodeAudioModeNone=REBASE(0x3D41EE0);
            const uintptr_t CleanUp=REBASE(0x3D44680);
            const uintptr_t CreateAudioCodecParCodecId=REBASE(0x3D3E2A0);
            const uintptr_t CreateCallbackDsp=REBASE(0x3D41A30);
            const uintptr_t CreateEncoderDEPRECATED=REBASE(0x3D3E540);
            const uintptr_t CreateStrand=REBASE(0x3D43F90);
            const uintptr_t CreatingMuxerContainerFormat=REBASE(0x3D3FF20);
            const uintptr_t DetachAudioOutputNode=REBASE(0x3D42380);
            const uintptr_t DroppedFramesSeconds=REBASE(0x3D4C280);
            const uintptr_t DroppingAudioFrameDueFullAudio=REBASE(0x3D40A00);
            const uintptr_t DroppingAudioFrameNegativePTS=REBASE(0x3D42BC0);
            const uintptr_t EncoderInitializationCancelled=REBASE(0x3D3F9C0);
            const uintptr_t EnoughMemoryStartVideoCaptureAvailable=REBASE(0x3D387A0);
            const uintptr_t FailedRenameMCPCaptureDue=REBASE(0x3D46E30);
            const uintptr_t FailedStartVideoCapture=REBASE(0x3D43DB0);
            const uintptr_t FailedWritePacketMuxerError=REBASE(0x3D43240);
            const uintptr_t GotContiguousViewBufferIndexWidth=REBASE(0x3D17B50);
            const uintptr_t Initialize=REBASE(0x3D3BA70);
            const uintptr_t InterleavedWritePacketNull=REBASE(0x3D3C620);
            const uintptr_t InvalidConfigurationSnapshotRangeSkippin=REBASE(0x3D16000);
            const uintptr_t OnStoppedEmptyWhenFinalizingVideo=REBASE(0x3D3D570);
            const uintptr_t RenderBufferNullSoftwareGraphicBufferSou=REBASE(0x3D18230);
            const uintptr_t RenderBufferReadyTimeSinceCapture=REBASE(0x3D3B7F0);
            const uintptr_t SelectedVideoCodecId=REBASE(0x3D3DD60);
            const uintptr_t SendEofVideoEncoder=REBASE(0x3D42890);
            const uintptr_t SkipRenderingCycleDueFrameRate=REBASE(0x3D178E0);
            const uintptr_t SoundServiceNullCannotAttachAudioOutput=REBASE(0x3D41ED0);
            const uintptr_t Start=REBASE(0x3D387B0);
            const uintptr_t StartProcessing=REBASE(0x3D44440);
            const uintptr_t StateAdvanceFailed=REBASE(0x3D166D0);
            const uintptr_t StateUpdate=REBASE(0x3D16570);
            const uintptr_t StopInternal=REBASE(0x3D3A5D0);
            const uintptr_t StoppingGraphicBufferSource=REBASE(0x3D168C0);
            const uintptr_t TextureNullSoftwareGraphicBufferSourceAs=REBASE(0x3D18670);
            const uintptr_t UpdatePresentationTime=REBASE(0x3D44CE0);
            const uintptr_t VideoCaptureEngineInitializeEngineStateI=REBASE(0x3D3C450);
        }
        namespace CaptureService
        {
            const uintptr_t CaptureUploadSuccessfulAssetId=REBASE(0x4014030);
            const uintptr_t CheckingGPUAgainstBlacklistAllCaptures=REBASE(0x400E810);
            const uintptr_t CheckingGPUAgainstGraphicsAPIBlacklist=REBASE(0x3FF38E0);
            const uintptr_t CleanupVideoCapture=REBASE(0x3FF2370);
            const uintptr_t DevCaptureParamsOverridenScriptUI=REBASE(0x3FE9BD0);
            const uintptr_t ErrorRetrievingCapture=REBASE(0x5FC6D70);
            const uintptr_t FailedFinalizeScreenshotCaptureDataModel=REBASE(0x3FEC710);
            const uintptr_t FailedReadScreenshotCaptureDataPath=REBASE(0x3171D20);
            const uintptr_t FailedRemoveSelfTestFile=REBASE(0x3FF30B0);
            const uintptr_t FailedStoreVideoError=REBASE(0x5FC6360);
            const uintptr_t GrantExperiencePermissionsAssetIdUnivers=REBASE(0x4011860);
            const uintptr_t LoadSelfTestResult=REBASE(0x3FE5FB0);
            const uintptr_t OnServiceProvider=REBASE(0x3FE64F0);
            const uintptr_t OnStartedVideoCaptureStartedResult=REBASE(0x40323E0);
            const uintptr_t SaveCapturesToExternalStorageAsyncCaptur=REBASE(0x3FFD890);
            const uintptr_t SaveSelfTestResult=REBASE(0x3FE5900);
            const uintptr_t StartTestCaptureCouldQueryDiskSpaceProce=REBASE(0x3FF1EB0);
            const uintptr_t StartUploadCaptureAsyncError=REBASE(0x402EAF0);
            const uintptr_t StartUploadCaptureAsyncErrorPollingAsset=REBASE(0x40183C0);
            const uintptr_t StopVideoCaptureInternalInternal=REBASE(0x3FF54F0);
            const uintptr_t UploadCaptureAndPostMomentError=REBASE(0x401D700);
            const uintptr_t UploadCaptureAndPostMomentErrorPollingAs=REBASE(0x401D810);
            const uintptr_t UploadCaptureAsyncError=REBASE(0x402F780);
            const uintptr_t UploadCaptureAsyncErrorFetchingAssetId=REBASE(0x402FB30);
            const uintptr_t UploadCaptureAsyncErrorPollingAssetIdOpe=REBASE(0x4014750);
            const uintptr_t UploadCaptureAsyncErrorUploadingAssetFet=REBASE(0x4014AA0);
            const uintptr_t UploadPostAsyncError=REBASE(0x401EB40);
            const uintptr_t UploadingScreenshotCaptureSignature=REBASE(0x4015EB0);
            const uintptr_t VideoCaptureTimerJobStepDataModelJobPTS=REBASE(0x3FE4C70);
            const uintptr_t VideoCaptureTimerJobStepDataModelJobWall=REBASE(0x3FE4C60);
            const uintptr_t VideoF12CaptureWritePermissionTest=REBASE(0x5FC7250);
        }
        namespace CaptureStorage
        {
            const uintptr_t AttemptRemoveMetadataIndexEmptyCapture=REBASE(0x3EECAF0);
            const uintptr_t AttemptRemoveMetadataIndexNonExistent=REBASE(0x3EECB70);
            const uintptr_t BeforeCleanup=REBASE(0x3EF2370);
            const uintptr_t CannotAddMetadataIndexCaptureInvalid=REBASE(0x3EEC450);
            const uintptr_t CannotFindVideoCaptureMetadataKey=REBASE(0x3EF1530);
            const uintptr_t CannotUpdateMetadataIndexCaptureEmpty=REBASE(0x3EED3E0);
            const uintptr_t DeserializedVideoKeyThumbnailKeySignatur=REBASE(0x3F15C20);
            const uintptr_t FailedCreateUserDirectory=REBASE(0x5FBF840);
            const uintptr_t FailedDeserializeVideoCapture=REBASE(0x5FBF930);
            const uintptr_t FailedFindExistingMetadataKeyUpdate=REBASE(0x3EED330);
            const uintptr_t FailedParseCaptureKeyIndexKey=REBASE(0x5FBF460);
            const uintptr_t FailedParseCaptureTypeIndexKey=REBASE(0x5FBF2C0);
            const uintptr_t FailedParseCreationTimestampIndexKey=REBASE(0x5FBF390);
            const uintptr_t FailedRemoveTempDirectoryDue=REBASE(0x3EEE470);
            const uintptr_t MetadataEmptyCannotUpdateVideoCapture=REBASE(0x3EF1410);
            const uintptr_t ParsedEmptyMetadataKeyIndexKey=REBASE(0x3EEBD10);
            const uintptr_t ParsedInvalidCaptureTypeIndexKey=REBASE(0x3EEB7A0);
            const uintptr_t ParsedInvalidCreationTimestampIndexKey=REBASE(0x3EEB910);
            const uintptr_t RbxStorageInitializedCannotAccessStorage=REBASE(0x3EEFB20);
        }
        namespace ChangeHistoryPerformance
        {
            const uintptr_t ChangeHistoryServiceAttachedMsDataSizeMB=REBASE(0x32B4600);
            const uintptr_t DetachingChangeHistoryServiceDataSizeMBW=REBASE(0x32B4040);
            const uintptr_t FinishedClearingWaypoints=REBASE(0x32B3D30);
            const uintptr_t MergingFirstWaypointsWaypointCountData=REBASE(0x32B3980);
            const uintptr_t RecordCreationTookMsVisitDescendants=REBASE(0x32B5410);
        }
        namespace ChangeMouseCommand
        {
            const uintptr_t RejectingNewMouseCommandBecauseActive=REBASE(0x348D6E0);
            const uintptr_t SettingMouseCommandDefault=REBASE(0x348D140);
            const uintptr_t SettingMouseCommandNullTool=REBASE(0x348D2C0);
            const uintptr_t WorkspaceProcessGotNullptrCurrentCommand=REBASE(0x34964E0);
        }
        namespace CharacterRepresentation
        {
            const uintptr_t Connected=REBASE(0x5269680);
        }
        namespace ChatFiltering
        {
            const uintptr_t Client2ServerFilterStringForBroadcastLld=REBASE(0x3083F90);
            const uintptr_t Client2ServerResponseError=REBASE(0x3085500);
            const uintptr_t ErrorGettingChatResponse=REBASE(0x5F69650);
            const uintptr_t FilterStringForBroadcastLld=REBASE(0x3089870);
            const uintptr_t GotChatResponseChatFilterTranslate=REBASE(0x3097C60);
            const uintptr_t GotResponseIngestUniverseMessageRequest=REBASE(0x3097830);
            const uintptr_t GotTextFilterResponse=REBASE(0x30A7D00);
            const uintptr_t SendingChatFilterTranslateRequestUserId=REBASE(0x30953A0);
            const uintptr_t SendingTextFilterRequest=REBASE(0x3098690);
            const uintptr_t TextServiceFilterAndTranslateStringAsync=REBASE(0x3F6C530);
            const uintptr_t TextServiceFilterStringAsyncSuccessLld=REBASE(0x3F6D6A0);
            const uintptr_t V2TextFilterSelectionPlayerUserId=REBASE(0x3086870);
        }
        namespace ClientMemStatus
        {
            const uintptr_t L1=REBASE(0x4E59DB0);
            const uintptr_t Log=REBASE(0x4E52340);
        }
        namespace ClientRunInfo
        {
            const uintptr_t BaseUrl=REBASE(0x4C0D450);
        }
        namespace ClientSettings
        {
            const uintptr_t DurationBlockingLoadCachedSettingsFromFi=REBASE(0x4DD2ED0);
            const uintptr_t ErrorLoadingIXPSettingsDisk=REBASE(0x600E150);
            const uintptr_t ExceptionWhileGettingLocalSettingsFile=REBASE(0x600E030);
            const uintptr_t FlagCacheDebugDurationLoggingFailedWrite=REBASE(0x4DD4D00);
            const uintptr_t FlagCacheDebugDurationLoggingSuccessfull=REBASE(0x4DD4DB0);
            const uintptr_t LoadClientSettingsFromLocalCouldnTFetchA=REBASE(0x4DD15A0);
            const uintptr_t LoadIxpSettingsFromLocalCouldnTFetchAnyD=REBASE(0x4DD2180);
            const uintptr_t ResolveOverriddenLocalSettingsFileUsingL=REBASE(0x4DD0B32);
            const uintptr_t SaveClientSettingsToLocalWroteZuBytesDis=REBASE(0x4DD2920);
        }
        namespace CloseDataModel
        {
            const uintptr_t AsyncContentInitializationCompleteCanCon=REBASE(0x3607740);
            const uintptr_t AsyncContentInitializationStart=REBASE(0x3608D20);
            const uintptr_t AutoReconnectWaitReturned=REBASE(0x36125E0);
            const uintptr_t BindToCloseThreadPreCreateFailed=REBASE(0x5F8A030);
            const uintptr_t CleaningFlyweightServicesBeforeDatamodel=REBASE(0x360E920);
            const uintptr_t ClearingBackendReplicatedStorageInstance=REBASE(0x3ED5CC0);
            const uintptr_t ClearingChangeHistoryServiceWaypoints=REBASE(0x36149F0);
            const uintptr_t ClearingChatServiceInstances=REBASE(0x309F500);
            const uintptr_t ClearingCoreGuiInstances=REBASE(0x3F98080);
            const uintptr_t ClearingJointsServiceInstances=REBASE(0xE8EA80);
            const uintptr_t ClearingLightingInstances=REBASE(0x3214060);
            const uintptr_t ClearingLocalizationServiceInstances=REBASE(0x14F3870);
            const uintptr_t ClearingReplicatedFirstInstances=REBASE(0x3178200);
            const uintptr_t ClearingRobloxReplicatedStorageInstances=REBASE(0x3E523E0);
            const uintptr_t ClearingServerStorageInstances=REBASE(0x3E51F60);
            const uintptr_t ClearingStarterGuiInstances=REBASE(0x3F97EF0);
            const uintptr_t ClearingStarterPackInstances=REBASE(0x3D7C120);
            const uintptr_t ClearingStarterPlayerInstances=REBASE(0x3DEA7B0);
            const uintptr_t ClearingTeamsInstances=REBASE(0x31331E0);
            const uintptr_t ClearingTestServiceInstances=REBASE(0x3519550);
            const uintptr_t ClearingWorkspaceInstancesPartsScripts=REBASE(0x349CEF0);
            const uintptr_t ConcurrentPatchLoadPathWaitingPatchLoad=REBASE(0x3605D10);
            const uintptr_t ConcurrentPatchLoadStart=REBASE(0x3607150);
            const uintptr_t CreateDataModelHeartbeat=REBASE(0x3609820);
            const uintptr_t DataModelChangeTrackerSkippedTotalSystem=REBASE(0x360A4A0);
            const uintptr_t Drain=REBASE(0x3611910);
            const uintptr_t DrainAskedParticipantsReportedOutstandin=REBASE(0x360E900);
            const uintptr_t DrainFailed=REBASE(0x3611E30);
            const uintptr_t DrainTimedOutOutstandingUnresolvedCandid=REBASE(0x3610D90);
            const uintptr_t FinishedWaitingLock=REBASE(0x360A320);
            const uintptr_t RemovingAllChildrenIgnoringParentLock=REBASE(0x36135D0);
            const uintptr_t SettingDataCenterID=REBASE(0x411E100);
            const uintptr_t SettingPlaceVersion=REBASE(0x3624830);
        }
        namespace CloudLocalizationTableVerbose
        {
            const uintptr_t ErrorCloudLocalizationTableLoading=REBASE(0x1514510);
        }
        namespace Clouds
        {
            const uintptr_t ActiveCloudsInstance=REBASE(0x3D87AA0);
            const uintptr_t CloudsCreated=REBASE(0x3D871C0);
            const uintptr_t SwitchingFirstOtherCloudsInstanceFound=REBASE(0x3D873A0);
        }
        namespace Commerce
        {
            const uintptr_t CommerceServicePrepareCommerceProductPur=REBASE(0x1432980);
            const uintptr_t ErrorFetchingOrderStatusCheckoutSessionI=REBASE(0x1432E90);
        }
        namespace ComponentManager
        {
            const uintptr_t ComponentCreatedBecauseTakesRequiredDepe=REBASE(0x8FAE60);
            const uintptr_t ComponentCreatedLazily=REBASE(0x8FBF20);
            const uintptr_t ComponentGraphIncompleteBecauseWasRegist=REBASE(0x1E42C40);
            const uintptr_t ComponentManagerCreated=REBASE(0x1E425A0);
            const uintptr_t ComponentParentKeyHasAlreadyBeen=REBASE(0x1E4C9F0);
            const uintptr_t CreatedComponentMs=REBASE(0x1E49450);
            const uintptr_t CreatedComponentTreeRootComponentCompone=REBASE(0x1E46260);
            const uintptr_t DeletingComponent=REBASE(0x1E4DF40);
            const uintptr_t DeletingComponentTreeRootComponent=REBASE(0x1E4D030);
            const uintptr_t DidnTFindKeyComponent=REBASE(0x1E4C630);
            const uintptr_t RegistrationHandlesStillAliveDuringDestr=REBASE(0x1E42880);
            const uintptr_t ShuttingDownComponent=REBASE(0x1E4E120);
            const uintptr_t SuccessfullyRegisteredComponentDependenc=REBASE(0x1E44060);
            const uintptr_t SuccessfullyRegisteredGetGraphMetadataCa=REBASE(0x8FA7E0);
            const uintptr_t TryingCreateDependentComponentsComponent=REBASE(0x1E49A10);
        }
        namespace ConfigService
        {
            const uintptr_t GetValueFailedExperimentationServiceAvai=REBASE(0x3281F40);
        }
        namespace ConnectionStatusMonitor
        {
            const uintptr_t LabelingConnectionStatus=REBASE(0x2A8C330);
            const uintptr_t RemovingConnectionStatusLabel=REBASE(0x2A8BE50);
        }
        namespace ConnectivityProtocolCore
        {
            const uintptr_t NetworkStatusChangeValue=REBASE(0x5AB5130);
        }
        namespace ConnectivityV2Core
        {
            const uintptr_t NetworkChangeCur=REBASE(0x5A6C2B0);
            const uintptr_t NetworkChangeSettledLossCur=REBASE(0x5A6CC20);
        }
        namespace ContentProviderRequests
        {
            const uintptr_t CacheableContentProviderFetchCachedAsset=REBASE(0x12BC8C0);
            const uintptr_t ContentProviderContentRequestedTypePrior=REBASE(0x1296F10);
            const uintptr_t ContentProviderStillWaitingResourcesHang=REBASE(0x1280860);
            const uintptr_t ExceptionThrownWhileAttemptingLoadInstan=REBASE(0x5ED6DB0);
            const uintptr_t GotContentString=REBASE(0x127C0C0);
            const uintptr_t GotUnexpectedErrorAssetPermissionCheck=REBASE(0x128B9D0);
            const uintptr_t HSRDataContentProviderFetchAssetIdTookMs=REBASE(0x1A05EB0);
            const uintptr_t MeshContentProviderFetchAssetIdTookMs=REBASE(0x1205580);
            const uintptr_t ParsingContent=REBASE(0x127D3A0);
            const uintptr_t SlimContentProviderFetchAssetIdTookMs=REBASE(0x11E1D50);
            const uintptr_t SlimContentProviderFetchRequestMade=REBASE(0x11E26F0);
            const uintptr_t SolidModelContentProviderFetchAssetIdToo=REBASE(0x31404C0);
        }
        namespace ContentResidency
        {
            const uintptr_t StartingOverbudgetCountUsageBudgetNeed=REBASE(0x37A99B0);
        }
        namespace ContextInfoMismatch
        {
            const uintptr_t ContextInfoMismatchDetected=REBASE(0x2A6AB30);
        }
        namespace Cookie
        {
            const uintptr_t ExceptionParsingNetscapeCookieString=REBASE(0x5F538C0);
        }
        namespace CookieStorage
        {
            const uintptr_t EmptyValueReceived=REBASE(0x44BA0F0);
            const uintptr_t FailedEncryptNewCookie=REBASE(0x44BB500);
            const uintptr_t MalformedCookieReceivedCookieUpdateFaile=REBASE(0x44BA100);
            const uintptr_t TelemetriesAreSent=REBASE(0x44BC0D0);
        }
        namespace CoordinatorMemoryPressure
        {
            const uintptr_t CoordinatorHandleLowMemoryWarningRequest=REBASE(0x211B950);
            const uintptr_t MemoryPressureAfter1fSecondsRelax=REBASE(0x211BAC0);
            const uintptr_t SettingMemoryPressureThreshold=REBASE(0x211B830);
        }
        namespace CrashMetricStorage
        {
            const uintptr_t CrashMetricStorageCrashMetricsFoundStora=REBASE(0x2138B80);
            const uintptr_t CrashMetricStorageSuccessfullyParsedCras=REBASE(0x2138B70);
            const uintptr_t CrashMetricStorageUnknownPostProcessStag=REBASE(0x213B2C0);
            const uintptr_t CrashMetricStorageUpdatedPlayTimeSinceLa=REBASE(0x2139370);
        }
        namespace CrashReportLog
        {
            const uintptr_t BacktraceAttributeStorageOverflowTooMany=REBASE(0x5086EF0);
            const uintptr_t CannotSetNullptrBacktraceAttributeCheck=REBASE(0x5087090);
            const uintptr_t CrashHandlerDoesExist=REBASE(0x50892D0);
            const uintptr_t CrashHandlerNameEmpty=REBASE(0x50892C0);
            const uintptr_t FailedAddFileAttachment=REBASE(0x508A1D0);
            const uintptr_t FailedInitializeCrashDatabase=REBASE(0x5084150);
            const uintptr_t FailedPushBytesDataIntoFifo=REBASE(0x5084710);
            const uintptr_t Implemented=REBASE(0x5084C30);
            const uintptr_t PlatformHasPendingCrashReporting=REBASE(0x5084D20);
            const uintptr_t PoppedBytesDataFifo=REBASE(0x50844D0);
            const uintptr_t RunBookKeepingUnhandledException=REBASE(0x50808E0);
            const uintptr_t SetAnnotationCstringName=REBASE(0x50849C0);
            const uintptr_t SimulateCrashReason=REBASE(0x5087A30);
            const uintptr_t TerminatedDueWasHangingPastTimeout=REBASE(0x508B750);
        }
        namespace CreateAssetasync
        {
            const uintptr_t AssetPublishFlowPrepareInstancesForUploa=REBASE(0x33EF340);
            const uintptr_t CouldCloneInstance=REBASE(0x33F2840);
            const uintptr_t CouldParentInstanceUnderRobloxServerStor=REBASE(0x33EE160);
            const uintptr_t CreateAssetAsyncCalled=REBASE(0x33EF730);
            const uintptr_t CreateAssetAsyncCompletedSuccessfully=REBASE(0x33EF960);
            const uintptr_t FailedParseTexturePackPBRTexturesMay=REBASE(0x33F7B40);
            const uintptr_t SuccessfullyUploadedTexturePackPropsetAs=REBASE(0x33F6D80);
        }
        namespace CreatorConfigAssetProvider
        {
            const uintptr_t UnknownCreatorConfigAssetProviderOperati=REBASE(0x1269B80);
        }
        namespace CreatorConfigPlatformProvider
        {
            const uintptr_t CreatorConfigCSMFetchFailedResource=REBASE(0x336F1F0);
            const uintptr_t PinnedAssetFetchFailedFallingBack=REBASE(0x3373C40);
            const uintptr_t StartedCreatorConfigCSMSubscriptionUnive=REBASE(0x336D8B0);
        }
        namespace CreatorConfigProvider
        {
            const uintptr_t HttpRequestFailedOperationStatusCode=REBASE(0x1269220);
            const uintptr_t NewVersionUpdateReceivedOldVersion=REBASE(0x1269760);
            const uintptr_t ParsingMaterializedConfigViaAssetFailed=REBASE(0x1269960);
            const uintptr_t PollFailedAfterRetries=REBASE(0x12694D0);
            const uintptr_t ServiceInitializedSeconds=REBASE(0x3388ED0);
        }
        namespace CreatorExperimentationProvider
        {
            const uintptr_t ConfigEvaluatedTargetingSeconds=REBASE(0x339DF30);
            const uintptr_t ConfigInitializedSeconds=REBASE(0x1268CF0);
            const uintptr_t GetExperimentValueFailedAfterRetries=REBASE(0x1268A60);
            const uintptr_t HttpRequestFailedOperationStatusCode=REBASE(0x1268790);
            const uintptr_t HydrationTimedOutAfterWaits=REBASE(0x1268EE0);
            const uintptr_t PlayerHydratedSeconds=REBASE(0x339CAA0);
            const uintptr_t UnknownCreatorExperienceConfigApiType=REBASE(0x1268680);
        }
        namespace CreatorOutput
        {
            const uintptr_t Log=REBASE(0x1D2E840);
        }
        namespace CrossExperienceContextualizer
        {
            const uintptr_t CrossExperienceContextualizerReceivedInv=REBASE(0x4E24D50);
        }
        namespace CrossExperienceExecutor
        {
            const uintptr_t CrossExperienceExecutorCannotFindExecuta=REBASE(0x4E25920);
        }
        namespace CrossExperienceVoiceController
        {
            const uintptr_t CrossExperienceVoiceControllerApplyInput=REBASE(0x4CBBB10);
            const uintptr_t CrossExperienceVoiceControllerApplyOutpu=REBASE(0x4CBBDD0);
            const uintptr_t CrossExperienceVoiceControllerBeginProce=REBASE(0x4CBF080);
            const uintptr_t CrossExperienceVoiceControllerCrossExper=REBASE(0x4CB7C80);
            const uintptr_t CrossExperienceVoiceControllerFinalizeDi=REBASE(0x4CBB8F0);
            const uintptr_t CrossExperienceVoiceControllerFinalized=REBASE(0x4CBB990);
            const uintptr_t CrossExperienceVoiceControllerGameShutdo=REBASE(0x4CC1720);
            const uintptr_t CrossExperienceVoiceControllerHandleGame=REBASE(0x4CC1CF0);
            const uintptr_t CrossExperienceVoiceControllerIgnoringNo=REBASE(0x4CB8A50);
            const uintptr_t CrossExperienceVoiceControllerInitialize=REBASE(0x4CBAE00);
            const uintptr_t CrossExperienceVoiceControllerJoinDataMo=REBASE(0x4CBF150);
            const uintptr_t CrossExperienceVoiceControllerOnStateCha=REBASE(0x4CC1960);
            const uintptr_t CrossExperienceVoiceControllerRemoveAllO=REBASE(0x4CBE260);
            const uintptr_t CrossExperienceVoiceControllerRemovingAl=REBASE(0x4CBED70);
            const uintptr_t CrossExperienceVoiceControllerRemovingOb=REBASE(0x4CB9100);
            const uintptr_t CrossExperienceVoiceControllerStartDidSt=REBASE(0x4CBC150);
            const uintptr_t CrossExperienceVoiceControllerStopBeginB=REBASE(0x4CBE5E0);
            const uintptr_t CrossExperienceVoiceControllerStopDestro=REBASE(0x4CC0910);
            const uintptr_t CrossExperienceVoiceControllerSubmitStar=REBASE(0x4CC0590);
            const uintptr_t DuplicateObserverIdFoundCleaningUpPrevio=REBASE(0x4CB9840);
            const uintptr_t MemoryDelta2fMBTotal=REBASE(0x4CB7F30);
            const uintptr_t StoredClientNumberWasCorruptGenerating=REBASE(0x600B210);
            const uintptr_t TimingOutWhenAttemptingJoinParty=REBASE(0x4CBD8A0);
            const uintptr_t TryingTurnDownCrossExperienceVoiceTunabl=REBASE(0x4CBC140);
        }
        namespace CsmConnectionManager
        {
            const uintptr_t CsmConnectionManagerConnectionSucceeded=REBASE(0x49008E0);
            const uintptr_t CsmConnectionManagerCsmConnectionManager=REBASE(0x5FF4970);
            const uintptr_t CsmConnectionManagerInitializeNetworkHan=REBASE(0x49005C0);
            const uintptr_t CsmConnectionManagerInvokeRpcAsyncConnec=REBASE(0x4901C40);
            const uintptr_t CsmConnectionManagerInvokeRpcAsyncInvali=REBASE(0x4902760);
            const uintptr_t CsmConnectionManagerReconnected=REBASE(0x4900980);
            const uintptr_t CsmConnectionManagerStartAsyncNetworkHan=REBASE(0x4901650);
            const uintptr_t ListenHubEventEventHandlerGettingExecute=REBASE(0x4901040);
            const uintptr_t ReportExtendedInvokeClusterUniverseIdMet=REBASE(0x49033D0);
            const uintptr_t ReportExtendedInvokeResultClusterUnivers=REBASE(0x49036E0);
            const uintptr_t ReportExtendedReceivedClusterUniverseIdT=REBASE(0x4903BC0);
        }
        namespace CursorCache
        {
            const uintptr_t InvalidImage=REBASE(0x3C30D20);
            const uintptr_t PerformingEvictionCycle=REBASE(0x3C31340);
            const uintptr_t RetryingAttempt=REBASE(0x3C30530);
        }
        namespace CursorChanges
        {
            const uintptr_t MouseLockTypeChanged=REBASE(0x1799320);
            const uintptr_t UpdatingCursor=REBASE(0x17967A0);
        }
        namespace CyclicExecutiveThrottling
        {
            const uintptr_t AvgWorldStepFreq=REBASE(0x3DAC760);
            const uintptr_t DataModelPhysicsStepDtDtCyclicExecutiveD=REBASE(0x1608EA0);
            const uintptr_t RequestingSimulationRadiusReductionDueAw=REBASE(0x3DAC550);
        }
        namespace CyclicExecutiveWorldSteps
        {
            const uintptr_t WorldStepsIteration=REBASE(0x15A3E20);
        }
        namespace D3D11SwapChain
        {
            const uintptr_t GetSwapChainSizeNullSwapChain=REBASE(0x2821210);
            const uintptr_t ResizeSwapchainResizeBuffersFailedHrXSwa=REBASE(0x2818400);
            const uintptr_t ResizeWindowDataSwapChainWindowHandleDim=REBASE(0x2820E70);
            const uintptr_t ValidateResizeTriggeredSwapChainDimsX=REBASE(0x281D0D0);
        }
        namespace DataModelChangeTracking
        {
            const uintptr_t DataModelChangeTrackerInitializationFail=REBASE(0x5F8A6A0);
        }
        namespace DataModelJobs
        {
            const uintptr_t GCJobFinishDataModel=REBASE(0x427BE50);
            const uintptr_t GCStepStartDataModel=REBASE(0x4280DE0);
            const uintptr_t HeartbeatFinishDataModel=REBASE(0x358BB60);
            const uintptr_t PacketReceiveFinishDataModel=REBASE(0x47C8670);
            const uintptr_t ParallelGCCallbackFlushingStartedData=REBASE(0x427EF80);
            const uintptr_t PhysicsJobFinishDataModel=REBASE(0x358B3E0);
            const uintptr_t PhysicsJobStartDataModel=REBASE(0x358B3F0);
            const uintptr_t ProcessShutdownTasksFinish=REBASE(0x3604D90);
            const uintptr_t ProcessTasksFinish=REBASE(0x3604850);
            const uintptr_t ProcessTasksStart=REBASE(0x3604870);
            const uintptr_t WaitingScriptsFinishDataModel=REBASE(0x42D5590);
        }
        namespace DataModelPatchAnalytics
        {
            const uintptr_t ClientBundleSplitTreatment=REBASE(0x16CEA30);
        }
        namespace DataModelPatchConfig
        {
            const uintptr_t InvalidFlatPluginArrayJSONInput=REBASE(0x16CA680);
            const uintptr_t IsContentCachedInBackupFoundCacheBackupC=REBASE(0x16C95F0);
        }
        namespace DataModelPatchConfigCollection
        {
            const uintptr_t LoadConfigsCACHEDAssetVersion=REBASE(0x16C3A70);
            const uintptr_t ReadingOTAConfigs=REBASE(0x16C50C0);
            const uintptr_t RegisteringStorageKey=REBASE(0x16C3860);
            const uintptr_t WritingOTAConfigs=REBASE(0x16C5970);
        }
        namespace DataModelPatchConfigurer
        {
            const uintptr_t CleanUpBackupCacheDeletedFile=REBASE(0x16A79C0);
            const uintptr_t DeferSignatureCheckExecuteScheduledDefer=REBASE(0x16B8510);
            const uintptr_t DeferSignatureCheckIsHomePageInteractive=REBASE(0x16B72D0);
            const uintptr_t DeferredRbxmDownloadStillFlightJoinUsing=REBASE(0x16BB860);
            const uintptr_t DeferredRbxmLastSessionParkedJoinNever=REBASE(0x16BC660);
            const uintptr_t DeferredRbxmOTAUpdateWaitingFlightDeferr=REBASE(0x16BC160);
            const uintptr_t DeferredRbxmVerifyFailedAfterMsDeleting=REBASE(0x16BCA10);
            const uintptr_t DeserializeAndVerifyPatchBlake2b=REBASE(0x16AEC20);
            const uintptr_t DownloadPostTtiPatchV2DeserializeSigning=REBASE(0x5EF5220);
            const uintptr_t DownloadedPatchSucceeded=REBASE(0x16BF170);
            const uintptr_t DownloadedPostTTIPatchFailedPromoting=REBASE(0x16BF6C0);
            const uintptr_t EarlyExitScheduleOTAPollingTimerCalled0I=REBASE(0x16C01D0);
            const uintptr_t GetCachedPatchFailedLoadCoreScriptPatch=REBASE(0x16AA4C0);
            const uintptr_t GetCachedPatchGetPatchLocalBackupCache=REBASE(0x16A9E60);
            const uintptr_t GetCachedPatchLoadingPatchThrowsExceptio=REBASE(0x5EF4920);
            const uintptr_t LoadConfigsUserKey=REBASE(0x16BB200);
            const uintptr_t OTAPatchFoundBackupCacheSkipping=REBASE(0x16BEAF0);
            const uintptr_t OTAPollingEnabledSet=REBASE(0x16C3420);
            const uintptr_t OTAUpdateTimedOutWaitingDeferred=REBASE(0x16BC150);
            const uintptr_t PerformDeferredSignatureCheckSkipBecause=REBASE(0x16B7800);
            const uintptr_t RetrievingPatch=REBASE(0x16BB8E0);
            const uintptr_t SignatureVerificationFailedError=REBASE(0x1695510);
            const uintptr_t StartOTAPolling=REBASE(0x16C30C0);
            const uintptr_t StopOtaPollingTimer=REBASE(0x16BD430);
            const uintptr_t TryOpenLocalCachedRBXMFile=REBASE(0x16A9B90);
            const uintptr_t VerifyPatchFileDeserializeSigningInfoUns=REBASE(0x5EF5610);
            const uintptr_t VerifyPatchFileVerificationFailed=REBASE(0x16B01D0);
            const uintptr_t WriteToBackupDirFailedWriteTmpFile=REBASE(0x16AC860);
        }
        namespace DataModelPatcher
        {
            const uintptr_t PostTTIAlreadyFiredSkippingOne=REBASE(0x16A3960);
            const uintptr_t PostTTICorePackagesLuauForgeChunksFOUND=REBASE(0x16A3290);
            const uintptr_t PostTTIDataModelExpiredCannotApply=REBASE(0x16A3950);
            const uintptr_t PostTTIPatchClientDataModelCompletedPatc=REBASE(0x16A0070);
            const uintptr_t PostTTIRegisteringTriggerLuaAppInteracti=REBASE(0x16A3750);
            const uintptr_t PostTTISignatureVerificationSKIPPEDDebug=REBASE(0x16A3C00);
        }
        namespace DataModelStarterModule
        {
            const uintptr_t LaunchingExperience=REBASE(0x50FCC60);
        }
        namespace DataStore
        {
            const uintptr_t AbleExtractUserIdsCastError=REBASE(0x5FBD1A0);
            const uintptr_t AbleExtractUserIdsMetadataResultsTuple=REBASE(0x5FBD580);
            const uintptr_t AddBudgetsOnCloseAddThrottleCounterStand=REBASE(0x3E8A2F0);
            const uintptr_t BackendResponseDidHaveScopePrefix=REBASE(0x3EB0D70);
            const uintptr_t CanTDecodeReturnedValue=REBASE(0x3E6A7F0);
            const uintptr_t ClosingDownDataStoreServiceBackendProces=REBASE(0x3E86980);
            const uintptr_t ConditionalSetKey=REBASE(0x3EA72C0);
            const uintptr_t DeserializationWebResponseFailed=REBASE(0x3E6C450);
            const uintptr_t ErrorRefreshingLocks=REBASE(0x3E961F0);
            const uintptr_t Exception=REBASE(0x3EA99F0);
            const uintptr_t ExecutingThrottledRequestsSizeBudget=REBASE(0x3E8FD00);
            const uintptr_t FailedPublishErrorPointsAPICounters=REBASE(0x5ED4170);
            const uintptr_t FetchedKeyService=REBASE(0x3EAAEA0);
            const uintptr_t FetchedKeysService=REBASE(0x3E6D2B0);
            const uintptr_t FetchingKeys=REBASE(0x3E6CED0);
            const uintptr_t GetVersionAsyncKey=REBASE(0x3EA3DC0);
            const uintptr_t GotCachedVersionReturning=REBASE(0x3E55D70);
            const uintptr_t GotCachedVersionReturningDataVersion=REBASE(0x3E9C8C0);
            const uintptr_t GrantHandleFailedResolveFallingBack=REBASE(0x3EF55F0);
            const uintptr_t InitialBudgetRefetch=REBASE(0x3E909E0);
            const uintptr_t InitializedDataStoreUrl=REBASE(0x3E6C150);
            const uintptr_t InvalidStructureResponseArrayElementInva=REBASE(0x3EF3040);
            const uintptr_t KeyCachedCanJustStoreDirectly=REBASE(0x3EBF2C0);
            const uintptr_t LastReturnedKeyString=REBASE(0x3EF4A00);
            const uintptr_t LockAsyncKey=REBASE(0x3EB27E0);
            const uintptr_t LockedKeysFound=REBASE(0x3E92BC0);
            const uintptr_t LocksRefreshedSuccessfully=REBASE(0x3E96300);
            const uintptr_t MD5ChecksumErrorKeyExpectedBut=REBASE(0x3EAA130);
            const uintptr_t PuttingRequestOrderedSetQueueDue=REBASE(0x3E8F970);
            const uintptr_t PuttingRequestStandardSetQueueDue=REBASE(0x3E8F6D0);
            const uintptr_t RefetchBudgetSoResetRefetchAll=REBASE(0x3E90970);
            const uintptr_t RefetchKeyFailed=REBASE(0x3ECCC20);
            const uintptr_t RefetchingKeysBudgetOnUpdateSizeCachedKe=REBASE(0x3E6D820);
            const uintptr_t RequestDataInQueueAfterRequestTypeOutsta=REBASE(0x59FA7E0);
            const uintptr_t RequestDataInQueueForceExcuseThrottledRe=REBASE(0x59FA3F0);
            const uintptr_t RequestDataInQueueProcessAfterRequestedW=REBASE(0x59FA7D0);
            const uintptr_t RequestQueueExceededWhenRefetchingKey=REBASE(0x3EC0A30);
            const uintptr_t ResponseEmptyKey=REBASE(0x3EAB450);
            const uintptr_t ReturningFetchedValueKey=REBASE(0x3E55AC0);
            const uintptr_t SetAsyncKey=REBASE(0x3E58F10);
            const uintptr_t SetIfRequest=REBASE(0x3EB9720);
            const uintptr_t SetKeyService=REBASE(0x3EABA30);
            const uintptr_t SubscribedKey=REBASE(0x3E6BC90);
            const uintptr_t ThrottlingBatchGetAsyncBudgetAfter=REBASE(0x3E8F4B0);
            const uintptr_t ThrottlingBatchGetAsyncBudgetKeyCount=REBASE(0x3E8F430);
            const uintptr_t UnexpectedErrorConvertingVariantResponse=REBASE(0x3EF3A50);
            const uintptr_t UnexpectedVersionNumberFormat=REBASE(0x3EA8D70);
            const uintptr_t UnknownDataStoreApiType=REBASE(0x125C620);
            const uintptr_t UnknownDataStoreClientErrorType=REBASE(0x125B6B0);
            const uintptr_t UnknownDataStoreType=REBASE(0x125E3C0);
            const uintptr_t UnknownDataStoresV1ServerErrorCode=REBASE(0x125A000);
            const uintptr_t UnknownDataStoresV2ServerErrorCode=REBASE(0x125A770);
            const uintptr_t UnlockAsyncKey=REBASE(0x3EB36F0);
            const uintptr_t UpdatingKey=REBASE(0x3EB6DB0);
            const uintptr_t ValueLength=REBASE(0x3E57130);
            const uintptr_t VersionReceived=REBASE(0x3EAE7B0);
        }
        namespace DataStoreBudget
        {
            const uintptr_t AddingInitialBudgetGetsBudgetSets=REBASE(0x3E88EE0);
        }
        namespace DebugDurationLogging
        {
            const uintptr_t ActiveFlowNameList=REBASE(0x5A5B380);
            const uintptr_t ActiveSubFlowNameList=REBASE(0x5A5B540);
            const uintptr_t DurationLoggerAlertTookMsExceedingThresh=REBASE(0x5A55F80);
            const uintptr_t DurationLoggerReportedFlowFlowDurationFl=REBASE(0x5A57E00);
        }
        namespace DebugEnableStreamOutToDiskLog
        {
            const uintptr_t CachedInstanceCountCacheMBUsed=REBASE(0x4749CC0);
        }
        namespace DebugHttpTrace
        {
            const uintptr_t HttpRequestCurlUncompressedPostData=REBASE(0x2CA1590);
        }
        namespace DebugQuadTreeLogging2
        {
            const uintptr_t QueryQuadTreeButBoundsInfinite=REBASE(0x40C8070);
            const uintptr_t QueryQuadTreeButPositionInfinite=REBASE(0x3FCB630);
        }
        namespace DeeplinkIntentContext
        {
            const uintptr_t EngineAdoptedIdUrlSource=REBASE(0x50CDA40);
            const uintptr_t SessionChangedSidTagActiveDlics=REBASE(0x50CCFE0);
            const uintptr_t StateUpdateIdState=REBASE(0x50CDD30);
            const uintptr_t TerminalEmitIdCategoryReasonState=REBASE(0x50CE0F0);
            const uintptr_t TerminalObserverRegisteredSessionManager=REBASE(0x157BF50);
            const uintptr_t TerminatedIdCategoryReason=REBASE(0x50CDEE0);
        }
        namespace DefaultAppRatingPromptProtocol
        {
            const uintptr_t AppRatingPromptAvailable=REBASE(0x10DF7B0);
        }
        namespace DefaultMediaPickerProtocol
        {
            const uintptr_t MediaPickingWasCancelled=REBASE(0x50914E0);
        }
        namespace DeferredAssetManager
        {
            const uintptr_t DeferredAssetFailedLoadResultResponse=REBASE(0x4CF2530);
            const uintptr_t DeferredAssetLoadedSuccessfully=REBASE(0x4CF2520);
        }
        namespace DesignFoundationsCore
        {
            const uintptr_t ClearTokensPlatformImplementationRegiste=REBASE(0x508D2E0);
            const uintptr_t SetPlatformImplRegisteringPlatformImplem=REBASE(0x508CF70);
            const uintptr_t UpdateTokensPlatformImplementationRegist=REBASE(0x508D1D0);
        }
        namespace DesignFoundationsService
        {
            const uintptr_t ClearTokensIDesignFoundationsCoreAvailab=REBASE(0x4E22270);
            const uintptr_t SetTokensPayloadColorTokensTableDropping=REBASE(0x4E23130);
            const uintptr_t SetTokensUnrecognizedCategoryIgnoringEng=REBASE(0x4E236D0);
        }
        namespace DesignFoundationsWin32
        {
            const uintptr_t Win32DesignFoundationsImplOnTokensCleare=REBASE(0x508DCA0);
            const uintptr_t Win32DesignFoundationsImplRegisteringPla=REBASE(0x508D7C0);
        }
        namespace DeviceDisplayHandler
        {
            const uintptr_t GetBrightnessAvailableCurrentPlatform=REBASE(0x270FD50);
            const uintptr_t SetBrightnessAvailableCurrentPlatform=REBASE(0x270FC50);
            const uintptr_t SetBrightnessToDefaultAvailableCurrentPl=REBASE(0x270FE50);
            const uintptr_t SetKeepAwakeAvailableCurrentPlatform=REBASE(0x270FF90);
        }
        namespace DeviceRecovery
        {
            const uintptr_t DEVICERECOVERYDeviceRemovedTrueReason0x=REBASE(0x281D7A0);
            const uintptr_t DEVICERECOVERYEndFrameEarlyExitDue=REBASE(0x281E050);
            const uintptr_t DEVICERECOVERYPresentDetectedDeviceRemov=REBASE(0x2817A50);
            const uintptr_t DeviceLostSettingDoResetTrueAttempt=REBASE(0x36D7EC0);
            const uintptr_t DeviceRecoveryQualityCapSetFrames=REBASE(0x36D8410);
            const uintptr_t TelemetryGlobalLimitReached=REBASE(0x36D5D80);
            const uintptr_t TriggerReasonAttemptIn60sVramLocalMBVram=REBASE(0x36D7790);
        }
        namespace DisplayWakeLock
        {
            const uintptr_t CreatingDisplayWakeLock=REBASE(0xD22110);
            const uintptr_t ReleasingWakeLock=REBASE(0x32767B0);
        }
        namespace DisplayWakeLockGuard
        {
            const uintptr_t DisplayWakeLockGuardSubsystemStarting=REBASE(0x270F860);
        }
        namespace DomainAllowListChecker
        {
            const uintptr_t CheckingIfUrlAllowedContextUrl=REBASE(0x4C64AD0);
            const uintptr_t EncounteredExceptionWhilePerformingRegex=REBASE(0x60093C0);
        }
        namespace DragDetectorLog
        {
            const uintptr_t CharacterAddedRespawnDragDetectorCalling=REBASE(0x45D9BA0);
            const uintptr_t DragDetectorDestroyedCallingOnCancel=REBASE(0x45E9450);
            const uintptr_t DragDetectorDragContinueReplicateCalling=REBASE(0x45D7920);
            const uintptr_t DragDetectorDragEndBEGIN=REBASE(0x45DF3A0);
            const uintptr_t DragDetectorDragEndReplicateCallingFireE=REBASE(0x45D7B10);
            const uintptr_t DragDetectorDragStartAlreadyDraggingRetu=REBASE(0x45DC840);
            const uintptr_t DragDetectorDragStartReplicateAlreadyDra=REBASE(0x45D6F60);
            const uintptr_t DragDetectorFireDragEndLOCALDuringRestar=REBASE(0x45DBB60);
            const uintptr_t DragDetectorFireDragEndRunDuringRestartS=REBASE(0x45DBB70);
            const uintptr_t DragDetectorFireDragStartAlreadyDragging=REBASE(0x45DA690);
            const uintptr_t DragDetectorOnCancel=REBASE(0x45DA030);
            const uintptr_t DragDetectorUpdateMouseStateLeftMouseDow=REBASE(0x45D8700);
            const uintptr_t EnabledSetFalseCallingEndDragNow=REBASE(0x45E2E90);
            const uintptr_t EndDragNowDraggingLocallyInvokedServerCa=REBASE(0x45D9F60);
            const uintptr_t IsEnabledForPlayerReturningFALSETugWarsP=REBASE(0x45DC660);
            const uintptr_t MenuOpenedDragDetectorCallingEndDragNowA=REBASE(0x45E9130);
            const uintptr_t PlayerRemovingCallingEndDragNow=REBASE(0x45D7620);
            const uintptr_t PlayerShutdownMessageDragDetectorCalling=REBASE(0x45D9D80);
            const uintptr_t RotateTrackballCursorProjectorProjectToS=REBASE(0x45EFDB0);
        }
        namespace DynFloodChecker
        {
            const uintptr_t ErrorIncreasingFloodCheckSettingsError=REBASE(0x59F74E0);
            const uintptr_t KeyMissingEmptyEntryFloodChecker=REBASE(0x59F63D0);
        }
        namespace DynamicFastVariableReloader
        {
            const uintptr_t CouldnTGetServerTimestampSeconds=REBASE(0x124ED50);
            const uintptr_t FailedUpdateSettingsUsingDictionaryDisab=REBASE(0x1251590);
            const uintptr_t FailedWriteDynamicFetchSettingsCache=REBASE(0x1253000);
            const uintptr_t FlagRolloutTestStaticBool3=REBASE(0x2BC0C70);
            const uintptr_t LoadDynamicFlagsUrl=REBASE(0x124FD30);
            const uintptr_t ZstdDictionaryFoundDisabling=REBASE(0x124F160);
        }
        namespace DynamicTranslation
        {
            const uintptr_t ClientTranslationLRUCacheOnRemoteEventFr=REBASE(0x1495430);
            const uintptr_t ErrorSubstitutingParamExpection=REBASE(0x5EE49C0);
            const uintptr_t SenderFetchTranslationTryingCallFetchTra=REBASE(0x14880F0);
            const uintptr_t SenderFetchTranslationV2ParameterizedSou=REBASE(0x14880A0);
            const uintptr_t SenderIsEligibleForDynamicTranslationTex=REBASE(0x1487D20);
            const uintptr_t SenderTryStartServerPathComplete=REBASE(0x1486F80);
            const uintptr_t ServerProcessorSendEntriesResponseHandle=REBASE(0x1496C90);
            const uintptr_t ServerProcessorStartRequestBodyFailedLoc=REBASE(0x1498920);
            const uintptr_t ServerQueueShouldAddTranslationExistedRC=REBASE(0x1498F40);
            const uintptr_t ServerToClientSenderStepDataModelJobFail=REBASE(0x1480760);
            const uintptr_t ServerToClientSenderStepDataModelJobTran=REBASE(0x1480740);
            const uintptr_t ServerToClientStateOnPlayerAddedFailedAd=REBASE(0x147A830);
            const uintptr_t ServerToClientStateOnPlayerLocaleChanged=REBASE(0x147B830);
            const uintptr_t ServerToClientStateOnPlayerRemovingFaile=REBASE(0x147B020);
        }
        namespace EditableServiceLog
        {
            const uintptr_t AmpError=REBASE(0x32616D0);
            const uintptr_t EditableServiceInitialized=REBASE(0x32619B0);
            const uintptr_t MemoryAddTotal=REBASE(0x3263EF0);
            const uintptr_t MemoryReduceTotal=REBASE(0x3264030);
            const uintptr_t PerformingAMPVerifiedRequest=REBASE(0x32625D0);
            const uintptr_t SkippingEditablePolicyCheckDueFlags=REBASE(0x3262AA0);
        }
        namespace Error
        {
            const uintptr_t AdPlayerStep2FinishErrorLoadAdJSON=REBASE(0x17A9E00);
            const uintptr_t AdPlayerStep4FinishErrorShowAdJSON=REBASE(0x17AA760);
            const uintptr_t AddSessionInfoFieldOnlySupportedEventIng=REBASE(0x50E9AA0);
            const uintptr_t AliveCountUnderflow=REBASE(0x1D71430);
            const uintptr_t AnalyticsProviderExperienceSignalsIngest=REBASE(0x3B9CC10);
            const uintptr_t AnimationLodConfigUtilsGenerateConfigFai=REBASE(0x5F187F0);
            const uintptr_t AnimationLodControllerV2RegisterModelFai=REBASE(0x1AED780);
            const uintptr_t AnimationStreamTrackStepInvalidMissingSt=REBASE(0x1879750);
            const uintptr_t AnimatorCreateFaceAnimatorTrackerDetecti=REBASE(0x1843100);
            const uintptr_t AssetPublishFlowCreateAssetAndPollAssetI=REBASE(0x33D95C0);
            const uintptr_t AssetReaderFailedException=REBASE(0x5ED93C0);
            const uintptr_t AssetServiceSendPublishResultToDevDataMo=REBASE(0x33D9900);
            const uintptr_t AssetServiceSendPublishResultToPlayerDat=REBASE(0x33D9C60);
            const uintptr_t AvatarChatServiceEnableVoiceFailedEnable=REBASE(0x1A29620);
            const uintptr_t AvatarChatServicePollClientFeaturesUserI=REBASE(0x1A28CD0);
            const uintptr_t AvatarChatServiceProcessRemoteEventFaile=REBASE(0x1A29A20);
            const uintptr_t AvatarChatServiceRefreshClientFeaturesPl=REBASE(0x1A29870);
            const uintptr_t AvatarCreationErrorTypeFINALCOUNTIterati=REBASE(0x1CBBD10);
            const uintptr_t Blake2bKeySizeBelowMinimumSize=REBASE(0x49A2170);
            const uintptr_t Blake3KeySizeMust=REBASE(0x49A2430);
            const uintptr_t BrowserServiceDiagnoseCanFindAnyIEVersio=REBASE(0x17B2FC0);
            const uintptr_t CacheCleanProcessFailedGetAvailable=REBASE(0x2C8D1B0);
            const uintptr_t CanSetDeleteIECompatibleVersion=REBASE(0x17B3300);
            const uintptr_t CannotCalculateFPSGameStep0=REBASE(0x1AD6B70);
            const uintptr_t CouldFindAdPortalTeleportData=REBASE(0x114BA10);
            const uintptr_t CouldFindContentInstanceName=REBASE(0x1919510);
            const uintptr_t DebugRenderingTestVideoCaptureFStringDeb=REBASE(0x3182640);
            const uintptr_t ErrorCompressingMicroprofileJsTemplate=REBASE(0x2AC2980);
            const uintptr_t ErrorMakingAccountSettingsEmailRequestRe=REBASE(0x84D0C0);
            const uintptr_t ErrorMakingUserAppLaunchInfoRequestRecei=REBASE(0x829670);
            const uintptr_t ErrorMakingUserRoleRequestReceivedHTTPEr=REBASE(0x84FD40);
            const uintptr_t ErrorScreenshotNameIdFound=REBASE(0x3506290);
            const uintptr_t ErrorStart=REBASE(0x456BB40);
            const uintptr_t ExceptionCaught=REBASE(0x41BBCF0);
            const uintptr_t ExceptionCaughtDuringDeferredEventDispat=REBASE(0x5FD3FF0);
            const uintptr_t ExceptionCaughtDuringModuleScriptReferen=REBASE(0x5FD0AE0);
            const uintptr_t ExpectedEditableMeshCageMeshContent=REBASE(0x1B74C70);
            const uintptr_t ExpectedOnlyOneVideoTrack=REBASE(0x1E97DF0);
            const uintptr_t ExternalContentSharingProtocolCopyToClip=REBASE(0x5AE6430);
            const uintptr_t FModErrorCreateStream=REBASE(0x456B560);
            const uintptr_t FaceAnimatorServiceAudioInputAvailableCo=REBASE(0x1C36430);
            const uintptr_t FaceAnimatorServiceCameraClientSignalled=REBASE(0x1C38010);
            const uintptr_t FaceAnimatorServiceRunServiceObjectAvail=REBASE(0x1C359A0);
            const uintptr_t FaceAnimatorServiceSetLodFailedReturned=REBASE(0x1C39D40);
            const uintptr_t FaceAnimatorServiceSoundServiceAvailable=REBASE(0x1C36490);
            const uintptr_t FaceAnimatorServiceTrackerInitialization=REBASE(0x1C398D0);
            const uintptr_t FaceAnimatorServiceVideoCaptureServiceAv=REBASE(0x1C37040);
            const uintptr_t FadingLodWeightCreateWithConfigErrorFade=REBASE(0x1AF3450);
            const uintptr_t FailedDeserializeAvatarModelError=REBASE(0x191A470);
            const uintptr_t FailedDeserializeHumanoidDescriptionErro=REBASE(0x191A9A0);
            const uintptr_t FailedDownloadBundle=REBASE(0x4B33CB0);
            const uintptr_t FailedDownloadEagerContent=REBASE(0x4B33060);
            const uintptr_t FailedFlushDiskGetLastError=REBASE(0x2AE5BA0);
            const uintptr_t FailedFunctionMarshallerImplCreateError=REBASE(0x4CA1280);
            const uintptr_t FailedGetProcessPathError=REBASE(0x2A3F310);
            const uintptr_t FailedIterateBundleEntries=REBASE(0x4B33F10);
            const uintptr_t FailedOpenMockStreamFormat=REBASE(0x3D0A460);
            const uintptr_t FailedOpenVideoDemuxer=REBASE(0x3CED640);
            const uintptr_t FailedReadPacket=REBASE(0x3D0D350);
            const uintptr_t FailedReadSerializedInstance=REBASE(0x5F7C420);
            const uintptr_t FailedResizeMappedFileZuBytes=REBASE(0x2AE59F0);
            const uintptr_t FailedSeekVideoStream=REBASE(0x3D051C0);
            const uintptr_t FailedSendSettingsPayload=REBASE(0x5F6EC40);
            const uintptr_t FailedSerializeHumanoidDescriptionError=REBASE(0x1918F00);
            const uintptr_t FailedSetFilePointerHANDLEZuBytesGetLast=REBASE(0x2AE52E0);
            const uintptr_t FailedStartNewProcessCodeReason=REBASE(0x2A3F940);
            const uintptr_t FailedStepVideo=REBASE(0x3F04CC0);
            const uintptr_t FirstValueHapticServiceSetMotorValidNumb=REBASE(0x4CC9FD0);
            const uintptr_t FormatSampleRate0=REBASE(0x5AB5D70);
            const uintptr_t GetTokenDetailsAsyncDataModelNull=REBASE(0x1928B30);
            const uintptr_t GetTokenDetailsReturnedNon200=REBASE(0x1929900);
            const uintptr_t GotNullPtrWithinOnReadAudio=REBASE(0x3D05BF0);
            const uintptr_t GroupServicePromptJoinCompletedPromptPro=REBASE(0x32477F0);
            const uintptr_t H264StreamDidContainAny=REBASE(0x1EC2E40);
            const uintptr_t HeapProfileDataTooLargeReplicate=REBASE(0x42349D0);
            const uintptr_t HttpRequestError=REBASE(0x3520C70);
            const uintptr_t HuffmanDecodingGotError=REBASE(0x242E2D0);
            const uintptr_t HuffmanEncodingGotError=REBASE(0x242E280);
            const uintptr_t IXPFailedParseJSONField=REBASE(0x3ABB7F0);
            const uintptr_t IXPLayerTypeFailedParseJSON=REBASE(0x5FA3DA0);
            const uintptr_t InsertServiceGetLatestAssetVersionSucces=REBASE(0x35FA970);
            const uintptr_t InterpolatorSourceDataPointsIncorrectNet=REBASE(0x1619580);
            const uintptr_t LMSPostAppEventUnsupportedEvent=REBASE(0x11C64B0);
            const uintptr_t LinkingProtocolGetBoolAttemptedGetBoolJs=REBASE(0x44BD0F0);
            const uintptr_t LinkingProtocolGetStringAttemptedGetStri=REBASE(0x44BCDF0);
            const uintptr_t LinkingProtocolImplOpenURLShellExcecuteF=REBASE(0x44CE620);
            const uintptr_t LoadStreamAnimation=REBASE(0x1A8F920);
            const uintptr_t LoomSDK=REBASE(0x1C3B240);
            const uintptr_t MarketplaceApiClientFailedParsingError=REBASE(0x5EE0E60);
            const uintptr_t MarketplaceApiClientGamePassPurchasePurc=REBASE(0x1403970);
            const uintptr_t MergeAndFilterRegionsCregConnectionsInva=REBASE(0x24FE620);
            const uintptr_t MeshContentShouldNoneWhenComputing=REBASE(0x1C08A80);
            const uintptr_t MessageBusReceivedWithoutValidBool=REBASE(0x154CC00);
            const uintptr_t MessageBusReceivedWithoutValidString=REBASE(0x154C890);
            const uintptr_t MessageBusServiceCannotFindResponseCodeT=REBASE(0x15493F0);
            const uintptr_t MicroProfileGpuGetTimeStampD3D11Reported=REBASE(0x2AABBF0);
            const uintptr_t MissingFileHeader=REBASE(0x1289AC0);
            const uintptr_t MultipleAttributionURLSDetectedSingle=REBASE(0x50C72F0);
            const uintptr_t MultipleRootJointsDetectedFACSRig=REBASE(0x4934D00);
            const uintptr_t NativeAdsSetAdStringWithDetailedCallback=REBASE(0x509E000);
            const uintptr_t NativeAdsShowAdHandleNull=REBASE(0x509E750);
            const uintptr_t OpenIEVersionKeyFailed=REBASE(0x17B2FD0);
            const uintptr_t OutBoundsTargetFrameIndexTargetTimeFrame=REBASE(0x1619570);
            const uintptr_t PlayerCalculateNextSpawnLocationPlayerWo=REBASE(0x3E26C10);
            const uintptr_t PlayerLoadCharacterBackendServerRequired=REBASE(0x3E3AC80);
            const uintptr_t PlayerLoadCharacterPlayerWorld=REBASE(0x3E3AC70);
            const uintptr_t PlayerRespawnTimerElapsedButPlayer=REBASE(0x3DF5010);
            const uintptr_t ProduceBackgroundFailed=REBASE(0x5EF6480);
            const uintptr_t ReceivePacket=REBASE(0x5FEE560);
            const uintptr_t ReceivedHeapProfileDataUnknownRequest=REBASE(0x4235750);
            const uintptr_t RemoteAnimationStreamSourceCloseFailedRe=REBASE(0x1A8EA80);
            const uintptr_t RemoteAnimationStreamSourceOpenFailedRes=REBASE(0x1A8E3D0);
            const uintptr_t RequestCharacterCouldResolveRemotePlayer=REBASE(0x4740300);
            const uintptr_t RobloxSerializableInstanceDoesHaveAttrib=REBASE(0x1919F20);
            const uintptr_t RunClusterSenderHelper=REBASE(0x5FEEB80);
            const uintptr_t RvSchedulerServicePoolReadyInsideRunCall=REBASE(0x5275F60);
            const uintptr_t ScalingUpXXFailed=REBASE(0x58417D0);
            const uintptr_t ScopeCheckInitiatedEventNonLocal=REBASE(0x3E04140);
            const uintptr_t ScreenProtocolCoreCouldnTParseEdgeInsets=REBASE(0x1544FD0);
            const uintptr_t SerializedOverridesBlobRejectedBytesExce=REBASE(0x28CA9E0);
            const uintptr_t SettingsFileModifiedWhileBeingRead=REBASE(0x4DDC7D0);
            const uintptr_t SettingsSaveStateCouldRemoveTempSettings=REBASE(0x32DEB40);
            const uintptr_t SkippedPerformanceProbeUntrustedDomainUr=REBASE(0x26EFD30);
            const uintptr_t SlotException=REBASE(0x30E6080);
            const uintptr_t SocialServicePromptRsvpToEventCompletedP=REBASE(0x3541500);
            const uintptr_t StreamDoesContainMagicNumber=REBASE(0x12897B0);
            const uintptr_t TeleportDoesIncludeDestinationPlaceInfo=REBASE(0x11038F0);
            const uintptr_t TrackerAnimationStreamSourceOpenFailedOp=REBASE(0x1A8C250);
            const uintptr_t TrackerStatusTelemetryDataNumberStateNam=REBASE(0x1A06B70);
            const uintptr_t TrackerStatusTelemetryDataUpdateCurrentS=REBASE(0x1A090C0);
            const uintptr_t UGCValidationDidReturnResult=REBASE(0x33D63D0);
            const uintptr_t UnableCastRootInstanceMeshPart=REBASE(0x4A28D90);
            const uintptr_t UnableConvertValueJson=REBASE(0x1272500);
            const uintptr_t UnableGetScriptContext=REBASE(0x32D2AB0);
            const uintptr_t UnableInitializeLibsodium=REBASE(0x5A059B0);
            const uintptr_t UnableOpenCameraParamsXFps=REBASE(0x5840A40);
            const uintptr_t UnexpectedErrorContentReferenceEditableI=REBASE(0x1917200);
            const uintptr_t UnexpectedRealtimeConnectionState=REBASE(0x48F72B0);
            const uintptr_t UniverseMembersMissingResponse=REBASE(0x3534570);
            const uintptr_t UnknownJavascriptError=REBASE(0x17B3790);
            const uintptr_t ValidationFailed=REBASE(0x35574C0);
            const uintptr_t ValidationResponseCannotParsed=REBASE(0x3537780);
            const uintptr_t VideoCacheFileError=REBASE(0x5FB2C60);
            const uintptr_t VideoDeviceInputInitializeVideoCaptureSe=REBASE(0x3CE1D90);
            const uintptr_t VideoDeviceInputRaiseWithDMWriteLockUnab=REBASE(0x3CE3530);
            const uintptr_t VideoDeviceInputSubscribeUnableSubscribe=REBASE(0x3CE3A20);
            const uintptr_t VideoStreamDecodingFailureErrorCode=REBASE(0x3D0DF00);
            const uintptr_t VideoStreamFound=REBASE(0x3D54EC0);
            const uintptr_t VideoUsingResolutionSupported=REBASE(0x3D54E80);
            const uintptr_t WebViewOpenNotificationDataMissingURL=REBASE(0x82B1C0);
            const uintptr_t WrapLayerContentShouldNoneWhen=REBASE(0x1C08B30);
        }
        namespace ExampleProtocolCore
        {
            const uintptr_t FailedPrintHelloNativeConsole=REBASE(0x508EC40);
            const uintptr_t FailedPrintWorldNativeConsole=REBASE(0x508E690);
            const uintptr_t ReceivedPrintTestNotificationPlatform=REBASE(0x508E7C0);
        }
        namespace ExampleV2Handler
        {
            const uintptr_t FailedPrintHelloNativeConsole=REBASE(0x4E31B60);
            const uintptr_t FailedPrintWorldNativeConsole=REBASE(0x4E315D0);
            const uintptr_t ReceivedPrintTestNotificationPlatform=REBASE(0x4E31700);
        }
        namespace ExperienceAuthService
        {
            const uintptr_t CouldFindScopeCheckGuidAfter=REBASE(0x325D9C0);
            const uintptr_t DatamodelNull=REBASE(0x325C9A0);
            const uintptr_t ExperienceAuthServiceLongerExists=REBASE(0x325C9D0);
            const uintptr_t ExperienceAuthServiceLongerExistsAfterDa=REBASE(0x325CC90);
            const uintptr_t FailedConstructRequestBody=REBASE(0x325BE60);
            const uintptr_t ScopeArrayContainsValueInvalidType=REBASE(0x325B5E0);
            const uintptr_t ScopeCheckAsyncShouldOnlyCalledServer=REBASE(0x3259890);
        }
        namespace ExperienceContextHolder
        {
            const uintptr_t DMHasBeenInitializedCannotDestroyed=REBASE(0x4C60820);
            const uintptr_t DMNullCannotPause=REBASE(0x4C606D0);
            const uintptr_t DMNullCannotRun=REBASE(0x4C604E0);
            const uintptr_t ExperienceContextHolderExperienceContext=REBASE(0x4C5F670);
            const uintptr_t UnsafeCallEngineContext=REBASE(0x4C5F7A0);
        }
        namespace ExperienceCoordinator
        {
            const uintptr_t AddDataModelJobInvalidDM=REBASE(0x15821D0);
            const uintptr_t ExperienceCoordinatorExperienceCoordinat=REBASE(0x1581360);
            const uintptr_t FinalizeAttemptingFinalizeMoreThanOnce=REBASE(0x1581C10);
            const uintptr_t SubmitDataModelTaskInvalidDM=REBASE(0x1581EE0);
        }
        namespace ExperienceService
        {
            const uintptr_t ExperienceServiceCallbackMissingRegister=REBASE(0x44CFAD0);
            const uintptr_t ExperienceServiceCallbackPointerMissingR=REBASE(0x44D0620);
            const uintptr_t ExperienceServiceErrorCallbackPointerMis=REBASE(0x44D1370);
            const uintptr_t ExperienceServiceSuccessCallbackMissingE=REBASE(0x44D0B40);
            const uintptr_t ExperienceServiceSuccessCallbackPointerM=REBASE(0x44D1170);
        }
        namespace ExperienceStateCaptureController
        {
            const uintptr_t CreateCaptureDataModelAndSwitchCaptureDM=REBASE(0x4CE8CB0);
            const uintptr_t CreateCaptureDataModelAndSwitchDMAlready=REBASE(0x4CE8790);
            const uintptr_t CreateCaptureDataModelNullReferencedData=REBASE(0x4CE97C0);
            const uintptr_t CreateCaptureDataModelStartedCreatingDMC=REBASE(0x4CE97B0);
            const uintptr_t CreatingNewExperienceStateCaptureControl=REBASE(0x4CE84B0);
            const uintptr_t DestroyCaptureDataModelIfExistsFinishedD=REBASE(0x4CE9F00);
            const uintptr_t DestroyCaptureDataModelIfExistsSkippingD=REBASE(0x4CE9F80);
            const uintptr_t FinishedPrepareToSwitch=REBASE(0x4CEA150);
            const uintptr_t OnSwitchBackNullReferencedDataModel=REBASE(0x4CEA7E0);
            const uintptr_t OnSwitchNullParameterSDmLoadedState=REBASE(0x4CEA450);
            const uintptr_t PrepareToSwitchNullReferencedDataModel=REBASE(0x4CEA1D0);
            const uintptr_t SwitchBackAndDestroyCaptureDataModelCapt=REBASE(0x4CEB100);
            const uintptr_t SwitchBackAndDestroyCaptureDataModelNull=REBASE(0x4CE8F30);
        }
        namespace ExperienceStateCaptureServiceTraceDebug
        {
            const uintptr_t CopyToMirror=REBASE(0xF876F0);
        }
        namespace ExperienceStateCaptureServiceVerboseDebug
        {
            const uintptr_t FilteringOutNonVisibleUIElement=REBASE(0xF86C00);
        }
        namespace ExperienceStateDeltasVerboseErrors
        {
            const uintptr_t CouldCastInstance=REBASE(0xF8DF60);
            const uintptr_t FailedCreateInstanceTypeGuid=REBASE(0xF851A0);
            const uintptr_t FailedParseColorHexValue=REBASE(0xF868D0);
            const uintptr_t FailedReferencedInstanceApplyRefProp=REBASE(0xF84F40);
            const uintptr_t IgnoringInstanceParent=REBASE(0xF8EF30);
        }
        namespace ExperienceStateRecording
        {
            const uintptr_t BatchDiskWriteFailureOpPath=REBASE(0xF70490);
            const uintptr_t DataCenterIDBlocklistedSkippingRecorderS=REBASE(0x36226A0);
            const uintptr_t SessionInfoGuid=REBASE(0xF80EF0);
            const uintptr_t StaleFileDetectedFileSeqStill=REBASE(0xF7B010);
            const uintptr_t StartedBatchFileRecorderPath=REBASE(0xF80EB0);
            const uintptr_t StoppingDMRecorderDataPingMs=REBASE(0xF82A70);
        }
        namespace ExperimentationProtocolCore
        {
            const uintptr_t ExperimentationProtocolCoreConstructedAd=REBASE(0x5A9C430);
            const uintptr_t ExperimentationProtocolCoreDestroyedRemo=REBASE(0x5A9C780);
        }
        namespace ExtractPackageDefinition
        {
            const uintptr_t PlaceIdFileDehydratedButExtractPackageDe=REBASE(0x32E7940);
            const uintptr_t SkippingPackageDefinitionHydrationDueDeb=REBASE(0x32E7950);
        }
        namespace FMOD
        {
            const uintptr_t FMODAPIErrorFMODRESULTInstance=REBASE(0x28D4B80);
            const uintptr_t FMODObjectParentFmodOperationError=REBASE(0x28EAFA0);
        }
        namespace FRM
        {
            const uintptr_t ErrorParsingMegapixelString=REBASE(0x5FF5530);
            const uintptr_t ErrorParsingMegapixelStringQLValue=REBASE(0x492BA90);
            const uintptr_t FRMGatesProfileCloudsSingleTapGateConstF=REBASE(0x492AC10);
            const uintptr_t FRMQualityLevelFrameTimeState=REBASE(0x36E3BC0);
            const uintptr_t FRMStatusFrameTimeAverageDelay=REBASE(0x4930020);
            const uintptr_t FailedParseFRMLockstepProfileOverrideUsi=REBASE(0x4927A40);
            const uintptr_t MaxResolutionMpixSetPerFRM=REBASE(0x492CF70);
            const uintptr_t ProfileOverrideInvalidRange=REBASE(0x5FF5130);
            const uintptr_t ProfileOverrideJSONParseError=REBASE(0x4925F40);
            const uintptr_t ProfileOverrideNonNumericSSAOValue=REBASE(0x49259D0);
            const uintptr_t ProfileOverrideRangeOutBoundsValid=REBASE(0x4925500);
            const uintptr_t ProfileOverrideUnknownFeatureKey=REBASE(0x4925F20);
            const uintptr_t StartingFRMQualitySettingStartingLevel=REBASE(0x49297F0);
            const uintptr_t SteppingFRMQualityOldNew=REBASE(0x4930660);
        }
        namespace FaceAnimatorThreadingTrace
        {
            const uintptr_t FaceAnimatorServiceImplOnServiceProvider=REBASE(0x1C35C90);
        }
        namespace FaceAnimatorTrace
        {
            const uintptr_t FaceAnimatorServiceAudioOnlySDKSetupComp=REBASE(0x1C340F0);
            const uintptr_t FaceAnimatorServiceCompletingSDKSetupAud=REBASE(0x1C34100);
            const uintptr_t FaceAnimatorServiceDelayFlagInitializing=REBASE(0x1C2EC60);
            const uintptr_t FaceAnimatorServiceDisconnectFromStepSig=REBASE(0x1C35540);
            const uintptr_t FaceAnimatorServiceFFlagCompletingSDKSet=REBASE(0x1C346C0);
            const uintptr_t FaceAnimatorServiceFFlagDMTaskJITCalling=REBASE(0x1C311B0);
            const uintptr_t FaceAnimatorServiceFFlagExceptionCreatin=REBASE(0x5F17E00);
            const uintptr_t FaceAnimatorServiceFFlagFinalizingAsyncI=REBASE(0x1C32C40);
            const uintptr_t FaceAnimatorServiceFFlagProgressJITModel=REBASE(0x1C3EAE0);
            const uintptr_t FaceAnimatorServiceFFlagProgressModelDel=REBASE(0x1C3EDF0);
            const uintptr_t FaceAnimatorServiceFFlagServiceDestroyed=REBASE(0x1C33010);
            const uintptr_t FaceAnimatorServiceFailedConfigureInitia=REBASE(0x1C2EA40);
            const uintptr_t FaceAnimatorServiceFailedCreateInitialAu=REBASE(0x1C2E9D0);
            const uintptr_t FaceAnimatorServiceIsVideoAvailableCamer=REBASE(0x1C37A90);
            const uintptr_t FaceAnimatorServiceResettingExistingAudi=REBASE(0x1C30C00);
            const uintptr_t FaceAnimatorServiceSetAudioInputEnabledE=REBASE(0x1A105D0);
            const uintptr_t FaceAnimatorServiceSetVideoAnimationEnab=REBASE(0x1C3AE40);
            const uintptr_t FaceAnimatorServiceSetVideoInputEnabledR=REBASE(0x1C35EE0);
            const uintptr_t FaceAnimatorServiceUsingExistingContext=REBASE(0x1C3AFF0);
        }
        namespace FaceChatDebugTrace
        {
            const uintptr_t AnimatorLoadStreamAnimation=REBASE(0x1844090);
            const uintptr_t AnimatorLoadStreamAnimationDeprecated=REBASE(0x1843470);
            const uintptr_t AnimatorLoadStreamAnimationForSelfieView=REBASE(0x1843B60);
        }
        namespace FacialAgeEstimationProtocol
        {
            const uintptr_t CallbackReceivedNonexistentInquiryID=REBASE(0x4E2EE90);
        }
        namespace FacialAgeEstimationService
        {
            const uintptr_t LocalPlayer=REBASE(0x32ECAE0);
            const uintptr_t ReceivedAgeVerificationStatusChangeEvent=REBASE(0x32EC7F0);
        }
        namespace FacialAnimationStreamingServiceV2Verbose
        {
            const uintptr_t FacialAnimationStreamingServiceV2SetStat=REBASE(0x1A0AFB0);
        }
        namespace FastLogValueChanged
        {
            const uintptr_t FailedApplyAnyOverride=REBASE(0x49BF950);
        }
        namespace FeatureRestrictionManager
        {
            const uintptr_t FailedCreatePlayersUpdateFeatureTimeoutF=REBASE(0x32545D0);
            const uintptr_t FeatureRestrictionManagerFailedParsingEr=REBASE(0x5F73D50);
        }
        namespace FileCulling
        {
            const uintptr_t ErrorFileSystem=REBASE(0x5F46690);
        }
        namespace FileMeshDataValidatorLogChannel
        {
            const uintptr_t FileMeshDataValidationPolicyIgnored=REBASE(0x2483E40);
        }
        namespace FlagCache
        {
            const uintptr_t CachedExpiryTimeFoundTombstoneSkipping=REBASE(0x4DDBE00);
            const uintptr_t ChannelMismatchPrecheckFailedTombstoneCh=REBASE(0x4DDC1B0);
            const uintptr_t ChannelMismatchPrecheckPassedChannel=REBASE(0x4DDC1C0);
            const uintptr_t FailedBurnAfterReadFailedRename=REBASE(0x4DDE500);
            const uintptr_t FailedGetLastWriteTimeSettings=REBASE(0x4DDBE10);
            const uintptr_t FetchAndCacheFlagsFromCdnFetchFlagsFromC=REBASE(0x4DD96A0);
            const uintptr_t FlagCacheExpiredElapsedSeconds=REBASE(0x4DDE3B0);
            const uintptr_t FlagPrefetchTimedOutAfterS=REBASE(0x4DD9F60);
            const uintptr_t FlagPrefetchWaitTimeMs=REBASE(0x4DD9F50);
            const uintptr_t WriteFlagCacheWroteSignatureLengthSignat=REBASE(0x4DDED40);
        }
        namespace FlagFetchingStarterModule
        {
            const uintptr_t FailedDownloadApplyCriticalSettingsPleas=REBASE(0x50FA5A0);
            const uintptr_t FlagCacheLoadFailedFallingBack=REBASE(0x50F85F0);
            const uintptr_t Log=REBASE(0x50F69A0);
            const uintptr_t PrefetchFlagsCDNSucceededAfterCached=REBASE(0x50F8D20);
            const uintptr_t PrefetchFlagsCDNSucceededLoadingFlags=REBASE(0x50F9170);
            const uintptr_t SkippingCDNFlagFetchDueCommand=REBASE(0x50F94F0);
            const uintptr_t StartingFlagFetchingStarterModule=REBASE(0x50F7B60);
            const uintptr_t SuccessfullyLoadedFlags=REBASE(0x50F9DF0);
        }
        namespace FontSubsystem
        {
            const uintptr_t CouldRenderGlyphLoadedFontErrorCode=REBASE(0x25F1B70);
            const uintptr_t FontFamilyFailedLoad=REBASE(0x25EEF20);
            const uintptr_t FontFamilyLoadedFaces=REBASE(0x25EEE80);
            const uintptr_t FontSubsetFailedLoad=REBASE(0x25F5700);
            const uintptr_t FreeTypeStrokerInitializationFailedError=REBASE(0x25ED390);
            const uintptr_t Log=REBASE(0x25F44A0);
        }
        namespace FriendServiceCache
        {
            const uintptr_t FriendServiceCacheStatusOnlineLldLld=REBASE(0x30D3D20);
            const uintptr_t FriendServiceFriendRequestOnlineLldLld=REBASE(0x30D3B00);
            const uintptr_t FriendServicePlayerRemovingLld=REBASE(0x30D34A0);
        }
        namespace FriendServiceCallbacks
        {
            const uintptr_t FriendServiceStatusCallbackLldLld=REBASE(0x30D3D30);
        }
        namespace FriendServiceLocalRequests
        {
            const uintptr_t Error=REBASE(0x30E0D80);
            const uintptr_t Failure=REBASE(0x30CE8B0);
            const uintptr_t Success=REBASE(0x30CF7C0);
        }
        namespace FriendServiceWebRequests
        {
            const uintptr_t GetFriendsWhoPlayedAsyncRequestFailed=REBASE(0x30DAAA0);
        }
        namespace FriendsCallingExperienceController
        {
            const uintptr_t FriendsCallingExperienceControllerFinali=REBASE(0x4CC24E0);
            const uintptr_t FriendsCallingExperienceControllerInitia=REBASE(0x4CC20C0);
        }
        namespace GDKCredentialsProtocol
        {
            const uintptr_t OnGetHeadersRequestUrlMethodAreEmtpy=REBASE(0x854190);
            const uintptr_t XUserGetTokenAndSignatureResultFailed08X=REBASE(0x8536B0);
        }
        namespace GDKResourcesManager
        {
            const uintptr_t Failed08X=REBASE(0x856370);
            const uintptr_t GamingRuntimeError08X=REBASE(0x857710);
            const uintptr_t UserLacksMultiplayerPrivilegesAttempting=REBASE(0x859760);
            const uintptr_t XUserAddAsyncFailed08X=REBASE(0x857B80);
            const uintptr_t XUserAddResultFailed08X=REBASE(0x857CE0);
            const uintptr_t XUserGetGamertagFailed08X=REBASE(0x857E30);
            const uintptr_t XUserResolvePrivilegeWithUiAsyncFailed08=REBASE(0x859560);
            const uintptr_t XboxUserSignedAttemptingSignXbox=REBASE(0x859730);
        }
        namespace GDKRobuxUpsell
        {
            const uintptr_t GDKRobuxUpsellDidSuccessfullyComplete=REBASE(0x82B9E0);
        }
        namespace GDKSessionManager
        {
            const uintptr_t CurrentSessionHandleNull=REBASE(0x85BB50);
            const uintptr_t WritingSession=REBASE(0x85B570);
            const uintptr_t XGameInviteRegisterForEventFailed08X=REBASE(0x85D400);
            const uintptr_t XTaskQueueDuplicateHandleFailed08X=REBASE(0x85AAD0);
            const uintptr_t XblGetScidFailed08X=REBASE(0x85AAC0);
            const uintptr_t XblMultiplayerClearActivityAsyncFailed08=REBASE(0x85BE00);
            const uintptr_t XblMultiplayerGetSessionByHandleAsyncFai=REBASE(0x85C170);
            const uintptr_t XblMultiplayerGetSessionByHandleResultFa=REBASE(0x85C690);
            const uintptr_t XblMultiplayerSessionCreateHandleFailed=REBASE(0x85AD70);
            const uintptr_t XblMultiplayerSessionCurrentUserSetStatu=REBASE(0x85C680);
            const uintptr_t XblMultiplayerWriteSessionByHandleAsyncF=REBASE(0x85CB40);
        }
        namespace GameJoinUtil
        {
            const uintptr_t CreatorBanStartTimeCouldParsed=REBASE(0x6009920);
            const uintptr_t CreatorBanTextFilterStatusInvalid=REBASE(0x4C6FB80);
            const uintptr_t CreatorExperienceBanMessageUponTeleport=REBASE(0x4C78CF0);
            const uintptr_t DecodeTeamTestJoinResponseForTeleportInv=REBASE(0x6009C50);
            const uintptr_t DecodeTeamTestJoinResponseForTeleportRes=REBASE(0x4C73000);
            const uintptr_t DefaultHandlerTeleportFailedState=REBASE(0x4C895D0);
            const uintptr_t DefaultHandlerTeleportSucceeded=REBASE(0x4C89280);
            const uintptr_t DelayingRequest42fSeconds=REBASE(0x4C683D0);
            const uintptr_t DelayingRequestSeconds=REBASE(0x4C68BD0);
            const uintptr_t GameJoinFailedHereSWhy=REBASE(0x4C8A670);
            const uintptr_t GameJoinSucceeded=REBASE(0x4C6EAC0);
            const uintptr_t GameJoinUtilDecodeTeamTestJoinResponseIn=REBASE(0x6009B50);
            const uintptr_t GameJoinUtilInitiateTeamTestTeleportPoll=REBASE(0x4C89720);
            const uintptr_t GameJoinUtilInitiateTeleportToInstanceUR=REBASE(0x4C7EEB0);
            const uintptr_t GameJoinUtilInitiateTeleportToPlaceURLPO=REBASE(0x4C7FCF0);
            const uintptr_t GameJoinUtilInitiateTeleportToReservedSe=REBASE(0x4C80B40);
            const uintptr_t GameJoinUtilJoinGamePostCrossExpVoiceURL=REBASE(0x4C88360);
            const uintptr_t GameJoinUtilJoinGamePostGameInstanceURLB=REBASE(0x4C82F70);
            const uintptr_t GameJoinUtilJoinGamePostPartyURLBODY=REBASE(0x4C853C0);
            const uintptr_t GameJoinUtilJoinGamePostPlayTogetherGame=REBASE(0x4C83CB0);
            const uintptr_t GameJoinUtilJoinGamePostPrivatePartyURLB=REBASE(0x4C85D40);
            const uintptr_t GameJoinUtilJoinGamePostPrivateServerURL=REBASE(0x4C869F0);
            const uintptr_t GameJoinUtilJoinGamePostReservedServerUR=REBASE(0x4C876B0);
            const uintptr_t GameJoinUtilJoinGamePostSpecificUserURLB=REBASE(0x4C84770);
            const uintptr_t GameJoinUtilJoinGamePostStandardURLBODY=REBASE(0x4C82110);
            const uintptr_t GameJoinUtilMakePlaceLauncherRequestForT=REBASE(0x4C7BB90);
            const uintptr_t GameJoinUtilMakePlaceLauncherRequestRequ=REBASE(0x4C73C20);
            const uintptr_t GameJoinUtilProcessingJoinParameters=REBASE(0x4C6CBB0);
            const uintptr_t GameJoinV2StatRandomMetricValue=REBASE(0x4C70A90);
            const uintptr_t JoinGamePostTeamTestUniqueGameCode=REBASE(0x4C86640);
            const uintptr_t PopUdpProbeAttachedPopUdpProbeReportJoin=REBASE(0x4C81B80);
            const uintptr_t PopUdpProbeProbeDataCachedYetSkipping=REBASE(0x4C81BD0);
            const uintptr_t SuccessfullyWritingEventId=REBASE(0x4C6CED0);
        }
        namespace GameJoinV2
        {
            const uintptr_t CheckingIfUserGameJoinV2AllowlistUserId=REBASE(0x4CDC3E0);
            const uintptr_t GameJoinV2FinishJoinGamePostV2URLBODY=REBASE(0x4CDEF70);
            const uintptr_t GameJoinV2FinishTeleportPostV2URLBODY=REBASE(0x4CDFBF0);
            const uintptr_t GameJoinV2OnAcknowledgedAttemptIdRetryMs=REBASE(0x4CDDEC0);
            const uintptr_t GameJoinV2OnResponseReadyStatusJobIdQueu=REBASE(0x4CDE0F0);
            const uintptr_t GameJoinV2TerminalErrorKindStatusMappedS=REBASE(0x4CDE810);
        }
        namespace GamePassPurchase
        {
            const uintptr_t GetPurchaseBodyJsonPurchasePayloadExceed=REBASE(0x137D8B0);
            const uintptr_t GetRequestUrlGamePassPurchaseRequestorOn=REBASE(0x137CA30);
            const uintptr_t OrchestrationLayerAvailableMarketplaceSe=REBASE(0x1380EB0);
            const uintptr_t ParseResponsesFieldIncorrectTypeResponse=REBASE(0x137CB80);
            const uintptr_t ParseResponsesGamePassPurchaseRequestorO=REBASE(0x137D160);
            const uintptr_t RequestorConstructedMaxTimeQueueMs=REBASE(0x137C750);
        }
        namespace GamePassStudioOwnershipCacheFix
        {
            const uintptr_t SetOrchestratedGamePassOwnershipCacheEnt=REBASE(0x13D8450);
        }
        namespace GamepadService
        {
            const uintptr_t TabUsedButLayerCollectorDoes=REBASE(0x3C21040);
        }
        namespace GenerationService
        {
            const uintptr_t AllEditableContentConvertedSuccessfullyC=REBASE(0x4A3C4F0);
            const uintptr_t AllValidationPassedCreatingMeshSegmentat=REBASE(0x4A562E0);
            const uintptr_t AllValidationPassedCreatingModelGenerati=REBASE(0x4A41FB0);
            const uintptr_t AssetServiceUnavailableSegmentationPermi=REBASE(0x4A573F0);
            const uintptr_t BeginningDownloadMesh=REBASE(0x4A626A0);
            const uintptr_t BeginningGLBDownload=REBASE(0x4A49C70);
            const uintptr_t BeginningRBXMDownload=REBASE(0x4A4DC90);
            const uintptr_t BeginningRBXMDownloadUrl=REBASE(0x4A1B8C0);
            const uintptr_t CallerLacksEditPermissionMeshAsset=REBASE(0x4A58E20);
            const uintptr_t ContentProviderAvailableImageFetch=REBASE(0x4A456A0);
            const uintptr_t CouldWriteByteSOutputFile=REBASE(0x4A62BB0);
            const uintptr_t CreatingRuntimeContentMODELGENERATIONID=REBASE(0x4A4BF20);
            const uintptr_t DataModelLostDuringImageFetchCallback=REBASE(0x4A45AE0);
            const uintptr_t DataModelLostDuringImageFetchError=REBASE(0x4A46A60);
            const uintptr_t DataModelLostDuringSegmentationPermissio=REBASE(0x4A590F0);
            const uintptr_t EditableModelConversionCompletedSuccessf=REBASE(0x4A4CD00);
            const uintptr_t EmptyGLBDownloadUrl=REBASE(0x4A49C80);
            const uintptr_t EmptyMeshDownloadUrl=REBASE(0x4A62710);
            const uintptr_t EmptyRBXMDownloadUrl=REBASE(0x4A4DCA0);
            const uintptr_t ExceptionDuringConversionCallback=REBASE(0x5FFE110);
            const uintptr_t ExceptionDuringErrorCallback=REBASE(0x5FFE410);
            const uintptr_t ExceptionGLBImportCompletionCallback=REBASE(0x5FFEF90);
            const uintptr_t ExceptionGLBImportErrorCallbackTask=REBASE(0x5FFF6B0);
            const uintptr_t FailedConvert=REBASE(0x4A3D5B0);
            const uintptr_t FailedCreateMeshSegmentationJob=REBASE(0x4A1E0D0);
            const uintptr_t FailedCreateModelGenerationJob=REBASE(0x4A1D230);
            const uintptr_t FailedReportErrorExceptionGLBImport=REBASE(0x5FFEED0);
            const uintptr_t FailedReportErrorUnknownExceptionGLB=REBASE(0x5FFF270);
            const uintptr_t GLBDownloadSuccessfulBytes=REBASE(0x4A4A1A0);
            const uintptr_t GLBImportFailed=REBASE(0x4A4D730);
            const uintptr_t GLBImportReturnedNullModel=REBASE(0x4A4BF40);
            const uintptr_t ImageDecodeEncodeFailed=REBASE(0x5FFEC10);
            const uintptr_t IndividualConversionCompletedPendingConv=REBASE(0x4A3C6F0);
            const uintptr_t InvalidResultGenerateMeshAsync=REBASE(0x4A228B0);
            const uintptr_t KeyMappedOptions=REBASE(0x4A5D110);
            const uintptr_t MeshExportSegmentationFailed=REBASE(0x4A59FD0);
            const uintptr_t MeshGenerationFailed=REBASE(0x4A228C0);
            const uintptr_t MeshImportedSuccessfully=REBASE(0x4A23180);
            const uintptr_t MeshPartConversionCompletedConversionsRe=REBASE(0x4A3C4E0);
            const uintptr_t MeshPartHasEditableContentAddingConversi=REBASE(0x4A3C1A0);
            const uintptr_t MeshPartWasDestroyedBeforeConversionComp=REBASE(0x4A3CB90);
            const uintptr_t MeshSegmentationCompletedDownloadingSegm=REBASE(0x4A5A350);
            const uintptr_t MeshSegmentationJobConstructedPreValidat=REBASE(0x4A56AE0);
            const uintptr_t MeshSegmentationJobRequestUrl=REBASE(0x4A56F60);
            const uintptr_t MeshSegmentationPermissionCheckFailed=REBASE(0x4A59310);
            const uintptr_t MetadataMappingWasUnableParsed=REBASE(0x4A64FA0);
            const uintptr_t ModelGenerationCompletedButValidGLB=REBASE(0x4A48CD0);
            const uintptr_t ModelGenerationJobConstructedPreValidate=REBASE(0x4A42DF0);
            const uintptr_t ModelGenerationOptionsDepthExceededMax=REBASE(0x4A53F80);
            const uintptr_t ModelInstanceFoundUsingOriginalRootModel=REBASE(0x4A3D900);
            const uintptr_t OutMemoryDuringImageDecodeEncode=REBASE(0x5FFED20);
            const uintptr_t PollingGeneratedMeshJobId=REBASE(0x4A61140);
            const uintptr_t PollingGeneratedModelFailed=REBASE(0x4A53CA0);
            const uintptr_t PollingGeneratedModelJobId=REBASE(0x4A538B0);
            const uintptr_t ProcessRemoteEvent=REBASE(0x4A1A6C0);
            const uintptr_t ProcessingReplicationRequestEvent=REBASE(0x4A23610);
            const uintptr_t RBXMContainedRootInstancesExpected1=REBASE(0x4A1C0B0);
            const uintptr_t RBXMDeserializeReturnedInstancesExpected=REBASE(0x4A4EC00);
            const uintptr_t RBXMDeserializeThrew=REBASE(0x5FFDA20);
            const uintptr_t RBXMDownloadSuccessfulBytes=REBASE(0x4A4E1A0);
            const uintptr_t ReplicatingRequestGenerationReplicationE=REBASE(0x4A22C00);
            const uintptr_t ReplicationRequestEventTriggeredServer=REBASE(0x4A23600);
            const uintptr_t ResponseBodyWasUnableParsed=REBASE(0x4A57DF0);
            const uintptr_t RunningGenerationJobPreValidatedParamete=REBASE(0x4A52250);
            const uintptr_t RunningMeshGenerationJobUserIdUniverseId=REBASE(0x4A5EDE0);
            const uintptr_t SegmentedRBXMDeserializeReturnedInstance=REBASE(0x4A5AE90);
            const uintptr_t SendingRequestStartMeshGeneration=REBASE(0x4A5F630);
            const uintptr_t SendingRequestStartMeshSegmentation=REBASE(0x4A57EB0);
            const uintptr_t StartingContentConversionUsingAssetServi=REBASE(0x4A3A570);
            const uintptr_t StartingConversionEditableModelRuntimeCo=REBASE(0x4A3E040);
            const uintptr_t UnableCreateGenerationService=REBASE(0x4A639F0);
            const uintptr_t UnableCreateGenerationServiceGLBImport=REBASE(0x4A4B260);
            const uintptr_t UnableGenerateIntermediateResult=REBASE(0x4A2F180);
            const uintptr_t UnableGenerateMeshJobId=REBASE(0x4A22180);
            const uintptr_t UnableLockIntermediateResultCallback=REBASE(0x4A21AC0);
            const uintptr_t UnableSnapshotMeshSegmentationExport=REBASE(0x5FFFC00);
            const uintptr_t UnknownExceptionDuringConversionCallback=REBASE(0x5FFE310);
            const uintptr_t UnknownExceptionDuringErrorCallback=REBASE(0x5FFE540);
            const uintptr_t UnknownExceptionGLBImportCompletionCallb=REBASE(0x5FFF330);
            const uintptr_t UnknownExceptionGLBImportErrorCallbackTa=REBASE(0x5FFF7A0);
            const uintptr_t VideoGenGetTriggersFailed=REBASE(0x4A38F10);
            const uintptr_t VideoGenGetTriggersFailedParseResponse=REBASE(0x4A37500);
            const uintptr_t VideoGenIceServersFailed=REBASE(0x4A39EB0);
            const uintptr_t VideoGenIceServersFailedParseResponse=REBASE(0x4A32F10);
            const uintptr_t VideoGenOfferFailed=REBASE(0x4A39B70);
            const uintptr_t VideoGenOfferFailedParseResponse=REBASE(0x4A34650);
            const uintptr_t VideoGenReleaseFailed=REBASE(0x4A38AB0);
            const uintptr_t VideoGenReserveFailed=REBASE(0x4A3A1F0);
            const uintptr_t VideoGenReserveFailedParseResponse=REBASE(0x4A32060);
            const uintptr_t VideoGenSessionIdCollisionReleasingPrior=REBASE(0x4A24520);
            const uintptr_t VideoGenSessionReleased=REBASE(0x4A38D30);
            const uintptr_t VideoGenStartFailed=REBASE(0x4A39880);
            const uintptr_t VideoGenUpdatePromptFailed=REBASE(0x4A39590);
            const uintptr_t VideoGenUpdateTriggersFailed=REBASE(0x4A39250);
        }
        namespace GetBundleDetailsBatching
        {
            const uintptr_t Log=REBASE(0x34387D0);
        }
        namespace GetUsersPriceLevels
        {
            const uintptr_t HandleGetUsersPriceLevelsResponseErrorFa=REBASE(0x13D8D60);
            const uintptr_t HandleGetUsersPriceLevelsResponseSuccess=REBASE(0x13D8A90);
        }
        namespace GfxClusters
        {
            const uintptr_t AfterInitialBindAddedParts=REBASE(0x376D9B0);
            const uintptr_t FastClustersCheckBreakNonStationary=REBASE(0x3778F50);
            const uintptr_t InvalidatingFastClustersPriorityInvalida=REBASE(0x3773470);
            const uintptr_t ProcessingNewMegaClusters=REBASE(0x3775A80);
            const uintptr_t SceneUpdaterUpdateCycleCurrentFrame=REBASE(0x37773C0);
            const uintptr_t UpdatingInvalidatedPriorityClusterRemain=REBASE(0x3773460);
            const uintptr_t WaitingPartsPassBegin=REBASE(0x37724D0);
        }
        namespace GfxClustersFull
        {
            const uintptr_t BasePartNotifyVisuallyMovedWakesPart=REBASE(0xEC5440);
            const uintptr_t FastClusterQueuedCheckStationary=REBASE(0x3999130);
            const uintptr_t FrameAddingMegaclusterQueue=REBASE(0x376FA60);
            const uintptr_t FrameQueueInvalidateFastCluster=REBASE(0x3770A70);
            const uintptr_t FrameQueueInvalidatePart=REBASE(0x37709A0);
            const uintptr_t FrameQueuePriorityInvalidateFastCluster=REBASE(0x3770C00);
            const uintptr_t NotifyAwakeAddingClusterDynamicNodes=REBASE(0x37742C0);
            const uintptr_t PartAlreadyHasBindingSkippingAdd=REBASE(0x377B110);
            const uintptr_t PartRemovedWorkspaceBeforeWeCould=REBASE(0x3776640);
            const uintptr_t UpdatingEntityPartCluster=REBASE(0x3771330);
        }
        namespace GlyphProviderCreation
        {
            const uintptr_t CreatedNewGlyphProviderIndexFont=REBASE(0x17136A0);
            const uintptr_t CreatingGlyphRendererGlyphProvider=REBASE(0x36E2BC0);
            const uintptr_t InvalidTypesetterIdOutRangeSize=REBASE(0x36E2800);
        }
        namespace GlyphProviderCreationModernLogVersion
        {
            const uintptr_t InvalidTypesetterIdOutRangeSize=REBASE(0x36E27F0);
        }
        namespace GlyphRenderer
        {
            const uintptr_t CannotCreateFontStrokerMemory=REBASE(0x37F4880);
            const uintptr_t CannotSetFreeTypeTruetypeInterpreterVers=REBASE(0x37F4220);
            const uintptr_t FontDataEmpty=REBASE(0x37F4900);
        }
        namespace GoogleAnalyticsTracking
        {
            const uintptr_t CouldSetGoogleAnalyticsReporterUninitial=REBASE(0x11C7800);
            const uintptr_t GoogleAnalyticsAlreadyInitialized=REBASE(0x11C7700);
            const uintptr_t GoogleAnalyticsInitialized=REBASE(0x11C7610);
            const uintptr_t GoogleAnalyticsLotteryNumber=REBASE(0x11C83F0);
        }
        namespace Graphics
        {
            const uintptr_t AbandoningTexturePackBecauseSolidTexture=REBASE(0x3A15210);
            const uintptr_t ActiveNonSimStepParticleIdsEmitterErasin=REBASE(0x387C730);
            const uintptr_t ActiveNonSimStepParticleIdsEmitterReserv=REBASE(0x387EC50);
            const uintptr_t AllocatingUBO=REBASE(0x57F0BA0);
            const uintptr_t CapsASTCSupportProfileLDRSliced=REBASE(0x57EB5B0);
            const uintptr_t CapsVAOTexStorageMapBufferMapBufferRange=REBASE(0x57EC900);
            const uintptr_t CloudsAreDisabled=REBASE(0x37B0DC0);
            const uintptr_t CloudsFailedDownloadCoverTexture=REBASE(0x37B3220);
            const uintptr_t CompiledShadersMsMultiThreadedLoading=REBASE(0x3851780);
            const uintptr_t ConstantBufferCountExtraExceedsDevice=REBASE(0x5832440);
            const uintptr_t CopyPhysicalBlocksUnableIgnoreSrcAlphaSi=REBASE(0x3A16590);
            const uintptr_t CopyRepeatPixelsSourceDestinationFormats=REBASE(0x3A16E50);
            const uintptr_t CouldCreateDeviceDueEINVALIDARG=REBASE(0x2816D90);
            const uintptr_t CouldEnableRobustBufferAccessBecause=REBASE(0x5809D50);
            const uintptr_t D3D11ConstantBufferMapFailedError=REBASE(0x28270C0);
            const uintptr_t D3D11FATALERRORCouldCreateConstant=REBASE(0x28205D0);
            const uintptr_t D3D11FutureRenderingDisabledPattern=REBASE(0x281C250);
            const uintptr_t D3D11GfxCardNameGfxCardVendorGfxFeatureL=REBASE(0x2819C60);
            const uintptr_t DRSInitDeniedFullSizeFramebufferDeniedCa=REBASE(0x3708470);
            const uintptr_t DeferredShaderLoadingEnabled=REBASE(0x3850C60);
            const uintptr_t DispatchSceneCreatedUsing=REBASE(0x37FBC40);
            const uintptr_t ERRORComputeStateObjectCreationFailed=REBASE(0x582CD30);
            const uintptr_t ERRORPipelineStateObjectCreationFailed=REBASE(0x582C200);
            const uintptr_t ERRORResourcesAreDestroyed=REBASE(0x2812910);
            const uintptr_t EditableImageRenderingDisabledFastFlag=REBASE(0x36EF530);
            const uintptr_t EditableMeshRenderingDisabledFastFlag=REBASE(0xE7D2F0);
            const uintptr_t ErrorAttributeStreamIndexExceedsMax=REBASE(0x57E8AC0);
            const uintptr_t ErrorDonTKnowCap=REBASE(0x3850BA0);
            const uintptr_t ErrorFailedCreateShader=REBASE(0x5F99430);
            const uintptr_t ErrorFailedLinkShaderProgram=REBASE(0x5F992A0);
            const uintptr_t ErrorInitializingFlattenedXRayAdorn=REBASE(0x5F92760);
            const uintptr_t ErrorInitializingUIStencilBuffer=REBASE(0x5F91B10);
            const uintptr_t ErrorPinBitShaderDoesnT=REBASE(0x38563E0);
            const uintptr_t FailedAttachColorTextureFramebuffer=REBASE(0x57FB990);
            const uintptr_t FailedCreateVRDebugStereoTexture=REBASE(0x36AB890);
            const uintptr_t FailedCreateVRDebugTexture=REBASE(0x36AAB60);
            const uintptr_t FailedLoadImageInstance=REBASE(0x5FF5DC0);
            const uintptr_t FailedLoadShaderProgramCacheError=REBASE(0x60483C0);
            const uintptr_t FailedOpenSharedResourceRenderingGPU=REBASE(0x2820120);
            const uintptr_t FailedParseShaderProgramCache=REBASE(0x57F1480);
            const uintptr_t FailedParseTunablesJSONUsingFallback=REBASE(0x36E9C60);
            const uintptr_t FailedSaveShaderProgramCacheError=REBASE(0x60484C0);
            const uintptr_t FailsafeGeometryVerticesIndices=REBASE(0x5FA1580);
            const uintptr_t FutureBright=REBASE(0x36E13B0);
            const uintptr_t GLDebug=REBASE(0x57EC800);
            const uintptr_t GeometrySolidVerticesWaterVertices=REBASE(0x5F9E110);
            const uintptr_t GridNEWReadSubmittedVJMReadAsync=REBASE(0x4B3C390);
            const uintptr_t GridReadJobSetupLockedBuiltChunkListChun=REBASE(0x4BD0190);
            const uintptr_t GridReadJobSetupLockedProducersNeeded=REBASE(0x4BD0260);
            const uintptr_t GridReadJobWorkProcessingChunkTotal=REBASE(0x4BD04A0);
            const uintptr_t GridReadJobWorkYieldingProducerChunk=REBASE(0x4BD0490);
            const uintptr_t IDXGIAdapterNullDeviceCreationWillUse=REBASE(0x2816650);
            const uintptr_t LQMTunablesQLPrioritizedShadowDistanceLi=REBASE(0x36A68B0);
            const uintptr_t LayeredClothingModeUpdatedLCHSR=REBASE(0x36E1250);
            const uintptr_t LoadedShaderProgramCacheShaderPrograms=REBASE(0x57F18A0);
            const uintptr_t MainFrameBufferColorFormatSupported=REBASE(0x36A9BE0);
            const uintptr_t MultipleVisualEnginesActive=REBASE(0x36D96B0);
            const uintptr_t ObtainedRuntimeTerrainTextureCache=REBASE(0x3A12C20);
            const uintptr_t OnDrawFinishedCalledWhileCaptureDownload=REBASE(0x36B90A0);
            const uintptr_t RTPoolWidthHeightMiplevelsFormatCount=REBASE(0x5F914B0);
            const uintptr_t RenderFixShadowOnMeshStreamInMeshReadyQu=REBASE(0x388ED30);
            const uintptr_t RenderUseTextureManager2TrueButPrereqsSa=REBASE(0x36C8E50);
            const uintptr_t RenderViewCreated=REBASE(0x3696EB0);
            const uintptr_t RenderViewDestroyedAppExiting=REBASE(0x369FAB0);
            const uintptr_t ResidualRefcountsAfterTeardownDeviceCont=REBASE(0x281B980);
            const uintptr_t ResizingDueDifferentWidthHeightCurrent=REBASE(0x5819570);
            const uintptr_t ResolutionX=REBASE(0x5F91C10);
            const uintptr_t SavedShaderProgramCacheShaderPrograms=REBASE(0x57F2380);
            const uintptr_t SchedulingChunkUpdateChunkPriority=REBASE(0x38DB0C0);
            const uintptr_t SettingScreenDPIScaleWas=REBASE(0x36E3640);
            const uintptr_t ShaderHasNonEmptyInfologLength=REBASE(0x57FF6E0);
            const uintptr_t ShuttingDownThread=REBASE(0x4BC3EF0);
            const uintptr_t SmoothClusterSchedulingGenerationChunkXY=REBASE(0x38DBA30);
            const uintptr_t SolidTexturesProcessUsedMaterialChangesS=REBASE(0x3A13800);
            const uintptr_t SpaceFittingVertexIndexIntoVBPool=REBASE(0x385D2B0);
            const uintptr_t Spawning=REBASE(0x4BC2B10);
            const uintptr_t TM2MaxCloudAssetDimension=REBASE(0x3797060);
            const uintptr_t TerrainTextureAtlasXTileCountXTileSize=REBASE(0x3A19450);
            const uintptr_t UnableCreateRuntimeTerrainTexture=REBASE(0x5FA0AB0);
            const uintptr_t UnableFitTerrainLayersTextureAtlas=REBASE(0x3A11FD0);
            const uintptr_t VKEXTDeviceFaultVendorFault=REBASE(0x581AE20);
            const uintptr_t VRAMNonLocalBudgetBytesCurrentUsage=REBASE(0x28163C0);
            const uintptr_t VTRegionPoolExhaustedRegionsVT=REBASE(0x38D1D10);
            const uintptr_t VULKAN=REBASE(0x58080A0);
            const uintptr_t VULKANRECOVERYDeviceLostSetDeviceLost=REBASE(0x581AE30);
            const uintptr_t VULKANUnifiedMemoryDeviceMemoryZuHost=REBASE(0x5805470);
            const uintptr_t VoxelJobManagerRegisterJobLockedORPHANED=REBASE(0x4BC3900);
            const uintptr_t VulkanDestroyingWindowFrameBuffer=REBASE(0x5819580);
            const uintptr_t VulkanDeviceIncompatibleSkipping=REBASE(0x5804DA0);
            const uintptr_t VulkanErrorTooManyTrianglesTurning=REBASE(0x3704F60);
            const uintptr_t VulkanSavedPipelineCacheBytesHash=REBASE(0x582B050);
            const uintptr_t VulkanSkippingFramebufferCreationInvalid=REBASE(0x5819310);
            const uintptr_t VulkanSkippingPipelineCacheBytesSince=REBASE(0x582A5C0);
            const uintptr_t WARNINGD3DFrameQueryTimedOut=REBASE(0x281DB50);
        }
        namespace GuiTargetLifetime
        {
            const uintptr_t BasePlayerGuiCreated=REBASE(0x3F8E5D0);
            const uintptr_t BasePlayerGuiDestroyed=REBASE(0x3F8E790);
            const uintptr_t GuiItemCreated=REBASE(0x4091E30);
            const uintptr_t GuiItemDestroyed=REBASE(0x4091F40);
            const uintptr_t GuiLayerCollectorDestroyed=REBASE(0x3FC1B90);
            const uintptr_t WorkspaceCreated=REBASE(0x34822C0);
            const uintptr_t WorkspaceDestroyed=REBASE(0x3484320);
        }
        namespace H3Connection
        {
            const uintptr_t ConnSeqErrorParsingDatagramContextID=REBASE(0x21B4680);
            const uintptr_t ConnSeqH3BodyWriterReadDataCbFailedBodyW=REBASE(0x21BF720);
            const uintptr_t ConnSeqH3ClientConnectionSendRequestFail=REBASE(0x21B99E0);
            const uintptr_t ConnSeqH3ConnectionCloseH3StreamFailedSt=REBASE(0x21B4370);
            const uintptr_t ConnSeqH3ConnectionOnQuicStreamReadFaile=REBASE(0x21B2E80);
            const uintptr_t ConnSeqH3ConnectionOpenCustomUniStreamFa=REBASE(0x21B0E50);
            const uintptr_t ConnSeqH3ConnectionOpenH3BidiStreamFaile=REBASE(0x21B1310);
            const uintptr_t ConnSeqH3ConnectionReportConnectionClose=REBASE(0x21B3740);
            const uintptr_t ConnSeqH3ConnectionSendDatagramFailedDat=REBASE(0x21B1F30);
            const uintptr_t ConnSeqH3ConnectionShutdownStreamWriteSt=REBASE(0x21B1DA0);
            const uintptr_t ConnSeqH3ServerConnectionSendRejectedInv=REBASE(0x21BCAF0);
            const uintptr_t ConnSeqPeerClosedLocalHTTP3=REBASE(0x21B33C0);
            const uintptr_t H3ClientConnectionCreateH3ConnFailed=REBASE(0x21BA3D0);
            const uintptr_t H3ServerConnectionCreateH3ConnFailed=REBASE(0x21BD5E0);
        }
        namespace HSRLogChannel
        {
            const uintptr_t HSRPayloadBytesMd5=REBASE(0x1B690D0);
            const uintptr_t HiddenSurfaceRemovalDataGeneratedVersion=REBASE(0x1B67550);
        }
        namespace HangDetectionJob
        {
            const uintptr_t HangDetectionJobStartedTimeoutMs=REBASE(0x585B790);
            const uintptr_t TaskSchedulerHangDetectedGetBlockingThre=REBASE(0x585AB60);
        }
        namespace HangMonitor
        {
            const uintptr_t MoreHangsResolvedThanThereAre=REBASE(0x5AE4150);
        }
        namespace HeartBeatFailure
        {
            const uintptr_t HeartbeatStepping=REBASE(0x358D6F0);
        }
        namespace HeatmapBackendClient
        {
            const uintptr_t FetchingHeatmapTypeName=REBASE(0x3C076A0);
            const uintptr_t ParsedEnvelopeHeatmapTypeHeatmapNameBinC=REBASE(0x3C05870);
        }
        namespace HeatmapQueryService
        {
            const uintptr_t LoadDebugHeatmapFromCsvFailedOpen=REBASE(0x3C008F0);
            const uintptr_t LoadDebugHeatmapFromCsvLoadedZuChunks=REBASE(0x3C008E0);
        }
        namespace HitchRateLog
        {
            const uintptr_t HitchrateMsSecFrameTimeTargetMSsecMsRamT=REBASE(0x2131040);
        }
        namespace HttpClientStatsReporterTrace
        {
            const uintptr_t BlockingSendHttpDownloadBandwidthV2=REBASE(0x1231B10);
        }
        namespace HttpCookieProtocol
        {
            const uintptr_t FailSCookieSErrorS=REBASE(0x2CB9220);
            const uintptr_t SCookiesSSProhibited=REBASE(0x2CB94B0);
        }
        namespace HttpOpenTelemetryTracing
        {
            const uintptr_t AddingRbxRotraceRunIdHeaders=REBASE(0x4DE6DC0);
            const uintptr_t ExceptionWhileEndingAPISpan=REBASE(0x600E8E0);
            const uintptr_t ExceptionWhileEndingSpan=REBASE(0x600E9A0);
            const uintptr_t SpanEndedSuccessfully=REBASE(0x4DE7500);
        }
        namespace HttpRbxApiBudget
        {
            const uintptr_t AddingBudgetDefaultBudgetElevatedBudget=REBASE(0x3C7DA30);
            const uintptr_t ExecutingRetryRequestsSizeBudget=REBASE(0x3C8B910);
            const uintptr_t ExecutingThrottledRequestsSizeBudget=REBASE(0x3C8C020);
            const uintptr_t ThrottlingBudget=REBASE(0x3C8C670);
        }
        namespace HttpRetryOverrides
        {
            const uintptr_t InsertCodeRangeStrategyIntervalMax=REBASE(0x2CD0C20);
        }
        namespace HttpService
        {
            const uintptr_t HttpServiceInvocationUrlRequestBodyStack=REBASE(0x3C58B20);
        }
        namespace HttpServiceOpenCloud
        {
            const uintptr_t EncounteredInvalidUniverseIDWhenParsing=REBASE(0x5FAC490);
        }
        namespace HttpTrace
        {
            const uintptr_t HttpInitialization=REBASE(0x2C96290);
            const uintptr_t HttpRequestAbortState=REBASE(0x2CA0EB0);
            const uintptr_t HttpRequestCurl=REBASE(0x2CC96D0);
            const uintptr_t HttpRequestOldStateNewState=REBASE(0x2C8A200);
            const uintptr_t HttpRequestRoundtripsLdDelayMsLd=REBASE(0x2C89FC0);
            const uintptr_t HttpRequestSetIfModifiedSinceRevalidatio=REBASE(0x2CDA4E0);
            const uintptr_t HttpRetryManagerProcessingRetryQueue=REBASE(0x2CD3C10);
            const uintptr_t UnlockingMutexDataCURLHandle=REBASE(0x2CC4810);
        }
        namespace HttpTraceError
        {
            const uintptr_t AppSuccessfullyForegroundedResumingHTTPR=REBASE(0x2CC6D30);
            const uintptr_t CurlConnectFailedCurrentFileDescriptor=REBASE(0x2CC6640);
            const uintptr_t ExceptionMessageRbxStorageEnabledTargetU=REBASE(0x5F51CF0);
            const uintptr_t FailedCacheResultUpdateCacheUrlExternal=REBASE(0x2CDA780);
            const uintptr_t FailedUpdateCookieCouldnTInitialize=REBASE(0x2CE3550);
            const uintptr_t HttpClientCacheCleanupError=REBASE(0x5F50F40);
            const uintptr_t ReadISequentialStreamintoStringException=REBASE(0x5F53110);
            const uintptr_t ReadISequentialStreamintoStringOutMemory=REBASE(0x5F53050);
            const uintptr_t RequestUrlInvalidHttp=REBASE(0x2CA1BF0);
            const uintptr_t UnknownHttpMethodUrlExternal=REBASE(0x2C7D6B0);
            const uintptr_t UnknownRequestType=REBASE(0x2C801F0);
        }
        namespace HttpTraceLight
        {
            const uintptr_t AsyncWriteCacheSkippedAccumulatedBytes=REBASE(0x2CAD180);
            const uintptr_t AttemptingCallHttpClientSendDuringGlobal=REBASE(0x2C7D6E0);
            const uintptr_t FixedBackoffProcessingEndpointRetryTime=REBASE(0x2CD6AC0);
            const uintptr_t HttpClientDestroyBegin=REBASE(0x2C7B790);
            const uintptr_t HttpRequestCurlIsExternalRequestIsExtern=REBASE(0x2CC9960);
            const uintptr_t HttpRequestPendingCacheEntryWasRevalidat=REBASE(0x2C855D0);
            const uintptr_t HttpRequestPendingCacheEntryWasUsed=REBASE(0x2C85660);
            const uintptr_t HttpRequestUrlPostSizeZuCachePolicyExter=REBASE(0x2C7C1E0);
            const uintptr_t RequestUrlWillThrottledLocallyEndpoint=REBASE(0x2CD63B0);
            const uintptr_t ThrottlingForcedPermanentAddDomainEndpoi=REBASE(0x2CD6780);
            const uintptr_t ThrottlingForcedPermanentRemoveDomainEnd=REBASE(0x2C7D3B0);
            const uintptr_t UpdatedHttpLatencyClientPopPopDc=REBASE(0x4C190E0);
        }
        namespace HttpTraceNew
        {
            const uintptr_t CallbackHandlerHttpResponseUrlCallbackTi=REBASE(0x2CA6900);
            const uintptr_t ConntrackDISCONNECTConnIdHostHttp=REBASE(0x2CCC160);
            const uintptr_t DeferringConnectivityUpdateWorkerThreadR=REBASE(0x2C8F099);
            const uintptr_t DeferringNetworkChangeWorkerThreadReason=REBASE(0x2C8EE90);
            const uintptr_t HttpRequest416ReqRangeBodySizeRangePast=REBASE(0x2C85CB0);
            const uintptr_t WarningWillUseHttpRequestWhileDefault=REBASE(0x2C9EF00);
            const uintptr_t WorkerThreadProcessNetworkChangeProcessi=REBASE(0x2C849E0);
        }
        namespace HugeHugePersistentLog
        {
            const uintptr_t PartTooLargeTreatingPersistent=REBASE(0x480B7E0);
        }
        namespace HumanoidFloorProcess
        {
            const uintptr_t CheckPlatformSubscriptionPlayerMassFloor=REBASE(0x1A00830);
        }
        namespace HumanoidPlatformsLog
        {
            const uintptr_t RemoteBasisBasisFallbackModeTransitionMi=REBASE(0x1617A50);
            const uintptr_t RemoteBasisRemoteBasisFallbackModeTransi=REBASE(0x1616E30);
        }
        namespace ISRIncomingOutgoingAttributes
        {
            const uintptr_t InstanceStateSenderWriteInstanceStatePac=REBASE(0x3B079C0);
            const uintptr_t InstanceStateSerializationManagerDeseria=REBASE(0x48836F0);
            const uintptr_t InstanceStateSerializationManagerSeriali=REBASE(0x4880060);
        }
        namespace ISRTimestampOffsets
        {
            const uintptr_t ISRShortClientStallBypassingCap=REBASE(0x3AE0CE0);
        }
        namespace ISteppedLifetime
        {
            const uintptr_t AnimatorCreated=REBASE(0x1840610);
            const uintptr_t AnimatorDestroyed=REBASE(0x18413B0);
            const uintptr_t ControllerCreated=REBASE(0x30FFA70);
            const uintptr_t ControllerDestroyed=REBASE(0x30FFB90);
            const uintptr_t ExplosionDestroyed=REBASE(0xEA1200);
            const uintptr_t FlagStandServiceCreated=REBASE(0x3D860C0);
            const uintptr_t FlagStandServiceDestroyed=REBASE(0x3D86300);
            const uintptr_t HumanoidDestroyed=REBASE(0x18B9EE0);
            const uintptr_t RocketCreated=REBASE(0x3D8B9B0);
            const uintptr_t RocketDestroyed=REBASE(0x3D8BBB0);
            const uintptr_t SubscribedIStepped=REBASE(0x24F61F0);
        }
        namespace IXPService
        {
            const uintptr_t IXPServiceAttemptSendUserLoadingStatus=REBASE(0x3226510);
            const uintptr_t IXPServiceConstructedAddedChangedListene=REBASE(0x3225110);
            const uintptr_t IXPServiceDestroyedRemovedChangedListene=REBASE(0x32255A0);
            const uintptr_t IXPServiceDmTaskSignalBrowserTracker=REBASE(0x3225EF0);
            const uintptr_t IXPServiceDmTaskSignalUserIXPLoadingStat=REBASE(0x3226520);
            const uintptr_t IXPServiceSignallingLuaCreatorIXPLoading=REBASE(0x3226710);
        }
        namespace IdempotentDevProductPurchasing
        {
            const uintptr_t GetPurchaseBodyJsonPurchasePayloadExceed=REBASE(0x1393E20);
            const uintptr_t GetRequestUrlDevProductPurchaseRequestor=REBASE(0x1393050);
            const uintptr_t Log=REBASE(0x13960C0);
            const uintptr_t OrchestrationLayerAvailableMarketplaceSe=REBASE(0x13961D0);
            const uintptr_t ParseResponsesDevProductPurchaseRequesto=REBASE(0x1393780);
            const uintptr_t ParseResponsesHTTPRequestFailedErrorCode=REBASE(0x13931A0);
            const uintptr_t RequestorConstructedMaxTimeQueueMs=REBASE(0x1392D70);
        }
        namespace ImmHandler
        {
            const uintptr_t IMNSETCONVERSIONMODECmodeSmode=REBASE(0x17C8B20);
            const uintptr_t KeyboardLayout=REBASE(0x17C8290);
            const uintptr_t RIMTYPEKEYBOARDContinue=REBASE(0x1795190);
            const uintptr_t RIMTYPEKEYBOARDShouldSinkKeyboardReturne=REBASE(0x17950F0);
            const uintptr_t SettingUpImmHandler=REBASE(0x17C7BB0);
        }
        namespace ImmersiveBrandedAdsServer
        {
            const uintptr_t ErrorMessageTooLong=REBASE(0x1114800);
        }
        namespace InExperienceAvatarCreation
        {
            const uintptr_t AvatarCreationServiceFailedFindGuidUgcVa=REBASE(0x192ED30);
            const uintptr_t DMNull=REBASE(0x1931A80);
            const uintptr_t OnCreateAvatarAuthorizationCompleteDataM=REBASE(0x1948EC0);
            const uintptr_t PromptCreateAvatarAssetAsyncError=REBASE(0x190F400);
            const uintptr_t PromptCreateAvatarAsyncError=REBASE(0x190E100);
            const uintptr_t PropertyDescriptorFound=REBASE(0x192E310);
        }
        namespace InExperienceCreation
        {
            const uintptr_t CouldDeserializeInstance=REBASE(0x33DA180);
            const uintptr_t PromptCreatePlatformContentAsyncFailedCl=REBASE(0x33D1C50);
            const uintptr_t PromptImportAnimationClipFromVideoAsyncA=REBASE(0x33E6B40);
            const uintptr_t PromptImportAnimationClipFromVideoAsyncC=REBASE(0x33E5CB0);
            const uintptr_t PromptImportAnimationClipFromVideoAsyncD=REBASE(0x33E62C0);
            const uintptr_t PromptImportAnimationClipFromVideoAsyncO=REBASE(0x33E5160);
            const uintptr_t PromptPublishAssetAsyncRobloxServerStora=REBASE(0x33D3E50);
            const uintptr_t UnexpectedError=REBASE(0x33CFBD0);
        }
        namespace IncomingDataLog
        {
            const uintptr_t PhysicsSenderStaleFrameGuidBlockingTimes=REBASE(0x47E12D0);
            const uintptr_t PutFrameInBufferCalledGuidTLastTime=REBASE(0x1616280);
        }
        namespace InferredCrash
        {
            const uintptr_t BatteryLevel=REBASE(0x2A53900);
            const uintptr_t ExitReason=REBASE(0x2A51790);
            const uintptr_t FailedCreateSnapshotFilePlaySessionId=REBASE(0x2A5D2D0);
            const uintptr_t FailedRemoveSnapshotFile=REBASE(0x2A5D770);
            const uintptr_t FailedRemoveStaleSnapshot=REBASE(0x2A5DB90);
            const uintptr_t SessionResultV2=REBASE(0x2A5FEC0);
            const uintptr_t SnapshotCleanupFailed=REBASE(0x5F450F0);
            const uintptr_t SnapshotFileMissingPlaySessionIdRemoving=REBASE(0x2A5C890);
            const uintptr_t SnapshotLimitReachedSkippingSnapshotPlay=REBASE(0x2A5D2E0);
            const uintptr_t ThermalStatus=REBASE(0x2A537B0);
        }
        namespace InferredCrashBacktraceReportLog
        {
            const uintptr_t CreatedInferredCrashBacktraceReporter=REBASE(0x4CA81F0);
            const uintptr_t Synchronous=REBASE(0x4CA9080);
        }
        namespace InfluxTrace
        {
            const uintptr_t AccumulatorUnknownException=REBASE(0x5F453E0);
            const uintptr_t MovedZuAccumulatedCharsZuPoints=REBASE(0x2A62490);
            const uintptr_t PointsReporterUnknownException=REBASE(0x5F454D0);
            const uintptr_t RejectedInvalidKeyName=REBASE(0x2A68600);
            const uintptr_t ReportToV2AdapterCreateRobloxTelemetryEv=REBASE(0x2A67730);
        }
        namespace Input
        {
            const uintptr_t InputDiagnosticsLatencyWriteToClaim3f3fM=REBASE(0x4CE7B20);
        }
        namespace InputRecorder
        {
            const uintptr_t Log=REBASE(0xF6D0A0);
            const uintptr_t SessionInfoGuid=REBASE(0xF6EA40);
        }
        namespace InstanceStitchingLog
        {
            const uintptr_t AssignedDeterministicGUIDSpeculativeInst=REBASE(0x32D8C52);
            const uintptr_t ClientSpeculativeInstanceTypeGUIDPeer=REBASE(0x32D7A20);
            const uintptr_t ClientStitchedInstanceGUID=REBASE(0x32D90F0);
            const uintptr_t ClientTrackingSpeculativeInstanceGUIDFra=REBASE(0x32D8F10);
            const uintptr_t DeletingSpeculativeInstanceTypeCreatedFr=REBASE(0x32D9680);
            const uintptr_t GeneratedGUIDInstanceTypeTime=REBASE(0x32D8110);
            const uintptr_t RollingBackFrame=REBASE(0x32D9C50);
        }
        namespace InstanceTreeManipulation
        {
            const uintptr_t InstanceSettingParentOldParent=REBASE(0x1D76A20);
        }
        namespace InternalMessagingService
        {
            const uintptr_t CSMEventException=REBASE(0x5F72B80);
            const uintptr_t ConnectingCallbackSubscriptionKeyNumSubs=REBASE(0x3219690);
            const uintptr_t FailedGetDataModelCreateSubscriptionInfo=REBASE(0x3217DC0);
            const uintptr_t FailedGetDataModelGenerateArgsForChannel=REBASE(0x321A820);
            const uintptr_t FailedGetDataModelInitializeCsmConnectio=REBASE(0x3216740);
            const uintptr_t FailedGetDataModelInitiateBackendSubscri=REBASE(0x321B250);
            const uintptr_t IgnoringMessageFailedParseCSMEvent=REBASE(0x3216F50);
            const uintptr_t InternalMessagingServiceInitializeConnec=REBASE(0x3216730);
            const uintptr_t InternalMessagingServiceLockDataModelHel=REBASE(0x3215470);
            const uintptr_t InternalMessagingServiceOnReconnectedCSM=REBASE(0x3222230);
            const uintptr_t InternalMessagingServiceRestoreBackendCh=REBASE(0x321BCD0);
            const uintptr_t InternalMessagingServiceSubscribeToInter=REBASE(0x3219400);
            const uintptr_t InternalMessagingServiceUnsubscribeRPCFa=REBASE(0x3221220);
            const uintptr_t LastCallbackDisconnectedSubscriptionKeyU=REBASE(0x3219ED0);
            const uintptr_t ReceivedMessageUnknownSubscriptionKeyCha=REBASE(0x321C620);
            const uintptr_t UnknownInternalMessagingScope=REBASE(0x321B100);
        }
        namespace InternalMessagingServiceVerifier
        {
            const uintptr_t FailedGetInternalMessagingService=REBASE(0x3214460);
            const uintptr_t ReceivedCustomChannelMessage=REBASE(0x32152C0);
            const uintptr_t ReceivedPlaceVersionMessage=REBASE(0x3215020);
            const uintptr_t ReceivedRccMessage=REBASE(0x3215170);
            const uintptr_t ReceivedUniverseMessage=REBASE(0x3214ED0);
        }
        namespace IxpController
        {
            const uintptr_t FetchingLayersSubjectID=REBASE(0x3AC3F10);
            const uintptr_t GettingExperimentInfoLayer=REBASE(0x3AC5780);
            const uintptr_t IXPLayerTypeAttemptLogExposure=REBASE(0x3AC5240);
            const uintptr_t IXPLayerTypeClearingAllLayer=REBASE(0x3AC4FA0);
            const uintptr_t IXPLayerTypeInvalidCreatorIdCreator=REBASE(0x3ABDFE0);
            const uintptr_t IXPLayerTypeSettingLoadingStatus=REBASE(0x3ABD640);
            const uintptr_t IXPLayerTypeWARNINGAccessingLayer=REBASE(0x3ABF660);
            const uintptr_t IXPLayerTypeWARNINGRegisteringLayer=REBASE(0x3ABD0B0);
            const uintptr_t LoadedLocalLayerVariablesLayerOverrideS=REBASE(0x3ACC8A0);
            const uintptr_t LocalLayerVariablesJsonCouldReadLocalIXP=REBASE(0x3ACCE90);
            const uintptr_t LocalLayerVariablesJsonLayerCouldConvert=REBASE(0x5FA4380);
            const uintptr_t LocalLayerVariablesJsonUnknownSectionIgn=REBASE(0x3ACC4D0);
            const uintptr_t LocalLayerVariablesParseErrorLocalIXPOve=REBASE(0x3ACC8B0);
            const uintptr_t RegisteringLayer=REBASE(0x3AC3BF0);
            const uintptr_t RemovingChangedListener=REBASE(0x3AC45C0);
        }
        namespace IxpFlagLinkedExperimentRegister
        {
            const uintptr_t Log=REBASE(0x607D120);
            const uintptr_t UnableGetFilepathIXPCache=REBASE(0x5AA3090);
        }
        namespace IxpLayers
        {
            const uintptr_t DynamicLayerRegistration=REBASE(0x4C376F0);
        }
        namespace IxpParsingWarning
        {
            const uintptr_t CouldnTFindVariableApplyIXP=REBASE(0x49BAAE0);
            const uintptr_t FailedParseProjectIDNonEmpty=REBASE(0x49B93C0);
        }
        namespace IxpStorageManager
        {
            const uintptr_t DeferredEventDoesnTExistSkipping=REBASE(0x3AC8050);
            const uintptr_t ExceptionWhileLoadingCacheFile=REBASE(0x5FA3FD0);
            const uintptr_t ExceptionWhileLoadingInstanceIDFile=REBASE(0x5FA4200);
            const uintptr_t ExceptionWhileSavingRandomIDFile=REBASE(0x5FA4080);
            const uintptr_t HashComputeDurationUserIdBucketXxhash32=REBASE(0x3ACB100);
            const uintptr_t LoadCacheFileLocalStorageManagerAvailabl=REBASE(0x3AC87D0);
            const uintptr_t LoadInstanceIdFromFileLocalStorageManage=REBASE(0x3ACA650);
            const uintptr_t LoadingCacheFile=REBASE(0x3AC8860);
            const uintptr_t SaveInstanceIdToFileLocalStorageManagerA=REBASE(0x3ACA0E0);
            const uintptr_t SavingRandomIDFile=REBASE(0x3ACA160);
        }
        namespace JointLifetime
        {
            const uintptr_t JointCreatedEmptyPrimitives=REBASE(0x1631450);
            const uintptr_t JointDestroyed=REBASE(0x1631590);
        }
        namespace KeyRing
        {
            const uintptr_t ApplicationRevertVersionVersions=REBASE(0x2BCEB80);
            const uintptr_t ConfigInvalidJsonCanOnlyUse=REBASE(0x2BCC910);
        }
        namespace LBFGS
        {
            const uintptr_t LBFGS=REBASE(0x2E8E090);
        }
        namespace LargeReplicatorTrace
        {
            const uintptr_t AssetRemovedTypeHandleVersion=REBASE(0x3AF5350);
            const uintptr_t AssignAssetSkippedButForcedReAdd=REBASE(0x3B0E660);
            const uintptr_t DeltaSourceVersionFoundPublishedUnblocki=REBASE(0x3AD8990);
            const uintptr_t FailedAssetChecksumCompareTypeFlags=REBASE(0x3B10370);
            const uintptr_t ManuallyDecrementingNetworkRefTypeHandle=REBASE(0x3ADAD40);
            const uintptr_t ManuallyIncrementingNetworkRefTypeHandle=REBASE(0x3AF42D0);
            const uintptr_t ProcessedAddsRemoves=REBASE(0x3AD6BD0);
            const uintptr_t ReceivedDeltaGuidVersionAdditional=REBASE(0x3B0D010);
            const uintptr_t ReceivedEndGuidVersionFrameId=REBASE(0x3B0CAC0);
            const uintptr_t ReceivedHeaderTypeAdditionalGuidVersion=REBASE(0x3B0FDE0);
            const uintptr_t RegisterCachedAssetInReceiverSkippedAlre=REBASE(0x3AF5CB0);
            const uintptr_t RemovingPartialDeltaEntryGuidVersion=REBASE(0x3B0BF60);
            const uintptr_t ResettingStaleDeltaStateGuidVersion=REBASE(0x3B0B560);
            const uintptr_t SendingEndGuidVersionTypeFrame=REBASE(0x3AF1270);
            const uintptr_t SendingHeaderTypeAdditionalGuidVersion=REBASE(0x3AF0BF0);
            const uintptr_t SendingRemoveGuidVersionNetAssetType=REBASE(0x3AF1070);
            const uintptr_t SendingRemoveStaleDeltaStateCleanup=REBASE(0x3AD7830);
        }
        namespace LayeredClothingWrapDeformedBundleId
        {
            const uintptr_t LCWRAPDEFORMEDBUNDLEOwnerPathOwner=REBASE(0x1BD79C0);
        }
        namespace LibWebrtcImpl
        {
            const uintptr_t AddVideoTrackEmptyCodecPreferenceList=REBASE(0x52047B0);
            const uintptr_t CreateDataChannelOrErrorFailed=REBASE(0x5204340);
            const uintptr_t CreatePeerConnectionOrErrorFailed=REBASE(0x52037A0);
            const uintptr_t FailedParseICECandidate=REBASE(0x5206B80);
            const uintptr_t FailedParseRemoteSDP=REBASE(0x52066A0);
            const uintptr_t SDPCreateOperationTimedOutAfter=REBASE(0x5201870);
            const uintptr_t SDPSetOperationTimedOutAfter=REBASE(0x5201AE0);
            const uintptr_t SendFrameSupportedTransceiver=REBASE(0x5200E10);
            const uintptr_t SetCodecPreferencesFailed=REBASE(0x51FF9F0);
            const uintptr_t SetLocalDescriptionEmptyCouldParseGenera=REBASE(0x5206390);
            const uintptr_t TWCCDIAGHeaderExtensionsToOfferCount=REBASE(0x5202060);
            const uintptr_t TWCCDIAGPtNameClockRate=REBASE(0x5202040);
        }
        namespace LinkingProtocolCore
        {
            const uintptr_t AttemptingDetectURL=REBASE(0x50C4FF0);
            const uintptr_t RegistrationURLMatchedPendingURL=REBASE(0x50C0220);
            const uintptr_t StoringPendingURL=REBASE(0x50C4FB0);
            const uintptr_t URLMatchedRegisteredRegex=REBASE(0x50C45A0);
        }
        namespace LmsClient
        {
            const uintptr_t LMSGetLmsUrlUrl=REBASE(0x11C28C0);
            const uintptr_t LMSGetRecipeFailedGetRecipe=REBASE(0x11C0940);
            const uintptr_t LMSParseRecipeInputStringWas=REBASE(0x11C35E0);
            const uintptr_t LMSPostAppEventEvent=REBASE(0x11C6480);
            const uintptr_t LMSProcessRecipe=REBASE(0x11C0C30);
            const uintptr_t LMSProcessRecipeZeroPulsesStop=REBASE(0x11C0D00);
            const uintptr_t LMSPulseResponseGETReturnedError=REBASE(0x11C1350);
            const uintptr_t LMSSendPulsePulse=REBASE(0x11C0FD0);
            const uintptr_t LMSSubmitReportFailureUrlErr=REBASE(0x11C3040);
            const uintptr_t LMSSubmitReportSkippingReportUpload=REBASE(0x11C20C0);
        }
        namespace LoadSettingsZstdDictionary
        {
            const uintptr_t CouldDecompressBecauseDictionaryWasNull=REBASE(0x4DCCE00);
            const uintptr_t DictionaryFileDoesExistEmpty=REBASE(0x4DCBF50);
            const uintptr_t DictionaryFoundDisablingClientSettings=REBASE(0x4DCC9E0);
            const uintptr_t ExceptionWhileGettingDictionaryPath=REBASE(0x600DDA0);
            const uintptr_t FailedReadDictionaryFile=REBASE(0x4DCD7E0);
            const uintptr_t PlatformAssetsPathSetDictionaryLoading=REBASE(0x4DCBF60);
        }
        namespace LoadTesting
        {
            const uintptr_t CancelEnqueuedTestCalledWithoutEnqueuedT=REBASE(0x1420310);
            const uintptr_t CheckIfEnqueuedTestNeedsToBeCanceledEnqu=REBASE(0x141DEC0);
            const uintptr_t CheckIfPublishedTestNeedsToBeEnqueuedDat=REBASE(0x1424CE0);
            const uintptr_t CheckIfPublishedTestNeedsToBeEnqueuedTim=REBASE(0x141D600);
            const uintptr_t CheckIfPublishedTestNeedsToBeEnqueuedUse=REBASE(0x141C2E0);
            const uintptr_t EnqueuePublishedTestDataModelInstanceLon=REBASE(0x141D540);
            const uintptr_t ExecuteEnqueuedTestEnqueuedTestParameter=REBASE(0x141DB30);
            const uintptr_t ExecuteEnqueuedTestEnqueuedTestStartingS=REBASE(0x141E360);
            const uintptr_t GetProductInfoLoadTestSimpleMarketplaceS=REBASE(0x1414650);
            const uintptr_t InitializeLoadTestCoordinatorLoadTestCoo=REBASE(0x13DAE90);
            const uintptr_t LoadTestCoordinatorConstructorCalled=REBASE(0x141B230);
            const uintptr_t LoadTestCoordinatorCreateDatamodelSUnive=REBASE(0x141AA80);
            const uintptr_t LoadTestCoordinatorStartDataModelInstanc=REBASE(0x141B940);
            const uintptr_t LoadTestCoordinatorStepTimerSubmittingSt=REBASE(0x141BE10);
            const uintptr_t LoadTestCoordinatorStepTimerTaskCalled=REBASE(0x14250B0);
            const uintptr_t LoadTestCoordinatorStepTimerTaskUnableLo=REBASE(0x1425160);
            const uintptr_t LoadTestCoordinatorTimerServiceAvailable=REBASE(0x141B870);
            const uintptr_t MarketplaceServiceInitializeOnGameLoadAw=REBASE(0x13C86F0);
            const uintptr_t MarketplaceServiceInitializeOnGameLoadCa=REBASE(0x13C8A10);
            const uintptr_t MarketplaceServiceInitializeOnGameLoadFa=REBASE(0x13C8660);
            const uintptr_t ProductIdReturnedSuccess=REBASE(0x14189F0);
            const uintptr_t StepTestCurrentlyStartingExecutingIgnori=REBASE(0x14205E0);
        }
        namespace LocalStorage
        {
            const uintptr_t LocalStorageFailedOpenFileFlushing=REBASE(0x2A07E30);
            const uintptr_t LocalStorageFlushEntriesBytesJSONBytes=REBASE(0x2A06360);
            const uintptr_t LocalStorageFlushFailedFlushingDisabled=REBASE(0x2A069E0);
            const uintptr_t LocalStorageFlushing=REBASE(0x2A04580);
            const uintptr_t LocalStorageFlushingBlocking=REBASE(0x2A053B0);
            const uintptr_t LocalStorageFlushingBlockingFailedFlushi=REBASE(0x2A05420);
            const uintptr_t LocalStorageInvalidJsonObject=REBASE(0x2A06DE0);
            const uintptr_t LocalStorageWroteZuBytesDisk=REBASE(0x2A078C0);
        }
        namespace LocalizationServiceVerbose
        {
            const uintptr_t AddUntranslatedParameterStringOriginalCo=REBASE(0x14F2040);
            const uintptr_t AttemptLocalizationForInstanceContextTex=REBASE(0x14EC620);
            const uintptr_t ErrorManifestLoad=REBASE(0x150EBB0);
            const uintptr_t InvalidSystemLocaleIdProvided=REBASE(0x14E4790);
            const uintptr_t IsLoadingInternalTranslationsSettingChan=REBASE(0x14E5E00);
            const uintptr_t LocalizationTableProcessContentTakesLfMs=REBASE(0x14CAB90);
            const uintptr_t SetLocaleManifest=REBASE(0x14EE030);
            const uintptr_t SourceLanguageCodeFieldTypeStringManifes=REBASE(0x150F810);
            const uintptr_t TextScraperOnTranslationAttemptOriginalC=REBASE(0x14F1050);
        }
        namespace LogStepTimeAndNetworkUsage
        {
            const uintptr_t GameJoin=REBASE(0x4609EB0);
            const uintptr_t GameLoaded=REBASE(0x45FECF0);
        }
        namespace LogWin32BTId
        {
            const uintptr_t LogWin32BTIdAppInternalBrowserSessionEnd=REBASE(0x822640);
            const uintptr_t LogWin32BTIdAppLogoutSyncCookieNative=REBASE(0x84D7B0);
            const uintptr_t LogWin32BTIdErrorStollAppWebLaunch=REBASE(0x5E3EEC0);
        }
        namespace LoggingProtocolCore
        {
            const uintptr_t SendingRobloxTelemetryEphemeralStatEvent=REBASE(0x44C09A0);
        }
        namespace LoomTrackerEngineTrace
        {
            const uintptr_t DestroyedLoomContext=REBASE(0x1A96400);
            const uintptr_t DetectedLowCameraFpsFPSForcing=REBASE(0x1A95D20);
            const uintptr_t FailedCreateLoomSession=REBASE(0x1A946F0);
            const uintptr_t GetUnsupportedSetting=REBASE(0x1A93370);
            const uintptr_t InitializeFailedDeviceSupported=REBASE(0x1A92630);
            const uintptr_t LoomSDK=REBASE(0x1C4C980);
            const uintptr_t SettingKeyValue=REBASE(0x1A93160);
            const uintptr_t ShuttingDown=REBASE(0x1A92FC0);
            const uintptr_t SubmittingAudioInferenceFailedReturned=REBASE(0x1A937E0);
            const uintptr_t SubmittingVideoInferenceFailedReturned=REBASE(0x1A93CE0);
            const uintptr_t SyncAudioInferenceLodA2cEnabled=REBASE(0x1A934B0);
            const uintptr_t SyncVideoInferenceLodV2cEnabled=REBASE(0x1A93630);
            const uintptr_t TrackingEngineInitializedAudioVideoLod=REBASE(0x1A92620);
        }
        namespace LowMemoryWarning
        {
            const uintptr_t SendingScheduleUnloadLuaAppCounterCounte=REBASE(0x4C97610);
        }
        namespace LuaAppExperienceController
        {
            const uintptr_t GCGoalRestoredReason=REBASE(0x4C911E0);
            const uintptr_t GCGoalSetStartup=REBASE(0x4C913C0);
            const uintptr_t LuaAppExperienceControllerEnableLuaAppSc=REBASE(0x4C96E80);
            const uintptr_t LuaAppExperienceControllerFinalizeDidFin=REBASE(0x4C94D40);
            const uintptr_t LuaAppExperienceControllerFinalized=REBASE(0x4C94DE0);
            const uintptr_t LuaAppExperienceControllerInitializeInva=REBASE(0x4C92200);
            const uintptr_t LuaAppExperienceControllerLuaAppExperien=REBASE(0x4C91F80);
            const uintptr_t LuaAppExperienceControllerOnDataModelNot=REBASE(0x4C96B90);
            const uintptr_t LuaAppExperienceControllerOnLowMemoryWar=REBASE(0x4C97500);
            const uintptr_t LuaAppExperienceControllerOnNavigationEv=REBASE(0x4C98060);
            const uintptr_t LuaAppExperienceControllerOnSendOnExperi=REBASE(0x4C97E60);
            const uintptr_t LuaAppExperienceControllerOnSendOnFeatur=REBASE(0x4C97B30);
            const uintptr_t LuaAppExperienceControllerOnUserLogout=REBASE(0x4C92F00);
            const uintptr_t LuaAppExperienceControllerPauseDidPauseD=REBASE(0x4C95270);
            const uintptr_t LuaAppExperienceControllerReceivedScript=REBASE(0x4C97180);
            const uintptr_t LuaAppExperienceControllerStartDidStartD=REBASE(0x4C94F50);
            const uintptr_t LuaAppExperienceControllerStopPreEmptive=REBASE(0x4C98D20);
            const uintptr_t LuaAppInteractiveSignalPerformDeferredSi=REBASE(0x4C937C0);
            const uintptr_t ProcessLowMemoryWarningLowMemorySendingL=REBASE(0x4C977B0);
        }
        namespace LuaHangedScript
        {
            const uintptr_t HangStackTrace=REBASE(0x436D580);
        }
        namespace MLPostProcess
        {
            const uintptr_t FirstFrameXFmtModelX=REBASE(0x4A6C560);
            const uintptr_t ProcessPixelsException=REBASE(0x60001F0);
            const uintptr_t ProcessPixelsUnknownException=REBASE(0x6000300);
            const uintptr_t SessionSetButCompatiblePipelineFound=REBASE(0x4A6CF80);
            const uintptr_t SessionSetModelInputXCh=REBASE(0x4A6CF90);
            const uintptr_t SetEnabledWas=REBASE(0x4A6CE50);
            const uintptr_t UnsupportedModelZeroDimensionsXOut=REBASE(0x4A6BED0);
        }
        namespace MLService
        {
            const uintptr_t FailedCreateSessionDownloadedBundle=REBASE(0x152F800);
            const uintptr_t FailedEarlyInputShapeValidationExpected=REBASE(0x152A850);
            const uintptr_t MLSessionForwardAsyncDataModelValid=REBASE(0x152CD50);
            const uintptr_t MLSessionForwardAsyncMLSessionValid=REBASE(0x1395FD0);
        }
        namespace MachineIdUploader
        {
            const uintptr_t MachineBanned=REBASE(0x1214B20);
        }
        namespace Macroprofile
        {
            const uintptr_t EndProfilerCapture=REBASE(0x2A2DC30);
            const uintptr_t ProfilerDumpLastFramesDumped=REBASE(0x2A2D890);
            const uintptr_t ProfilerRawDumpLastFramesDumped=REBASE(0x2A2C380);
            const uintptr_t StartProfilerCapturing=REBASE(0x2A2DCF0);
        }
        namespace MarketplaceRecommendationsApi
        {
            const uintptr_t CacheDisabledRankProductsCacheGet=REBASE(0x1350D60);
            const uintptr_t CacheEnabledRankProductsCacheInsert=REBASE(0x1350F00);
            const uintptr_t ConstructedURLRankProducts=REBASE(0x1349710);
            const uintptr_t ConstructedURLTopRecommendedProducts=REBASE(0x13462A0);
            const uintptr_t CreateHTTPRequestTopRecommendedProducts=REBASE(0x1346860);
            const uintptr_t HttpRequestBodyRankProducts=REBASE(0x134A240);
            const uintptr_t InvokeGetProductInfoIndex=REBASE(0x13A2930);
            const uintptr_t InvokeIsRecommendationsApiEligible=REBASE(0x13A0780);
            const uintptr_t ParsedResultSuccess=REBASE(0x134A570);
            const uintptr_t RankProductsCheckIfThrottleLimitPer=REBASE(0x13A9870);
            const uintptr_t RecommendProductsCheckIfThrottleLimitPer=REBASE(0x13A8530);
            const uintptr_t RecommendTopProductsWasStopped=REBASE(0x13A4C50);
            const uintptr_t StringMappingInfoTypeFound=REBASE(0x1349840);
            const uintptr_t StringMappingSupportedInfoTypeFound=REBASE(0x1345E40);
            const uintptr_t SuccessfullyParsedValidProductIdentifier=REBASE(0x13A1660);
            const uintptr_t SuccessfullyRetrievedProductInfoIndex=REBASE(0x13A3450);
            const uintptr_t TryGetRecommendTopProductsModuleDatamode=REBASE(0x13DB540);
            const uintptr_t ValidatedProductIdentifierIndex=REBASE(0x13A0AA0);
        }
        namespace MarketplaceShopApi
        {
            const uintptr_t InitiateOpenShopIsEnabled=REBASE(0x13DCEA0);
            const uintptr_t InitiatingOpenShopRequestedSignal=REBASE(0x1345AF0);
            const uintptr_t OpenShopSuccessIsClient=REBASE(0x13DD040);
            const uintptr_t ShopModuleOpenShopDataModelLongerAvailab=REBASE(0x13452B0);
            const uintptr_t TryGetShopModuleDatamodel=REBASE(0x13DCA80);
        }
        namespace MatchmakingService
        {
            const uintptr_t FailedSendServerAttributesUpdateError=REBASE(0x320EA90);
            const uintptr_t SendServerAttributesUpdateExitWithoutCha=REBASE(0x320DE40);
            const uintptr_t ServerAttributesUpdateInProgress=REBASE(0x320DC40);
        }
        namespace MediaCodecDriver
        {
            const uintptr_t CloseCalledCodecAttached=REBASE(0x3D62F50);
            const uintptr_t CodecUnexpectedlyReturnedEOFSettingStrea=REBASE(0x3D63610);
            const uintptr_t DroppingFramePtsDueSeek=REBASE(0x3D63360);
            const uintptr_t DroppingInputPtsDueError=REBASE(0x3D63600);
        }
        namespace MegaClusterInit
        {
            const uintptr_t ClearingTerrainClientReplicator=REBASE(0x3487230);
            const uintptr_t DestroyingVoxelJobManager=REBASE(0x34DC1C0);
            const uintptr_t MegaClusterCreated=REBASE(0x34DB430);
            const uintptr_t OnServiceProviderOldProviderNewParent=REBASE(0x34DCEE0);
            const uintptr_t SettingTerrainWorkspace=REBASE(0x3486F50);
            const uintptr_t TerrainAlreadyExistsReplaceExistingOne=REBASE(0x34DD4C0);
            const uintptr_t TerrainDoesnTExistCreatingTerrain=REBASE(0x3487030);
        }
        namespace MegaReplicatorLogDisconnectCleanUpLog
        {
            const uintptr_t DestroyingMegaReplicator=REBASE(0x47002A0);
        }
        namespace MemoryPrioritization
        {
            const uintptr_t CommitTotalBytesCommitLimitBytes=REBASE(0x2A91180);
            const uintptr_t MemoryPressureChangedNewLevelLastLevel=REBASE(0x2A900F0);
            const uintptr_t MemoryPressureIncreaseCRITICALLastLevel=REBASE(0x2A90100);
            const uintptr_t MemoryPressureResetLastLevelFreeMBUsedMB=REBASE(0x1579340);
        }
        namespace MemoryStore
        {
            const uintptr_t AddingHeaderBypassUniverseRateLimit=REBASE(0x120C080);
            const uintptr_t AddingLocalThrottlingBudgetPlayersTimeDe=REBASE(0x31E28D0);
            const uintptr_t ExecutingV2UpdateLoop=REBASE(0x3EE4FD0);
            const uintptr_t MemoryStoreSortedMapUpdateAsyncMaxRetryC=REBASE(0x3EDEE80);
        }
        namespace MemoryStoreService
        {
            const uintptr_t CursorValueString=REBASE(0x31F9F40);
            const uintptr_t DataKeyFoundBackendResponse=REBASE(0x31E3F00);
            const uintptr_t EmptyQueueReadRemainingWaitTimeout=REBASE(0x31E78A0);
            const uintptr_t FailedParseJson=REBASE(0x120F5C0);
            const uintptr_t FailedParseResponseJsonError=REBASE(0x120FA30);
            const uintptr_t FailedParseSortKeyType=REBASE(0x3ED6440);
            const uintptr_t InvalidCombinationBoundsProvided=REBASE(0x3EE5DE0);
            const uintptr_t ItemsValueArray=REBASE(0x31EB8B0);
            const uintptr_t KeyValueString=REBASE(0x3ED8120);
            const uintptr_t SendingHTTPErrorInfoUnknownErrors=REBASE(0x120DFA0);
            const uintptr_t SendingHTTPResponseUnknownErrors=REBASE(0x120DDF0);
            const uintptr_t SizeValueFound=REBASE(0x120F5D0);
            const uintptr_t UnknownMemoryStoreErrorType=REBASE(0x120EEB0);
            const uintptr_t UnknownMemoryStoreErrorTypeEnum=REBASE(0x120A7B0);
            const uintptr_t UnknownMemoryStoreStatusCode=REBASE(0x1209E00);
            const uintptr_t UsnKeyFound=REBASE(0x31ECD70);
        }
        namespace MeshCompressionLog
        {
            const uintptr_t CompressionFailed=REBASE(0x2487F50);
            const uintptr_t DecodedDracoMeshMissingHasMalformed=REBASE(0x24878E0);
            const uintptr_t FailedConvertDracoMeshMesh=REBASE(0x2488750);
            const uintptr_t WriteUncompressedFileMeshData=REBASE(0x247D330);
        }
        namespace MeshLODDetails
        {
            const uintptr_t SkinningValidationVertexHasOutRange=REBASE(0x2C11FD0);
        }
        namespace MessageBus
        {
            const uintptr_t DestroyingConnectionInstance=REBASE(0x15480C0);
            const uintptr_t MessageBusReceivedWithoutValidNumber=REBASE(0x154CA10);
            const uintptr_t MessageBusServiceGetLastFailedDecodeJSON=REBASE(0x5EECC10);
            const uintptr_t MessageBusServiceMakeRequestFailedDecode=REBASE(0x5EECE10);
            const uintptr_t MessageBusServiceSetRequestHandlerFailed=REBASE(0x5EECF90);
            const uintptr_t MessageBusServiceSubscribeInternalFailed=REBASE(0x5EECA00);
            const uintptr_t Received=REBASE(0x1550A20);
            const uintptr_t ReceivedProtocolMethodResponseWithoutReq=REBASE(0x1551660);
        }
        namespace MessagingService
        {
            const uintptr_t CSMEvent0JsonArraySize=REBASE(0x31D3570);
            const uintptr_t CSMEventException=REBASE(0x5F70B50);
            const uintptr_t MessagingServiceHandleMessageTopicSignal=REBASE(0x31D2790);
            const uintptr_t MessagingServiceInitializeConnectionCSM=REBASE(0x31D30B0);
            const uintptr_t MessagingServiceLockDataModelHelperWeakD=REBASE(0x31CF980);
            const uintptr_t MessagingServiceOnCsmReconnectedResubscr=REBASE(0x31D4C40);
            const uintptr_t MessagingServiceUnSubscribeUnsubscribeTo=REBASE(0x31DD680);
        }
        namespace Mimalloc
        {
            const uintptr_t Log=REBASE(0x4988500);
            const uintptr_t MimallocIntegrationDetectedSettings=REBASE(0x4983170);
        }
        namespace ModelBundleTrace
        {
            const uintptr_t InvalidModelType=REBASE(0x2280890);
            const uintptr_t UnexpectedMagicWhilstDeserializingModelB=REBASE(0x2280750);
        }
        namespace ModelDeliveryTrace
        {
            const uintptr_t ModelDeliveryTraceFailedModelRequestProc=REBASE(0x90A9B0);
            const uintptr_t ModelDeliveryTraceMLModelDeliveryService=REBASE(0x90B810);
            const uintptr_t ModelDeliveryTraceModelRequestIdHasConte=REBASE(0x90BFE0);
            const uintptr_t PriorityListArray=REBASE(0x90D9C0);
            const uintptr_t PriorityListSizeButExpectedSize=REBASE(0x90D9E0);
            const uintptr_t SizeVariantDoesMatchTotalSize=REBASE(0x9035D0);
            const uintptr_t WeakCouldLocked=REBASE(0x906C90);
            const uintptr_t WeakDataModelCouldLocked=REBASE(0x906C70);
        }
        namespace ModelLod
        {
            const uintptr_t ModelLodLoadingModelMeshZuBytes=REBASE(0x3861980);
            const uintptr_t OutBoundsDecodedMeshIndices=REBASE(0x3988AB0);
        }
        namespace ModelSkinningTransformsView
        {
            const uintptr_t ModelSkinningTransformsViewModelSkinning=REBASE(0x52478C0);
            const uintptr_t ModelSkinningTransformsViewSkeletonCreat=REBASE(0x5247700);
            const uintptr_t ModelSkinningTransformsViewUpdateTransfo=REBASE(0x5244CC0);
        }
        namespace ModelTranscoder
        {
            const uintptr_t AssetFetchFailedContentId=REBASE(0x59E23F0);
            const uintptr_t AssetFetchFailedContentIdError=REBASE(0x604CF70);
            const uintptr_t AssetIDRecognizedFormat=REBASE(0x4471E40);
            const uintptr_t CouldCreateSLIMResourceOBJDirectory=REBASE(0x4490660);
            const uintptr_t CouldMeasureInputFileSize=REBASE(0x5FD98B0);
            const uintptr_t DerivedSLIMTranscoderResourcePathDoes=REBASE(0x446B060);
            const uintptr_t ErrorCouldOpenFmdListFile=REBASE(0x4474B80);
            const uintptr_t ErrorReadingPropertySetFile=REBASE(0x44981F0);
            const uintptr_t FFlagFoundSetting=REBASE(0x446FED0);
            const uintptr_t FailedGenerateFileMeshDataPrimitive=REBASE(0x447C720);
            const uintptr_t FailedOpenLODMetadataFileWriting=REBASE(0x448F960);
            const uintptr_t FailedReadCSGBinaryData=REBASE(0x44A6740);
            const uintptr_t FailedReadFileMeshData=REBASE(0x5FDB570);
            const uintptr_t FailedWriteLODMetadataFidelity=REBASE(0x448FE50);
            const uintptr_t FileFound=REBASE(0x4471790);
            const uintptr_t InstancesFoundPropertySetFile=REBASE(0x44984D0);
            const uintptr_t LoadFlagsSettingTranscoderOverrideFlags=REBASE(0x446C3B0);
            const uintptr_t MissingVisualTrussStylePropertyTrussInst=REBASE(0x44789B0);
            const uintptr_t MultiMaterialMeshGeometryHasSurfaceAppea=REBASE(0x447A420);
            const uintptr_t MultiMaterialMeshHasJointsTimesVertices=REBASE(0x448C550);
            const uintptr_t MultiMaterialMeshSubMeshIndexOutRange=REBASE(0x4479F50);
            const uintptr_t OnTranscodingEndWasNeverCalledTranscoder=REBASE(0x44723A0);
            const uintptr_t PathDirectoryDoesExist=REBASE(0x4499020);
            const uintptr_t ReadFileMeshData=REBASE(0x44A49B0);
            const uintptr_t ResourceFileCannotWritten=REBASE(0x4492540);
            const uintptr_t SkippingRepeatedJoint=REBASE(0x3B2CD60);
            const uintptr_t TranscoderMetricsFailedLog=REBASE(0x5FD9710);
            const uintptr_t TranscoderRegistrySettingFlags=REBASE(0x446FBF0);
            const uintptr_t UnsettingPreviousFFlag=REBASE(0x44705D0);
            const uintptr_t WildMeshSimplifierFailedErrorCodeWhenPro=REBASE(0x448A210);
            const uintptr_t WrapDeformerPartInstanceHasBoneSkeleton=REBASE(0x44A26E0);
        }
        namespace ModerationService
        {
            const uintptr_t FailedDeleteReviewableContentEvent=REBASE(0x31CD990);
            const uintptr_t FailedParsePathRecievedLeaseReviewableCo=REBASE(0x31C6980);
            const uintptr_t HTTPStatusOKUploadingScreenshot=REBASE(0x31CAA50);
            const uintptr_t ReceivedTriggeredCaptureUploadSignalWith=REBASE(0x31C98B0);
            const uintptr_t ReceivedTriggeredCaptureUploadWithoutCap=REBASE(0x31C9F30);
            const uintptr_t RecievedOKStatusLeaseReviewableContentEv=REBASE(0x31C69C0);
            const uintptr_t UpdatingReviewableContentEventPollingInt=REBASE(0x31C0F10);
        }
        namespace MomentsService
        {
            const uintptr_t MomentsServiceCheckMomentTextStatusAsync=REBASE(0x3FBEAFF);
            const uintptr_t MomentsServiceCreatePostAsyncDispatching=REBASE(0x3FBBF50);
            const uintptr_t MomentsServiceFetchPostAsyncDispatchingA=REBASE(0x3FBF0F0);
            const uintptr_t MomentsServiceGenerateMomentTextAsyncDis=REBASE(0x3FBDEB0);
        }
        namespace MouseCommandLifetime
        {
            const uintptr_t CloneToolCreated=REBASE(0xDE0A50);
            const uintptr_t CloneToolDestroyed=REBASE(0xDE0B30);
            const uintptr_t GameToolCreated=REBASE(0xDD8B80);
            const uintptr_t GameToolDestroyed=REBASE(0xDD8C70);
            const uintptr_t GrabToolDestroyed=REBASE(0xDD8120);
            const uintptr_t HammerToolCreated=REBASE(0xDD7910);
            const uintptr_t LuaDragToolCreated=REBASE(0xDD0040);
            const uintptr_t LuaDragToolDestroyed=REBASE(0xDD0390);
            const uintptr_t PartDragToolDestroyed=REBASE(0xDC84E0);
            const uintptr_t PartToolCreated=REBASE(0x3BED6B0);
            const uintptr_t PartToolDestroyed=REBASE(0x3BED860);
            const uintptr_t ScriptMouseCommandDestroyed=REBASE(0x3C51C70);
        }
        namespace MultiFilterWarning
        {
            const uintptr_t AnomalousConfigurationMultipleDCFiltersS=REBASE(0x49B43D0);
            const uintptr_t AnomalousConfigurationMultiplePlacefilte=REBASE(0x49B4310);
            const uintptr_t AnomalousConfigurationMultipleUniverseFi=REBASE(0x49B41D0);
        }
        namespace NCNNBackendTrace
        {
            const uintptr_t UnableParseInputShapeIndex=REBASE(0x2283770);
            const uintptr_t UnableParseInputTensorName=REBASE(0x2282AC0);
        }
        namespace NamedMutex
        {
            const uintptr_t NamedMutexName=REBASE(0x585C690);
        }
        namespace Navigation
        {
            const uintptr_t NavMeshRemoveTilePolyVertOffmesh=REBASE(0x24F89F9);
            const uintptr_t NavigationPathResultStartFinishAgentRadi=REBASE(0x931EA0);
            const uintptr_t PartExceedsTileHeightCapacitySome=REBASE(0x944A50);
            const uintptr_t PathfindingHeightfieldMemoryExceededMB=REBASE(0x920950);
            const uintptr_t ProcessingRequestTilesQueueSize=REBASE(0x921650);
            const uintptr_t RcBuildContoursOutMemoryHolesMax=REBASE(0x25029E0);
            const uintptr_t UsedTerrainMemoryExccedLimitTileMemoryUs=REBASE(0x94BC80);
            const uintptr_t VeryLargeTileMemoryUsedMBHeightfield=REBASE(0x94C430);
        }
        namespace NavigationDetail
        {
            const uintptr_t AddClimbableLinkTopBottom=REBASE(0x924700);
            const uintptr_t AddSpanIdxMaxMinXY=REBASE(0x2510750);
            const uintptr_t JumpLinkAdded=REBASE(0x24FC890);
        }
        namespace Network
        {
            const uintptr_t AckTimeoutLastPacketReceivedTimeMs=REBASE(0x2899B50);
            const uintptr_t ConfigDebugRepo=REBASE(0x49648D0);
            const uintptr_t DisconnectReasonReceived=REBASE(0x2879FB0);
            const uintptr_t DisconnectingBecauseGotPrefetchRequestBu=REBASE(0x473FB80);
            const uintptr_t DisconnectingDueExceedingMaximumSendSize=REBASE(0x4848590);
            const uintptr_t DuplicatePlayerIdJoinQueueRemoving=REBASE(0x470DF90);
            const uintptr_t ErrorDecompressingPacketClientOnReceive=REBASE(0x4794CF0);
            const uintptr_t ExceptionDuringDataOutStepRequest=REBASE(0x5FE6810);
            const uintptr_t ExceptionDuringISRDataOutStep=REBASE(0x5FF0E80);
            const uintptr_t Log=REBASE(0x4836D20);
            const uintptr_t MessageError=REBASE(0x5FEEA50);
            const uintptr_t NetworkClientRemove=REBASE(0x4783810);
            const uintptr_t NetworkServerCreate=REBASE(0x47ABE50);
            const uintptr_t NetworkServerDestroy=REBASE(0x47AC730);
            const uintptr_t PlayerLuaLoadCharacter=REBASE(0x3DF8290);
            const uintptr_t PlayerLuaLoadCharacterWithAvatarRules=REBASE(0x3DF8FA0);
            const uintptr_t PlayerLuaLoadCharacterWithHumanoidDescri=REBASE(0x3DF8610);
            const uintptr_t PlayerRemoveCharacter=REBASE(0x3DF8090);
            const uintptr_t PlayersServiceRequestsPlayerDisconnect=REBASE(0x46FED30);
            const uintptr_t RakNetFailedSetSendTimeoutSocket=REBASE(0x2864A60);
            const uintptr_t RefEdgeScratchLeaseReentrantScratchUseUs=REBASE(0x46F76E0);
            const uintptr_t ReplicatorCreated=REBASE(0x465CE50);
            const uintptr_t RxOrderedHeapStallTimeoutChannel=REBASE(0x2898340);
            const uintptr_t RxPeerExceededBufferedCompleteDatagram=REBASE(0x28732E0);
            const uintptr_t SendingDisconnectReason=REBASE(0x286EFE0);
            const uintptr_t SerializingInstancesPreparingBlobsJoinDa=REBASE(0x470E390);
            const uintptr_t ServerDroppedRakNetRouteRakNetPeer=REBASE(0x47B2F40);
            const uintptr_t ServerOnReceiveIDNEWINCOMINGCONNECTION=REBASE(0x47B03B0);
            const uintptr_t ServerReplicatorInstallRemotePlayerLoadC=REBASE(0x47383D0);
            const uintptr_t ServerReplicatorStartSendingJoinPeer=REBASE(0x4735D70);
            const uintptr_t SetsockoptIPV6V6ONLYFailedErrnoErrString=REBASE(0x288FDA0);
            const uintptr_t ShardingCreateBoundSocketForcePortPortLo=REBASE(0x28902D0);
            const uintptr_t TimedOutFailedGracefullyEndReceive=REBASE(0x2867990);
            const uintptr_t TooManyPacketsDroppedMs=REBASE(0x287DF50);
            const uintptr_t UDMUXAddressPortRCCServerAddress=REBASE(0x4797BF0);
            const uintptr_t UnableAccessDataModelWhenCheckingIXP=REBASE(0x4786FE0);
        }
        namespace NetworkAudit
        {
            const uintptr_t RakNetDisconnectClosingConnection=REBASE(0x28714A0);
            const uintptr_t RakNetSocketClose=REBASE(0x288D0E0);
        }
        namespace NetworkBandwidthManagerTrace
        {
            const uintptr_t NetworkBandwdithManagerCalculateBandwidt=REBASE(0x47BDE10);
        }
        namespace NetworkClient
        {
            const uintptr_t ClientDisconnect=REBASE(0x478C570);
            const uintptr_t RakPeerReceivedIDCONNECTIONREQUESTACCEPT=REBASE(0x4794D30);
            const uintptr_t RbxTransportClientWillConnectWithoutRupp=REBASE(0x4789780);
            const uintptr_t RbxTransportDummyClientWillConnectWithou=REBASE(0x478B1C0);
            const uintptr_t SuccessfullyConnectedServerAfterFallingB=REBASE(0x47934C0);
            const uintptr_t TransportSelectionUseRbxTransportEnabled=REBASE(0x4788380);
        }
        namespace NetworkCluster
        {
            const uintptr_t ClusterDeserializeIsEmptyMaskCount=REBASE(0x48582B0);
            const uintptr_t ClusterInitialCacheLineCreatedLod=REBASE(0x483D950);
            const uintptr_t SkippingClusterChunkDebounceSizeHasOutgo=REBASE(0x48577D0);
            const uintptr_t SkippingClusterPacketIllegalTerrainRecei=REBASE(0x4858A00);
            const uintptr_t WroteJoinDataItemMegacluster=REBASE(0x47ED0D0);
        }
        namespace NetworkDataAssertData
        {
            const uintptr_t NetworkDataAssert=REBASE(0x526F8B0);
        }
        namespace NetworkEmulationUdpSocket
        {
            const uintptr_t NetworkEmulationUdpSocketClosedConfigUpd=REBASE(0x21DAD40);
            const uintptr_t NetworkEmulationUdpSocketUpdatedConfigur=REBASE(0x21D86A0);
            const uintptr_t SendsDroppedTotalSendsSendDropPercentage=REBASE(0x21DAD30);
        }
        namespace NetworkEmulationUpdater
        {
            const uintptr_t ApplyingNetworkEmulationConfigOverrideNe=REBASE(0x479AE90);
            const uintptr_t IgnoringCoreNetworkSettingsChangeDueActi=REBASE(0x4877BF0);
            const uintptr_t ResettingNetworkEmulationConfigOverrideN=REBASE(0x4877E80);
            const uintptr_t UsingNetworkEmulationConfigCoreNetworkSe=REBASE(0x4877610);
            const uintptr_t UsingNetworkEmulationConfigFlags=REBASE(0x4877620);
        }
        namespace NetworkInstances
        {
            const uintptr_t DestroyReplicationCleaningUpReplicationD=REBASE(0x487C8E0);
        }
        namespace NetworkItemQueueDtor
        {
            const uintptr_t ItemsQueuedDestruction=REBASE(0x47EC5E0);
        }
        namespace NetworkIxp
        {
            const uintptr_t SetIXPParamsLayerLoadedSignal=REBASE(0x47979E0);
            const uintptr_t SettingLatencyIxpTxRx=REBASE(0x2870260);
        }
        namespace NetworkJoin
        {
            const uintptr_t HandledZuInstancesOverInvocationsMs=REBASE(0x47EC9E0);
            const uintptr_t MarkerItemLdSent=REBASE(0x484D350);
        }
        namespace NetworkPauseLogging
        {
            const uintptr_t CharacterOutsideStreamedAreaChangedFalse=REBASE(0x475BC80);
            const uintptr_t CharacterOutsideStreamedAreaChangedTrue=REBASE(0x475AE30);
            const uintptr_t GCJobDeleteRegionReplicationFocusOutside=REBASE(0x475AE40);
            const uintptr_t GCJobUpdateReplicationFocusTrackingRepli=REBASE(0x47553F0);
            const uintptr_t NetworkPauseStartedUserIDLld=REBASE(0x3DF9E10);
            const uintptr_t PlayerReplicationFocus=REBASE(0x45A74D0);
            const uintptr_t StillPausedStateOutsideStreamedRadius=REBASE(0x47525E0);
        }
        namespace NetworkProfilerChannel
        {
            const uintptr_t L6fPeerLocalRemote=REBASE(0x526FC80);
        }
        namespace NetworkSenderStallTracking
        {
            const uintptr_t ByteBudgetFrames=REBASE(0x4823640);
            const uintptr_t Frames=REBASE(0x4823360);
            const uintptr_t TransportLevelPushBackFrames=REBASE(0x4823920);
        }
        namespace NetworkSharedQueue
        {
            const uintptr_t AddingRefPropertyChangeZuPeersNextCommon=REBASE(0x46FA470);
            const uintptr_t CleaningSharedQueueAfterCleanLowestValid=REBASE(0x4709540);
            const uintptr_t CleaningSharedQueueSizeZuDeletingLlu=REBASE(0x4709550);
        }
        namespace NetworkStatsReport
        {
            const uintptr_t UpdateStatsJobRakStatsACTUALBYTESRECEIVE=REBASE(0x482CE30);
            const uintptr_t UpdatingStatsReplicatorOnStatisticsChang=REBASE(0x1C30CF0);
        }
        namespace NetworkStepsMultipliers
        {
            const uintptr_t ProcessPacketsJobRunning=REBASE(0x483B210);
        }
        namespace NetworkStreaming
        {
            const uintptr_t SendingItemInstancesEvaluatingNewlyAdded=REBASE(0x4636F60);
            const uintptr_t SendingMetaUpdateCenterRadius=REBASE(0x463E430);
        }
        namespace NetworkStreamingExpandedShapeQuery
        {
            const uintptr_t AddingTestFrustumQuery=REBASE(0x4637760);
            const uintptr_t ClientFrustumProgressHorizontalAngleMax=REBASE(0x4756930);
            const uintptr_t CreateItemCalledBeforeViewWasSet=REBASE(0x47B9560);
            const uintptr_t DynamicSubdivisionsDimQueriedTotalInstan=REBASE(0x47B97E0);
            const uintptr_t QueryCanceledBecauseWeAreRestricted=REBASE(0x462DB60);
            const uintptr_t ResettingFrustumShapeIteratorDim=REBASE(0x47B9C40);
        }
        namespace NetworkTrace
        {
            const uintptr_t GetConnectedServerReturning=REBASE(0x4796F60);
            const uintptr_t NoViableConnectionsLeftScStateReturningF=REBASE(0x4796ED0);
            const uintptr_t ReportPerServerMetricScStateReturningFal=REBASE(0x4784270);
            const uintptr_t ReportingNetworkMetricDiagTimeSince=REBASE(0x4784B00);
            const uintptr_t ReportingPerServerMetricInflux=REBASE(0x4785FB0);
            const uintptr_t SendtoFailedCodeMsgLenErrno=REBASE(0x2890C70);
        }
        namespace NewNetworkPhysicsLog
        {
            const uintptr_t StartFrame=REBASE(0x161A960);
        }
        namespace NewWebView2Browser
        {
            const uintptr_t CannotCreateRebar=REBASE(0x17C3260);
            const uintptr_t CannotCreateToolbar=REBASE(0x17C2D30);
            const uintptr_t DesignFoundationsApplyingTokenColor06XCo=REBASE(0x17BFDE0);
            const uintptr_t GamepadNavigationCommandJSONInvalid=REBASE(0x17C3AE0);
            const uintptr_t GotRequestButDeferredRequestAlready=REBASE(0x17BA100);
            const uintptr_t TextFieldFocusedInputFieldFocused=REBASE(0x17C3AD0);
            const uintptr_t WebView2BrowserCloseEmbeddedWindowActive=REBASE(0x17C0F40);
            const uintptr_t WebView2BrowserCloseEmbeddedWindowWebVie=REBASE(0x17C0F10);
            const uintptr_t WebView2BrowserContentLoadingDeepLinking=REBASE(0x17B9268);
            const uintptr_t WebView2BrowserErrorSource=REBASE(0x17BB2E0);
            const uintptr_t WebView2BrowserExecuteScript=REBASE(0x17C6800);
            const uintptr_t WebView2BrowserLaunching=REBASE(0x17B68D0);
            const uintptr_t WebView2BrowserLogWin32BTIdRBXEventTrack=REBASE(0x17BD930);
            const uintptr_t WebView2BrowserStopContentWebviewInvalid=REBASE(0x17C45D0);
            const uintptr_t WebView2BrowserTabNavStartingUrlBlocked=REBASE(0x17B8660);
            const uintptr_t WebView2DeepLinkingNewWindowRequestedHan=REBASE(0x17BF6B8);
        }
        namespace NotificationLogs
        {
            const uintptr_t DisplayedNonexistentNotificationId=REBASE(0x3F2E640);
            const uintptr_t TriedDismissNonexistentNotificationId=REBASE(0x3F2DDF0);
            const uintptr_t TriedInteractNonexistentNotificationId=REBASE(0x3F2E310);
        }
        namespace NotificationService
        {
            const uintptr_t ConnectToRelaySignalsRelayNull=REBASE(0x31B9700);
            const uintptr_t ConnectToRelaySignalsSuccessfullyConnect=REBASE(0x31B96F0);
            const uintptr_t HandleRccRelayMessageNamespaceDetailType=REBASE(0x31BBF70);
            const uintptr_t NotificationServiceOnServiceProviderIsSe=REBASE(0x31B7EF0);
            const uintptr_t NotificationServiceReceivedMessageRelayN=REBASE(0x31BEF90);
            const uintptr_t RccRealtimeRelayCreatedSignalsConnected=REBASE(0x31B9CF0);
            const uintptr_t SetupBackendMessageSubscriptionDataModel=REBASE(0x31BB2C0);
            const uintptr_t SetupBackendMessageSubscriptionRccRealti=REBASE(0x31BB240);
            const uintptr_t SetupRccRealtimeRelayIfReadyJobIdSetSkip=REBASE(0x31B8DF0);
            const uintptr_t SetupRccRealtimeRelayIfReadyUniverseIdSt=REBASE(0x31B8DE0);
            const uintptr_t SubscribeToRccEventNamespaceEventNamespa=REBASE(0x31BA550);
            const uintptr_t SubscribeToTopicTokenCannotEmpty=REBASE(0x31BA790);
            const uintptr_t TrySubscribeInternalMessagingServiceSubs=REBASE(0x31BA0E0);
            const uintptr_t UnsubscribeFromTopicTokenCannotEmpty=REBASE(0x31BAD10);
        }
        namespace OPENXR
        {
            const uintptr_t CheckHapticsXrResultValueSetResult=REBASE(0x2835390);
            const uintptr_t ConfigureActionsWasCalledBeforeSessionWa=REBASE(0x2830080);
            const uintptr_t Error=REBASE(0x282F510);
            const uintptr_t HandleSessionStateChangedReceivedSession=REBASE(0x2834090);
            const uintptr_t OpenXREvent=REBASE(0x2832420);
            const uintptr_t OpenXrDeviceSetRefreshRateTargetRefreshR=REBASE(0x2834EB0);
        }
        namespace OPENXRHaptics
        {
            const uintptr_t SetHapticsStateValue=REBASE(0x28354B0);
        }
        namespace OnScreenKeyboardController
        {
            const uintptr_t CancellingDelayedReleaseFocusTextBox=REBASE(0x864F90);
            const uintptr_t KeyboardDockedWillMoveWindow=REBASE(0x864890);
            const uintptr_t KeyboardWasHiddenButTextBoxRelease=REBASE(0x864B60);
        }
        namespace OnScreenKeyboardListener
        {
            const uintptr_t UnableRegisterCallbackHandlerFrameworkIn=REBASE(0x8655F0);
        }
        namespace OnScreenKeyboardWindowDelegate
        {
            const uintptr_t CouldConvertClientScreenPoint=REBASE(0x866B50);
            const uintptr_t PositionAlreadyDirtyWillMoveWindow=REBASE(0x866940);
            const uintptr_t UnableGetMainWindowRect=REBASE(0x866950);
        }
        namespace OpenCloudService
        {
            const uintptr_t FailedLockOpenCloudCoreScript=REBASE(0x31AFB10);
            const uintptr_t OpenCloudScriptFailed=REBASE(0x31B4550);
            const uintptr_t RegisterOpenCloudShouldOnlyCalledServer=REBASE(0x31B0D60);
            const uintptr_t UnexpectedReturnValueTable=REBASE(0x31B0AA0);
        }
        namespace Output
        {
            const uintptr_t AnimationFromVideoCreatorServiceCreateJo=REBASE(0x1A33C00);
            const uintptr_t AnimationFromVideoCreatorServiceDownload=REBASE(0x1A35280);
            const uintptr_t AnimationFromVideoCreatorServiceGetJobSt=REBASE(0x1A343D0);
            const uintptr_t AppNoReloadHandlerLocalAppResuming=REBASE(0x7FA550);
            const uintptr_t BackupOTAUpdateRequested=REBASE(0x16A62D0);
            const uintptr_t BuildSystemId2=REBASE(0x4C0B5D0);
            const uintptr_t CSGPropertyDataGetStringValue=REBASE(0xF21870);
            const uintptr_t CSGPropertyDataReadvalue=REBASE(0xF21660);
            const uintptr_t CSGPropertyDataSetStringValue=REBASE(0xF21820);
            const uintptr_t CSGPropertyDataWritevalue=REBASE(0xF21610);
            const uintptr_t CallingGetRegistryChannelBeforeAppPtrVal=REBASE(0x7FCF90);
            const uintptr_t CallingMiCollect=REBASE(0x498B060);
            const uintptr_t CanTFindSecretKey=REBASE(0x3C60910);
            const uintptr_t ClosingFmodMlSl=REBASE(0x44F9DB0);
            const uintptr_t ConnectingUDMUXServerRCCServer=REBASE(0x4891360);
            const uintptr_t DebugRenderingTestVideoCaptureStopSucces=REBASE(0x3182A90);
            const uintptr_t DumpedRawDataKBStringsKB=REBASE(0x2ABCAF0);
            const uintptr_t ERRORGetAdapterDescFailedGetGetDescInfo=REBASE(0x2A3C600);
            const uintptr_t ESGamePerfMonitorGPUDedicatedVidMemLluDe=REBASE(0x2A3C970);
            const uintptr_t EditableMeshPublishSuccess=REBASE(0x3BD0FA0);
            const uintptr_t EngineContextInExperienceLocaleSet=REBASE(0x14E3D40);
            const uintptr_t ErrorParsingExperimentFString=REBASE(0x5F44C40);
            const uintptr_t ErrorStandardMessageOutSetIncorrect=REBASE(0x42827A0);
            const uintptr_t ErrorWhileCleaningSoundCache=REBASE(0x5FDDA80);
            const uintptr_t EvaluatingDeferredInferredCrashes=REBASE(0x2A57050);
            const uintptr_t ExecutingMicroProfilerScreenshotCallback=REBASE(0x2AC37D0);
            const uintptr_t FailedCreateTracerProvider=REBASE(0x4DE7860);
            const uintptr_t FailedLoadTextSpeech=REBASE(0x452E060);
            const uintptr_t FailedRegisterHapticEffect=REBASE(0x3C4A5A0);
            const uintptr_t FailedUnregisterHapticEffect=REBASE(0x3C4A760);
            const uintptr_t FailedUpdateAdornsAfterPhysicsSettings=REBASE(0x3483DA0);
            const uintptr_t FastFlagConfigForcingFlags=REBASE(0x5A1A840);
            const uintptr_t FastFlagConfigForcingINTERNALTESTINGFlag=REBASE(0x5A1A850);
            const uintptr_t FreeErr=REBASE(0x2CC4890);
            const uintptr_t HSRDataHasUploadedHsrIdPlease=REBASE(0x1BE3040);
            const uintptr_t HashingBTIDValueRangeIsTreatment=REBASE(0x2A506F0);
            const uintptr_t HelloWorldGNDMRX78CLI=REBASE(0x59ED850);
            const uintptr_t HttpRequestStreamingCallbackError=REBASE(0x5FACCE0);
            const uintptr_t ImplementationFoundContentIdFormatterEng=REBASE(0x1D30D40);
            const uintptr_t ImplementationFoundCreatorConfigEngineMo=REBASE(0x1D30BA0);
            const uintptr_t ImplementationFoundEditableTelemetryModu=REBASE(0x1D30EE0);
            const uintptr_t ImplementationFoundEngineApiMetricsModul=REBASE(0x1D30E10);
            const uintptr_t ImplementationFoundFriendsCallingModule=REBASE(0x1D30FB0);
            const uintptr_t ImplementationFoundInstanceStitchingHand=REBASE(0x1D30AD0);
            const uintptr_t ImplementationFoundStreamingEngineModule=REBASE(0x1D30A00);
            const uintptr_t InferredCrashSystemFoundUniqueId=REBASE(0x2A5B980);
            const uintptr_t LaunchtimeArgumentLoggingExperienceLaunc=REBASE(0x44C7A40);
            const uintptr_t Level3=REBASE(0x2E3B640);
            const uintptr_t MeshDeformerApplyDeformerCouldAccess=REBASE(0x19B0FF0);
            const uintptr_t MockVideoLengthMsTotalMemory=REBASE(0x583F1D0);
            const uintptr_t NewAnimationLodConfigAvailableRecreating=REBASE(0x1AF1B20);
            const uintptr_t OTAUpdateRequested=REBASE(0x16A66B0);
            const uintptr_t ParsingV5BucketSettingsMinRangeMaxRange=REBASE(0x2A4F9F0);
            const uintptr_t ProductionSampler=REBASE(0x5855E20);
            const uintptr_t ProtectedMemoryResourceAllocateFailed=REBASE(0x28FCF70);
            const uintptr_t ProtectedMemoryResourceUnreleasedMemory=REBASE(0x28FCD30);
            const uintptr_t RBXFileSystemCopyFileFailed=REBASE(0x5FF9160);
            const uintptr_t RBXFileSystemCopyFileFailedUnknownExcept=REBASE(0x5FF9320);
            const uintptr_t RBXFileSystemRemoveAllFailed=REBASE(0x5FFBD60);
            const uintptr_t ReportingSuccessErrorOperation=REBASE(0x5019310);
            const uintptr_t SHSRDataStringLength=REBASE(0x1BE5700);
            const uintptr_t Screenshot=REBASE(0x3C19550);
            const uintptr_t SetAssetFolder=REBASE(0x123AB60);
            const uintptr_t SetExtraAssetFolder=REBASE(0x123A590);
            const uintptr_t SetLocalAssetFolder=REBASE(0x123A7C0);
            const uintptr_t SetStudioAssetFolder=REBASE(0x123A2F0);
            const uintptr_t SettingsDateFoundInvalidUsingLocal=REBASE(0x4DE0F20);
            const uintptr_t SettingsUrl=REBASE(0x4DE0FA0);
            const uintptr_t SpatialHashStats=REBASE(0x2E3B650);
            const uintptr_t SubmitAndValidateForUTPTestServiceFoundS=REBASE(0x317F870);
            const uintptr_t SubmittingSaveTaskTaskScheduler=REBASE(0x4C33400);
            const uintptr_t SubmittingScreenshotTaskTaskScheduler=REBASE(0x4C332A0);
            const uintptr_t Subtracting=REBASE(0x5A63630);
            const uintptr_t SwitchingAllowlistBasedLogFilteringCurre=REBASE(0x4DD0160);
            const uintptr_t ThirdPartyUserDoesHoldNecessary=REBASE(0x8283D0);
            const uintptr_t TrayNoReloadHandlerLocalAppResuming=REBASE(0x87CB70);
            const uintptr_t UnknownJointFoundTargetMesh=REBASE(0x1DF93E0);
            const uintptr_t UnrecognizedProtocolArg=REBASE(0x851F90);
            const uintptr_t ValidationError=REBASE(0x3180C00);
            const uintptr_t ValidationPSNR2fSSIM4f=REBASE(0x3180F10);
            const uintptr_t VideoApiEnabledUniversalAppLuaContextUni=REBASE(0x3D56B40);
            const uintptr_t WebClickELTIncorrectWebLaunchTimestamp=REBASE(0x827810);
            const uintptr_t WebClickELTShouldRunWhenLaunchWeb=REBASE(0x827800);
            const uintptr_t WrapDeformerBeginSkinningTransferResulte=REBASE(0x19AEED0);
            const uintptr_t WrapDeformerFetchingMeshesResultFinish=REBASE(0x19C8E20);
            const uintptr_t WrapDeformerFetchingMeshesResultedError=REBASE(0x19AEC40);
            const uintptr_t WrapDeformerFetchingSkinnedMeshesResult=REBASE(0x19C8AA0);
        }
        namespace PPJProgressHalt
        {
            const uintptr_t QueueHasBeenEmptyFrames=REBASE(0x4822730);
            const uintptr_t StuckProcessingPacketIdFrames=REBASE(0x4822A20);
            const uintptr_t UnablePopLatestPacketQueueFrames=REBASE(0x4822F00);
        }
        namespace Package
        {
            const uintptr_t PackageRequestResultPackageLliV=REBASE(0x3D97290);
            const uintptr_t RequestWebCopyPackageLldVersion=REBASE(0x3D9C270);
        }
        namespace PackageLink
        {
            const uintptr_t ErrorWhileFindingInstanceIdOverride=REBASE(0x3DA02E0);
            const uintptr_t ErrorWhileSettingOverride=REBASE(0x3D9FC20);
            const uintptr_t PublishFilterFailedReSerializeReach=REBASE(0x5FB43B0);
            const uintptr_t PublishFilterFailedReadOverrides=REBASE(0x3D9F760);
        }
        namespace PageMilestoneRegistry
        {
            const uintptr_t SubscriberCallbackThrew=REBASE(0x607C9D0);
            const uintptr_t SubscriberCallbackThrewNonStdException=REBASE(0x607CAD0);
        }
        namespace PartInstanceLifetime
        {
            const uintptr_t BasePartDestroyedPrimitive=REBASE(0xEB9BE0);
            const uintptr_t BasePartNamed=REBASE(0xEB9F90);
        }
        namespace PartStreamingRequests
        {
            const uintptr_t CenterPosition=REBASE(0x461EF70);
            const uintptr_t ChangedStreamedRadiusBasedServerMetadata=REBASE(0x4753EA0);
            const uintptr_t DeletedRegionGcdistCurrentRad=REBASE(0x474B940);
            const uintptr_t ReceivedNewClientInstanceQuotaMax=REBASE(0x4623730);
            const uintptr_t ShrankCurrentStreamedRadiusFocusRegions=REBASE(0x474AFA0);
            const uintptr_t StreamMaxDistanceExceededLongestDistance=REBASE(0x4757AF0);
        }
        namespace PaymentsProtocol
        {
            const uintptr_t PerformSubscriptionPurchaseStartProductT=REBASE(0x50DEE60);
        }
        namespace PaymentsProtocolImpl
        {
            const uintptr_t GetMicrosoftCollectionsAccessTokenProduc=REBASE(0x50E2880);
            const uintptr_t GetSecondaryAuthTokenStarted=REBASE(0x50E08A0);
            const uintptr_t GrantRobuxFailureUserCollectionIdFound=REBASE(0x50E0DB0);
            const uintptr_t InvokeStoreFailureUserCollectionId=REBASE(0x50E2120);
            const uintptr_t PreparePaymentProductFailed=REBASE(0x50E3530);
            const uintptr_t XStoreEnumerateProductsQueryStarted=REBASE(0x50E0640);
            const uintptr_t XStoreGetUserCollectionsIdResultSizeFail=REBASE(0x50E3A00);
        }
        namespace PeerMonotonicClock
        {
            const uintptr_t PeerMonotonicClockNowCalledBeforeInitial=REBASE(0x57E7500);
            const uintptr_t ReceivedInitialServerTime=REBASE(0x4865B70);
            const uintptr_t SendingInitialServerTime=REBASE(0x47374C0);
        }
        namespace PercentileReportStats
        {
            const uintptr_t DFStringPerfRunTeamCityId=REBASE(0x2ADD560);
            const uintptr_t PhasePercentileAggregateP0P5P10=REBASE(0x2AE1790);
            const uintptr_t PhaseReportCurrentCycleCountLd=REBASE(0x2ADFE90);
            const uintptr_t PhaseSetCurrentCycleCountLd=REBASE(0x2ADFC70);
            const uintptr_t PhaseSkippingFrameLdDurationMs=REBASE(0x2ADE440);
        }
        namespace PerformanceControlExecution
        {
            const uintptr_t RequestingChangeTunable=REBASE(0x211A790);
            const uintptr_t TunableCurrentValTargetValDeltaMemBytes=REBASE(0x21462E0);
        }
        namespace PerformanceControlHarmonyComputeCoordinator
        {
            const uintptr_t ComputeTunableEnabledCheckFStringPerform=REBASE(0x20F4EB0);
        }
        namespace PerformanceControlIXP
        {
            const uintptr_t DeviceExposedExperiments=REBASE(0x4C45670);
            const uintptr_t DeviceManufacturerMatchedIXPExposureList=REBASE(0x4C42900);
            const uintptr_t TrimMemoryEnabled=REBASE(0x56EDA90);
        }
        namespace PerformanceControlMemoryBudget
        {
            const uintptr_t HarmonyMemoryMBFreeOs1fCritBuf=REBASE(0x2136E00);
        }
        namespace PerformanceControlService
        {
            const uintptr_t PerformanceControlServicePerformanceCont=REBASE(0x5ADFD10);
            const uintptr_t UnsupportedCrossExperienceType=REBASE(0x5ADFE40);
        }
        namespace PerformanceControlUtil
        {
            const uintptr_t PerformanceControlUtilLaunchCrossExpVoic=REBASE(0x4C44900);
            const uintptr_t PerformanceControlUtilRegisteredContinue=REBASE(0x4C442A0);
            const uintptr_t PerformanceControlUtilRegisteredLaunchCr=REBASE(0x4C434B0);
            const uintptr_t PerformanceControlUtilRegisteredSingleSu=REBASE(0x4C431D0);
            const uintptr_t PerformanceControlUtilRemovedContinueCro=REBASE(0x4C45480);
            const uintptr_t PerformanceControlUtilSubmittedContinueC=REBASE(0x4C44C80);
        }
        namespace PerformanceTelemetry
        {
            const uintptr_t Count0=REBASE(0x3677860);
            const uintptr_t CountMinP001P01P05=REBASE(0x3677850);
            const uintptr_t ReportingAggregationsTelemetry=REBASE(0x3678660);
            const uintptr_t ShuttingDownSubsystem=REBASE(0x3617B90);
            const uintptr_t ThrottledCreatingSubsystemThrottledPerfo=REBASE(0x3676430);
        }
        namespace Photo2Avatar
        {
            const uintptr_t AddAvatarGenerationJobJobAlreadyExistsPl=REBASE(0x1B82930);
            const uintptr_t AddCompletedAvatarPreviewJobJobAlreadyEx=REBASE(0x1B82B70);
            const uintptr_t BodyPartAttachmentFound=REBASE(0x1B7A6E0);
            const uintptr_t CancelAllPlayerGenerationJobsPlayerNull=REBASE(0x1B83F20);
            const uintptr_t CancelJobFailedID=REBASE(0x1CF6A60);
            const uintptr_t CancelJobSucceededID=REBASE(0x1CF6BE0);
            const uintptr_t CancelQRTokenFailedTokenIDHttpResponse=REBASE(0x1BA5590);
            const uintptr_t CancelQRTokenSucceededTokenID=REBASE(0x1BA5780);
            const uintptr_t CreateAvatarGenerationJobURL=REBASE(0x1CF3940);
            const uintptr_t CreateFromImageContentAsyncFailed=REBASE(0x1BA52B0);
            const uintptr_t DecodedNestedJSONBlob=REBASE(0x1CF5BF0);
            const uintptr_t FailedDelete3DGenerationResultError=REBASE(0x1CC1EF0);
            const uintptr_t GetAvatarGenerationIdForPlayerError=REBASE(0x1B826B0);
            const uintptr_t GetAvatarGenerationIdForPlayerFailedGetI=REBASE(0x1B82110);
            const uintptr_t GetPreviewJobByIdJobFoundPlayer=REBASE(0x1B845B0);
            const uintptr_t HandleJobDoneUrl=REBASE(0x1CF5270);
            const uintptr_t HandleSelfieQRResultQRSelfiesYetEnabled=REBASE(0x1B93730);
            const uintptr_t HeadInstanceMeshPartGeneratedAvatar=REBASE(0x1B7C790);
            const uintptr_t InvalidNumberArgumentsRemoteEventReplica=REBASE(0x1B89E40);
            const uintptr_t JobCompletedSuccessfullyID=REBASE(0x1CF2FB0);
            const uintptr_t MediaPickerProtocolAvailablePlatform=REBASE(0x1B97A10);
            const uintptr_t MediaPickerProtocolIsAvailableFailed=REBASE(0x1B98BF0);
            const uintptr_t ParentAttachmentBasePart=REBASE(0x1B7BB60);
            const uintptr_t Photo2AvatarJob2DOutputDataDoesIncludePr=REBASE(0x1CB9FE0);
            const uintptr_t Photo2AvatarJob3DSaveResultSuccessfullyW=REBASE(0x1CC2400);
            const uintptr_t Photo2AvatarJobRunFailed=REBASE(0x1CF3700);
            const uintptr_t PollForResultStatus=REBASE(0x1CF4BA0);
            const uintptr_t PreviewJobDidResolveTemplateHair=REBASE(0x1CBEC20);
            const uintptr_t PromptSelectAvatarGenerationImageAsyncDa=REBASE(0x1B8B480);
            const uintptr_t PromptSelectAvatarGenerationImageAsyncFa=REBASE(0x1BA4550);
            const uintptr_t QRTokenGenerationSucceededTokenID=REBASE(0x1B96A70);
            const uintptr_t RemovePendingAvatarGenerationJobJobFound=REBASE(0x1B83170);
            const uintptr_t ReplicateAvatarGenerationImageIdEventSho=REBASE(0x1B89ED0);
            const uintptr_t ReplicationAvatarModelShouldOnlyHappen=REBASE(0x1B85180);
            const uintptr_t RequestAvatarGenerationImageEventShouldO=REBASE(0x1B89A70);
            const uintptr_t RequestAvatarPreviewUrlEventShouldOnlySe=REBASE(0x1B88C80);
            const uintptr_t RequestAvatarTempAssetIdsEventShouldOnly=REBASE(0x1B87050);
            const uintptr_t SendOpenQRCodeEventError=REBASE(0x1B95DB0);
            const uintptr_t SendOpenQRCodeEventErrorPlayerNull=REBASE(0x1B95640);
            const uintptr_t SendOpenQRCodeEventErrorPlayersNull=REBASE(0x1B95620);
            const uintptr_t SessionUserMapFoundSessionMap=REBASE(0x1B8D350);
            const uintptr_t StoredPreviewURLValidURL=REBASE(0x1B8A8F0);
            const uintptr_t StoringAvatarModelShouldOnlyHappen=REBASE(0x1B86B50);
            const uintptr_t StoringAvatarPreviewShouldOnlyHappen=REBASE(0x1B866F0);
            const uintptr_t SuccessFieldTrueCheckServerLogs=REBASE(0x1B87E70);
            const uintptr_t TakeAvatarGenerationPhotoOnClientFailed=REBASE(0x1B98740);
            const uintptr_t TakeAvatarGenerationPhotoOnClientImageNu=REBASE(0x1B98080);
            const uintptr_t UnexpectedErrorAvatarModelNull=REBASE(0x1B7E0F0);
            const uintptr_t UnexpectedErrorFailedCreateHairAccessory=REBASE(0x1B7E180);
            const uintptr_t UnexpectedErrorMissingHair=REBASE(0x1B7B8B0);
            const uintptr_t UnexpectedErrorMissingMeshpart=REBASE(0x1B796F0);
            const uintptr_t UnexpectedErrorMissingMeshpartHead=REBASE(0x1B7B5F0);
            const uintptr_t UnexpectedErrorShouldCalledClient=REBASE(0x1B93090);
        }
        namespace PhysicalConfigDataMigration
        {
            const uintptr_t MissingInertiaData=REBASE(0xE2D400);
        }
        namespace Physics
        {
            const uintptr_t FailedGenerateClosedVoxelFallingBackVoxe=REBASE(0x5E98730);
            const uintptr_t RemoveBulletDispatcher=REBASE(0x15944E0);
            const uintptr_t SetBulletDispatcher=REBASE(0x1593330);
        }
        namespace PhysicsNetwork
        {
            const uintptr_t IgnoreNullRootPartFilteredGrounded=REBASE(0x4618CF0);
            const uintptr_t ManyLeft0x=REBASE(0x47DEFE0);
        }
        namespace PinShortcutCore
        {
            const uintptr_t PinExperienceAvailableCurrentPlatform=REBASE(0x50A8EE0);
            const uintptr_t RevealPinnedExperienceAvailableCurrentPl=REBASE(0x50A8DC0);
        }
        namespace PlaceAssetIdsService
        {
            const uintptr_t PublishBatchingEvents=REBASE(0x3B7C620);
            const uintptr_t PublishError=REBASE(0x3B7D440);
        }
        namespace PlayerCharacterLoadingLog
        {
            const uintptr_t PlayerCharacterLoadingLogAssetIdDidRetur=REBASE(0x3E33EF0);
            const uintptr_t PlayerCharacterLoadingLogAssetIdLldDidRe=REBASE(0x3E2C750);
            const uintptr_t PlayerCharacterLoadingLogBackEndProcessi=REBASE(0x3E35A60);
            const uintptr_t PlayerCharacterLoadingLogUnableParseAvat=REBASE(0x3E41550);
        }
        namespace PlayerFeedbackPromptLog
        {
            const uintptr_t PlayerFeedbackEligibilityBodyFirstBytes=REBASE(0x3547480);
            const uintptr_t PlayerFeedbackEligibilityGETError=REBASE(0x3548880);
            const uintptr_t PlayerFeedbackEligibilityGETUrlPlaceIdAs=REBASE(0x3546F50);
            const uintptr_t PlayerFeedbackFlightResumingImmediately=REBASE(0x35441A0);
            const uintptr_t PlayerFeedbackGamesV1RootPlaceIdParseFai=REBASE(0x5F83970);
            const uintptr_t PlayerFeedbackGamesV1RootPlaceIdRequestF=REBASE(0x3548E40);
            const uintptr_t PlayerFeedbackJSONParseException=REBASE(0x5F83850);
            const uintptr_t PlayerFeedbackPOSTFailure=REBASE(0x354B350);
            const uintptr_t PlayerFeedbackPOSTSuccess=REBASE(0x354AC40);
            const uintptr_t PlayerFeedbackParseFailedDefaultingUnava=REBASE(0x3547470);
            const uintptr_t PlayerFeedbackPermissionDenied=REBASE(0x354F370);
            const uintptr_t PlayerFeedbackPlayerSupportCreateTicketP=REBASE(0x354CCF0);
            const uintptr_t PlayerFeedbackPlayerSupportDescriptionTo=REBASE(0x35495D0);
            const uintptr_t PlayerFeedbackPlayerSupportEligibility2x=REBASE(0x3545540);
            const uintptr_t PlayerFeedbackPlayerSupportEligibilityGE=REBASE(0x3546370);
            const uintptr_t PlayerFeedbackStartingPOSTSubmissionFeed=REBASE(0x3549D50);
            const uintptr_t PlayerFeedbackWatchdogTimeoutResuming=REBASE(0x35561D0);
        }
        namespace PlayerGui
        {
            const uintptr_t OnServiceProviderScreenOrientation=REBASE(0x3F93C60);
        }
        namespace PlayerHydrationService
        {
            const uintptr_t AttemptingHydratePlayerCachedAttributes=REBASE(0x3DC5B50);
            const uintptr_t AttemptingHydratePlayerReplicatedCachedA=REBASE(0x3B80B60);
            const uintptr_t HydratingPlayerFailed=REBASE(0x3B80750);
            const uintptr_t HydratingPlayerPulledAttributes=REBASE(0x3B82AC0);
            const uintptr_t HydratingPlayerReceivedAttributes=REBASE(0x3B819B0);
            const uintptr_t PlayerAttributesFoundAppStorageAre=REBASE(0x3B7F440);
        }
        namespace PlayerLocaleIdVerbose
        {
            const uintptr_t SuccessfullySetEventIdUserJoinData=REBASE(0x3DFCB00);
            const uintptr_t UpdatedPlayerSChatLocaleId=REBASE(0x3E02280);
            const uintptr_t UpdatedPlayerSLocaleId=REBASE(0x3E01F10);
        }
        namespace PlayerViewServiceTrace
        {
            const uintptr_t OnCameraCFrameReplicationRequest=REBASE(0x3E13390);
            const uintptr_t SubscribeToTrackerData=REBASE(0x3E13430);
            const uintptr_t UnsubscribeFromTrackerData=REBASE(0x3E111E0);
        }
        namespace PopLatencyService
        {
            const uintptr_t EnablePopLatencyProbeWentFalseMidSession=REBASE(0x153BA10);
            const uintptr_t WarmUpOnlyProbeCompletePublished=REBASE(0x153DB70);
        }
        namespace PostUploader
        {
            const uintptr_t CompletePostFailedStatus=REBASE(0x40E42C0);
            const uintptr_t S3PUTFailedStatusErr=REBASE(0x40E1A80);
            const uintptr_t SkippingTextToSpeechEntryMissingInvalidV=REBASE(0x40DDDC0);
        }
        namespace PowerTraceModule
        {
            const uintptr_t CheckingIsUserEnrolledForCurrentInterval=REBASE(0x5078A70);
            const uintptr_t PerformedHashingUserHashUserIdEnrolled=REBASE(0x5078510);
            const uintptr_t SendingKeyFieldSupplementaryFields=REBASE(0x5078A50);
            const uintptr_t TimeWindow1SecondUsedPowerTraceModule=REBASE(0x5078250);
        }
        namespace PrefetchProtocol
        {
            const uintptr_t ConcatString=REBASE(0x3CA7240);
            const uintptr_t ErrorKeyFoundDeviceInfoPayload=REBASE(0x5A4B600);
            const uintptr_t OmniRecommendationsServiceClearSessionId=REBASE(0x5A4DD40);
            const uintptr_t OmniRecommendationsServiceGetSessionId=REBASE(0x5A4DB90);
            const uintptr_t OmniRecommendationsServiceMakeRequest=REBASE(0x5A4D910);
            const uintptr_t PrefetchBlockedHasBeenHandledBefore=REBASE(0x3CA65A0);
            const uintptr_t PrefetchProtocolBankExpiredLongerAcceptN=REBASE(0x3CA6CC0);
            const uintptr_t PrefetchProtocolCoreMakePrefetchSyntheti=REBASE(0x5A4A0B0);
            const uintptr_t PrefetchProtocolCoreMakePrefetchWaitingN=REBASE(0x5A4A1F0);
            const uintptr_t RequestBody=REBASE(0x3CA7260);
            const uintptr_t ResponseReceivedTriggerCallback=REBASE(0x3CA6110);
            const uintptr_t SDUICapabilityDescriptorValidJSONUsing=REBASE(0x5A4EB90);
            const uintptr_t SDUICollectionLayoutDescriptorValidJSON=REBASE(0x5A504B0);
        }
        namespace PreloadLinkedScriptsTiming
        {
            const uintptr_t DonePreloadingLinkedScriptsId=REBASE(0x42334A0);
        }
        namespace Preloaded
        {
            const uintptr_t LoadFromBufferCalledWhileContentAlreadyL=REBASE(0xF9B240);
            const uintptr_t LoadFromBufferSkippedServerWillReplicate=REBASE(0xF9B250);
        }
        namespace PreloadedCacheManager
        {
            const uintptr_t DebugPreloadLocalRbxmPathReadFailedPlace=REBASE(0xF996A0);
            const uintptr_t PreloadFetchFailedPlaceId=REBASE(0xF9A160);
        }
        namespace PreloadedCacheVerifier
        {
            const uintptr_t PreloadSignatureVerificationFailed=REBASE(0xF95560);
        }
        namespace PresetChatManager
        {
            const uintptr_t FailedParsePresetOptionsResponse=REBASE(0x4A12270);
            const uintptr_t MalformedPresetConfigResponseBody=REBASE(0x4A10B90);
            const uintptr_t PresetChatInfoEligibilityCriteriaBlocked=REBASE(0x4A15AD0);
            const uintptr_t PresetChatManagerFetchErrorStatus=REBASE(0x4A10610);
        }
        namespace PrimitiveLifetime
        {
            const uintptr_t OwnerSetPrimitive=REBASE(0xEB8D40);
            const uintptr_t PrimitiveCreated=REBASE(0x15FDB60);
            const uintptr_t PrimitiveDestroyed=REBASE(0x15FDDF0);
        }
        namespace ProfileTelemetry
        {
            const uintptr_t FailedSendPerfDataEventIngest=REBASE(0x2A870A0);
            const uintptr_t FailedSendPerfDataPoints=REBASE(0x2A87210);
            const uintptr_t SendingPerfDataEventIngestViaRobloxTelem=REBASE(0x2A7EC50);
            const uintptr_t SendingPerfDataStatMemoryGroup=REBASE(0x2A7FF10);
            const uintptr_t SkippingPerfDataStatsReportDueMissing=REBASE(0x2A80360);
        }
        namespace PropertySet
        {
            const uintptr_t FailedGetHeader=REBASE(0x5FA1CC0);
        }
        namespace R15Character
        {
            const uintptr_t DataModelRequestUniverseConfigurationSet=REBASE(0x3C83ED0);
            const uintptr_t DataModelRequestUniverseConfigurationUni=REBASE(0x411D910);
            const uintptr_t DataModelSetUniverseIdLld=REBASE(0x411DE00);
            const uintptr_t DataModelUniverseConfigurationLoadedErro=REBASE(0x411D580);
            const uintptr_t DataModelUniverseConfigurationLoadedSucc=REBASE(0x411D120);
        }
        namespace RTAnimationTrackerTrace
        {
            const uintptr_t AncestorChanged=REBASE(0x17DD4F0);
            const uintptr_t Connect=REBASE(0x17DCAD0);
            const uintptr_t CreatingAudioNodeProcessorFallbackAudio=REBASE(0x17DD7E0);
            const uintptr_t Disconnect=REBASE(0x17DCCF0);
            const uintptr_t FailedCreateTrackerEngineUnsupportedTrac=REBASE(0x17DF600);
            const uintptr_t HandlingActiveChanged=REBASE(0x17DC030);
            const uintptr_t HandlingEnableFallbackAudioInputChanged=REBASE(0x17DC120);
            const uintptr_t HandlingTrackerTypeChanged=REBASE(0x17DC2E0);
            const uintptr_t Initializing=REBASE(0x17DC4C0);
            const uintptr_t NotifyingTrackerError=REBASE(0x17DE090);
            const uintptr_t NotifyingTrackerModeChanged=REBASE(0x17DE6C0);
            const uintptr_t NotifyingTrackerPrompt=REBASE(0x17DEC40);
            const uintptr_t RTAnimationTrackerConstructed=REBASE(0x17DBB60);
            const uintptr_t RemovingConsumer=REBASE(0x17DCF80);
            const uintptr_t RunServiceAvailableConnecting=REBASE(0x17DF200);
            const uintptr_t ShuttingDown=REBASE(0x17DC900);
            const uintptr_t StartingTracking=REBASE(0x17DC420);
            const uintptr_t StoppingTracking=REBASE(0x17DC700);
            const uintptr_t UpdatingInputConnectionStreamType=REBASE(0x17DEE60);
        }
        namespace RVideoMemLogging
        {
            const uintptr_t VideoMallocFailedAllocateBytesArena=REBASE(0x1E654D0);
            const uintptr_t VideoMemoryDeallocationFailedDeallocateB=REBASE(0x1E65A60);
        }
        namespace RVideoTrace
        {
            const uintptr_t CouldLockDeferredMediaSegmentDataMustHav=REBASE(0x1E60680);
            const uintptr_t CurrentSegmentIndexBehindMediaSequence=REBASE(0x1E80F50);
            const uintptr_t FormatSupportedHLSMediaSegment=REBASE(0x1E80B50);
            const uintptr_t I420Buffer=REBASE(0x1EDFA40);
            const uintptr_t MediaFoundationCodecReceiveFrameSetSampl=REBASE(0x1ECF1F0);
            const uintptr_t MediaFoundationCodecReceivePacketInterna=REBASE(0x1ED2AA0);
            const uintptr_t MediaFoundationCodecSendFrameInternalSet=REBASE(0x1ED0E30);
            const uintptr_t MediaFoundationCodecSendPacketSetSampleT=REBASE(0x1ECDC50);
            const uintptr_t MockInputFormatReadPacket=REBASE(0x1EA9940);
            const uintptr_t MockInputFormatSeek=REBASE(0x1EA9A90);
            const uintptr_t Mp4InputFormatCreate=REBASE(0x1E97A90);
            const uintptr_t MpegTsInputFormatADTSHeaderSampleRateCha=REBASE(0x1E95C60);
            const uintptr_t MpegTsInputFormatFailedFindPATPMTPAT=REBASE(0x1E95500);
            const uintptr_t MpegTsInputFormatFindStreamInfo=REBASE(0x1E94FA0);
            const uintptr_t MpegTsInputFormatOpenedSuccessfullyVideo=REBASE(0x1E94700);
            const uintptr_t MpegTsInputFormatParsedSPSPPSXExtradata=REBASE(0x1E96570);
            const uintptr_t MpegTsInputFormatSeek=REBASE(0x1E95310);
            const uintptr_t NeedsSetMockInputFormat=REBASE(0x1EA8BF0);
            const uintptr_t OpeningVPXEncoderWidthHeightBitrate=REBASE(0x1EB6280);
            const uintptr_t OpusSoftwareCodecClose=REBASE(0x1EBBCB0);
            const uintptr_t OpusSoftwareCodecOpenInternal=REBASE(0x1EBB710);
            const uintptr_t OpusSoftwareCodecReceiveFrameInternal=REBASE(0x1EBC0D0);
            const uintptr_t OpusSoftwareCodecReceivePacketInternalPt=REBASE(0x1EBCA70);
            const uintptr_t OpusSoftwareCodecSendFrameInternalPtsLld=REBASE(0x1EBC8D0);
            const uintptr_t OpusSoftwareCodecSendPacketInternalPts=REBASE(0x1EBBEE0);
            const uintptr_t RvDebugMemoryNumAllocations=REBASE(0x1E7EB00);
            const uintptr_t RvFlvFormatWritePacketPtsF=REBASE(0x1EACED0);
            const uintptr_t RvSchedulerServiceConnectScoped=REBASE(0x5276490);
            const uintptr_t RvSchedulerServiceRunAsyncThread=REBASE(0x5275D70);
            const uintptr_t RvSchedulerServiceSchedule=REBASE(0x52763B0);
            const uintptr_t RvSubsystemRvDeviceSystem=REBASE(0x37EEC80);
            const uintptr_t SizeCmcdVisibilityHeaderTooLarge=REBASE(0x1E7CE30);
            const uintptr_t VorbisSoftwareCodecClose=REBASE(0x1EBEB00);
            const uintptr_t VorbisSoftwareCodecOpenInternal=REBASE(0x1EBE380);
            const uintptr_t VorbisSoftwareCodecReceiveFrameInternal=REBASE(0x1EBF0B0);
            const uintptr_t VorbisSoftwareCodecReceivePacketInternal=REBASE(0x1EBF8C0);
            const uintptr_t VorbisSoftwareCodecSendFrameInternalEOF=REBASE(0x1EBF560);
            const uintptr_t VorbisSoftwareCodecSendFrameInternalPts=REBASE(0x1EBF640);
            const uintptr_t VorbisSoftwareCodecSendPacketInternalPts=REBASE(0x1EBED20);
            const uintptr_t VpxCodecEncConfigSetFailed=REBASE(0x1EB7190);
            const uintptr_t VpxSoftwareCodecClose=REBASE(0x1EB6FF0);
            const uintptr_t VpxSoftwareCodecFlush=REBASE(0x1EBA740);
            const uintptr_t VpxSoftwareCodecGetVpxImageSupportNonCon=REBASE(0x1EB8BE0);
            const uintptr_t VpxSoftwareCodecOpenInternal=REBASE(0x1EB5E30);
            const uintptr_t VpxSoftwareCodecReceiveFrameInternalPts=REBASE(0x1EB7BF0);
            const uintptr_t VpxSoftwareCodecReceivePacketInternalPts=REBASE(0x1EBA4D0);
            const uintptr_t VpxSoftwareCodecSendFrameInternalPts=REBASE(0x1EB8EC0);
            const uintptr_t VpxSoftwareCodecSendPacketInternalEOF=REBASE(0x1EB7330);
            const uintptr_t WebmInputFormatOpen=REBASE(0x1E911D0);
            const uintptr_t WebmInputFormatSeek=REBASE(0x1E925A0);
        }
        namespace RVideoWarning
        {
            const uintptr_t UnknownTag=REBASE(0x1E696B0);
        }
        namespace RaknetJoinOrDisconnectRequest
        {
            const uintptr_t RakNetReceivingPacket=REBASE(0x2868B60);
        }
        namespace RbxFiberSpanProcessor
        {
            const uintptr_t SpanQueueFullDroppingSpan=REBASE(0x4DEB530);
        }
        namespace RbxOtlpHttpExporter
        {
            const uintptr_t ExceptionDuringOTLPExport=REBASE(0x600EC10);
            const uintptr_t OTLPExportConcurrencyCapDroppingBatch=REBASE(0x4DEC300);
        }
        namespace RbxStorage
        {
            const uintptr_t ClientStorageInterfaceGetRejectedStorage=REBASE(0x4469E60);
            const uintptr_t ClientStorageInterfaceRemoveRejectedStor=REBASE(0x446A220);
            const uintptr_t ClientStorageInterfaceSetRejectedValueSi=REBASE(0x4469A60);
            const uintptr_t ErrorParsingFileNamePidPath=REBASE(0x5F390F0);
            const uintptr_t FailedGetAppDataDirectory=REBASE(0x5F38E60);
            const uintptr_t FailedGetAvailableDiskSpacePath=REBASE(0x2731EB0);
            const uintptr_t FailedGetCacheDirectory=REBASE(0x5F38F70);
            const uintptr_t FailedGetFileSizePath=REBASE(0x2731BD0);
            const uintptr_t FailedGetOldCacheDirectory=REBASE(0x5F38D50);
            const uintptr_t FailedWriteIdFile=REBASE(0x271C550);
            const uintptr_t FileCacheCleanupCompletedSizeBeforeBytes=REBASE(0x2745BF0);
            const uintptr_t FileCacheClearERRORFailedCreateSubdirect=REBASE(0x273D210);
            const uintptr_t FileCacheClearPATH=REBASE(0x2745370);
            const uintptr_t FileCacheCreateFileDirectoriesERRORFaile=REBASE(0x273EEB0);
            const uintptr_t FileCacheFileCacheNAMEPATHTEMPPERM=REBASE(0x273E750);
            const uintptr_t FileCacheFileCacheNamePath=REBASE(0x273EC90);
            const uintptr_t FileCacheGetERRORFailedAllocateString=REBASE(0x2740E90);
            const uintptr_t FileCacheGetPATHBUFFER=REBASE(0x2741350);
            const uintptr_t FileCacheGetPATHMMAP=REBASE(0x2740BD0);
            const uintptr_t FileCacheKeysERRORKeysStorageCategorySup=REBASE(0x2748250);
            const uintptr_t FileCacheReloadStatsSKIPLastReloadWas=REBASE(0x2748480);
            const uintptr_t FileCacheRemoveERRORFailedRemoveFile=REBASE(0x2744DE0);
            const uintptr_t FileCacheRenameFileFailedRenameFileFirst=REBASE(0x2741B60);
            const uintptr_t FileCacheSelfTestERRORTestValueMismatch=REBASE(0x2746300);
            const uintptr_t FileCacheSetERRORFileSizeMismatch=REBASE(0x2742F80);
            const uintptr_t FileCacheSetFromFileERRORFailedGetFile=REBASE(0x2742780);
            const uintptr_t FinishedRemovingTempFilesSubdirectory02x=REBASE(0x2732BF0);
            const uintptr_t GetSubDirFileNamesERRORFailedRemoveInval=REBASE(0x2746F40);
            const uintptr_t GetSubDirSizeERRORFailedRemoveInvalidFil=REBASE(0x273DAF0);
            const uintptr_t MemCacheCleanupFAILEDTotalSizeCapacity=REBASE(0x274AC50);
            const uintptr_t MemCacheGetInternalFoundInL1=REBASE(0x27493A0);
            const uintptr_t MemCacheMemCachePending=REBASE(0x27491A0);
            const uintptr_t MemCacheProcessPendingWritesPENDINGRECOR=REBASE(0x274B730);
            const uintptr_t MemCacheProcessPendingWritesPendingTotal=REBASE(0x274B750);
            const uintptr_t MemCacheRemove=REBASE(0x274A6F0);
            const uintptr_t MemCacheSetERRORValueNull=REBASE(0x2749790);
            const uintptr_t MemCacheSetFromFileERRORFailedReadFile=REBASE(0x2749D30);
            const uintptr_t MockStorageInterfaceSetFromFileFailedRem=REBASE(0x27349B0);
            const uintptr_t NullCacheSetFromFileFailedRemoveFileErro=REBASE(0x27310A0);
            const uintptr_t OldCacheDirectoryPathDoesExist=REBASE(0x2733130);
            const uintptr_t RbxStorageCleanupOnceSTARTCurrentSizeAva=REBASE(0x2719820);
            const uintptr_t RbxStorageCleanupThreadFuncAvailableSpac=REBASE(0x2719000);
            const uintptr_t RbxStorageCleanupThreadFuncSKIPInitialDe=REBASE(0x2718FF0);
            const uintptr_t RbxStorageCleanupThreadStdStopped=REBASE(0x271F130);
            const uintptr_t RbxStorageCleanupThreadStopped=REBASE(0x271EED0);
            const uintptr_t RbxStorageDestroyedFlagDestructorCalledS=REBASE(0x6140E50);
            const uintptr_t RbxStorageFillCacheDONEItemsElapsed3f=REBASE(0x271CA60);
            const uintptr_t RbxStorageInitDONENameDuration3f=REBASE(0x2713730);
            const uintptr_t RbxStorageInitFailedInitializeFileCache=REBASE(0x2713220);
            const uintptr_t RbxStorageInitINITUserAvailableDiskSpace=REBASE(0x2715CB0);
            const uintptr_t RbxStorageRbxStorageDroppingCacheDueToo=REBASE(0x2712760);
            const uintptr_t RbxStorageRollingTelemetryTRIGGERED=REBASE(0x271AD70);
            const uintptr_t RemoveTempFilesERROR=REBASE(0x273C820);
            const uintptr_t RemoveTempFilesERRORDirectory=REBASE(0x273C840);
            const uintptr_t RemovingLargeDbFileDbSize=REBASE(0x27185C0);
            const uintptr_t RemovingLargeWalFileDbSize=REBASE(0x27185B0);
            const uintptr_t RemovingTempFilesSubdirectory02xFree=REBASE(0x2732C10);
            const uintptr_t SafeIntToStorageCategoryInvalidCategory=REBASE(0x272FE10);
            const uintptr_t SqliteCacheCleanupBadPolicy=REBASE(0x272AD90);
            const uintptr_t SqliteCacheCleanupPolicyPriorityScalarAT=REBASE(0x272B030);
            const uintptr_t SqliteCacheContainsFailedPrepareStatemen=REBASE(0x2726A60);
            const uintptr_t SqliteCacheEvictFailedPrepareStatement=REBASE(0x2728390);
            const uintptr_t SqliteCacheEvictKeyKeySizeExternalHits=REBASE(0x2728050);
            const uintptr_t SqliteCacheGetRollingStatsFailedPrepareS=REBASE(0x272BBF0);
            const uintptr_t SqliteCacheGetSizeMismatchBetweenDb=REBASE(0x2724720);
            const uintptr_t SqliteCacheIncrementOpenCountDatabaseOpe=REBASE(0x272A5C0);
            const uintptr_t SqliteCacheIncrementOpenCountFailedIncre=REBASE(0x272A5A0);
            const uintptr_t SqliteCacheKeysExternalFailedCreateIndex=REBASE(0x272D130);
            const uintptr_t SqliteCacheProcessHitListEMPTY=REBASE(0x272E500);
            const uintptr_t SqliteCacheProcessHitListSizeGreaterThan=REBASE(0x272E4F0);
            const uintptr_t SqliteCacheRemoveCategoryElapsed3fMs=REBASE(0x2727710);
            const uintptr_t SqliteCacheRemoveExternalKeysElapsed3f=REBASE(0x2727720);
            const uintptr_t SqliteCacheRemoveFailedDeleteKey=REBASE(0x27272C0);
            const uintptr_t SqliteCacheSelfTestDatabaseOpen=REBASE(0x27293E0);
            const uintptr_t SqliteCacheSelfTestValueMismatchExpected=REBASE(0x27293C0);
            const uintptr_t SqliteCacheSetFailedInsertMetadataInto=REBASE(0x2726070);
            const uintptr_t SqliteCacheSetFailedPrepareStatement=REBASE(0x27264F0);
            const uintptr_t SqliteCacheSetFromFileFailedInsertMetada=REBASE(0x27257B0);
            const uintptr_t SqliteCacheSqliteCacheCreateTableFailedB=REBASE(0x2723150);
            const uintptr_t SqliteCacheSqliteCacheGood=REBASE(0x2724230);
            const uintptr_t SqliteCacheSqliteCacheMedianSizeNumAsset=REBASE(0x27241F0);
            const uintptr_t StorageInterfaceRemoveCategoryCountDurat=REBASE(0x27306D0);
            const uintptr_t TelemetryCacheCreatedWithoutStatsReporte=REBASE(0x271F590);
            const uintptr_t TelemetryCacheGetBufferInternalOffsetArt=REBASE(0x27208B0);
            const uintptr_t TelemetryCacheGetInternalArtificiallySlo=REBASE(0x271FA80);
            const uintptr_t UtilsCleanUpSessionScopedDataSafeSkipOrp=REBASE(0x2733BB0);
        }
        namespace RbxTelemetryBatch
        {
            const uintptr_t ReportingBatchReports=REBASE(0x2ED5B90);
        }
        namespace RbxTransportChannelTracker
        {
            const uintptr_t DiscardingExpiredFragmentDatagramChannel=REBASE(0x22244C0);
            const uintptr_t FragmentIDAlreadyExistsPossibleDuplicate=REBASE(0x2225680);
            const uintptr_t ReceivedACKUnknownFragmentId=REBASE(0x2225BF0);
            const uintptr_t UnreliableFragmentHeaderOffsetExtendsPas=REBASE(0x2232F60);
            const uintptr_t UnreliableReassemblyBudgetExceededBytesD=REBASE(0x2224260);
        }
        namespace RbxTransportClientLog
        {
            const uintptr_t DisconnectCalledButWasConnected=REBASE(0x5ACCE70);
            const uintptr_t FailedStartBaseClientConfiguration=REBASE(0x5ACA490);
            const uintptr_t MessageQueuedChannelYetOpenQueueSize=REBASE(0x5ACA850);
            const uintptr_t RbxTransportClientConnectionClosed=REBASE(0x5ACBFD0);
            const uintptr_t RbxTransportClientDisconnectedServerReas=REBASE(0x5ACCEB0);
            const uintptr_t RbxTransportClientFailedEstablishConnect=REBASE(0x5ACC6D0);
            const uintptr_t RbxTransportClientMessageSent=REBASE(0x5ACA9F0);
        }
        namespace RbxTransportControlNetStreams
        {
            const uintptr_t InvalidOpenUnreliableChannelControlAppli=REBASE(0x22804C0);
            const uintptr_t InvalidOpenUnreliableChannelControlWireI=REBASE(0x22803B0);
        }
        namespace RbxTransportDummyClient
        {
            const uintptr_t CannotStartTimeSyncConnectedServer=REBASE(0x48C11E0);
            const uintptr_t DisconnectedServerReason=REBASE(0x48BF850);
            const uintptr_t FailedEstablishConnectionServerReason=REBASE(0x48BD820);
            const uintptr_t FailedSendTimeSyncRequest=REBASE(0x48C18C0);
            const uintptr_t PerformanceTestDisabledBuildConfiguratio=REBASE(0x48C2850);
            const uintptr_t PingThreadExiting=REBASE(0x48C0850);
            const uintptr_t ReceivedNonPerformanceMessagePerformance=REBASE(0x48C0F60);
            const uintptr_t ReceivedNonPingMessagePingChannel=REBASE(0x48C0BB0);
            const uintptr_t StartedPingThreadIntervalMsPayload=REBASE(0x48BFCC0);
            const uintptr_t TimeSyncSkippingUpdateNonMonotonicReceiv=REBASE(0x48C1DB0);
            const uintptr_t UpdateMonotonicClockDifferentialFunction=REBASE(0x48C11D0);
        }
        namespace RbxTransportDummyServer
        {
            const uintptr_t ServerStoppedReason=REBASE(0x48C2F80);
        }
        namespace RbxTransportIntegration
        {
            const uintptr_t AssigningCapabilitiesReplicator=REBASE(0x47AEBC0);
            const uintptr_t ClientConnectingPort=REBASE(0x3B03200);
            const uintptr_t ReceivedInvalidRbxTransportConnectionEve=REBASE(0x473A9E0);
            const uintptr_t SendEarlyAuthDataFailedBecauseEarlyAuthD=REBASE(0x4792DE0);
        }
        namespace RbxTransportIoLibContext
        {
            const uintptr_t RbxTransportIOBackendChosen=REBASE(0x21D1BA0);
        }
        namespace RbxTransportNgtcp2
        {
            const uintptr_t ConnSeqNgtcp2=REBASE(0x2207810);
        }
        namespace RbxTransportQuicConnection
        {
            const uintptr_t ConnSeqCALLBACKAckDatagramCbDatagramId=REBASE(0x22131A0);
            const uintptr_t ConnSeqCALLBACKAckedStreamDataOffsetCbSt=REBASE(0x2211490);
            const uintptr_t ConnSeqCALLBACKExtendMaxLocalStreamsBidi=REBASE(0x2213600);
            const uintptr_t ConnSeqCALLBACKExtendMaxLocalStreamsUniC=REBASE(0x2213710);
            const uintptr_t ConnSeqCALLBACKExtendMaxStreamDataCbStre=REBASE(0x2212540);
            const uintptr_t ConnSeqCALLBACKGetNewConnectionIdCbNewCo=REBASE(0x2211020);
            const uintptr_t ConnSeqCALLBACKHandshakeConfirmedCb=REBASE(0x2212CA0);
            const uintptr_t ConnSeqCALLBACKLostDatagramCbDatagramId=REBASE(0x22132F0);
            const uintptr_t ConnSeqCALLBACKRecvDatagramCbDatalen=REBASE(0x2212F60);
            const uintptr_t ConnSeqCALLBACKRecvRxKeyCbLevel=REBASE(0x2212780);
            const uintptr_t ConnSeqCALLBACKRecvStreamDataCbUnknownSt=REBASE(0x2210920);
            const uintptr_t ConnSeqCALLBACKRemoteStreamOpenCbStreamI=REBASE(0x2211750);
            const uintptr_t ConnSeqCALLBACKRemoveConnectionIdCbCid=REBASE(0x2211320);
            const uintptr_t ConnSeqCALLBACKStatelessResetCb=REBASE(0x2213450);
            const uintptr_t ConnSeqCALLBACKStreamCloseCbStreamId=REBASE(0x2211BB0);
            const uintptr_t ConnSeqCALLBACKStreamResetCbStreamIdFina=REBASE(0x2212270);
            const uintptr_t ConnSeqCALLBACKTlsEarlyDataRejectedCb=REBASE(0x2213A20);
            const uintptr_t ConnSeqCALLBACKVersionNegotiationCb=REBASE(0x22138F0);
            const uintptr_t ConnSeqCouldSetSendBufferSize=REBASE(0x2214510);
            const uintptr_t ConnSeqInvokeNgtcp2ReadPktSizeRc=REBASE(0x220B490);
            const uintptr_t ConnSeqOnConnectionTimerHandshakeTimeout=REBASE(0x220E350);
            const uintptr_t ConnSeqProcessPendingTxTransientErrorAwa=REBASE(0x22158A0);
            const uintptr_t ConnSeqQuicClientConnectionInitializeLoc=REBASE(0x2215D70);
            const uintptr_t ConnSeqQuicServerConnectionCloseRemoteAd=REBASE(0x22172F0);
            const uintptr_t ConnSeqQuicServerConnectionReplacedIniti=REBASE(0x2219460);
            const uintptr_t ConnSeqQuicServerConnectionSrcConnIdOrig=REBASE(0x2216BF0);
            const uintptr_t ConnSeqRejectingQUICConnectionInitialTLS=REBASE(0x2217840);
            const uintptr_t ConnSeqReportPendingRecvDataReadBytesPen=REBASE(0x2210290);
            const uintptr_t ConnSeqRetrySendIfNeededScheduleSendFail=REBASE(0x220C930);
            const uintptr_t ConnSeqSendCurrentPacketWithRetrySchedul=REBASE(0x220DE30);
            const uintptr_t ConnSeqStartReadingStreamStreamId=REBASE(0x2209FE0);
            const uintptr_t ConnSeqStopReadingStreamStreamId=REBASE(0x220A1E0);
            const uintptr_t ConnSeqUpdateConnectionTimerDelayUsRound=REBASE(0x220E100);
            const uintptr_t SendPendingDataDroppingOversizedDatagram=REBASE(0x220F4C0);
        }
        namespace RbxTransportQuicPacker
        {
            const uintptr_t Ngtcp2ConnWritevDatagramDgIdTotalDataSiz=REBASE(0x22371D0);
            const uintptr_t Ngtcp2ConnWritevStreamStreamIdTotalDataS=REBASE(0x2237580);
        }
        namespace RbxTransportQuicPacketSender
        {
            const uintptr_t PacketSendSchedulerTrySendTxQueueFull=REBASE(0x2229930);
            const uintptr_t UDPDatagramTXQueueFlushSent=REBASE(0x2229F00);
        }
        namespace RbxTransportQuicServerSocket
        {
            const uintptr_t CouldSetDFBitServerSocket=REBASE(0x221AD30);
            const uintptr_t QuicServerSocketOnHandshakeDoneHandshake=REBASE(0x221D940);
            const uintptr_t QuicServerSocketProcessUdpPacketInitialP=REBASE(0x221C1E0);
            const uintptr_t QuicServerSocketSendRetryPacketClientAdd=REBASE(0x221D0F0);
            const uintptr_t QuicServerSocketStartAccepting=REBASE(0x221B530);
            const uintptr_t QuicServerSocketTokenRetrySendingRetry=REBASE(0x221BA60);
            const uintptr_t QuicUdpChannelOnRecvPacketSize=REBASE(0x2205FA0);
            const uintptr_t QuicUdpChannelOnRecvRecvErrorRestarting=REBASE(0x2205FB0);
        }
        namespace RbxTransportRnaExp
        {
            const uintptr_t CreatingConnection=REBASE(0x2153F10);
            const uintptr_t CreatingListener=REBASE(0x2154640);
            const uintptr_t FailedStartIOEventLoopThread=REBASE(0x21535B0);
            const uintptr_t RefusingCreateConnectionReservedApplicat=REBASE(0x2153A10);
            const uintptr_t RefusingCreateListenerReservedApplicatio=REBASE(0x2153BC0);
            const uintptr_t SharedConnectionRegistryTeardownComplete=REBASE(0x21567C0);
        }
        namespace RbxTransportRnaExpConnection
        {
            const uintptr_t AbortFromEventLoop=REBASE(0x2160130);
            const uintptr_t ChannelInitializedYet=REBASE(0x2166450);
            const uintptr_t CloseCompletedReportingCompletion=REBASE(0x2177DF0);
            const uintptr_t CloseReceiveChannelChannelIdReason=REBASE(0x2162D40);
            const uintptr_t CloseSendChannelAppChannelIdReason=REBASE(0x21629C0);
            const uintptr_t ClosingAlreadyClosedConnection=REBASE(0x21647F0);
            const uintptr_t CompatControlReceivedOpenUnreliableChann=REBASE(0x2163BE0);
            const uintptr_t ConnectionClosedWithoutAnyPathRecording=REBASE(0x215E220);
            const uintptr_t ConnectionCompletedSuccessfully=REBASE(0x216EE90);
            const uintptr_t ConnectionWasClosedAsynchronouslyReporti=REBASE(0x2164B40);
            const uintptr_t ErrorDelayedOpeningChannelApp=REBASE(0x216E740);
            const uintptr_t ErrorOpeningChannelApp=REBASE(0x21610B0);
            const uintptr_t ErrorResolvingAddr=REBASE(0x216D130);
            const uintptr_t ExportKeyingMaterialReturnedNulloptLiveC=REBASE(0x218FB00);
            const uintptr_t FailedInitializeRUPPWTConnectionInit=REBASE(0x21703F0);
            const uintptr_t FailedInitializeRuppConnectionInitReturn=REBASE(0x216F810);
            const uintptr_t FailedSendOpenUnreliableChannelControlMe=REBASE(0x2188740);
            const uintptr_t GetCapabilities=REBASE(0x21606B0);
            const uintptr_t GetChannelStats=REBASE(0x21608D0);
            const uintptr_t GetConnectionEvents=REBASE(0x2184570);
            const uintptr_t GetConnectionStats=REBASE(0x215EA90);
            const uintptr_t HandshakeCompleteScidDcid=REBASE(0x21656F0);
            const uintptr_t OnDatagramReceivedReceiveBytesFailedWire=REBASE(0x216B8D0);
            const uintptr_t OnRecvCompletionStreamIdChannelOpened=REBASE(0x2168EE0);
            const uintptr_t OnRecvCompletionStreamIdChannelRecvBytes=REBASE(0x216A210);
            const uintptr_t OpeningSendChannelAppChannelIdReliabilit=REBASE(0x2160B90);
            const uintptr_t QUICConnectionClosedReason=REBASE(0x2165BE0);
            const uintptr_t QUICStreamAcceptedResult=REBASE(0x2165260);
            const uintptr_t QUICStreamAckedDataStreamIdOffset=REBASE(0x2166910);
            const uintptr_t QUICStreamClosedStreamIdAppErrorCode=REBASE(0x2166110);
            const uintptr_t ReceivePopChannelIdBytesReadBytesRemaini=REBASE(0x2185C30);
            const uintptr_t ReceivePopMaxBytesChannelIdMaxBytesBytes=REBASE(0x21865A0);
            const uintptr_t ReceivedTooLargeChannelIdValueStreamId=REBASE(0x216A4C0);
            const uintptr_t RefusingDuplicateRequestOpenUnreliableCh=REBASE(0x2163220);
            const uintptr_t RefusingRequestOpenUnreliableChannelApp=REBASE(0x21896D0);
            const uintptr_t RejectingSendChannelOpenFailedConnection=REBASE(0x216DF70);
            const uintptr_t ResumeStreamRecvChannelStillBackpressure=REBASE(0x2168A30);
            const uintptr_t RtcAppConnectionMissingReceiveQueueAppCh=REBASE(0x2187150);
            const uintptr_t SendChannelIdSize=REBASE(0x21619A0);
            const uintptr_t UnreliableDatagramDroppedRecvQueueFull=REBASE(0x2187FB0);
            const uintptr_t UnreliableRecvChannelCreatedWireId=REBASE(0x2163210);
            const uintptr_t UnreliableSendChannelOpenedWireId=REBASE(0x216ADB0);
            const uintptr_t WebTransportClientWasInitializedProperly=REBASE(0x2170710);
            const uintptr_t WebTransportSessionCompleted=REBASE(0x2170D90);
        }
        namespace RbxTransportRnaExpListener
        {
            const uintptr_t AcceptedNewH3ConnectionALPN=REBASE(0x219E790);
            const uintptr_t BoundPortRangeAttempts=REBASE(0x21993C0);
            const uintptr_t ClosingWTSessionMissingValidCapabilities=REBASE(0x219EAD0);
            const uintptr_t ConnectionAcceptError=REBASE(0x219C2A0);
            const uintptr_t ErrorStartingListenerShardPort=REBASE(0x217F2F0);
            const uintptr_t FailedGenerateReplacementRtcIoWebTranspo=REBASE(0x2197020);
            const uintptr_t ListenerRegisteredAppIgnoringAppOpen=REBASE(0x219D710);
            const uintptr_t OnAcceptedConnClosedPendingErasingPendin=REBASE(0x219DB60);
            const uintptr_t OnAcceptedConnCompatConnectedFiringNewCo=REBASE(0x219DE60);
            const uintptr_t OnAcceptedConnectionPendingConnsClaimedC=REBASE(0x219C9E0);
            const uintptr_t PrepareDirectServerReturnRespondingSrcIP=REBASE(0x219E030);
            const uintptr_t ReadPktInfoSocketOptionSupportedCurrentP=REBASE(0x219BD70);
            const uintptr_t RtcIoCertificateRotationInitializedCertH=REBASE(0x2196190);
            const uintptr_t RtcIoCertificateRotationPendingCertHashe=REBASE(0x2197090);
            const uintptr_t RtcIoCertificateRotationPromotedCertHash=REBASE(0x2197340);
        }
        namespace RbxTransportRnaExpSlot
        {
            const uintptr_t RtcIoSharedConnectionSlotFailedInitializ=REBASE(0x217FEB0);
        }
        namespace RbxTransportRnaPrefixProcessor
        {
            const uintptr_t PrepareTxUdpAttrsRespondingSrcIPPKTINFOD=REBASE(0x2193D90);
            const uintptr_t RtcIoServerPrefixProcessorDroppedInitial=REBASE(0x2194790);
        }
        namespace RbxTransportStunPopProbe
        {
            const uintptr_t Bind00000=REBASE(0x4A7A8F0);
            const uintptr_t BurstSentFailedFirstError=REBASE(0x4A7C130);
            const uintptr_t BurstSkippedTickMsPastIts=REBASE(0x4A7B250);
            const uintptr_t TURNSeedPoPsCarriedFresh=REBASE(0x4A7A210);
            const uintptr_t WarmUpCompleteAfterBurstsParking=REBASE(0x4A7B460);
        }
        namespace RbxTransportTimepointTracker
        {
            const uintptr_t QUICHandshakeRetryEventButCLIENT=REBASE(0x2270A10);
            const uintptr_t QUICHandshakeTrackerDebugInfo=REBASE(0x226F4A0);
            const uintptr_t TimepointTrackerGetLastEventEnumCalledEv=REBASE(0x2172E10);
        }
        namespace RbxTransportTls
        {
            const uintptr_t AddCustomExtCbCalledUnknown=REBASE(0x222C860);
            const uintptr_t AddServerSessionCustomExtCb=REBASE(0x222CDB0);
            const uintptr_t CalledGetCipherNameBeforeSSLInitialized=REBASE(0x22314D0);
            const uintptr_t CannotApplyCryptoIdentityNullSSL=REBASE(0x222EE20);
            const uintptr_t FailedCreatePrivateKey=REBASE(0x2230E10);
            const uintptr_t FailedCreatePublicKey=REBASE(0x222C180);
            const uintptr_t FailedDerivePublicKeyPrivateKey=REBASE(0x222C360);
            const uintptr_t InvalidPrivateKeySizeExpectedGot=REBASE(0x222BF80);
            const uintptr_t InvalidPublicKeySizeExpectedGot=REBASE(0x222C170);
            const uintptr_t LoadingTrustedCACertificate=REBASE(0x222D670);
            const uintptr_t Ngtcp2CryptoOsslConfigureClientSession=REBASE(0x22308B0);
            const uintptr_t Ngtcp2CryptoOsslInitFailed=REBASE(0x22305F0);
            const uintptr_t RejectingClientHelloFailedApplyServerCry=REBASE(0x222F480);
            const uintptr_t RejectingClientHelloTLSServerCryptoIdent=REBASE(0x222F530);
            const uintptr_t SSLCTXDaneEnableFailed=REBASE(0x222D8A0);
            const uintptr_t SSLCTXLoadVerifyLocations=REBASE(0x222D6F0);
            const uintptr_t SSLCTXNewClient=REBASE(0x222D550);
            const uintptr_t SSLCTXSet1ServerCertType=REBASE(0x222EBB0);
            const uintptr_t SSLCTXSetMaxProtoVersion=REBASE(0x222D370);
            const uintptr_t SSLCTXSetMinProtoVersion=REBASE(0x222D290);
            const uintptr_t SSLSet1ClientCertTypeFailed=REBASE(0x22309E0);
            const uintptr_t SSLSetAlpnProtosFailed=REBASE(0x2231C00);
            const uintptr_t ServerCertificatePEMOverrideDoesContain=REBASE(0x222DD10);
            const uintptr_t ServerTLSSessionCustomExtensionParse=REBASE(0x222CFE0);
            const uintptr_t TLSCustomExtensionParseCallbackConfigure=REBASE(0x222CB37);
            const uintptr_t TLSServerMethod=REBASE(0x222D9D0);
        }
        namespace RbxmFileManager
        {
            const uintptr_t ErrorDecompressedSizeDoesMatchChunk=REBASE(0x1699790);
            const uintptr_t ErrorFailedReadChunkHeaderBeforeReach=REBASE(0x1699A70);
            const uintptr_t FailedCreateDirectoryDirectoryAlreadyExi=REBASE(0x169C850);
            const uintptr_t FailedCreateDirectoryErrorCode=REBASE(0x169C840);
            const uintptr_t MemoryAllocationFailed=REBASE(0x5EF3BC0);
            const uintptr_t RBXMChecksumCacheFileChecksumHave=REBASE(0x1698390);
            const uintptr_t RBXMFinishedWritingChecksumCachedChecksu=REBASE(0x169B3B0);
            const uintptr_t ReadingCachedRBXMFile=REBASE(0x169B730);
            const uintptr_t RunTransformRbxmToCacheJobsStart=REBASE(0x169C2B0);
            const uintptr_t StartSavingRBXMDecompressedChunksContent=REBASE(0x169BCA0);
            const uintptr_t UnknownError=REBASE(0x5EF3D10);
        }
        namespace RccRealtimeRelay
        {
            const uintptr_t BackendMessageReceivedLength=REBASE(0x48FE790);
            const uintptr_t ConnectToNamespaceConnectingNamespace=REBASE(0x48FC340);
            const uintptr_t CouldParseDetailType=REBASE(0x5FF44B0);
            const uintptr_t ParseMessageMessageFieldMissingFallingBa=REBASE(0x48FCDB0);
            const uintptr_t RccRealtimeRelayCreateCalledHasValidator=REBASE(0x48FAFC0);
            const uintptr_t RccRealtimeRelayCreatedReadySignalConnec=REBASE(0x48FB280);
            const uintptr_t RccRealtimeRelayDestroyed=REBASE(0x48FE120);
            const uintptr_t RccRealtimeRelayOnConnectionStateChanged=REBASE(0x48FBF50);
            const uintptr_t RccRealtimeRelayOnMessageParsedNamespace=REBASE(0x48FB460);
            const uintptr_t RccRealtimeRelayParseMessageException=REBASE(0x5FF45C0);
            const uintptr_t RccRealtimeRelayParseMessageUnknownExcep=REBASE(0x5FF46C0);
            const uintptr_t RccRealtimeRelaySetupBackendSubscription=REBASE(0x48FC690);
        }
        namespace RccSoundLength
        {
            const uintptr_t SoundConstructGetSoundLengthUrlAssetIdEm=REBASE(0x450A650);
            const uintptr_t SoundServiceLoadSoundLengthForServerLeng=REBASE(0x4508640);
            const uintptr_t SoundServiceLoadSoundLengthForServerUnex=REBASE(0x4508B30);
            const uintptr_t SoundServiceParseSoundLengthResponseLeng=REBASE(0x4509A30);
        }
        namespace RealtimeCoreNotification
        {
            const uintptr_t CannotSubscribeTopicBecauseRealtimeConne=REBASE(0x48F8050);
            const uintptr_t DurableReplayUpdatingSequenceNumbersName=REBASE(0x490CA50);
            const uintptr_t FailedSubscribeTopic=REBASE(0x48F8980);
            const uintptr_t FailedUnsubscribeTopic=REBASE(0x48F97A0);
            const uintptr_t RealtimeNetworkHandlerReset=REBASE(0x48F7F40);
            const uintptr_t RealtimeNotificationEventSizeHasUnsuppor=REBASE(0x48F3B40);
            const uintptr_t RealtimeReconnectingMessage=REBASE(0x48F72C0);
            const uintptr_t RealtimeStartingConnection=REBASE(0x48F7C00);
            const uintptr_t RealtimeStoppingConnection=REBASE(0x48F7EA0);
            const uintptr_t RealtimeSubscriptionStatusRecognized=REBASE(0x48F6410);
            const uintptr_t RealtimeTopicNotificationEventSizeHas=REBASE(0x48F4570);
            const uintptr_t SeqNumMapAfterSignalRNotificationNs=REBASE(0x48F3310);
            const uintptr_t TailLossPollingLiveNotificationOrder=REBASE(0x490D400);
            const uintptr_t TailLossPollingPollTimerFired=REBASE(0x490E1E0);
            const uintptr_t TailLossPollingReplayReturnedNotificatio=REBASE(0x490E410);
            const uintptr_t TailLossPollingStartingBaseInterval=REBASE(0x4905770);
            const uintptr_t TailLossPollingStopping=REBASE(0x490DAA0);
            const uintptr_t TailLossPollingTargetsAccumulatedDuring=REBASE(0x490E400);
            const uintptr_t TailLossRetryReEnqueuedNs=REBASE(0x490DC20);
            const uintptr_t TailLossTargetSatisfiedNsTargetSeqNum=REBASE(0x49084D0);
        }
        namespace RealtimeMedia
        {
            const uintptr_t AlreadyOpened=REBASE(0x3CB06B0);
            const uintptr_t AppHiddenSkipAudioPacket=REBASE(0x3CBE340);
            const uintptr_t AppHiddenSkipVideoPacket=REBASE(0x3CBD860);
            const uintptr_t ConnectAsyncFailedCreateRvInputFormatErr=REBASE(0x3CB6060);
            const uintptr_t Disconnect=REBASE(0x3CB9AC0);
            const uintptr_t HandleSetUserSettingExceptionSettingProp=REBASE(0x5FAEC20);
            const uintptr_t HandleSetUserSettingRejectedValuePropert=REBASE(0x3CB2BC0);
            const uintptr_t OnAppHidePausingStreaming=REBASE(0x3CBB980);
            const uintptr_t OnAppUnhideResumingStreaming=REBASE(0x3CBC340);
            const uintptr_t PostOfferAsyncFailed=REBASE(0x3CB83E0);
            const uintptr_t RenderFramePts=REBASE(0x3CAEF00);
            const uintptr_t StratusEligibilityEligibleFlagPlaceIdDev=REBASE(0x3D31610);
        }
        namespace RealtimeMediaTelemetry
        {
            const uintptr_t FlowMilestoneFailureElapsedMs=REBASE(0x3D1D1D0);
            const uintptr_t PeriodicStatsThreadStartedIntervalS=REBASE(0x3D1CF10);
            const uintptr_t SessionStatsDurationMsReasonVideo=REBASE(0x3D21CB0);
            const uintptr_t SessionStopResultElapsedMs=REBASE(0x3D1DD00);
            const uintptr_t StratusSessionQualityRecordedRttMsJitter=REBASE(0x3D19DF0);
            const uintptr_t VideoRTPPacketsRecvLostJitter=REBASE(0x3D1E530);
        }
        namespace RealtimeProtocol
        {
            const uintptr_t AppResume=REBASE(0x50E5180);
            const uintptr_t AppStop=REBASE(0x50E52A0);
            const uintptr_t CallEnded=REBASE(0x50E7FE0);
            const uintptr_t CallStarted=REBASE(0x50E5530);
            const uintptr_t CallingActiveDroppingStaleVersion=REBASE(0x50E4E40);
            const uintptr_t DecidedStartRealtime=REBASE(0x50E5DF0);
            const uintptr_t DecidedStopRealtime=REBASE(0x50E77D0);
            const uintptr_t UserLoggedIn=REBASE(0x50E53C0);
            const uintptr_t UserLoggedOut=REBASE(0x4C5EAF0);
        }
        namespace RealtimeReliabilityMeasurement
        {
            const uintptr_t FailedTriggerRealtimeReliabilityMessage=REBASE(0x49100E0);
            const uintptr_t IntialDelayRealtimeReliabilityMeasuremen=REBASE(0x48F7BF0);
            const uintptr_t ReportRealtimeReliabilityMeasurementMess=REBASE(0x4910A20);
            const uintptr_t TriggerNewRealtimeReliabilityMeasurement=REBASE(0x49102C0);
        }
        namespace RecommendationSystem
        {
            const uintptr_t BatchRegistrationEndpointError=REBASE(0x48A2AF0);
            const uintptr_t FailedFetchRecommendationItems=REBASE(0x48A8980);
            const uintptr_t FailedGetItem=REBASE(0x48A1E00);
            const uintptr_t FailedParseRegisterRecommendationItemRes=REBASE(0x489B110);
            const uintptr_t FailedRegisterRecommendationItemsFailedR=REBASE(0x489D280);
            const uintptr_t FailedRemoveItem=REBASE(0x48A22C0);
            const uintptr_t FailedUpdateRecommendationItemsFailedRes=REBASE(0x489DD30);
            const uintptr_t GetRecommendationItemResponse=REBASE(0x48A2070);
            const uintptr_t RemoveRecommendationItemResponse=REBASE(0x48A2530);
            const uintptr_t UpdateItemEndpointError=REBASE(0x48A2740);
        }
        namespace ReconcileChatAccess
        {
            const uintptr_t AMPExperienceChatAvailabilityStatusChang=REBASE(0x308D670);
            const uintptr_t StartingPlayer=REBASE(0x308DF80);
        }
        namespace ReduceMeshDebugLog
        {
            const uintptr_t BluenoiseMeshSamplingDone=REBASE(0x2E5BBC0);
            const uintptr_t StartingBluenoiseMeshSamplingSamples=REBASE(0x2E5BBD0);
            const uintptr_t StartingUniformMeshSamplingSamples=REBASE(0x2E5B8A0);
        }
        namespace RegisterBacktraceReporterCallback
        {
            const uintptr_t RegisteringInferredCrashBacktraceReporte=REBASE(0x4C403B0);
        }
        namespace RenderAdvSkyGroup
        {
            const uintptr_t AdvSkyComputeProcessingComplete=REBASE(0x37C5870);
            const uintptr_t AdvSkyComputeWaitingJobs=REBASE(0x37C5880);
            const uintptr_t AdvSkyCreated=REBASE(0x37C05F0);
            const uintptr_t AdvSkyDestroyed=REBASE(0x37C0F70);
            const uintptr_t AdvSkyKComputeWaitReadyUploadingVB=REBASE(0x37C2EC0);
            const uintptr_t AdvSkyKDirtySkyAllTexturesReady=REBASE(0x37C2ED0);
        }
        namespace RenderEnvMapPBR
        {
            const uintptr_t EnvMapPBRCancelTask=REBASE(0x378EF10);
            const uintptr_t EnvMapPBRIndoor=REBASE(0x3791410);
            const uintptr_t EnvMapPBROutdoor=REBASE(0x37914B0);
            const uintptr_t EnvMapPBRRenderFaceIndoorHelperStep=REBASE(0x37912C0);
            const uintptr_t EnvMapPBRRenderFaceIndoorStep=REBASE(0x3791060);
            const uintptr_t EnvMapPBRRenderFaceStep=REBASE(0x3790420);
            const uintptr_t EnvMapPBRRenderFaceViewportFrameEnvMapSt=REBASE(0x3792F20);
            const uintptr_t EnvMapPBRSpecularConvolutionStep=REBASE(0x3791550);
            const uintptr_t EnvMapPBRSpecularFastConvDownsampleIndoo=REBASE(0x37916B0);
            const uintptr_t EnvMapPBRSpecularFastConvDownsampleOutdo=REBASE(0x3791750);
            const uintptr_t EnvMapPBRSpecularFastConvDownsampleViewp=REBASE(0x37917F0);
            const uintptr_t EnvMapPBRSpecularFastConvIndoorStep=REBASE(0x3791BD0);
            const uintptr_t EnvMapPBRSpecularFastConvOutdoorStep=REBASE(0x3791CA0);
            const uintptr_t EnvMapPBRSpecularFastConvViewportFrameEn=REBASE(0x3791D70);
            const uintptr_t EnvMapPBRViewportFrame=REBASE(0x37931C0);
        }
        namespace RenderFastCluster
        {
            const uintptr_t FastClusterBoundPartBindingConnections=REBASE(0x3A27ED0);
            const uintptr_t FastClusterCreateGridXXFlags=REBASE(0x3991180);
            const uintptr_t FastClusterInvalidateSkeletonInvalidDirt=REBASE(0x399A250);
            const uintptr_t FastClusterPartBindingRequestsAdornmentC=REBASE(0x3A28600);
            const uintptr_t FastClusterPartBindingRequestsCastShadow=REBASE(0x3A284E0);
            const uintptr_t FastClusterPartBindingRequestsCoordinate=REBASE(0x3A28310);
            const uintptr_t FastClusterPartBindingRequestsInvalidate=REBASE(0x3A28280);
            const uintptr_t FastClusterPartBindingRequestsMeshChange=REBASE(0x3A28670);
            const uintptr_t FastClusterPartBindingRequestsSizeChange=REBASE(0x3A283C0);
            const uintptr_t FastClusterPartBindingRequestsTransparen=REBASE(0x3A28460);
            const uintptr_t FastClusterPartChangedSpatialIndexX=REBASE(0x3991950);
            const uintptr_t FastClusterPartSleepingStatic=REBASE(0x3998E60);
            const uintptr_t FastClusterQueueEntityUpdateInvalidateTy=REBASE(0x3991F40);
            const uintptr_t FastClusterSettingProceduralAvatarGroup=REBASE(0x39920A0);
            const uintptr_t FastClusterUnbindPartBindingConnections=REBASE(0x3A28700);
            const uintptr_t FastClusterUseProceduralAvatarSetTrueGro=REBASE(0x3995370);
        }
        namespace RenderInstanceGlob
        {
            const uintptr_t InstanceGlobResizingHandleBuffer=REBASE(0x37CAC10);
            const uintptr_t InstanceGlobResizingMain=REBASE(0x37CB4A0);
        }
        namespace RenderInstancedCluster2
        {
            const uintptr_t Binding0x=REBASE(0x3889C70);
            const uintptr_t Binding0x0xAncestorChangedFlags=REBASE(0x3889EC0);
            const uintptr_t Binding0x0xDies=REBASE(0x3889640);
            const uintptr_t Binding0x0xSpawns=REBASE(0x3888EA0);
            const uintptr_t Binding0x0xTransfer0x0x=REBASE(0x3887DE0);
            const uintptr_t BindingDecal0xSpawns=REBASE(0x3889480);
            const uintptr_t Buffer0xReUploadedInstances=REBASE(0x38846F0);
            const uintptr_t Cluster0xBinding0x0xInvalidated=REBASE(0x38867F0);
            const uintptr_t Cluster0xDies=REBASE(0x3884E00);
            const uintptr_t Cluster0xEntity0xGotMesh=REBASE(0x389F770);
            const uintptr_t Cluster0xIncomingTransfer0x0x=REBASE(0x38858A0);
            const uintptr_t Cluster0xRebuiltEntityListEntries=REBASE(0x3888190);
            const uintptr_t Cluster0xRemove0x0x=REBASE(0x3885680);
            const uintptr_t Cluster0xSpawns=REBASE(0x3884AE0);
            const uintptr_t Cluster0xStillHasEntities=REBASE(0x3884DF0);
            const uintptr_t Entity0xDies=REBASE(0x388A4C0);
            const uintptr_t Entity0xKeyTypeContentid=REBASE(0x388A030);
            const uintptr_t Entity0xPurged=REBASE(0x388B5CF);
            const uintptr_t Entity0xRemoved0x=REBASE(0x388A750);
            const uintptr_t Entity0xSyncingShadowBuffers=REBASE(0x388B870);
            const uintptr_t WARNDeletingNonEmptyEntityBindings=REBASE(0x388A490);
        }
        namespace RenderLightGrid
        {
            const uintptr_t FailedCreateCopyTextureUploaderLightGrid=REBASE(0x39BB980);
            const uintptr_t LightGridChangingLightDirection=REBASE(0x39C5C70);
            const uintptr_t UploadChunkCountExceededPerFrame=REBASE(0x39CA7A0);
            const uintptr_t WaitingLightGridCompletedChunkContexts=REBASE(0x39C7920);
        }
        namespace RenderMeshManager
        {
            const uintptr_t CpGetContentIDCpPrioRequestType=REBASE(0x3865EE0);
            const uintptr_t MeshManagerDecodedLodHxVersion=REBASE(0x3867940);
            const uintptr_t MeshManagerDecodedModelMesh=REBASE(0x38651E0);
            const uintptr_t MeshManagerDecodedStudioCSG=REBASE(0x3864470);
            const uintptr_t MeshManagerEmptyGeomLODsSkipping=REBASE(0x386BB40);
            const uintptr_t MeshManagerGeneratedPartType=REBASE(0x3862FB0);
            const uintptr_t MeshManagerRequestedTFRequested=REBASE(0x3985870);
            const uintptr_t MeshManagerScheduledDecode=REBASE(0x38674B0);
            const uintptr_t MeshManagerStillPendingCanceled=REBASE(0x386ECB0);
            const uintptr_t MeshManagerUploadMsCountSize=REBASE(0x386D740);
        }
        namespace RenderPipeline
        {
            const uintptr_t DecalHelperAddingDecalParent=REBASE(0x3A9B390);
            const uintptr_t FetcherFrontendReroutingPart=REBASE(0x3A88C60);
            const uintptr_t MeshFetcherOnPropertyChanged=REBASE(0x3AA1D80);
            const uintptr_t MeshFetcherOnSpecialMeshPropertyChanged=REBASE(0x3AA32F0);
            const uintptr_t MeshUpdaterHandleUpdate=REBASE(0x3AB2490);
            const uintptr_t MeshUpdaterPartMarkedRemovalRemoving=REBASE(0x3AB2480);
            const uintptr_t RemovingDecal=REBASE(0x3A9BD70);
            const uintptr_t ShapeFetcherAddPart=REBASE(0x3A9C4E0);
            const uintptr_t ShapeFetcherOnPropertyChanged=REBASE(0x3A9D550);
            const uintptr_t ShapeUpdaterAddPart=REBASE(0x3AADD00);
            const uintptr_t ShapeUpdaterRemovePart=REBASE(0x3AAD9F0);
            const uintptr_t ValidSkeletonRootInstance=REBASE(0x3AA8D80);
        }
        namespace RenderTest
        {
            const uintptr_t DeterministicCaptureAlreadyActiveCannotS=REBASE(0x369A4A0);
            const uintptr_t DeterministicCaptureCancelledRequestId=REBASE(0x36C2460);
            const uintptr_t DeterministicCaptureRenderingTestOriginB=REBASE(0x369AC30);
            const uintptr_t DeterministicCaptureSceneStillLoading=REBASE(0x369AC50);
            const uintptr_t DeterministicCaptureStartedRequestIdQual=REBASE(0x369A690);
            const uintptr_t RenderingTestFinished=REBASE(0x36C2860);
            const uintptr_t RenderingTestStarted=REBASE(0x3699DB0);
            const uintptr_t SubmitTestTimeoutPayload=REBASE(0x369C500);
            const uintptr_t TestSceneStillLoading=REBASE(0x369BE40);
            const uintptr_t WaitingMeshContentProviderRequestQueue=REBASE(0x369D290);
            const uintptr_t WaitingTextureManager2StreamingDone100=REBASE(0x369BE30);
        }
        namespace RenderTextureCompositor
        {
            const uintptr_t TCCreateTexture=REBASE(0x37393E0);
            const uintptr_t TCDestroyTexture=REBASE(0x3735A70);
            const uintptr_t TCJobAttachInstance=REBASE(0x37350F0);
            const uintptr_t TCJobDetachInstance=REBASE(0x3735900);
            const uintptr_t TCJobQueueingDownsample=REBASE(0x3735FA0);
            const uintptr_t TCJobQueueingExternalRequest=REBASE(0x3734320);
            const uintptr_t TCJobStartLoadingAssetsPriority=REBASE(0x37365E0);
            const uintptr_t TCJobStorePreviousTextureOrphaned=REBASE(0x3738A70);
            const uintptr_t TCJobTextureBlitWidthFailed=REBASE(0x5F93170);
            const uintptr_t TextureCompositorLayerTextureFailedLoad=REBASE(0x3733010);
        }
        namespace ReplicationDataCaching
        {
            const uintptr_t DiscardingJoinInstanceDueNullLocal=REBASE(0x48260E0);
            const uintptr_t ExpectingInvalidMetaDataBlob=REBASE(0x4828D90);
            const uintptr_t InvalidatingInstanceBlobOffsetLength=REBASE(0x486DBB0);
            const uintptr_t ReplicationDataBlobRequeueInstancesForBl=REBASE(0x486DA10);
            const uintptr_t ReplicationDataCacheFinalizeBlob=REBASE(0x486CE80);
            const uintptr_t ReplicationDataCacheGenerateDataBlobsHel=REBASE(0x486B780);
            const uintptr_t ReplicationDataCacheGenerateDataBlobsSer=REBASE(0x4869C50);
            const uintptr_t ReplicationDataCacheNumInvalidatedCacheB=REBASE(0x48250E0);
            const uintptr_t ReplicationDataCacheOpenBlob=REBASE(0x486C4D0);
            const uintptr_t ShufflingInstancesBeforeSerializing=REBASE(0x486B7A0);
            const uintptr_t SkippingOffsetLength=REBASE(0x4829980);
        }
        namespace ReplicationJoinBatchLog
        {
            const uintptr_t ProcessJoinsIndexGenerateQueueJDIv2=REBASE(0x470B960);
            const uintptr_t ReplicatorEligibleBatchIndexCapabilityMa=REBASE(0x470D020);
        }
        namespace ResetFilters
        {
            const uintptr_t ApplyFilteredVariablesResetting=REBASE(0x49BBC70);
            const uintptr_t ParseAndSetFilterValueSaving=REBASE(0x49B8650);
        }
        namespace RewardedVideo
        {
            const uintptr_t AdEndpointConnectivityProbeCompletedEndp=REBASE(0x118F1F0);
            const uintptr_t AdEndpointConnectivityProbeSkippedBecaus=REBASE(0x118F490);
            const uintptr_t AdServiceDoAdAvailabilityRequestOnDemand=REBASE(0x1155F20);
            const uintptr_t AdServiceGetAdAvailabilityNowAsyncReturn=REBASE(0x11578F0);
            const uintptr_t AdServiceGetAdAvailabilityNowForUniverse=REBASE(0x1159030);
            const uintptr_t AdServiceHandleOnDemandAdPlayAtClientOnD=REBASE(0x115B800);
            const uintptr_t AdServiceHandleOnDemandAdsEnabledAtClien=REBASE(0x115EAA0);
            const uintptr_t AdServiceHasSufficientMemoryForRewardedV=REBASE(0x1146770);
            const uintptr_t AdServiceIsAdLoadedReturningFalseAdForma=REBASE(0x1159310);
            const uintptr_t AdServiceOnPlayWithRewardResult=REBASE(0x115B180);
            const uintptr_t AdServiceOnPlayWithRewardResultPlayRewar=REBASE(0x115B580);
            const uintptr_t AdServiceOnPlayWithRewardResultRewardGra=REBASE(0x115B570);
            const uintptr_t AdServiceReportAdAvailabilityReturningRe=REBASE(0x1153B80);
            const uintptr_t AdServiceShowRewardedVideoAdAsyncPlayerA=REBASE(0x11519B0);
            const uintptr_t AdServiceShowRewardedVideoAdAsyncPlayerN=REBASE(0x1152600);
            const uintptr_t AdServiceShowRewardedVideoAdAtClientAsyn=REBASE(0x11530E0);
            const uintptr_t AdUtilsGmaEligibilityCheck=REBASE(0x1140910);
            const uintptr_t AdUtilsGmaEligibilityCheckForcingEnabled=REBASE(0x1140930);
            const uintptr_t AdUtilsGmaEligibilityCheckGmaEligibility=REBASE(0x1141210);
            const uintptr_t AdUtilsSendGmaEligibilityRequestForcingE=REBASE(0x1137020);
            const uintptr_t AdUtilsSendGmaEligibilityRequestGmaEligi=REBASE(0x1136A00);
            const uintptr_t AdsLifecycleManagerGetOnDemandAdsProvide=REBASE(0x1137920);
            const uintptr_t DefaultNativeAdsProtocolGetQueryInfoSend=REBASE(0x50A0E60);
            const uintptr_t DefaultNativeAdsProtocolSetAdStringWithD=REBASE(0x50A2BD0);
            const uintptr_t DefaultNativeAdsProtocolShowAdReceivedSh=REBASE(0x50A3D30);
            const uintptr_t DefaultNativeAdsProtocolShowAdSendingSho=REBASE(0x50A3410);
            const uintptr_t FailedGrantAdReward=REBASE(0x115AB30);
            const uintptr_t FailedGrantAdRewardFutureCanceled=REBASE(0x115AB20);
            const uintptr_t GetAdAvailabilityCacheAttemptToCacheUniv=REBASE(0x112D900);
            const uintptr_t GetAdAvailabilityCacheValidateAndGetCach=REBASE(0x112D640);
            const uintptr_t NativeAdsCoreCleanupAdPlatformImplNullpt=REBASE(0x50984C0);
            const uintptr_t NativeAdsCoreGetQueryInfoPlatformImplNul=REBASE(0x5096E10);
            const uintptr_t NativeAdsCoreHandleAdProgressEventAdProg=REBASE(0x5095A60);
            const uintptr_t NativeAdsCoreHandleCtaClickEvent=REBASE(0x5095FC0);
            const uintptr_t NativeAdsCoreHandleCtaClickEventCtaClick=REBASE(0x5095FB0);
            const uintptr_t NativeAdsCoreHandleGetQueryInfoCompleted=REBASE(0x50991B0);
            const uintptr_t NativeAdsCoreHandleInitializeCompleted=REBASE(0x5098D50);
            const uintptr_t NativeAdsCoreHandleReportAdEvent=REBASE(0x5095D50);
            const uintptr_t NativeAdsCoreHandleReportAdEventReportAd=REBASE(0x5095D40);
            const uintptr_t NativeAdsCoreHandleSetAdStringCompleted=REBASE(0x5099820);
            const uintptr_t NativeAdsCoreHandleShowAdCompleted=REBASE(0x509A190);
            const uintptr_t NativeAdsCoreInstall=REBASE(0x5096710);
            const uintptr_t NativeAdsCoreNativeAdsCoreSetAdStringPla=REBASE(0x50973E0);
            const uintptr_t NativeAdsCorePlatformImplInitialize=REBASE(0x5096900);
            const uintptr_t NativeAdsCoreRegisterForAdProgress=REBASE(0x50986F0);
            const uintptr_t NativeAdsCoreRegisterForCtaClick=REBASE(0x5098B30);
            const uintptr_t NativeAdsCoreRegisterForReportAd=REBASE(0x5098910);
            const uintptr_t NativeAdsCoreShowAdPlatformImplNullptr=REBASE(0x5097ED0);
            const uintptr_t OnDemandAdsProviderConsumeReadyAdForRead=REBASE(0x1105F40);
            const uintptr_t OnDemandAdsProviderConsumeReadyAdReadyAd=REBASE(0x1105CA0);
            const uintptr_t OnDemandAdsProviderFetchAdFailureReasonF=REBASE(0x1107650);
            const uintptr_t OnDemandAdsProviderFetchAdMakingBackendA=REBASE(0x1106510);
            const uintptr_t OnDemandAdsProviderFetchAdQueryInfoAdUni=REBASE(0x1106540);
            const uintptr_t OnDemandAdsProviderFetchAdReceivingBacke=REBASE(0x1108D60);
            const uintptr_t OnDemandAdsProviderFetchAdStoredSharedOn=REBASE(0x11081F0);
            const uintptr_t OnDemandAdsProviderFetchAdSuccessfullyFe=REBASE(0x110AC80);
            const uintptr_t OnDemandAdsProviderGetAdAvailabilityOrFe=REBASE(0x110D280);
            const uintptr_t OnDemandAdsProviderMarkPlayingAdAsConsum=REBASE(0x110E970);
            const uintptr_t OnDemandAdsProviderOnDemandAdsProviderCo=REBASE(0x11051C0);
            const uintptr_t OnDemandAdsProviderRetrieveQueryInfoAndF=REBASE(0x110C6E0);
            const uintptr_t OnDemandAdsProviderSwapAdReadyAdNewAd=REBASE(0x11056F0);
            const uintptr_t RewardedVideoApiClientSendGrantAdRewardR=REBASE(0x10FF000);
            const uintptr_t RewardedVideoTraceDesyncCounterOriginTra=REBASE(0x17A7520);
            const uintptr_t SetGoogleAdFormat=REBASE(0x10FD5C0);
        }
        namespace RobloxStarter
        {
            const uintptr_t AllPreDMModulesCompleted=REBASE(0x50F5B40);
            const uintptr_t CreateModuleReturnsNullptrExpected=REBASE(0x50F4FE0);
            const uintptr_t InvalidStageTransitionPreFlag=REBASE(0x50F3EF0);
            const uintptr_t ModuleCompleted=REBASE(0x50F5B30);
            const uintptr_t RobloxStageCompleted=REBASE(0x50F3EA0);
            const uintptr_t RobloxStarterDestroyed=REBASE(0x50F59D9);
        }
        namespace RobloxStarterNetworkStarterModule
        {
            const uintptr_t UserAgent=REBASE(0x50FB790);
        }
        namespace RobloxTelemetry
        {
            const uintptr_t AppBuildVariantEmptyWhenAdding=REBASE(0x2ECB990);
            const uintptr_t CalledSetValueWhenHistogramAlreadyBucket=REBASE(0x2E983A0);
            const uintptr_t DualSendingEphemeralCounterV2Counter=REBASE(0x2EB1E20);
            const uintptr_t DualSendingEphemeralStatV2Stat=REBASE(0x2EB0C90);
            const uintptr_t HistogramValuesValidCount0=REBASE(0x2E98950);
            const uintptr_t InferredCrashCallbackBlockingWaitTimedOu=REBASE(0x4C3F3C0);
            const uintptr_t InvalidStringValidationRegex=REBASE(0x5F552B0);
            const uintptr_t InvalidTelemetryFieldDoubleValueKey=REBASE(0x2EAD8E0);
            const uintptr_t InvalidTelemetryFieldEmptyKey=REBASE(0x2EADAA0);
            const uintptr_t InvalidTelemetryFieldKeyExceedsMax=REBASE(0x2EADA90);
            const uintptr_t InvalidTelemetryFieldValueExceedingMax=REBASE(0x2EAD5A0);
            const uintptr_t OnDynamicFlagsUpdatedCalledButBatchManag=REBASE(0x2ECCC70);
            const uintptr_t OnFlagsLoadedCalledBeforeIRobloxTelemetr=REBASE(0x2EB34F0);
            const uintptr_t OnFlagsLoadedCalledButBatchManagerInitia=REBASE(0x2ECCB30);
            const uintptr_t OnFlagsLoadedCalledWithoutInitializedTel=REBASE(0x2EB3470);
            const uintptr_t RobloxTelemetryImplOnFlagsLoadedInvoked=REBASE(0x2ECCAA0);
            const uintptr_t SendEventIngestThrottledEventEventIngest=REBASE(0x2EC3D10);
            const uintptr_t SendPointThrottledEventPointsThrottle=REBASE(0x2ECBCC0);
            const uintptr_t Sending=REBASE(0x2E99DE0);
            const uintptr_t ShutdownRobloxTelemetryCalled=REBASE(0x2BA9870);
            const uintptr_t StartupRobloxTelemetryCalled=REBASE(0x2EB3200);
        }
        namespace RobloxWndInit
        {
            const uintptr_t AltEnterFullscreenIgnoringViewAware=REBASE(0x17B1280);
            const uintptr_t BtidFoundSendingClientStatusSet=REBASE(0x7FE640);
            const uintptr_t EnteringFullscreenResolution=REBASE(0x17B1190);
            const uintptr_t ErrorDuringInitializationUserMessage=REBASE(0x5E3D240);
            const uintptr_t FailedRemoveExistingVersions=REBASE(0x5E3D5D0);
            const uintptr_t FailedRemoveExistingVersionsNonStandard=REBASE(0x5E3D6C0);
            const uintptr_t OldVersionDeletionThreadCompleted=REBASE(0x8046C0);
            const uintptr_t ResponseSettingClientStatusExpectTrue=REBASE(0x812440);
            const uintptr_t UnknownExceptionSetCookieHandler=REBASE(0x5E3D3D0);
            const uintptr_t UpdateAvailableButSkippingUpdateBecause=REBASE(0x7FF3E0);
            const uintptr_t UpdaterLaunchedBackgroundMode=REBASE(0x7FEF50);
            const uintptr_t UpdaterLaunchedDrainReportingQuit=REBASE(0x7FEF90);
        }
        namespace RobuxTransfers
        {
            const uintptr_t ConstructedInitiateRobuxTransferURL=REBASE(0x13B22C0);
            const uintptr_t ErrorOccurredDuringRobuxTransferHTTP=REBASE(0x140AC90);
            const uintptr_t InitiatePromptRobuxTransferAsyncIsEnable=REBASE(0x13F7150);
            const uintptr_t InitiatingRobuxTransferUserUserAmount=REBASE(0x140A320);
            const uintptr_t MarketplaceServiceBatchReceiptsRawRespon=REBASE(0x13CBE00);
            const uintptr_t MarketplaceServiceBatchReceiptsResponseR=REBASE(0x13CBDF0);
            const uintptr_t MarketplaceServicePollingPendingReceipts=REBASE(0x13F9910);
            const uintptr_t MarketplaceServiceReceiptPollPeriodRebui=REBASE(0x13F8E60);
            const uintptr_t MarketplaceServiceReceiptPollingStartupJ=REBASE(0x13F8720);
            const uintptr_t MarketplaceServiceThrottledRobuxTransfer=REBASE(0x13F7D90);
            const uintptr_t ProcessReceiptMissingInvalidCurrencyType=REBASE(0x13AA740);
            const uintptr_t ProcessReceiptMissingInvalidPurchaseIdRe=REBASE(0x13AA730);
            const uintptr_t ReplicatingResponseSender=REBASE(0x13F61B0);
            const uintptr_t RobuxTransferInitiatedSuccessfullyTransf=REBASE(0x140B3C0);
            const uintptr_t RobuxTransferRequiresPlusSubscriptionTri=REBASE(0x13FE450);
            const uintptr_t WaitingSubscriptionPurchaseCompletionRet=REBASE(0x13F61A0);
        }
        namespace RolloutWarning
        {
            const uintptr_t SetRolloutValueCalledFlagType=REBASE(0x49B7D90);
        }
        namespace RomarkScreenshot
        {
            const uintptr_t GetEncodedJpegBufferEncodeThrew=REBASE(0x5F8F970);
            const uintptr_t SaveScreenshotThreadStartedTimestampMsTy=REBASE(0x36B9610);
            const uintptr_t SettingDoScreenshotTrue=REBASE(0x36C25E0);
            const uintptr_t SettingSnapshotVideoCaptureTimestampMs=REBASE(0x36B9600);
            const uintptr_t TryingCopyTextureDownloadResourceOntoFra=REBASE(0x36B8360);
        }
        namespace RuntimeContentLog
        {
            const uintptr_t AssetServiceCreateDataModelContentAsyncF=REBASE(0x357FD50);
            const uintptr_t CaughtExceptionWhileTryingTranscode=REBASE(0x5F847F0);
            const uintptr_t CaughtExceptionWhileTryingTranscodeImage=REBASE(0x5F84910);
            const uintptr_t CaughtExceptionWhileTryingTranscodeMesh=REBASE(0x5F84A90);
            const uintptr_t ClearAllContentDatamodelDmType=REBASE(0x355EB30);
            const uintptr_t ClearingAllRuntimeContentDeserializedCon=REBASE(0x59E4310);
            const uintptr_t ClearingAllRuntimeContentHandles=REBASE(0x59E4300);
            const uintptr_t CouldnTFindData=REBASE(0x3572230);
            const uintptr_t CreateInternalRuntimeContentAsync=REBASE(0x357ED60);
            const uintptr_t CreateMeshPartAsyncUnableRetrieveDataMod=REBASE(0xE84A00);
            const uintptr_t CreatingMeshTranscoder=REBASE(0x357E210);
            const uintptr_t DataModelContentDeserializingB=REBASE(0x3581860);
            const uintptr_t DestructingRuntimeContentHandle=REBASE(0x59E3730);
            const uintptr_t DispatchingCallbacksAcrKey=REBASE(0x355D9B0);
            const uintptr_t EnqueuingTranscodingJob=REBASE(0x3574F20);
            const uintptr_t ErasingData=REBASE(0x356E3D0);
            const uintptr_t ExceptionWhileRespondingRuntimeContentQu=REBASE(0x5F84170);
            const uintptr_t ProcessingDeserializationLoadTimeB=REBASE(0x59E4B80);
            const uintptr_t ProcessingPendingDeserializationsInterna=REBASE(0x59E62D0);
            const uintptr_t ProcessingRemoteEventContentShare=REBASE(0x3562740);
            const uintptr_t QueueEstimate2fSItems=REBASE(0x355CAC0);
            const uintptr_t RbxStorageInitializedCannotAccessStorage=REBASE(0x3565080);
            const uintptr_t RecordedTranscodeTimeKey2fS=REBASE(0x355C6E0);
            const uintptr_t RemovingRuntimeContentHandle=REBASE(0x59E4010);
            const uintptr_t ReturningExistingRuntimeContentHandle=REBASE(0x59E4800);
            const uintptr_t RuntimeContentServiceOnServiceProviderDa=REBASE(0x355FAC0);
            const uintptr_t SendingNetAssetViaInterface=REBASE(0x35608D0);
            const uintptr_t StorageResult=REBASE(0x356ABF0);
            const uintptr_t StorageTypeImageBaseBytes=REBASE(0x35656B0);
            const uintptr_t StoreData=REBASE(0x356B320);
            const uintptr_t StoreDataAsync=REBASE(0x3569FC0);
            const uintptr_t StoringIntoRbxStorage=REBASE(0x3565D30);
            const uintptr_t StoringOntoRbxStorageAsync=REBASE(0x3567950);
            const uintptr_t SuitableACRAlreadyAvailableCheckingIf=REBASE(0x3573650);
            const uintptr_t SyncRuntimeData=REBASE(0x356CCF0);
            const uintptr_t SyncRuntimeDataAsync=REBASE(0x356A5D0);
            const uintptr_t TextureStreamingTranscodeProducedOutputs=REBASE(0x3576090);
            const uintptr_t TranscodeImageSuccessful=REBASE(0x357B270);
            const uintptr_t TranscodeImageSuccessfulOutputs=REBASE(0x357C750);
            const uintptr_t TranscodeMeshSuccessfulOutputs=REBASE(0x357E470);
            const uintptr_t TranscodingJobFinishedResult=REBASE(0x357A300);
            const uintptr_t UnableGetRuntimeContentLocalPlayer=REBASE(0x3560460);
            const uintptr_t UnableGetRuntimeContentNetAssetTypeRef=REBASE(0x3561530);
            const uintptr_t UnableGetRuntimeContentPlayer=REBASE(0x355FF20);
            const uintptr_t WhenRequestingDataDataWasFound=REBASE(0x356F710);
        }
        namespace RuntimeInjector
        {
            const uintptr_t BindingCannotCreatedBecauseInjectorTeard=REBASE(0x1E5A6E0);
            const uintptr_t BindingFactoryReturnedNullptrAfterMs=REBASE(0x1E5A650);
            const uintptr_t InjectorConstructedBindings=REBASE(0x1E577C0);
            const uintptr_t InjectorCreateAllCreatedBindings1fMs=REBASE(0x1E5B3C0);
            const uintptr_t InjectorTearingDownBindingsCreationOrder=REBASE(0x1E57E70);
        }
        namespace Rupp
        {
            const uintptr_t ClientFailedRuppSetup=REBASE(0x48910F0);
            const uintptr_t InvalidRuppHeaderLengthBytesRead=REBASE(0x28760A0);
            const uintptr_t ProcessPacketReverseEndpoint=REBASE(0x2874130);
        }
        namespace RuppTokenClientLog2
        {
            const uintptr_t GeneratingNewRuppToken=REBASE(0x22789A0);
            const uintptr_t RuppTokenValueUpdated=REBASE(0x2279210);
        }
        namespace RuppTokenLog
        {
            const uintptr_t GetaddrinfoHasDifferentFamilyResultVs=REBASE(0x288E5F0);
            const uintptr_t SwitchingNewTTTokenReceivedRCC=REBASE(0x2275560);
        }
        namespace SQLite
        {
            const uintptr_t DatabaseBeginTransactionMutexLockElapsed=REBASE(0x273C130);
            const uintptr_t DatabaseDatabase=REBASE(0x2739DE0);
            const uintptr_t DatabaseExec=REBASE(0x2739ED0);
            const uintptr_t DatabaseExecInt=REBASE(0x273A150);
            const uintptr_t DatabaseWalCheckpointRcLogCkptElapsed=REBASE(0x273A5E0);
            const uintptr_t ExecSQLERRORSQL=REBASE(0x27362C0);
            const uintptr_t ExecSQLElapsed3fMs=REBASE(0x27362B0);
            const uintptr_t MemMethodsInit=REBASE(0x2750690);
            const uintptr_t MemMethodsMallocOutMemory=REBASE(0x2750240);
            const uintptr_t MemMethodsShutdown=REBASE(0x2750770);
            const uintptr_t SQLITECONFIGMUTEXFailed=REBASE(0x27390F0);
            const uintptr_t SetupDatabaseERRORFailedSetLockingMode=REBASE(0x2736A10);
            const uintptr_t Sqlite3ErrorLog=REBASE(0x2738450);
            const uintptr_t Sqlite3GlobalInitENDElapsed3f=REBASE(0x27390E0);
            const uintptr_t StatementFinalizeERRORRcErrorElapsed=REBASE(0x274F8A0);
            const uintptr_t StatementResetERROR=REBASE(0x274FD30);
            const uintptr_t StatementStepDoneERROR=REBASE(0x274F510);
            const uintptr_t StatementStepRowERRORSQL=REBASE(0x274F310);
        }
        namespace SafeAreaInsetChanges
        {
            const uintptr_t NewModifiedSafeAreaInsetsLeft=REBASE(0x3F2BA40);
            const uintptr_t NewSafeAreaInsetsLeftTop=REBASE(0x3F2B410);
        }
        namespace Safety
        {
            const uintptr_t ARVideoFeasibilityPredictionValue=REBASE(0x437FC00);
            const uintptr_t BuildUIOpened=REBASE(0x438AF00);
            const uintptr_t CannotStartARVideoRecordingDue=REBASE(0x4389330);
            const uintptr_t CaptureAvatarMovementFrameFailedObtainDa=REBASE(0x43A56F0);
            const uintptr_t CaptureAvatarMovementFrameFailedObtainWo=REBASE(0x43A56E0);
            const uintptr_t CapturesUIClosed=REBASE(0x438AA50);
            const uintptr_t CapturesUIOpened=REBASE(0x438A960);
            const uintptr_t ChatLineReportingClosed=REBASE(0x438AE10);
            const uintptr_t ChatLineReportingOpened=REBASE(0x438AD20);
            const uintptr_t ChatSuspensionDialogClosed=REBASE(0x438AC30);
            const uintptr_t ChatSuspensionDialogOpened=REBASE(0x438AB40);
            const uintptr_t CreatedSafetyService=REBASE(0x43724A0);
            const uintptr_t DataModelARVideoRecordingFinalization=REBASE(0x438B0F0);
            const uintptr_t DataModelARVideoRecordingFinalizationRem=REBASE(0x438A0F0);
            const uintptr_t DecodeAvatarMovementProtoSupportedClient=REBASE(0x438C060);
            const uintptr_t FSEventTriggeredIllegallyServer=REBASE(0x4388EE0);
            const uintptr_t FailedReadVideoFile=REBASE(0x4381960);
            const uintptr_t GetVisibleAvatarsFailedObtainDataModel=REBASE(0x43A1710);
            const uintptr_t GetVisibleAvatarsFailedObtainWorkspaceCa=REBASE(0x43A1690);
            const uintptr_t HandleForcedScreenshotEventAtClientFaile=REBASE(0x4387440);
            const uintptr_t IllegalRequestArgumentsAreMalformedMissi=REBASE(0x4386930);
            const uintptr_t MenuClosed=REBASE(0x438A680);
            const uintptr_t PartyChatWindowClosed=REBASE(0x438A870);
            const uintptr_t PartyChatWindowOpened=REBASE(0x438A780);
            const uintptr_t ProcessRemoteEventFailedObtainDataModel=REBASE(0x4389110);
            const uintptr_t RegisteredAbuseReportVideoTunableId=REBASE(0x43811E0);
            const uintptr_t RemovedAbuseReportVideoTunableId=REBASE(0x4380F40);
            const uintptr_t ResizeEncodeWithParamsInvalidZeroValueHe=REBASE(0x4376990);
            const uintptr_t RespondingRequestStopARVideo=REBASE(0x43817E0);
            const uintptr_t SafetyServiceLongerValidHandlingPlayerLe=REBASE(0x43735B0);
            const uintptr_t SafetyServiceLongerValidHandlingToggleCa=REBASE(0x43914B0);
            const uintptr_t SafetyServiceReceiveVideoCaptureStartAtt=REBASE(0x4389DD0);
            const uintptr_t SceneCaptureFailedWrite=REBASE(0x4377BD0);
            const uintptr_t ScreenshotReadyTaskDataModelGone=REBASE(0x4378C00);
            const uintptr_t ScreenshotResizeEncodeInvalidZeroValueHe=REBASE(0x43758C0);
            const uintptr_t SkippingAvatarIDSinceAvatarIdentificatio=REBASE(0x4379AD0);
            const uintptr_t SkippingCaptureUnknownAssetIdType=REBASE(0x43A0270);
            const uintptr_t StartingUploadAsyncTaskReportID=REBASE(0x438B940);
            const uintptr_t SubmittedAbuseReportV2ID=REBASE(0x32EE820);
            const uintptr_t SubmittedAbuseReportV3ID=REBASE(0x32EF030);
            const uintptr_t SubmittedAbuseReportVideoTunableId=REBASE(0x4380130);
            const uintptr_t ToggledExperienceStateCaptureMode=REBASE(0x43914A0);
            const uintptr_t UploadCompleteFiringTransitionTask=REBASE(0x438F9D0);
            const uintptr_t UploadCompleteIDWillTransitionVia=REBASE(0x438BD10);
            const uintptr_t UploadingScreenshotAMCMetadataReasonCont=REBASE(0x437DF10);
            const uintptr_t UploadingScreenshotURLReason=REBASE(0x4383970);
            const uintptr_t VideoProcessingTimeUs=REBASE(0x4381920);
            const uintptr_t VideoRecordingStoppedFollowingError=REBASE(0x438A1E0);
            const uintptr_t VideoUploadSuccessfulID=REBASE(0x4382D00);
            const uintptr_t WeAreOnVideoRecorderFinalizedGotFilePath=REBASE(0x438B0E0);
        }
        namespace SamplingProfiler
        {
            const uintptr_t CanTKickNewSampleWorker=REBASE(0x2ADB220);
            const uintptr_t EnumProcessModulesFailed=REBASE(0x2AD8900);
            const uintptr_t FailedGetProfileTelemetrySubsystem=REBASE(0x2ADAD60);
            const uintptr_t FailedLoadModuleInformation=REBASE(0x2ADB470);
            const uintptr_t InitializingSamplingProfilerThread=REBASE(0x2ADAD80);
            const uintptr_t WorkerLoopExitingModuleInformation=REBASE(0x2ADB450);
        }
        namespace ScreenProtocolCore
        {
            const uintptr_t ReceivedSafeAreaInsets=REBASE(0x15455C0);
        }
        namespace ScreenTime
        {
            const uintptr_t ScreenTimeEndSessionRequestResponse=REBASE(0x4C9BF20);
            const uintptr_t ScreenTimeEndSessionRequestTimestamp=REBASE(0x4C9B350);
            const uintptr_t ScreenTimeHeartbeatSessionRequestTimesta=REBASE(0x4C9AA70);
            const uintptr_t ScreenTimeManagerInitByGuacResponseCodeB=REBASE(0x4C1ADA0);
            const uintptr_t ScreenTimeManagerStartCheckingCompliance=REBASE(0x4C1A5E0);
            const uintptr_t ScreenTimeNotificationResponse=REBASE(0x4C9D2B0);
            const uintptr_t ScreenTimeStatusWarningLockout=REBASE(0x4C9E700);
        }
        namespace ScriptContextAdd
        {
            const uintptr_t LoaderFacetAddScript=REBASE(0x42B2E80);
        }
        namespace ScriptContextClose
        {
            const uintptr_t SchedulerFacetSchedulerFacetWaitingThrea=REBASE(0x42D7520);
        }
        namespace ScriptContextRemove
        {
            const uintptr_t LoaderFacetRemoveScript=REBASE(0x42B3130);
        }
        namespace Serialization
        {
            const uintptr_t HitExceptionHSRPublishProcess=REBASE(0x35B3A70);
            const uintptr_t InstanceVectorEmpty=REBASE(0x35B3740);
            const uintptr_t UnknownException=REBASE(0x5F86940);
        }
        namespace SerializationTrace
        {
            const uintptr_t TriedDeserializeBytesInvalidSizeZu=REBASE(0x2281DE0);
            const uintptr_t TriedDeserializeEmptyBytes=REBASE(0x2281D60);
            const uintptr_t TriedDeserializeModelBundleMappedData=REBASE(0x22822E0);
            const uintptr_t TriedDeserializeModelBundleMetadataParam=REBASE(0x2281F80);
            const uintptr_t TriedDeserializeStreamInvalidSizeExpecte=REBASE(0x2282790);
            const uintptr_t TriedDeserializeStringSizeMaxAllowed=REBASE(0x2281A00);
        }
        namespace Serializer
        {
            const uintptr_t StringViewProvidedChunkDataCompressed=REBASE(0x4AF7090);
            const uintptr_t UnknownReflectionTypeSerializerPugiReadP=REBASE(0x4B280A0);
        }
        namespace SessionIdleController
        {
            const uintptr_t SessionIdleControllerOnTimerUserFoundIdl=REBASE(0x5113620);
            const uintptr_t SessionIdleControllerOnUserActiveLastAct=REBASE(0x5113510);
        }
        namespace SessionL2ValidationHelper
        {
            const uintptr_t OnSessionChangeScCountShCountCur=REBASE(0x5104400);
            const uintptr_t OnSessionHeartbeatScCountShCountCur=REBASE(0x5105CE0);
        }
        namespace SessionService
        {
            const uintptr_t L2SessionContextManagerAcquireContextFoc=REBASE(0x5109F70);
            const uintptr_t L2SessionContextManagerReleaseContextFoc=REBASE(0x510A410);
            const uintptr_t SessionChangedEvent=REBASE(0x510B870);
            const uintptr_t SessionManagerReleaseContextFocusRemoveR=REBASE(0x5109A00);
            const uintptr_t SessionManagerReplaceSessionCurL2Context=REBASE(0x5100A90);
            const uintptr_t SessionManagerSetSessionInternalCurL2Con=REBASE(0x5101950);
        }
        namespace SessionSubscriberEventLog
        {
            const uintptr_t SessionSubscriberDispatchSessionChangedE=REBASE(0x510EE80);
        }
        namespace SessionTransitionFSM
        {
            const uintptr_t DetectedApplicationForegrounding=REBASE(0x2A945C0);
            const uintptr_t EnteredAppSession=REBASE(0x2A92B80);
            const uintptr_t EnteredPlaySession=REBASE(0x2A92510);
            const uintptr_t SentAppSessionSuccess=REBASE(0x2A93F90);
            const uintptr_t SentPlaySessionSuccess=REBASE(0x2A938D0);
            const uintptr_t TearingDown=REBASE(0x2A94230);
        }
        namespace ShareLinkHandler
        {
            const uintptr_t ShareLinkV2ResolvedResponse=REBASE(0x50D1D50);
        }
        namespace SharedStringCacheInfo
        {
            const uintptr_t LoadingSharedStringCacheExitedEarly=REBASE(0x4850490);
            const uintptr_t UpdatedSharedStringCacheAddingEntries=REBASE(0x48543D0);
        }
        namespace SharedWebViewProtocol
        {
            const uintptr_t WebViewImplOpenBrowserDefaultHandlerDrop=REBASE(0x50B5610);
            const uintptr_t WebViewProtocolHandleWindowClose=REBASE(0x50B4CF0);
            const uintptr_t WebViewProtocolOpenBrowser=REBASE(0x50B4070);
        }
        namespace ShipsInNightGarbageCollection
        {
            const uintptr_t INFOREDUCERegionRadiusVersionWas=REBASE(0x46E63E0);
        }
        namespace SignalRCore
        {
            const uintptr_t AttemptingReconnectMs=REBASE(0x4916CB0);
            const uintptr_t ReceivedIncompleteMessage=REBASE(0x4914F80);
            const uintptr_t StopIgnoredBecauseAlreadyDisconnected=REBASE(0x4913AD0);
        }
        namespace SignalRCoreError
        {
            const uintptr_t ActionEventHasAlreadyBeenRegistered=REBASE(0x49135E0);
            const uintptr_t CannotInvokeWhenConnectedCurrentState=REBASE(0x4917740);
            const uintptr_t IDDisconnected=REBASE(0x4917340);
            const uintptr_t SignalRCoreCannotStartUnlessHub=REBASE(0x49138B0);
        }
        namespace SignalRCoreNetworkHandler
        {
            const uintptr_t SignalRCoreCannotInvokeWhenConnectedCurr=REBASE(0x4904CD0);
        }
        namespace SingleSurfaceApp
        {
            const uintptr_t DeferredRbxmAbandoningOwedSwapStoppingGa=REBASE(0x1576A30);
            const uintptr_t DeferredRbxmDownloadFailedStayingLuaAppJ=REBASE(0x15806A0);
            const uintptr_t DeferredRbxmGameDataModelClosedBeforeLoa=REBASE(0x157E670);
            const uintptr_t DeferredRbxmGameDataModelLoadedButRender=REBASE(0x1576C30);
            const uintptr_t DeferredRbxmGameDataModelLoadedSwappingS=REBASE(0x1576C20);
            const uintptr_t DeferredRbxmHoldingSurfaceSwapUntilGame=REBASE(0x15778A0);
            const uintptr_t DeferredRbxmIdleLeaveAbandoningParkedJoi=REBASE(0x1578FA0);
            const uintptr_t DeferredRbxmJoinOutcome=REBASE(0x1574E30);
            const uintptr_t DeferredRbxmLaunchUGCGameInternalDeferri=REBASE(0x15752A0);
            const uintptr_t DeferredRbxmPreGameAppliedJoiningPlaceId=REBASE(0x1575910);
            const uintptr_t DeferredRbxmResumingUGCJoinAfterDownload=REBASE(0x15764B0);
            const uintptr_t DeferredRbxmStatusPublished=REBASE(0x157DCE0);
            const uintptr_t DeferredRbxmVerifyFailedAfterDownloadSta=REBASE(0x1575F30);
            const uintptr_t ErrorForceOTAUpdateAvailableSignalButUpd=REBASE(0x157AE70);
            const uintptr_t ForceOTAUpdateAvailableSignalStage=REBASE(0x157AE40);
            const uintptr_t HandleLowMemoryWarningForRenderViewSessi=REBASE(0x156D8E0);
            const uintptr_t InitializeLuaAppLoggedUserOp=REBASE(0x1570670);
            const uintptr_t InitializeSingleton=REBASE(0x156E250);
            const uintptr_t InitializeWithAppStarter=REBASE(0x156C410);
            const uintptr_t LaunchUGCGameInternalRestoreRenderingFre=REBASE(0x1577040);
            const uintptr_t LaunchUGCGameInternalUserCancelledSkippi=REBASE(0x1575F40);
            const uintptr_t MemoryPrioritizationCallbackLevel=REBASE(0x157A850);
            const uintptr_t PauseLuaAppAndDestroyIfNeededStageDestro=REBASE(0x15728D0);
            const uintptr_t PauseLuaAppSingleSurfaceAppIntialized=REBASE(0x15721B0);
            const uintptr_t PauseUGCGameStageDestroySurfaceView=REBASE(0x15781C0);
            const uintptr_t PerformanceControlCallbackLevel=REBASE(0x157A710);
            const uintptr_t PowerTraceSessionObserverCreatedRegister=REBASE(0x156E650);
            const uintptr_t ProcessLowMemoryWarningLowMemoryDestroyi=REBASE(0x1578D30);
            const uintptr_t ProcessLowMemoryWarningProcessStarted=REBASE(0x1578D20);
            const uintptr_t ReducePatchCacheMemory=REBASE(0x157FF80);
            const uintptr_t RegisterForForceOTAUpdateAvailableConnec=REBASE(0x157ABA0);
            const uintptr_t RegisterRenderingFrequencyDuringStartup=REBASE(0x157EA60);
            const uintptr_t ReplaceCurrentDataModelAppStage=REBASE(0x1570260);
            const uintptr_t ReplaceForegroundDataModelAppStage=REBASE(0x156FED0);
            const uintptr_t RestoringRenderingFrequencyNormal=REBASE(0x157F780);
            const uintptr_t ResumeUGCGameStage=REBASE(0x15783F0);
            const uintptr_t ResumeUGCGameStagePauseBeforeResumeDestr=REBASE(0x15786C0);
            const uintptr_t ReturnToLuaAppInternalAppYetInitializedR=REBASE(0x1571380);
            const uintptr_t ReturnToLuaAppLuaAppStageResumeApp=REBASE(0x1570E00);
            const uintptr_t SetLocale=REBASE(0x156FC40);
            const uintptr_t SetStageStage=REBASE(0x157A130);
            const uintptr_t ShutDownStage=REBASE(0x1573C20);
            const uintptr_t StartLuaAppStage=REBASE(0x1571FD0);
            const uintptr_t UnregisterMemoryPrioritizationCallback=REBASE(0x156D740);
            const uintptr_t UpdateSurfaceLuaAppStage=REBASE(0x15725C0);
            const uintptr_t UpdateSurfaceUGCGameStage=REBASE(0x1578AB0);
            const uintptr_t UserDidLogin=REBASE(0x156CBE0);
            const uintptr_t UserDidLogout=REBASE(0x156CDC0);
        }
        namespace SkinMorph
        {
            const uintptr_t HasInfluenceSkipping=REBASE(0x1E1A730);
            const uintptr_t SourceDestinationVertexCountsDonT=REBASE(0x1E19640);
        }
        namespace SkinningSubsets
        {
            const uintptr_t BuiltSkinningSubsetsFacesJoints=REBASE(0x246A810);
        }
        namespace SlimLoader
        {
            const uintptr_t ACRRequestPriorityTryMadeResource=REBASE(0x3A4B4B0);
            const uintptr_t ACRResponseTryReceivedResource=REBASE(0x3A45030);
            const uintptr_t FailedReadFileMeshDataSlimDataChunk=REBASE(0x3A4D640);
            const uintptr_t LODGenerationJobLODCreated=REBASE(0x3A48440);
            const uintptr_t LODGenerationJobThreadLODStatus=REBASE(0x3A497B0);
            const uintptr_t ManifestStatusChanged=REBASE(0x3A47090);
            const uintptr_t RequestLODCreated=REBASE(0x3A444D0);
            const uintptr_t RequestLODNeeds=REBASE(0x3A474C0);
            const uintptr_t RequestLODStatusChanged=REBASE(0x3A45750);
        }
        namespace SlimPropertySetLog
        {
            const uintptr_t FailedReadSlimPropertySetHeader=REBASE(0x3B252C0);
            const uintptr_t InputSlimPropertySets=REBASE(0x3B252A0);
        }
        namespace SlimRenderer
        {
            const uintptr_t CouldGetValidAnimationStreamSLIM=REBASE(0x390EB70);
            const uintptr_t SlimTelemetryInitialized=REBASE(0x3A40C30);
            const uintptr_t SlimTelemetrySubmittedSlimForceExperimen=REBASE(0x3A41B80);
            const uintptr_t SlimTelemetrySuppressedSlimControllerACR=REBASE(0x3A41020);
        }
        namespace SlimRendererAnimation
        {
            const uintptr_t DestroyingAnimationStreamHandleAnimation=REBASE(0x390E460);
            const uintptr_t UpdatingAnimationStreamBonesEntityHandle=REBASE(0x390FCC0);
        }
        namespace SlimReplicationLog
        {
            const uintptr_t ModelHasBonesWhichExceedsMaximum=REBASE(0x3161280);
            const uintptr_t ModelHasEmptySkeletonSkipSnapshot=REBASE(0x31630F0);
            const uintptr_t ModelInstanceSetSlimInstanceHashesHashes=REBASE(0x34B1650);
            const uintptr_t ReceivedEntityArrayDoesAlignCFrame=REBASE(0x315E110);
            const uintptr_t SlimAnimationDataEntityAttemptReplicateS=REBASE(0x316DFF0);
            const uintptr_t SlimAnimationDataEntityAttemptSetInvalid=REBASE(0x316D980);
            const uintptr_t SlimAnimationDataEntityAttemptSetOutRang=REBASE(0x316D4F0);
            const uintptr_t SlimAnimationDataEntityNumberParentIndic=REBASE(0x316DFE0);
            const uintptr_t SlimAnimationSmoothingErrorSource=REBASE(0x316D230);
            const uintptr_t SlimReplicationDataCanOnlyReplicateUpBon=REBASE(0x330C7C0);
        }
        namespace SlimServiceLog
        {
            const uintptr_t AttachedStringValueModelJsonSize=REBASE(0x314D5E0);
            const uintptr_t Log=REBASE(0x314EF40);
            const uintptr_t SLIMShadowUploadModelAssetHash=REBASE(0x3155450);
            const uintptr_t SLIMUploadFlowBasePartAssetHash=REBASE(0x314F1F0);
            const uintptr_t SlimHashChanged=REBASE(0x34AC460);
            const uintptr_t SuccessfullyUploadedPropertySet=REBASE(0x315BCE0);
        }
        namespace SlowHttpRequest
        {
            const uintptr_t SlowHttpRequest=REBASE(0x12D9A40);
        }
        namespace SocialAmpFeatureEvaluationManager
        {
            const uintptr_t AMPFeatureEvaluationError=REBASE(0x49F07D0);
            const uintptr_t AMPFeatureReturnedErrorValueMay=REBASE(0x49F16A0);
            const uintptr_t DisconnectingPlayerSignals=REBASE(0x49F6250);
            const uintptr_t FailedParseAMPResponse=REBASE(0x5FFCB00);
            const uintptr_t HandlingAMPFeatureEvaluationResponse=REBASE(0x49F1B10);
            const uintptr_t PurgingAMPFeatureEvaluationCachePlayer=REBASE(0x49F5D10);
            const uintptr_t RefetchForPlayerRateLimitedUserId=REBASE(0x49F3880);
            const uintptr_t SendingAMPFeatureEvaluationRequestPlayer=REBASE(0x49F3BE0);
        }
        namespace SocialCounterpartyManager
        {
            const uintptr_t AMPAgeCheckEvaluationError=REBASE(0x49F9D10);
            const uintptr_t AMPEvaluationError=REBASE(0x49F9B60);
            const uintptr_t CompatibilityTokenResponse=REBASE(0x49FE8C0);
            const uintptr_t FailedFindChatService=REBASE(0x4A01A60);
            const uintptr_t FailedParseUserBlockingData=REBASE(0x5FFD5E0);
            const uintptr_t FetchingUserBlockingDataPlayer=REBASE(0x4A080F0);
            const uintptr_t HandlingAgeGroupAMPResponse=REBASE(0x49FBC70);
            const uintptr_t HandlingBatchCheckReciprocalBlockRespons=REBASE(0x4A0BA20);
            const uintptr_t HandlingCompatibilityTokenAMPResponse=REBASE(0x49FCA20);
            const uintptr_t HasCommunicationAccessStatus=REBASE(0x49FA7B0);
            const uintptr_t MakeBatchCheckReciprocalBlockRequestUser=REBASE(0x4A094F0);
            const uintptr_t PlayerAddedUserIdBranchEmptyCache=REBASE(0x4A03B20);
            const uintptr_t PlayerLeaving=REBASE(0x4A04630);
            const uintptr_t PopulatingSocialCounterpartiesPlayerOthe=REBASE(0x49FF6E0);
            const uintptr_t PurgingCompatibilityTokensPlayer=REBASE(0x49FEE00);
            const uintptr_t PurgingSocialCounterpartiesPlayer=REBASE(0x4A00260);
            const uintptr_t PurgingUserBlockingDataPlayer=REBASE(0x4A09160);
            const uintptr_t SkippingAgeGroupPopulationPlayer=REBASE(0x49FD600);
            const uintptr_t SkippingCompatibilityTokenPopulationPlay=REBASE(0x49FE2B0);
            const uintptr_t SocialCounterpartyManagerFailedAgeGroupP=REBASE(0x5FFCD90);
            const uintptr_t SocialCounterpartyManagerFailedCompatibi=REBASE(0x5FFCF40);
            const uintptr_t SocialCounterpartyManagerFailedParsingEr=REBASE(0x5FFD0F0);
            const uintptr_t SubscribingPlayerAddedPlayerRemovingSign=REBASE(0x4A03430);
            const uintptr_t UpdateBlockStatusBlockerIdBlockeeIdBlock=REBASE(0x4A0C5A0);
            const uintptr_t UserBlockStateChangeHandlerException=REBASE(0x5FFD2B0);
            const uintptr_t UserBlockingAPIError=REBASE(0x49F9EC0);
            const uintptr_t UserBlockingDataCachedUserIdPairsBlocked=REBASE(0x4A068D0);
            const uintptr_t UserBlockingDataRequestFailedUserIdErrSt=REBASE(0x4A086D0);
            const uintptr_t UserIdCanCommunicateUserId=REBASE(0x4A00F90);
        }
        namespace SocialService
        {
            const uintptr_t SocialServiceCreateExpiringDeepLinkAsync=REBASE(0x35563D0);
        }
        namespace Sound
        {
            const uintptr_t ClosingFmod=REBASE(0x44F9DD0);
            const uintptr_t FmodFailedLoadSound=REBASE(0x450CD30);
            const uintptr_t ReleasingFMOD=REBASE(0x28D4A50);
            const uintptr_t SubtractorDspOverrunRemove=REBASE(0x45A98D0);
            const uintptr_t SubtractorDspUnderrunProcess=REBASE(0x45A9290);
            const uintptr_t TTSLength=REBASE(0x10A3F00);
            const uintptr_t UnsupportedDeviceListChangeType=REBASE(0x4519230);
            const uintptr_t VolumetricSoundProducedNaNEmitterListene=REBASE(0x458C940);
        }
        namespace SoundTrace
        {
            const uintptr_t CreatingFMODChannelBecauseSoundBad=REBASE(0x5847070);
            const uintptr_t FMODBADDSPCONNECTIONSrcDst=REBASE(0x28D5780);
            const uintptr_t FMODPlaybackChannelUpdateSyncTimePositio=REBASE(0x58495E0);
            const uintptr_t FMODPlaybackDSPReleaseFmodDspResult=REBASE(0x28E36C0);
            const uintptr_t FmodAudioDeviceSetInputDeviceDeviceIndex=REBASE(0x28F23C0);
            const uintptr_t FmodManagerInitializeOnce=REBASE(0x28D9040);
            const uintptr_t FmodRecordingStopDriver=REBASE(0x2905880);
            const uintptr_t LegacySoundEffectImplOnOpenFmod=REBASE(0x4595280);
            const uintptr_t LegacySoundEffectImplSynchronizeParentDS=REBASE(0x4595720);
            const uintptr_t LegacySoundGroupImplOnAncestorChangedCha=REBASE(0x459B930);
            const uintptr_t LegacySoundImplLoadSoundWithContextCould=REBASE(0x458BCA0);
            const uintptr_t LegacySoundImplOnChildAddedFmodChannel=REBASE(0x4589C10);
            const uintptr_t LegacySoundImplOnChildRemovedFmodChannel=REBASE(0x4589D60);
            const uintptr_t LegacySoundImplOnClosingFmodFmodChannel=REBASE(0x458A360);
            const uintptr_t LegacySoundImplOnOpenFmodFmodChannel=REBASE(0x458A240);
            const uintptr_t LegacySoundImplOnServiceProviderNewProvi=REBASE(0x4589EB0);
            const uintptr_t LegacySoundImplSetSuccessfullyLoadedSoun=REBASE(0x458B0B0);
            const uintptr_t NBFSLFmodCallbackBadOpenStateSound=REBASE(0x28F6D20);
            const uintptr_t NBFSLFmodCallbackReturningDmSoundResult=REBASE(0x28F6BF0);
            const uintptr_t NonBlockingFmodSoundLoader=REBASE(0x28F71E0);
            const uintptr_t NonBlockingFmodSoundLoaderCreatedFromDis=REBASE(0x28F80C0);
            const uintptr_t NonBlockingFmodSoundLoaderCreatedFromMem=REBASE(0x28F7950);
            const uintptr_t Playing=REBASE(0x5847080);
            const uintptr_t ShimSoundEffectImplSynchronizeParentDSPs=REBASE(0x45979A0);
            const uintptr_t SkippingDSPSyncronizationChannelBecauseD=REBASE(0x28EC060);
            const uintptr_t SoundReleaseFmodSound=REBASE(0x2904250);
            const uintptr_t SoundServiceMuteAllChannelsMute=REBASE(0x4504D70);
            const uintptr_t SoundServiceOnServiceProvider=REBASE(0x44FE550);
            const uintptr_t SoundServiceOpenFmod=REBASE(0x44F8110);
            const uintptr_t SoundServiceSetAmbientReverb=REBASE(0x44FD2E0);
            const uintptr_t SoundServiceSetVolumetricMode=REBASE(0x44FD470);
            const uintptr_t SoundServiceUpdate3DSettings=REBASE(0x44FD140);
        }
        namespace SpatialFilterSanity
        {
            const uintptr_t ServerSpatialFilterReturningAssemblySimS=REBASE(0x15C6E50);
            const uintptr_t SpatialFilterFilteringIncorrectAssemblyF=REBASE(0x15C7DB0);
        }
        namespace SpeechToText
        {
            const uintptr_t ReceivedResponse=REBASE(0x5A011A0);
            const uintptr_t SpeechTextWonTWorkIf=REBASE(0x5A02990);
            const uintptr_t SpeechToTextRequestFailed=REBASE(0x5A00A50);
        }
        namespace SpeechToTextServiceLog
        {
            const uintptr_t SoundServiceRequestSttPlatformTokenSent=REBASE(0x45101C0);
            const uintptr_t SoundServiceSttPlatformTokenReceivedTtl=REBASE(0x450FF50);
        }
        namespace SseClient
        {
            const uintptr_t SseClientFrameBufferExceededCapAborting=REBASE(0x5B00B30);
            const uintptr_t SseClientSendCompletionDroppedCallerDid=REBASE(0x5B008C0);
            const uintptr_t SseClientStreamingChunkDroppedCallerDid=REBASE(0x5B00690);
        }
        namespace StartupController
        {
            const uintptr_t BrowserTrackerIdRequestAppStorageGetItem=REBASE(0x4CA0C40);
            const uintptr_t BrowserTrackerIdRequestBrowserTrackerIdR=REBASE(0x4CA0730);
            const uintptr_t BrowserTrackerIdRequestCookieDoesExistUs=REBASE(0x4C9F4F0);
            const uintptr_t BrowserTrackerIdRequestDestructor=REBASE(0x4C9F1B0);
            const uintptr_t BrowserTrackerIdTaskDestructor=REBASE(0x4C3AF90);
            const uintptr_t BrowserTrackerIdTaskRequestFailedError=REBASE(0x4C3B270);
            const uintptr_t BrowserTrackerIdTaskStart=REBASE(0x4C3B070);
            const uintptr_t BrowserTrackerIdTaskWebBrowserTrackerIdL=REBASE(0x4C3B0F0);
            const uintptr_t CheckAppVersionRequestCallbackErrorStatu=REBASE(0x4CA3310);
            const uintptr_t CheckAppVersionRequestDestructor=REBASE(0x4C2B400);
            const uintptr_t CheckAppVersionRequestLoadAsyncURL=REBASE(0x4CA2B60);
            const uintptr_t CheckAppVersionTaskDestructor=REBASE(0x4C3BC60);
            const uintptr_t CheckAppVersionTaskGotUpgradeStatus=REBASE(0x4C3BA90);
            const uintptr_t CheckAppVersionTaskStart=REBASE(0x4C3B8C0);
            const uintptr_t DeferredRbxmResolvedVariantFirstEnrollme=REBASE(0x4CA2600);
            const uintptr_t DeferredRbxmRestoredPersistedVariant=REBASE(0x4CA2270);
            const uintptr_t DeviceInfo=REBASE(0x4C27440);
            const uintptr_t DeviceInitTaskGroupDestructor=REBASE(0x4C3C500);
            const uintptr_t DeviceInitTaskGroupDoAllTasksComplete=REBASE(0x4C3CD70);
            const uintptr_t DeviceInitTaskGroupFetchingUserLayers=REBASE(0x4C3B450);
            const uintptr_t DeviceInitTaskGroupWebBrowserTrackerIdLl=REBASE(0x4C3C600);
            const uintptr_t LaunchOriginEligiblePrefetchingPrefetchi=REBASE(0x4C3BF50);
            const uintptr_t LaunchOriginEligiblePrefetchingSkipping=REBASE(0x4C3BED0);
            const uintptr_t PerformDeviceInitSettingBtidPriorDeviceI=REBASE(0x4C26F40);
            const uintptr_t PlatformNativeAdsProtocolInitialized=REBASE(0x4C25B80);
            const uintptr_t PrefetchAppContentTaskDestructor=REBASE(0x4C3C260);
            const uintptr_t ReportAnalyticsAppQuit=REBASE(0x4C28930);
            const uintptr_t ReportAnalyticsDeviceInfoSubmitTaskColle=REBASE(0x4C26D40);
            const uintptr_t StartupControllerInitializationMustProgr=REBASE(0x4C26930);
            const uintptr_t StartupControllerSetBrowserTrackerIdCall=REBASE(0x50FBE80);
            const uintptr_t StartupControllerStartupController=REBASE(0x4C257F0);
        }
        namespace StatusFileManagerLogV2
        {
            const uintptr_t InvalidInstallerStatus=REBASE(0x5076F60);
        }
        namespace StratusSession
        {
            const uintptr_t ActivateOnGameLoadingComplete=REBASE(0x3D26C40);
            const uintptr_t ControlAudioDeviceSelectionCallbackSet=REBASE(0x3D2AD00);
            const uintptr_t InputCaptureSetUpWithoutCallback=REBASE(0x3D2C250);
            const uintptr_t InputCaptureTornDown=REBASE(0x3D2CF30);
            const uintptr_t PopUdpProbeCachedReportMalformedSkipping=REBASE(0x3D25800);
            const uintptr_t PopUdpProbeProbeDataCachedYetSkipping=REBASE(0x3D27C20);
            const uintptr_t PreActivateStratusSessionId=REBASE(0x3D26600);
            const uintptr_t RemoteKeyboardRequestHide=REBASE(0x3D28E10);
            const uintptr_t RemoteKeyboardRequestShow=REBASE(0x3D28E20);
            const uintptr_t ResolutionDisplayDpXRenderViewX=REBASE(0x3D25A30);
        }
        namespace StratusSessionHistory
        {
            const uintptr_t DeserializeFailed=REBASE(0x3D648E0);
        }
        namespace StratusWebView
        {
            const uintptr_t UnrecognizedWebviewMessageType=REBASE(0x50B96C0);
            const uintptr_t WebViewBridgeActivated=REBASE(0x50B7880);
            const uintptr_t WebViewMessageMissingUrl=REBASE(0x50B6E70);
        }
        namespace StreamMRF
        {
            const uintptr_t ReceivedTemporaryReplicationFocusRequest=REBASE(0x4627590);
            const uintptr_t ReplicationFocusAddedCenter=REBASE(0x4627400);
            const uintptr_t ReplicationFocusAddedPart=REBASE(0x4626D20);
            const uintptr_t ReplicationFocusRemovedCenter=REBASE(0x4627860);
            const uintptr_t ReplicationFocusRemovedPart=REBASE(0x4627150);
            const uintptr_t ServerReplicationFocusFrustumRemoval=REBASE(0x4801150);
            const uintptr_t ServerReplicationFocusRemoval=REBASE(0x4800480);
            const uintptr_t ServerReplicationFocusRequestFocusIdComp=REBASE(0x46E6B30);
            const uintptr_t ServerReplicationFrustumFocusRequest=REBASE(0x46E6C90);
            const uintptr_t StreamMRFRequestsDeferredNotifyFocusIdCo=REBASE(0x462E230);
        }
        namespace StreamPrefetch
        {
            const uintptr_t EvictPrefetch=REBASE(0x475C110);
            const uintptr_t ProtectPrefetch=REBASE(0x47577C0);
            const uintptr_t ReleasePrefetchRemainingCellsZu=REBASE(0x47659B0);
            const uintptr_t ServerPrefetchRequest=REBASE(0x47FFCC0);
            const uintptr_t ValidatePrefetch=REBASE(0x475C130);
        }
        namespace StreamingObserverDetailed
        {
            const uintptr_t SkippingDisconnectCompactionReplicatorSi=REBASE(0x47FC600);
            const uintptr_t SkippingSubscriptionAccessReplicatorIdxS=REBASE(0x47F8960);
            const uintptr_t StepResizeJobCapThresholdReps=REBASE(0x47F85F0);
        }
        namespace Styling
        {
            const uintptr_t FailedDeserializeStyleRulePropertyTransi=REBASE(0x5EFA820);
            const uintptr_t FailedSerializeStyleRulePropertyTransiti=REBASE(0x5EFA6B0);
        }
        namespace StylingPropertiesPanel
        {
            const uintptr_t SettingStyleRuleOverrideInstanceFailedEx=REBASE(0x5EFA3B0);
        }
        namespace SubscriptionDataParsing
        {
            const uintptr_t FailedParseAvailableSubscriptionProducts=REBASE(0x13209E0);
            const uintptr_t FailedParseLocalizedPriceNonObject=REBASE(0x131D910);
            const uintptr_t FailedParseProductKeyNonObject=REBASE(0x131D540);
            const uintptr_t FailedParseSubscriptionProductOffersNon=REBASE(0x131F440);
            const uintptr_t FailedParseSubscriptionProductTypeDetail=REBASE(0x131FCD0);
            const uintptr_t FailedParseVirtualTransactionDiscountsNo=REBASE(0x131DC90);
        }
        namespace SubscriptionPurchase
        {
            const uintptr_t CheckingWhetherPlayerHasRobloxSubscripti=REBASE(0x132B820);
            const uintptr_t HandlingCheckPlayerHasRobloxSubscription=REBASE(0x132B300);
            const uintptr_t HandlingConfirmPlayerHasRobloxSubscripti=REBASE(0x132B5A0);
            const uintptr_t PerformSubscriptionPurchaseV3AsyncFailur=REBASE(0x1328AE0);
            const uintptr_t PerformSubscriptionPurchaseV3AsyncStartP=REBASE(0x13278F0);
            const uintptr_t StoredPromptFinishedTimestampPendingRobu=REBASE(0x132CB00);
            const uintptr_t UserMetPromptFinishedSubscriptionChanged=REBASE(0x132EA90);
        }
        namespace SubscriptionPurchaseCallback
        {
            const uintptr_t MarketplaceServiceWasDeallocated=REBASE(0x133A230);
            const uintptr_t PerformSubscriptionPurchaseV3AsyncFailed=REBASE(0x133A450);
        }
        namespace SurfaceController
        {
            const uintptr_t DataModelWasNullDuringSurfaceController=REBASE(0x1566AE0);
            const uintptr_t ModeFailed=REBASE(0x5EEE110);
            const uintptr_t RenderViewNULL=REBASE(0x15688C0);
            const uintptr_t ReplaceDataModelStageWindowTid08x=REBASE(0x1567E30);
            const uintptr_t SurfaceControllerDisableVR=REBASE(0x1568490);
            const uintptr_t SurfaceControllerEnableVR=REBASE(0x15683E0);
            const uintptr_t SurfaceControllerInitialize=REBASE(0x1566230);
            const uintptr_t SurfaceControllerPauseRenderJobWasNull=REBASE(0x15670F0);
            const uintptr_t SurfaceControllerRenderJobRenderJob=REBASE(0x1565C50);
            const uintptr_t SurfaceControllerRenderJobScheduleRender=REBASE(0x1563D80);
            const uintptr_t SurfaceControllerRenderJobStartupThrottl=REBASE(0x156A8B0);
            const uintptr_t SurfaceControllerRenderJobStepDataModelJ=REBASE(0x15645E0);
            const uintptr_t SurfaceControllerResumeDataModel=REBASE(0x15674E0);
            const uintptr_t SurfaceControllerSetStartupThrottlePreRe=REBASE(0x15631B0);
            const uintptr_t SurfaceControllerSetStartupThrottleRende=REBASE(0x1568260);
            const uintptr_t SurfaceControllerStartDataModel=REBASE(0x1566530);
            const uintptr_t SurfaceControllerSurfaceControllerCount=REBASE(0x1565FF0);
            const uintptr_t SurfaceControllerUpdate=REBASE(0x1567880);
        }
        namespace SurfaceControllerDebug
        {
            const uintptr_t DrainRenderingJobsRemoveAllRenderingJobs=REBASE(0x1569080);
            const uintptr_t SurfaceControllerStop=REBASE(0x1567AA0);
        }
        namespace SystemDialogHandler
        {
            const uintptr_t AnotherDialogAlreadyActiveFirstCancel=REBASE(0x5AB6E40);
            const uintptr_t DismissAllAvailableCurrentPlatform=REBASE(0x5AB6110);
            const uintptr_t DismissAvailableCurrentPlatform=REBASE(0x5AB6010);
            const uintptr_t DismissBlockingDialog=REBASE(0x5AB62D0);
            const uintptr_t HandlerCallDismiss=REBASE(0x5AB7140);
            const uintptr_t HandlerCallDismissAll=REBASE(0x5AB7290);
            const uintptr_t OpenAvailableCurrentPlatform=REBASE(0x5AB5F10);
            const uintptr_t PlatformHandlerWasDestroyed=REBASE(0x5AB6D20);
            const uintptr_t PlatformHandlerWasInstanced=REBASE(0x5AB7410);
        }
        namespace SystemUtil
        {
            const uintptr_t GetLogicalProcessorInformationSupported=REBASE(0x2AC8A60);
        }
        namespace Systray
        {
            const uintptr_t AppRestartTimerFired=REBASE(0x8771F0);
            const uintptr_t AutoStartupDisabled=REBASE(0x873E80);
            const uintptr_t CannotPostNotificationAPINotificationId=REBASE(0x868710);
            const uintptr_t CheckForUpdateTimerFired=REBASE(0x8773F0);
            const uintptr_t ErrorInitializingWinToastInstanceError=REBASE(0x867E80);
            const uintptr_t ErrorShowingNotificationToast=REBASE(0x868220);
            const uintptr_t FailedCreateSystemTrayContextMenu=REBASE(0x8777D0);
            const uintptr_t FailedFetchConnectionsCount=REBASE(0x87AA30);
            const uintptr_t FailedFetchNotificationCount=REBASE(0x86CB60);
            const uintptr_t FailedFetchThumbnail=REBASE(0x869380);
            const uintptr_t FailedLoadBuilderSansFont=REBASE(0x867490);
            const uintptr_t FetchingChannelFailed=REBASE(0x875600);
            const uintptr_t IgnoringDesktopNotificationBecauseAppAct=REBASE(0x86AC20);
            const uintptr_t MainThreadReceivedActivateMainWindow=REBASE(0x871DA0);
            const uintptr_t NewVersionAvailableCurrentVersionChannel=REBASE(0x875540);
            const uintptr_t NotificationHasThumbnail=REBASE(0x869060);
            const uintptr_t SetAutoStartRegistryFailed=REBASE(0x873880);
            const uintptr_t SetPriorityClassIDLEPRIORITYCLASSFailed=REBASE(0x86F8C0);
            const uintptr_t SetPriorityClassNORMALPRIORITYCLASSFaile=REBASE(0x86FED0);
            const uintptr_t ShellNotifyIconWFailed=REBASE(0x87BBD0);
            const uintptr_t ShellNotifyIconWNIMMODIFYFailed=REBASE(0x87C800);
            const uintptr_t ShowWarmStartInfoNIMMODIFYFailed=REBASE(0x87C240);
            const uintptr_t StartingBackgroundUpdateTimers=REBASE(0x8750A0);
            const uintptr_t StartingSignalRConnectionBecauseUserId=REBASE(0x5E42050);
            const uintptr_t StoppingAllBackgroundUpdateTimers=REBASE(0x874710);
            const uintptr_t SuccessfullyLaunchedNewProcessSystrayMod=REBASE(0x872E60);
            const uintptr_t SuccessfullySentNotificationApiPath=REBASE(0x86A260);
            const uintptr_t SystrayCheckInternetFail=REBASE(0x8769B0);
            const uintptr_t SystrayInitializedAsyncMode=REBASE(0x871890);
            const uintptr_t SystrayMenuItemAvatarClicked=REBASE(0x879080);
            const uintptr_t SystrayMenuItemChartsClicked=REBASE(0x878D20);
            const uintptr_t SystrayMenuItemConnectionsClicked=REBASE(0x879AA0);
            const uintptr_t SystrayMenuItemHomeClicked=REBASE(0x8789D0);
            const uintptr_t SystrayMenuItemNotificationsClicked=REBASE(0x879740);
            const uintptr_t SystrayMenuItemPartyClicked=REBASE(0x8793E0);
            const uintptr_t SystrayThreadProcError=REBASE(0x5E424A0);
            const uintptr_t TrayEmptyWhenRemovingIcon=REBASE(0x873650);
            const uintptr_t TrayEmptyWhenShowingIcon=REBASE(0x873410);
            const uintptr_t UnsupportedActionType=REBASE(0x8677B0);
            const uintptr_t UserExitAppStayTrayMode=REBASE(0x8708A0);
            const uintptr_t UserOpenMainWindowStayTray=REBASE(0x8702A0);
        }
        namespace TDigest
        {
            const uintptr_t QuantilesMustSortedIncreasingOrder=REBASE(0x2AD6470);
            const uintptr_t SpecifiedBufferSizeTooSmall=REBASE(0x2AD5900);
            const uintptr_t TryingAddNaNInfTDigest=REBASE(0x2AD60D0);
        }
        namespace TabTipKeyboard
        {
            const uintptr_t FailedCombinePathsError=REBASE(0x8661A0);
            const uintptr_t FailedGetProgramFilesKnownFolder=REBASE(0x8661B0);
            const uintptr_t FailedStartTabTip=REBASE(0x865FE0);
            const uintptr_t FoundTabTipWindowButCouldPost=REBASE(0x84C790);
        }
        namespace TaskSchedulerInit
        {
            const uintptr_t JobCreatedArbiter=REBASE(0x2A72660);
            const uintptr_t JobDestroyed=REBASE(0x2A72C60);
        }
        namespace TaskSchedulerRun
        {
            const uintptr_t JobStartArbiterTime=REBASE(0x2A78F50);
        }
        namespace TeamTest
        {
            const uintptr_t CompilingScript=REBASE(0x47B2810);
        }
        namespace TelemetryBatchManager
        {
            const uintptr_t BatchManagerCanRequestBeQueuedMaxConcurr=REBASE(0x2EBD420);
            const uintptr_t BatchManagerCanRequestBeQueuedMaxRetryAt=REBASE(0x2EBD4C0);
            const uintptr_t BatchManagerErasePendingRequestCalledAft=REBASE(0x2EBB680);
            const uintptr_t BatchManagerFreeRetrySlotConcurrentRetri=REBASE(0x2EBCFD0);
            const uintptr_t BatchManagerGetPendingRequestRequestFoun=REBASE(0x2EBB670);
            const uintptr_t BatchManagerHttpCallbackCalledErrStatusC=REBASE(0x2EBBF20);
            const uintptr_t BatchManagerReportSendResultToUserCallba=REBASE(0x2EBC930);
            const uintptr_t BatchManagerRetryRequestRetryingRequest=REBASE(0x2EBDC90);
            const uintptr_t BatchManagerRetryRequestShuttingDownRetr=REBASE(0x2EBD610);
            const uintptr_t ExceptionReportingEventIngestEvent=REBASE(0x5F558E0);
            const uintptr_t ExceptionReportingV2CounterStat=REBASE(0x5F55BC0);
            const uintptr_t ExceptionReportingV2Point=REBASE(0x5F55D60);
            const uintptr_t ExceptionShutdown=REBASE(0x5F56220);
            const uintptr_t FlushingAllTelemetryBatches=REBASE(0x2EBAE30);
            const uintptr_t OnFlagsLoadedEventingestEventReported=REBASE(0x2EBE720);
            const uintptr_t TryCutAndSendBatchBatchCutUnsuccessfulTi=REBASE(0x2EB9C90);
        }
        namespace TelemetryProtocol
        {
            const uintptr_t BackendsEventShouldExactlyRobloxTelemetr=REBASE(0x50EB2F0);
            const uintptr_t CLogEventFromLuaEventType=REBASE(0x50EBDE0);
            const uintptr_t SendingRobloxTelemetryEphemeralCounterEv=REBASE(0x50E9010);
            const uintptr_t SendingRobloxTelemetryEphemeralStatEvent=REBASE(0x50E9540);
        }
        namespace TelemetryReliabilityCounters
        {
            const uintptr_t AtomicBoolGuardingWriteBeforeRead=REBASE(0x2EDF850);
            const uintptr_t RbxStorageGetStorageInterfaceRobloxTelem=REBASE(0x2EDF860);
            const uintptr_t SuccessfullyWroteReliabilityCountersRbxS=REBASE(0x2EE08B0);
            const uintptr_t UnderscoreWasFoundEventName=REBASE(0x2EDE590);
        }
        namespace TelemetryService
        {
            const uintptr_t BackendsEventShouldExactlyRobloxTelemetr=REBASE(0x4E3DB10);
            const uintptr_t LegacyOverrideTargetForEventIngestFieldO=REBASE(0x4E3B950);
        }
        namespace Teleport
        {
            const uintptr_t AttemptingFallbackTeleportPlaceAfterTele=REBASE(0x35260F0);
            const uintptr_t FailedFetchStarterPlaceIdGamejoin=REBASE(0x3525560);
            const uintptr_t FailedFindJoinDataKey=REBASE(0x34C7C40);
            const uintptr_t FailedParseJoinData=REBASE(0x34C7C30);
            const uintptr_t FallbackTeleportPlaceFailed=REBASE(0x35252D0);
            const uintptr_t GTInfluxDBGuidStepStatusResponseUserId=REBASE(0x44D5D90);
            const uintptr_t GroupTeleportAnalyticsDataModelNull=REBASE(0x34C1DD0);
            const uintptr_t GroupTeleportAnalyticsRemovedParty=REBASE(0x34C1630);
            const uintptr_t GroupTeleportAnalyticsStartTimeError=REBASE(0x34C18A0);
            const uintptr_t GuidMissingCannotRecordGroupTeleport=REBASE(0x34C1070);
            const uintptr_t OnUserJoinCorruptedAuthToken=REBASE(0x34C00B0);
            const uintptr_t ReservedServerResultsNull=REBASE(0x44D9BA0);
            const uintptr_t TeleportCompletedLldMs=REBASE(0x34BD2F0);
            const uintptr_t TeleportPlayersNull=REBASE(0x44D79F0);
            const uintptr_t TeleportServicePromptExperienceDetailsCo=REBASE(0x34C66B0);
            const uintptr_t UnableFindKey=REBASE(0x34BD210);
        }
        namespace TeleportHistoryButtonsLog
        {
            const uintptr_t ForwardHistoryStackUniverseidPlaceid=REBASE(0x3132730);
        }
        namespace TestServiceConnectionManager
        {
            const uintptr_t AutoReconnecting=REBASE(0x36267B0);
            const uintptr_t CaughtExceptionWhileDestroyingTestServic=REBASE(0x5F8AE60);
            const uintptr_t CaughtExceptionWhileDisconnectingWebSock=REBASE(0x5F8AF40);
            const uintptr_t DataModelExpiredWhileCreatingWebSocketCl=REBASE(0x3625B50);
            const uintptr_t FailedCreateWebSocketClient=REBASE(0x3626DC0);
            const uintptr_t FailedSendSinceWebSocketClientConnection=REBASE(0x36277D0);
            const uintptr_t HandlerRegisteredMessageType=REBASE(0x3626A40);
            const uintptr_t InvalidOutboundPayloadQueuedType=REBASE(0x3629350);
            const uintptr_t OutboundEncodeFailedIgnoredMessageType=REBASE(0x36277E0);
            const uintptr_t ProtoToJsonFailedMessageType=REBASE(0x36251F0);
            const uintptr_t SendHandshakeExecutionId=REBASE(0x362A010);
            const uintptr_t TimerServiceUnavailableCannotScheduleRec=REBASE(0x3627240);
            const uintptr_t VideoBinaryTransferAbortedChunk=REBASE(0x362AC90);
            const uintptr_t WebSocketOpened=REBASE(0x362BF10);
        }
        namespace TestServiceLog
        {
            const uintptr_t CaptureScreenshotCompleteRequestIdArtifa=REBASE(0x350FC80);
            const uintptr_t CaptureScreenshotDeterministicRequestIdA=REBASE(0x3510C40);
            const uintptr_t FailedEnqueueTestsListOutboxFull=REBASE(0x350D7B0);
            const uintptr_t FailedSendPONGResponsePING=REBASE(0x3520450);
            const uintptr_t FetchTestControlsCleaningUpPendingReques=REBASE(0x350D4E0);
            const uintptr_t FetchTestControlsPendingCallbackRequestI=REBASE(0x350F7A0);
            const uintptr_t FetchTestControlsStoredPendingRequestReq=REBASE(0x3517440);
            const uintptr_t FetchTestControlsUnsupportedValueTypeKey=REBASE(0x3518200);
            const uintptr_t HandshakeAckProtoParseErrorPayloadPrefix=REBASE(0x350EF70);
            const uintptr_t InstallInboundHandlersConnectionManager=REBASE(0x350E8C0);
            const uintptr_t LegacyUTSSendResultFailed=REBASE(0x350CE00);
            const uintptr_t LegacyUTSTestFoundSuiteTestCase=REBASE(0x350CE10);
            const uintptr_t OnServiceProviderDmWsOptInIsStudioIsServ=REBASE(0x350DAB0);
            const uintptr_t OnTestCaseEndConnectionManagerSkippingSe=REBASE(0x35095C0);
            const uintptr_t RequestValidationSTOREDCallbackRequestId=REBASE(0x3513D70);
            const uintptr_t RequestValidationUsingDeprecatedValidati=REBASE(0x3514AE0);
            const uintptr_t RunIdUpdated=REBASE(0x3515370);
            const uintptr_t SignalProfilingCaptureConnectionManagerS=REBASE(0x3516A00);
            const uintptr_t SignalProfilingStartConnectionManagerSki=REBASE(0x35166D0);
            const uintptr_t SignalProfilingStopConnectionManagerSkip=REBASE(0x35168C0);
            const uintptr_t TestCaseTimedOutAfterSeconds=REBASE(0x35059D0);
            const uintptr_t TestServiceTakeSnapshotCalledButDataMode=REBASE(0x3505C00);
            const uintptr_t ValidationResultMessageReceivedConnectio=REBASE(0x350F3A0);
            const uintptr_t WSConnectedAwaitingHandshakeAck=REBASE(0x35206C0);
            const uintptr_t WSDisconnected=REBASE(0x35205B0);
            const uintptr_t WSEndSessionMessageReceivedClosing=REBASE(0x3520280);
            const uintptr_t WSImageSendSkippedWSConnection=REBASE(0x3520DF0);
        }
        namespace Text
        {
            const uintptr_t ERRORCannotLoadFontFile=REBASE(0x1721950);
            const uintptr_t FoundMatchWhileTryingAddFont=REBASE(0x1711F50);
            const uintptr_t InitializedTextEngineModuleMs=REBASE(0x1708320);
            const uintptr_t LayoutNonrichText=REBASE(0x16F9A30);
            const uintptr_t LayoutRichText=REBASE(0x16F8980);
            const uintptr_t RegisteredFamilyFacesSetLoaded=REBASE(0x1714860);
            const uintptr_t RichTextTypesetterLayoutThisLineStartIdx=REBASE(0x16F8330);
            const uintptr_t SetFaceLoaded=REBASE(0x1717880);
            const uintptr_t SetFaceWaiting=REBASE(0x1719140);
            const uintptr_t SetFamilyWaiting=REBASE(0x1712190);
            const uintptr_t UsingFontSubsystem=REBASE(0x1707650);
        }
        namespace TextChatFiltering
        {
            const uintptr_t ChatEnableButtonClicked=REBASE(0x4A88070);
            const uintptr_t ChatEnableButtonShown=REBASE(0x4A87E90);
            const uintptr_t ErrorOccurredRephraseSettingAvailable=REBASE(0x4AA6620);
            const uintptr_t ExpectedTextFilterTranslatedResultInstan=REBASE(0x4A992B0);
            const uintptr_t FailedParseUniverseChatFilterResult=REBASE(0x6001970);
            const uintptr_t ParseGetActionsResponseJSONParseFailed=REBASE(0x4AAE080);
            const uintptr_t PlayersServiceFound=REBASE(0x4AAEB40);
            const uintptr_t SendUniverseChatPresetAsyncFiringSending=REBASE(0x4AB3FE0);
            const uintptr_t ServerReceivedUniverseChatPresetV2=REBASE(0x4AA4740);
            const uintptr_t SkippingTextChannelHistoryEntry=REBASE(0x4AC7810);
        }
        namespace TextChatSummary
        {
            const uintptr_t MakeGetActionsRequestFailedParseResponse=REBASE(0x4AE1A60);
            const uintptr_t MakeGetActionsRequestTextChannelExpired=REBASE(0x4AE1AE0);
            const uintptr_t TextChannelPollingTextChannelUnderTextCh=REBASE(0x4AE0560);
        }
        namespace TextSafetyAnalyticsSender
        {
            const uintptr_t TextSafetyAnalyticsSenderAddingEntryBatc=REBASE(0x1469050);
            const uintptr_t TextSafetyAnalyticsSenderDispatchingBatc=REBASE(0x1468EA0);
            const uintptr_t TextSafetyAnalyticsSenderSampledOutCandi=REBASE(0x1469810);
            const uintptr_t TextSafetyAnalyticsSenderSentServer=REBASE(0x1469710);
        }
        namespace TextToSpeech
        {
            const uintptr_t MakePlatformPreviewRequestBodyInvalidVoi=REBASE(0x59D3100);
            const uintptr_t SoundServiceLoadTextCallbackLengthZero=REBASE(0x59D1830);
            const uintptr_t SoundServiceLoadTextRequest=REBASE(0x59D2950);
            const uintptr_t SoundServiceLoadTextRequestFailed=REBASE(0x59D1650);
            const uintptr_t TTSOpenCloudGeneratingSpeechAssetUrl=REBASE(0x59D6570);
            const uintptr_t TTSOpenCloudRequestFailedHTTPBody=REBASE(0x59D6E30);
            const uintptr_t TTSPublishGenerateAudioAssetFailedHTTP=REBASE(0x59D82D0);
            const uintptr_t TTSPublishGeneratingAudioAssetUrl=REBASE(0x59D7910);
            const uintptr_t TTSPublishGenerationFailedErrHTTPMsg=REBASE(0x59D5EC0);
            const uintptr_t TTSPublishUploadResponseMissingId=REBASE(0x59D53E0);
            const uintptr_t TTSPublishUsingCachedAudioSkippingGenera=REBASE(0x59D45C0);
        }
        namespace TextureCageProjection
        {
            const uintptr_t TextureCageProjectionFailed=REBASE(0x1C05C20);
        }
        namespace TextureManager
        {
            const uintptr_t ErasingGarbageCollectFailedInner=REBASE(0x383EB40);
            const uintptr_t ImageFailedLoad=REBASE(0x3839AE0);
            const uintptr_t ImageRequested=REBASE(0x3846680);
            const uintptr_t ImageTimingsDecodeMsUploadMs=REBASE(0x38398B0);
            const uintptr_t OrphanedHeadNullButDEPRECATEDOrphanedSiz=REBASE(0x3847870);
            const uintptr_t TextureManagerHangWaitingAsyncTasksCompl=REBASE(0x383C070);
            const uintptr_t WarningReloadImageInternalCalledTextureW=REBASE(0x3848D50);
        }
        namespace TextureManager2
        {
            const uintptr_t BaselineFetchKeyStoreKey=REBASE(0x3836B40);
            const uintptr_t GetCacheOrQueueLoadIdSemanticCompPreload=REBASE(0x3796380);
            const uintptr_t ImageDimensionsXFormat=REBASE(0x3833D50);
            const uintptr_t ImageFailedLoad=REBASE(0x3834140);
            const uintptr_t ImageTimingsDecodeMsUploadWait=REBASE(0x3833CD0);
            const uintptr_t ItemOnEraseItemIdFetchKeyStoreKey=REBASE(0x37AE1D0);
            const uintptr_t JoiningButJustDetachingAsyncRequests=REBASE(0x3834F00);
            const uintptr_t NewManagedTexturePriorityItemIdFetchKeyS=REBASE(0x37997D0);
            const uintptr_t StartAsyncLoadFailedFetchKeyStoreKey=REBASE(0x379A4D0);
            const uintptr_t StillTranscodingWillRetryAttemptSeconds=REBASE(0x37A1280);
            const uintptr_t TPFailedRetryFetchkeyStoreKey=REBASE(0x37A4C10);
            const uintptr_t TextureManager2Destroyed=REBASE(0x379F250);
            const uintptr_t TextureManager2TpUtilPendingTexturePackC=REBASE(0x39B1740);
            const uintptr_t TexturePackFetching=REBASE(0x39AF320);
            const uintptr_t TexturePackImageLoaded=REBASE(0x39AFAA0);
            const uintptr_t WarningUpdatePendingInvalidatedTexturesS=REBASE(0x379D620);
        }
        namespace TextureManager2Priority
        {
            const uintptr_t BindMeshCreateMaterialPriorityKey=REBASE(0x3887520);
            const uintptr_t StartAsyncLoadPriorityIdTypeFetchKeyStor=REBASE(0x3837700);
        }
        namespace TextureManager2Residency
        {
            const uintptr_t LoadingFinishedBytesFreedDeferredFetchKe=REBASE(0x379E330);
            const uintptr_t LoadingStartedBytesItemidFetchKeyStoreKe=REBASE(0x379E130);
            const uintptr_t SetResidencyResMinMipReqMinMipPriorityFe=REBASE(0x3798770);
        }
        namespace TextureQualityLog
        {
            const uintptr_t TextureManager1HandleLowMemoryWarningReq=REBASE(0x383E670);
            const uintptr_t XXMipsFormatXSize=REBASE(0x3849CC0);
        }
        namespace ThirdPartyUserService
        {
            const uintptr_t DefaultLocaleIdObtainedLocalizationServi=REBASE(0x3BA4560);
            const uintptr_t GetHasActiveUserAndSyncValueFalseReturni=REBASE(0x3BA3EC0);
            const uintptr_t GetHasActiveUserAndSyncValueTrueSyncingB=REBASE(0x3BA3ED0);
            const uintptr_t GetTextChatRestrictionStatusUsingPlatfor=REBASE(0x3BA51C0);
            const uintptr_t GetVoiceChatRestrictionStatusFromImpleme=REBASE(0x3BA5BA0);
            const uintptr_t HaveActiveUserTrueNeedSync=REBASE(0x3BA4EA0);
            const uintptr_t IsAccountSwitchingSupportedEntry=REBASE(0x3BA5990);
            const uintptr_t IsAccountSwitchingSupportedUsingPlatform=REBASE(0x3BA59A0);
            const uintptr_t IsChatRestrictionSupportedEntry=REBASE(0x3BA5590);
            const uintptr_t IsChatRestrictionSupportedUsingPlatformA=REBASE(0x3BA55A0);
            const uintptr_t IsSingleSignOnSupportedEntry=REBASE(0x3BA5790);
            const uintptr_t IsSingleSignOnSupportedUsingPlatformAPIS=REBASE(0x3BA57A0);
            const uintptr_t SetHasActiveUserAndSyncSyncingAppStorage=REBASE(0x3BA4120);
            const uintptr_t SyncingAppStorageSupplantingUserInfoDue=REBASE(0x3BA2FB0);
        }
        namespace ThumbnailPlayerCharacterLoadingLog
        {
            const uintptr_t ApplyCharacterAppearanceAssetsFinishedEq=REBASE(0x3E2A650);
            const uintptr_t LoadCharacterAppearanceAssetsCollectAsse=REBASE(0x3E37AD0);
            const uintptr_t UnexpectedErrorAssetDownload=REBASE(0x3E25770);
        }
        namespace ThumbnailRender
        {
            const uintptr_t AfterRenderProvidersRequestsEmptyContent=REBASE(0x36B67D0);
            const uintptr_t BestEffortRenderLoadTimedOut=REBASE(0x36B56B0);
            const uintptr_t RenderingThumbnailPopulatingSceneGraphTr=REBASE(0x36B70F0);
        }
        namespace ThumbnailVideoStreamTrace
        {
            const uintptr_t Close=REBASE(0x10F2A90);
            const uintptr_t ConnectToServiceServiceProvider=REBASE(0x10F43F0);
            const uintptr_t Ctor=REBASE(0x10F1620);
            const uintptr_t DisconnectFromServiceServiceProvider=REBASE(0x10F4800);
            const uintptr_t Dtor=REBASE(0x10F19E0);
            const uintptr_t OnHeartBeatIsPrepared=REBASE(0x10F1D60);
            const uintptr_t OnServiceProvider=REBASE(0x11810B0);
            const uintptr_t Open=REBASE(0x10F20F0);
            const uintptr_t Pause=REBASE(0x10F3870);
            const uintptr_t PlayServiceProvider=REBASE(0x10F2CB0);
            const uintptr_t RenderIsVideoTextureUpdatedVideoStreamIs=REBASE(0x10F3C30);
        }
        namespace TombstoneCache
        {
            const uintptr_t FailedOpenTombstoneFileReading=REBASE(0x4DD82E0);
            const uintptr_t FailedSeekHoldoutByteTombstoneFile=REBASE(0x4DD7B00);
            const uintptr_t SettingHoldoutExperimentState=REBASE(0x4DD78E0);
            const uintptr_t TombstoneCheckFailedMinimumValueAllowed=REBASE(0x4DD68F0);
            const uintptr_t TombstoneExpiryTimeHoldoutChannelWritten=REBASE(0x4DD6AB0);
            const uintptr_t UnexpectedHoldoutByteValueOffset8=REBASE(0x4DD8260);
        }
        namespace Tool
        {
            const uintptr_t ToolSetBackendToolStateCurrentStateNewSt=REBASE(0x31243D0);
        }
        namespace TouchInputServiceGesture
        {
            const uintptr_t PanGestureTranslationVelocityState=REBASE(0x3C39880);
            const uintptr_t PinchGestureScaleVelocityState=REBASE(0x3C3A340);
            const uintptr_t RotateGestureRotationVelocityState=REBASE(0x3C3AA30);
            const uintptr_t TapGestureDetectedTouchesFirstTouch=REBASE(0x3C38E30);
        }
        namespace TraceDebugLog
        {
            const uintptr_t NetworkTracerAddingCheckpointTracerIdPee=REBASE(0x3B11FE0);
            const uintptr_t NetworkTracerCreationStreamTrackerIdAlre=REBASE(0x3B11610);
            const uintptr_t NetworkTracerCreationTrackerNameAlreadyE=REBASE(0x3B11370);
            const uintptr_t NetworkTracerDeleteTracerNumberTracersLe=REBASE(0x3B11C40);
        }
        namespace TrackHttpRequest
        {
            const uintptr_t HttpRequestCurlWsCallingReAbort=REBASE(0x2CDEFC0);
            const uintptr_t HttptrackAddResReqAbortedRequests=REBASE(0x2C811D0);
            const uintptr_t HttptrackHttpRequest=REBASE(0x2CA0080);
            const uintptr_t HttptrackNewPriorityReq=REBASE(0x2C8A8A0);
            const uintptr_t HttptrackWebSocketCurlReq=REBASE(0x2CDBFD0);
            const uintptr_t WstrackWsClient=REBASE(0x2C8FBA0);
        }
        namespace TrackerAnimationStreamSourceTrace
        {
            const uintptr_t Close=REBASE(0x1A8C990);
            const uintptr_t Open=REBASE(0x1A8C240);
        }
        namespace TrackerLodControllerTrace
        {
            const uintptr_t LODProcessingTimeFrameRateRunningVoteLod=REBASE(0x19F4A70);
        }
        namespace TrackerStreamAnimationTrace
        {
            const uintptr_t OnDisconnect=REBASE(0x17D3E10);
            const uintptr_t SetProducer=REBASE(0x17D3AC0);
            const uintptr_t SetStreamSource=REBASE(0x17D3810);
            const uintptr_t StepNeckIndexOffCanT=REBASE(0x17D21B0);
            const uintptr_t Stop=REBASE(0x17D1AD0);
        }
        namespace Transcoder
        {
            const uintptr_t ContainsWhitespace=REBASE(0x494D950);
            const uintptr_t HasInvalidPercentage=REBASE(0x494D930);
        }
        namespace TransitionType
        {
            const uintptr_t TransitionTypeSendingEvent=REBASE(0x4C693D0);
            const uintptr_t TransitionTypeSettingTeleportTarget=REBASE(0x4C69990);
        }
        namespace TranslationLocaleIdVerbose
        {
            const uintptr_t ErrorUpdatingLocaleId=REBASE(0x149A6A0);
        }
        namespace TtiTelemetryIntegrationCheck
        {
            const uintptr_t RandomID=REBASE(0x3CAC0A0);
            const uintptr_t TelemetryEventASendErrorCode=REBASE(0x3CAC2D0);
            const uintptr_t TelemetryEventAlreadySentSkipping=REBASE(0x3CAC3A0);
        }
        namespace UIDragDetectorLog
        {
            const uintptr_t DragDisabledEndingDrag=REBASE(0x45D1110);
            const uintptr_t MenuOpenedUIDragDetectorCallingEndDragNo=REBASE(0x45D4BD0);
            const uintptr_t UIDragDetectorDestroyedCallingOnCancel=REBASE(0x45D4F70);
            const uintptr_t UIDragDetectorDragContinueDraggingReturn=REBASE(0x45C8D00);
            const uintptr_t UIDragDetectorDragContinueInputPositionD=REBASE(0x45C8C50);
            const uintptr_t UIDragDetectorDragEndEnabledReturningFal=REBASE(0x45CB660);
            const uintptr_t UIDragDetectorDragStartAlreadyDraggingRe=REBASE(0x45C82B0);
            const uintptr_t UIDragDetectorDragStartEnabledReturningF=REBASE(0x45C8220);
        }
        namespace UIOcclusionMetrics
        {
            const uintptr_t UIOcclusionMetricsRegionStringHasError=REBASE(0x4095AF0);
        }
        namespace US14116
        {
            const uintptr_t SendingDisplayStatsLld=REBASE(0x3DD1FB0);
        }
        namespace UgcExperienceController
        {
            const uintptr_t GameShutdownSignalFailedLock=REBASE(0x4CB6D60);
            const uintptr_t GameShutdownSignalSignalToObserversFaile=REBASE(0x4CAE690);
            const uintptr_t SignalToObserversFailedGetDataModel=REBASE(0x4CB6050);
            const uintptr_t TeamTestTeleportTeleportInfoMissingRequi=REBASE(0x4CAC1B0);
            const uintptr_t UgcExperienceControllerDestroyCaptureMod=REBASE(0x4CADC00);
            const uintptr_t UgcExperienceControllerDoTeleportJoinScr=REBASE(0x4CB1250);
            const uintptr_t UgcExperienceControllerExitExperienceSta=REBASE(0x4CB4640);
            const uintptr_t UgcExperienceControllerFinalizeDidFinali=REBASE(0x4CAD490);
            const uintptr_t UgcExperienceControllerFinalized=REBASE(0x4CAD530);
            const uintptr_t UgcExperienceControllerFinishTeleportWit=REBASE(0x4CB0CE0);
            const uintptr_t UgcExperienceControllerInitializeDidInit=REBASE(0x4CAD180);
            const uintptr_t UgcExperienceControllerJoinInitializedDm=REBASE(0x4CB1FB0);
            const uintptr_t UgcExperienceControllerMakeJoinScriptReq=REBASE(0x4CB0450);
            const uintptr_t UgcExperienceControllerSendAnalyticsBefo=REBASE(0x4CABCB0);
            const uintptr_t UgcExperienceControllerStartDidStartDueS=REBASE(0x4CAD6B0);
            const uintptr_t UgcExperienceControllerStopBeginBlocking=REBASE(0x4CADB50);
            const uintptr_t UgcExperienceControllerSubmitEnableVRGam=REBASE(0x4CAB110);
            const uintptr_t UgcExperienceControllerSubmitStartGameTa=REBASE(0x4CB2970);
            const uintptr_t UgcExperienceControllerSwitchToExperienc=REBASE(0x4CB3060);
            const uintptr_t UgcExperienceControllerUgcExperienceCont=REBASE(0x4CACF70);
            const uintptr_t UgcExperienceControllerUpdateServerTypeA=REBASE(0x4CAB8D0);
        }
        namespace UnexpectedServiceInstanceCountsLog
        {
            const uintptr_t CheckingServicesDmTotalTotalUnique=REBASE(0x35987D0);
            const uintptr_t DMIntentStudioServerPlayClient=REBASE(0x35986B0);
            const uintptr_t SendingDynamicLoadCountTelemetry=REBASE(0x3598490);
        }
        namespace UniverseChatChannelMonitorLog
        {
            const uintptr_t ExceptionParsingHeartbeatV2Response=REBASE(0x607EB10);
            const uintptr_t HeartbeatV2RegroupedNewChannelGroup=REBASE(0x5AD7660);
            const uintptr_t HeartbeatV2ResultChannelGroupOk=REBASE(0x5AD8D20);
            const uintptr_t HeartbeatV2ResultChannelGroupReassigned=REBASE(0x5AD6040);
            const uintptr_t ReassignedActionChannelMissingChannelIdT=REBASE(0x5AD4210);
            const uintptr_t SendingHeartbeatRequestBody=REBASE(0x5AD2560);
            const uintptr_t StartingUniverseChatChannelMonitor=REBASE(0x4AA1750);
            const uintptr_t UniverseChatChannelMonitorPlaceId=REBASE(0x5AD04C0);
            const uintptr_t UniverseChatChannelMonitorPulsePlaceId=REBASE(0x5AD0010);
            const uintptr_t UniverseChatMessageManagerAvailableSkipp=REBASE(0x5AD04A0);
        }
        namespace UniverseChatMessageManager
        {
            const uintptr_t CSMMessageMissingSenderUserIdMessageId=REBASE(0x49D1830);
            const uintptr_t ExceptionWhileParsingAllocateChannelResp=REBASE(0x5FFC370);
            const uintptr_t ExceptionWhileParsingAllocateChannelV2=REBASE(0x5FFC4D0);
            const uintptr_t ExceptionWhileParsingGetMessagesResponse=REBASE(0x5FFC6F0);
            const uintptr_t ExceptionWhileParsingIngestMessageRespon=REBASE(0x5FFC8F0);
            const uintptr_t HandlingAllocateChannelResponseUser=REBASE(0x49DAA00);
            const uintptr_t InvalidPermissionsCheckResponse=REBASE(0x49D4CB0);
            const uintptr_t MakeGetActionsRequestHTTPErrorStatus=REBASE(0x49D44B0);
            const uintptr_t MissingInvalidResultsArrayAllocateChanne=REBASE(0x49DBD70);
            const uintptr_t MissingInvalidResultsArrayGetMessages=REBASE(0x49E2260);
            const uintptr_t MissingRequiredFieldsIngestMessageResult=REBASE(0x49E6A00);
            const uintptr_t ParsedAllocateChannelResponseUserChannel=REBASE(0x49DA970);
            const uintptr_t ReassigningChannelChannelTopicNewChannel=REBASE(0x49DE080);
            const uintptr_t ReassigningGroupChannelTopic=REBASE(0x49DF4A0);
        }
        namespace UnreliableItems
        {
            const uintptr_t OversizedUnreliableItemDroppedItemSize=REBASE(0x4848B20);
            const uintptr_t UnreliableEventReceivedBeforeObjectHas=REBASE(0x48422B0);
        }
        namespace UpdateController
        {
            const uintptr_t CheckingIfUpdaterExistsReturning=REBASE(0x861880);
            const uintptr_t FailedParseJson=REBASE(0x4E458B0);
            const uintptr_t NetworkCheckFinishedWhileReadingCache=REBASE(0x4E43770);
            const uintptr_t RbxStorageUnavailableCannotBurnUpdateCon=REBASE(0x4E44C20);
            const uintptr_t RbxStorageUnavailableCannotReadUpdateCon=REBASE(0x4E43960);
            const uintptr_t UnauthorizedAccess401VersionURLExpected=REBASE(0x4E452D0);
            const uintptr_t UpdateCheckThreadUpdateRequired=REBASE(0x4E45B90);
            const uintptr_t UpdateControllerVersionQueryUrl=REBASE(0x4E42EA0);
            const uintptr_t UpdateModeChosenTelemetrySent=REBASE(0x4E45EB0);
            const uintptr_t UpdaterFoundSkippingUpdate=REBASE(0x4E452E0);
            const uintptr_t UsingCachedUpdateCheckValues=REBASE(0x4E45000);
            const uintptr_t WindowsUpdateControllerUpdaterFullPath=REBASE(0x860220);
            const uintptr_t WroteUpdateControllerCacheAppStorageJson=REBASE(0x4E44600);
        }
        namespace UserAgentHelper
        {
            const uintptr_t MainWindowEmptyWebview2Installed=REBASE(0x17B2540);
        }
        namespace UserController
        {
            const uintptr_t UserControllerDidLoginStage=REBASE(0x4C5E990);
        }
        namespace UserInputProfile
        {
            const uintptr_t ChangingHumanoidStateOldNew=REBASE(0x1A018A0);
            const uintptr_t HandingGUITargetX=REBASE(0x3C16BD0);
            const uintptr_t HandingWorkspaceEarlyBecauseEventGrabbed=REBASE(0x3C138F0);
            const uintptr_t HumanoidJumpSet=REBASE(0x18C9C30);
            const uintptr_t MovingVelocity=REBASE(0x18C7EC0);
            const uintptr_t PanningCameraHeadingElevationDistance=REBASE(0x347C8E0);
            const uintptr_t PassingTouchEndUpProcessingCommand=REBASE(0x34964D0);
            const uintptr_t SettingLuaMoveDirection=REBASE(0x18C9240);
        }
        namespace VIPTeleport
        {
            const uintptr_t CalledInitiateTeleportToPrivateServer=REBASE(0x4C77AD0);
            const uintptr_t CreateTeleportImplValuesAreNull=REBASE(0x34B9F70);
            const uintptr_t CreateWeWereAbleGetVip=REBASE(0x34D5590);
            const uintptr_t MadeInsideGameLoadedSignalWithoutTelepor=REBASE(0x34D5020);
            const uintptr_t NewDMAfterGameLoadedSignalConnect=REBASE(0x34C9580);
            const uintptr_t ReportTeleportOnGameLoadedGotValuesTelep=REBASE(0x34CA090);
            const uintptr_t TeleportDataValueTableData=REBASE(0x34C8830);
        }
        namespace Verbs
        {
            const uintptr_t GuiConnectionHealth=REBASE(0x4057E20);
            const uintptr_t GuiNetworkStats=REBASE(0x4057AA0);
            const uintptr_t GuiRenderStats=REBASE(0x4057510);
            const uintptr_t GuiStats=REBASE(0x4057220);
            const uintptr_t GuiSummaryStats=REBASE(0x4058120);
        }
        namespace VersionHistory
        {
            const uintptr_t CommitFailureAssetMapingsAvailable=REBASE(0x3302C20);
            const uintptr_t CommitFailureCanTParseJSON=REBASE(0x33006F0);
            const uintptr_t CommitFailureCommitGuidProvided=REBASE(0x33018D0);
            const uintptr_t CommitFailureUnexpectedScriptGuid=REBASE(0x33035D0);
            const uintptr_t CommitFailureVersionHistoryCommitCoordin=REBASE(0x32FF600);
            const uintptr_t CommitFinalize=REBASE(0x3307980);
            const uintptr_t Int64TConversionFailureValidNumber=REBASE(0x3301EC0);
        }
        namespace VideoAdaption
        {
            const uintptr_t AbrSelectorConfigInvalidJSONMissingStart=REBASE(0x1E85030);
            const uintptr_t AbrSelectorConfigSelectorNodeMustStringS=REBASE(0x1E84D10);
            const uintptr_t AbrSelectorConfigUnknownSelectorReturnin=REBASE(0x1E84A10);
            const uintptr_t AdaptionLogicDecidedVideoShouldPlayed=REBASE(0x3D079B0);
            const uintptr_t ForcingHighestResolutionAsset=REBASE(0x3D09EA0);
            const uintptr_t GettingCurrentScreenDensity=REBASE(0x1E8F980);
            const uintptr_t NextVariantChosen=REBASE(0x3D13E40);
            const uintptr_t StartingVariantChosen=REBASE(0x3D14020);
        }
        namespace VideoCodec
        {
            const uintptr_t EncoderAcceptingInputSampleCachingFrame=REBASE(0x1EFFDE0);
            const uintptr_t EnoughMemoryStartSoftwareVideoEncoder=REBASE(0x1ED00E0);
            const uintptr_t ErrorCreatingTextureHardwareEncoderAvail=REBASE(0x1ED33B0);
            const uintptr_t FailedCreateTexture=REBASE(0x1EFB5E0);
            const uintptr_t FailedGetFileVersionSizeDLL=REBASE(0x1EDCB00);
            const uintptr_t FailedSetGOPSizeEncoderHR=REBASE(0x1EEF2E0);
            const uintptr_t FailedStartMediaFoundation=REBASE(0x1EDB1C0);
            const uintptr_t FirstOutputFrameKeyFrameMay=REBASE(0x1F026F0);
            const uintptr_t HardwareEncoderBlacklisted=REBASE(0x1EFD3D0);
            const uintptr_t HardwareEncoderInitializedSuccessfullyIs=REBASE(0x1ED5AC0);
            const uintptr_t HwEncoderReturnedErrorWhenReceiving=REBASE(0x1ED2AB0);
            const uintptr_t IncorrectNumberPlanesCreateRGBATexture=REBASE(0x1F06DC0);
            const uintptr_t InvalidCodecParametersVideoEncoder=REBASE(0x1F055B0);
            const uintptr_t MediaFoundationCodecReceivePacketInterna=REBASE(0x1EE8CE0);
            const uintptr_t MediaFoundationCodecSendPacketVideoSetSa=REBASE(0x1EEB850);
            const uintptr_t MissingCodecWhenCreatingHardwareBuffer=REBASE(0x1ECC5B0);
            const uintptr_t PreparingNewVideoEncoder=REBASE(0x1EEF2F0);
            const uintptr_t RetrievedStreamIDsHardwareEncoderInput=REBASE(0x1EFE600);
            const uintptr_t SampleTrackerReleasingOldSample=REBASE(0x1F11A00);
            const uintptr_t WindowsHardwareMFTVideoEncoderAdapter=REBASE(0x1ED51B0);
            const uintptr_t WindowsHardwareMFTVideoEncoderInitializa=REBASE(0x1ED8290);
            const uintptr_t WindowsMFTVideoEncoderStartedIsVideo=REBASE(0x1ED7F20);
        }
        namespace VideoDeviceInputTrace
        {
            const uintptr_t VideoDeviceInputSetActiveActive=REBASE(0x3CE30C0);
            const uintptr_t VideoDeviceInputSetCameraIdId=REBASE(0x3CE3310);
            const uintptr_t VideoDeviceInputSetCaptureQualityQuality=REBASE(0x3CE31C0);
            const uintptr_t VideoDeviceInputShutdown=REBASE(0x3CE2FC0);
        }
        namespace VideoFeatureControlTrace
        {
            const uintptr_t VideoFeatureControlDtor=REBASE(0x3CFFDF0);
            const uintptr_t VideoFeatureControlReportVideoStatsRebuf=REBASE(0x3D61280);
            const uintptr_t VideoFeatureControlSave=REBASE(0x3D61590);
            const uintptr_t VideoStatsCacheDeserialize=REBASE(0x3D60BA0);
            const uintptr_t VideoStatsCacheSerializeData=REBASE(0x3D60480);
        }
        namespace VideoFrame
        {
            const uintptr_t VideoFrameSetPlaybackStateNew=REBASE(0x3F092C0);
        }
        namespace VideoFrameTrace
        {
            const uintptr_t VideoFrameRender2d=REBASE(0x3F06BE0);
        }
        namespace VideoInputProcessorTrace
        {
            const uintptr_t Activating=REBASE(0x1A975C0);
            const uintptr_t AlreadySubscribedVideoDeviceProducerSubs=REBASE(0x1A97970);
            const uintptr_t Connect=REBASE(0x1A978D0);
            const uintptr_t Deactivating=REBASE(0x1A97770);
            const uintptr_t InvalidStream=REBASE(0x1A97E00);
            const uintptr_t StartingProcessing=REBASE(0x1A988B0);
            const uintptr_t StoppingProcessing=REBASE(0x1A98AD0);
            const uintptr_t StreamDeviceIDNullDevice=REBASE(0x1A97DD0);
            const uintptr_t VideoErrorCode=REBASE(0x1A981B0);
            const uintptr_t VideoStopping=REBASE(0x1A98080);
        }
        namespace VideoMemoryPool
        {
            const uintptr_t VideoSVideoBipBufferHasRings=REBASE(0x1E8E680);
        }
        namespace VideoPlaybackManagerTrace
        {
            const uintptr_t RequestingSeek=REBASE(0x3CE5C30);
            const uintptr_t SetStream=REBASE(0x3CE5AA0);
            const uintptr_t SettingLoadAllowed=REBASE(0x3CDD800);
            const uintptr_t SettingPlay=REBASE(0x3CE5D70);
        }
        namespace VideoPlaylistSelector
        {
            const uintptr_t DisplaySizeUnknownAssumingBigDisplay=REBASE(0x1E88DE0);
            const uintptr_t EnoughMemoryPlayVideoForcingLowest=REBASE(0x1E88BF0);
            const uintptr_t EstimatedCodecTextureMemoryUsageVariant=REBASE(0x1E88060);
            const uintptr_t HarmonyStartingSelectorWorstIndex=REBASE(0x1E87D80);
            const uintptr_t PlayingMomentsCaptureSelectingHighestPos=REBASE(0x1E893E0);
            const uintptr_t PlentyMemoryPlayVideoForcingHighest=REBASE(0x1E88B30);
            const uintptr_t TotalMemoryLowForcingLowestResolution=REBASE(0x1E895E0);
        }
        namespace VideoScreenCaptureService
        {
            const uintptr_t CaptureSucceededDurationMs=REBASE(0x3CD1160);
            const uintptr_t CheckingGPUAgainstBlacklistMomentsCaptur=REBASE(0x3CD2420);
            const uintptr_t CheckingGPUAgainstGraphicsAPIBlacklist=REBASE(0x3CD29E0);
            const uintptr_t CleanupVideoCapture=REBASE(0x3CCF480);
            const uintptr_t CurrentVideoCaptureTriggerDoesMatch=REBASE(0x3CD19E0);
            const uintptr_t FailedGetGraphicBufferSourceWhenCaptureA=REBASE(0x3CD14F0);
            const uintptr_t FailedRemoveSelfTestFile=REBASE(0x3CD00D0);
            const uintptr_t LoadSelfTestResult=REBASE(0x3CD3210);
            const uintptr_t LoadSettings=REBASE(0x3CD3AB0);
            const uintptr_t NewRequestTrigger=REBASE(0x3CD2020);
            const uintptr_t OnStartedVideoCaptureStartedResult=REBASE(0x3CD48C0);
            const uintptr_t SaveSelfTestResult=REBASE(0x3CD2D30);
            const uintptr_t SaveSettingsUseHardware=REBASE(0x3CD35D0);
            const uintptr_t SelfTestDurationAdjustedRenderBuffer=REBASE(0x3CCF840);
            const uintptr_t SendingCurrentRequestTriggerCaptureEngin=REBASE(0x3CD0AB0);
            const uintptr_t StartFailed=REBASE(0x3CD1880);
            const uintptr_t StartScreenCaptureAsyncTrigger=REBASE(0x3CCEF50);
            const uintptr_t StartingRequestTriggerDirectly=REBASE(0x3CCFAB0);
            const uintptr_t StartingSelfTestThenRequestTrigger=REBASE(0x3CCFCC0);
            const uintptr_t StopAllRequests=REBASE(0x3CD1D20);
            const uintptr_t StopScreenCaptureExpectedTriggerCurrentT=REBASE(0x3CCF210);
        }
        namespace VideoSelfTest
        {
            const uintptr_t FrameVideoHeight=REBASE(0x52793F0);
            const uintptr_t SelfTestRGBAImage=REBASE(0x52793D0);
            const uintptr_t SendPacketTimedOutAfterMsecAttempts=REBASE(0x527A3E0);
            const uintptr_t ValidateSelfTestVideoIndexAVCHEVCVideo=REBASE(0x527A7B0);
        }
        namespace VideoServer
        {
            const uintptr_t PostOfferAsyncFailedStatusHttpCodeBody=REBASE(0x3D690B0);
        }
        namespace VideoService
        {
            const uintptr_t AddingVisibleTimeMsSourceVideo=REBASE(0x3EFAE60);
            const uintptr_t ClientRemovedVideoServiceClientsIdNumEra=REBASE(0x3EFDD30);
            const uintptr_t RegisteringClientHasPendingRemoveRemovin=REBASE(0x3EFA620);
            const uintptr_t UnregisteringClientHasPendingAddRemoving=REBASE(0x3EFAA60);
        }
        namespace VideoServiceClient
        {
            const uintptr_t AccumulatedPreviousBufferingStatsVideoSt=REBASE(0x3CF1480);
            const uintptr_t BufferingStatsVideoSequenceId=REBASE(0x3CF11C0);
            const uintptr_t SendingSmoothnessCounterPlayMsRebufferin=REBASE(0x3CF18A0);
        }
        namespace VideoStream
        {
            const uintptr_t VideoStreamCheckIfVideoTypeIsValidInvali=REBASE(0x3D08FE0);
            const uintptr_t VideoStreamUpdateContextVideoTypeValidCu=REBASE(0x3D10130);
        }
        namespace VideoThumbnailGeneratorTrace
        {
            const uintptr_t GenerateAndInsertTextureIdFrameBuffer=REBASE(0x5A6AA40);
            const uintptr_t GetThumbnailTextureId=REBASE(0x5A6A0B0);
            const uintptr_t OnHeartBeat=REBASE(0x3EFC610);
            const uintptr_t RequestThumbnailThumbnailRequestDropped=REBASE(0x5A69B20);
            const uintptr_t TryFinishingCurrentJob=REBASE(0x5A6A700);
            const uintptr_t TryStartingNextJobNothingProcess=REBASE(0x5A6A370);
        }
        namespace VideoTrace
        {
            const uintptr_t VideoFrameSamplerCloseCodecs=REBASE(0x3D55340);
            const uintptr_t VideoStreamClose=REBASE(0x3D040F0);
            const uintptr_t VideoStreamCloseCodecs=REBASE(0x3D0B770);
            const uintptr_t VideoStreamFlushRenderBuffers=REBASE(0x3D0ED60);
            const uintptr_t VideoStreamOpenFailOnLowResource=REBASE(0x3D03EF0);
            const uintptr_t VideoStreamSetTimePosition=REBASE(0x3D05290);
            const uintptr_t VideoStreamVideoStream=REBASE(0x3D03940);
        }
        namespace ViewRbxBase
        {
            const uintptr_t RenderPerformEndDeltaTotalPresent=REBASE(0x36B08D0);
            const uintptr_t WaitVRWaitedMs=REBASE(0x36A25E0);
        }
        namespace ViewRbxInit
        {
            const uintptr_t BindWorkspaceNewDatamodelOldDatamodel=REBASE(0x369DAD0);
            const uintptr_t RenderViewAdditionalCreated=REBASE(0x3698D60);
            const uintptr_t RenderViewSubViewCreated=REBASE(0x36992B0);
        }
        namespace VoiceChatLogs
        {
            const uintptr_t AsyncInitRTCThreadsAndAudioDeviceENTRYSe=REBASE(0x521FB70);
            const uintptr_t AttemptingUpdateSubscriptionsButPeerConn=REBASE(0x5173EE0);
            const uintptr_t AudioDeviceManagerAudioDeviceManager=REBASE(0x51CD400);
            const uintptr_t AudioDeviceManagerInit=REBASE(0x51CD7B0);
            const uintptr_t AudioDeviceManagerInitPlayout=REBASE(0x51CE2D0);
            const uintptr_t AudioDeviceManagerInitRecording=REBASE(0x51CE5C0);
            const uintptr_t AudioDeviceManagerStartPlayout=REBASE(0x51CE860);
            const uintptr_t AudioDeviceManagerStartRecordingHasPermi=REBASE(0x51CECB0);
            const uintptr_t AudioDeviceManagerStopPlayout=REBASE(0x51CEA30);
            const uintptr_t AudioDeviceManagerTerminate=REBASE(0x51CDB00);
            const uintptr_t AudioFormatChangedReInitializingRecordin=REBASE(0x51D35A0);
            const uintptr_t AudioQualityEncoderFailedCreateOGGContai=REBASE(0x5187D90);
            const uintptr_t AudioQualityEncoderFailedWriteOGGTrailer=REBASE(0x5188AA0);
            const uintptr_t CannotFindUserCurrentSubscriptionsAbando=REBASE(0x5178060);
            const uintptr_t CannotFindUserCurrentUserToMidMapAbandon=REBASE(0x5178070);
            const uintptr_t ClientICETrickleOperationConstructed=REBASE(0x5184A00);
            const uintptr_t ClientICETrickleOperationInitializeState=REBASE(0x5184EC0);
            const uintptr_t ClientICETrickleOperationSUBCandidateMid=REBASE(0x5185110);
            const uintptr_t ClientICETrickleOperationSendICECandidat=REBASE(0x5185CF0);
            const uintptr_t ClientJoinOperationSkippedPlaySoloMode=REBASE(0x514B9E0);
            const uintptr_t ClientJoinOperationWaitForJoinedVoiceSta=REBASE(0x514C7A0);
            const uintptr_t ClientLeaveOperationConstructed=REBASE(0x5144ED0);
            const uintptr_t ClientLeaveOperationDisconnectPeerConnec=REBASE(0x5145330);
            const uintptr_t ClientLeaveOperationDuplicateLeaveCleanu=REBASE(0x5146670);
            const uintptr_t ClientLeaveOperationWaitForWebrtcShutDow=REBASE(0x5146C40);
            const uintptr_t ClientMuteUnmuteOperationConstructedStat=REBASE(0x51518C0);
            const uintptr_t ClientOperationCollectionEnqueueClientMu=REBASE(0x4BEA8D0);
            const uintptr_t ClientOperationCollectionRunSendSessionE=REBASE(0x5131770);
            const uintptr_t ClientPeerLocalMuteUnmuteOperationConstr=REBASE(0x5161D60);
            const uintptr_t ClientPeerRemoteMuteUnmuteOperationConst=REBASE(0x5177890);
            const uintptr_t ClientPublishInitializeStateAbandoningPu=REBASE(0x5156350);
            const uintptr_t ClientPublishOperationClientPublishAband=REBASE(0x5155A90);
            const uintptr_t ClientPublishOperationClientPublishFailS=REBASE(0x51558B0);
            const uintptr_t ClientPublishOperationClientPublishRepub=REBASE(0x5156820);
            const uintptr_t ClientPublishOperationClientPublishSetup=REBASE(0x51572C0);
            const uintptr_t ClientPublishOperationClientPublishSucce=REBASE(0x5155510);
            const uintptr_t ClientPublishOperationClientPublishWaitF=REBASE(0x5156C30);
            const uintptr_t ClientPublishOperationConstructed=REBASE(0x5155BB0);
            const uintptr_t ClientPublishOperationFailedDueVoiceSetu=REBASE(0x5158660);
            const uintptr_t ClientPublishOperationHaltedVoiceSetupFa=REBASE(0x5158670);
            const uintptr_t ClientPublishOperationPreRunRoutine=REBASE(0x5155F60);
            const uintptr_t ClientPublishOperationSdpCompressionComp=REBASE(0x5157E50);
            const uintptr_t ClientPublishOperationTimedOut=REBASE(0x51561C0);
            const uintptr_t ClientPublishSetupPeerConnectionStateFai=REBASE(0x51572D0);
            const uintptr_t ClientPublishWaitForAnswerStateTooManyPu=REBASE(0x5158AB0);
            const uintptr_t ClientPublishWaitForCompleteStateTooMany=REBASE(0x5159690);
            const uintptr_t ClientPublishWaitForOfferStateFailedGetO=REBASE(0x5157E60);
            const uintptr_t ClientPublishWaitForSetupPeerConnectionC=REBASE(0x51579A0);
            const uintptr_t ClientRebootInitializeState=REBASE(0x51509D0);
            const uintptr_t ClientRebootOperationReachedRetryLimit=REBASE(0x5150C70);
            const uintptr_t ClientSubscribeOperationConstructedSessi=REBASE(0x516DB90);
            const uintptr_t ClientSubscribeOperationNewConnectionDet=REBASE(0x516E770);
            const uintptr_t ClientSubscribeOperationSdpCompressionCo=REBASE(0x5174D00);
            const uintptr_t ClientSubscriberAudioQualityAwaitPristin=REBASE(0x515D5D0);
            const uintptr_t ClientSubscriberAudioQualityEncodeAndUpl=REBASE(0x515DFF0);
            const uintptr_t ClientSubscriberAudioQualityOperationTim=REBASE(0x515C8B0);
            const uintptr_t ClientSubscriberAudioQualitySelectAndAtt=REBASE(0x515CA80);
            const uintptr_t ClientSubscriptionsUpdateOnCompletedStat=REBASE(0x5175B70);
            const uintptr_t ClientSubscriptionsUpdateOperationFailed=REBASE(0x516E560);
            const uintptr_t ClientSubscriptionsUpdateSendAckedEventS=REBASE(0x5174D20);
            const uintptr_t ClientSubscriptionsUpdateWaitForSubCompl=REBASE(0x5175770);
            const uintptr_t ClientTurnAuthOperationConstructed=REBASE(0x514F050);
            const uintptr_t ClientVoiceRtcStatsAbandonState=REBASE(0x517A340);
            const uintptr_t ClientVoiceRtcStatsMonitorOperationAband=REBASE(0x5135010);
            const uintptr_t ClientVoiceRtcStatsOperationSkippingStat=REBASE(0x517A610);
            const uintptr_t ClientVoiceRtcStatsOperationTimedOut=REBASE(0x517A2A0);
            const uintptr_t ClientVoiceWebrtcConnectionChangesStateR=REBASE(0x5147A70);
            const uintptr_t CloseConnectionsAudioDeviceModuleWrapper=REBASE(0x51EF380);
            const uintptr_t CloseConnectionsENTRYSession=REBASE(0x5220450);
            const uintptr_t CloseConnectionsEarlyReturnInitialized=REBASE(0x51EE390);
            const uintptr_t CloseConnectionsStoppingAudioPlayoutReco=REBASE(0x51EEA60);
            const uintptr_t ConnectOperationConnectAbandonedState=REBASE(0x51808E0);
            const uintptr_t ConnectOperationDataChannelRemoteAnswerR=REBASE(0x5183110);
            const uintptr_t ConnectOperationFailed=REBASE(0x51806D0);
            const uintptr_t ConnectOperationFailedInitializePeerConn=REBASE(0x51811A0);
            const uintptr_t ConnectOperationMissingConnectBlob=REBASE(0x5180C60);
            const uintptr_t ConnectOperationStillInitializingPeerCon=REBASE(0x5181190);
            const uintptr_t ConnectionApiCullingStateUpdateListenerO=REBASE(0x51DBAC0);
            const uintptr_t ConnectionApiPublishSetRemoteDescription=REBASE(0x51EAE50);
            const uintptr_t ConnectionApiRELAYCandidateIpPort=REBASE(0x51ED170);
            const uintptr_t ContextParsingOperationSendPublisherSign=REBASE(0x513BC00);
            const uintptr_t CreateSessionWebRTCConnectionBuiltProces=REBASE(0x520D3B0);
            const uintptr_t CreateWebRTCConnectionFFlagVoiceUseWebRT=REBASE(0x51DB8A0);
            const uintptr_t CullingPassSummaryActiveCulledMuted=REBASE(0x5160700);
            const uintptr_t CustomAudioDeviceModuleBuiltInAECIsAvail=REBASE(0x51BD5C0);
            const uintptr_t CustomAudioDeviceModuleCustomAudioDevice=REBASE(0x51BD3C0);
            const uintptr_t CustomAudioDeviceModuleEnableBuiltInAECI=REBASE(0x51BD6E0);
            const uintptr_t CustomAudioDeviceModuleInitPlayoutResult=REBASE(0x51BD9E0);
            const uintptr_t CustomAudioDeviceModuleInitRecordingResu=REBASE(0x51BDD20);
            const uintptr_t CustomAudioMixerAddSourceSourceAlreadyPr=REBASE(0x5AEBF00);
            const uintptr_t CustomAudioMixerAddSourceSsrc=REBASE(0x5AEBF10);
            const uintptr_t CustomAudioMixerCustomAudioMixer=REBASE(0x5AEFDA0);
            const uintptr_t CustomAudioMixerRemoveSourceSsrc=REBASE(0x5AEC660);
            const uintptr_t CustomAudioMixerUpdateSourcesUpdatedPubl=REBASE(0x5AEE1B0);
            const uintptr_t CustomAudioProcessingCustomAudioProcessi=REBASE(0x5AE8D30);
            const uintptr_t DeallocatePeerConnectionFactoryENTRYSess=REBASE(0x5220600);
            const uintptr_t DebugFriendsCallSubscribeOperationFailed=REBASE(0x51669C0);
            const uintptr_t DebugFriendsCallSubscribeOperationRegist=REBASE(0x5165DB0);
            const uintptr_t EmittedVoiceRtcStatsEventSuperSetEventIn=REBASE(0x5AC25A0);
            const uintptr_t EmittedVoiceRtcStatsSessionSummaryEventS=REBASE(0x5AC7370);
            const uintptr_t ErrorRetryAllowedDueRetryLimit=REBASE(0x5150C80);
            const uintptr_t FeedReferenceIdUserAudioMidMappingFound=REBASE(0x5170FE0);
            const uintptr_t FlushSessionTrackingTalkSecListenSecAvgR=REBASE(0x518C9E0);
            const uintptr_t InitCullingCullingSetUpSession=REBASE(0x52202B0);
            const uintptr_t InitPeerConnectionFactoryENTRYSession=REBASE(0x521FC70);
            const uintptr_t LeavingAbandoningClientTurnAuthOperation=REBASE(0x514F370);
            const uintptr_t MetricsGuiModelICECandidatesTruncatedEnt=REBASE(0x4BFFD20);
            const uintptr_t MetricsGuiModelUserToMidMapTruncatedEntr=REBASE(0x4BFFF30);
            const uintptr_t MuteMicrophoneENTRYMuteSession=REBASE(0x5222170);
            const uintptr_t MuteStateDidChangeAbandoningClient=REBASE(0x5152030);
            const uintptr_t PeerConnectionStateChangedFailed=REBASE(0x5147A60);
            const uintptr_t PlayoutDeviceManagerPlayoutDeviceManager=REBASE(0x51CFC80);
            const uintptr_t PlayoutDeviceNameTooLongWill=REBASE(0x51D09A0);
            const uintptr_t PublishCreateSdpOfferTag=REBASE(0x5220930);
            const uintptr_t PublishOperationFailedInitializePeerConn=REBASE(0x5157020);
            const uintptr_t PublishOperationStillInitializingPeerCon=REBASE(0x5157010);
            const uintptr_t PublishSetRemoteDescriptionENTRYSessionS=REBASE(0x5220AC0);
            const uintptr_t QueueStreamTransactionQueueErrorMaxQueue=REBASE(0x51ECCC0);
            const uintptr_t ReceivedAnyMessages=REBASE(0x5182AB0);
            const uintptr_t ReceivedEventVoiceMigrationReason=REBASE(0x4BEF0B0);
            const uintptr_t ReceivedSubscriptionHandshakeAckedWithCo=REBASE(0x4BE9FA0);
            const uintptr_t RecordingDeviceManagerInitRecording=REBASE(0x51D2220);
            const uintptr_t RecordingDeviceManagerInitRecordingAudio=REBASE(0x51D32C0);
            const uintptr_t RecordingDeviceManagerInitRecordingInput=REBASE(0x51D3390);
            const uintptr_t RecordingDeviceManagerRecordingDeviceMan=REBASE(0x51D1D70);
            const uintptr_t RecordingDeviceManagerSetMicrophoneMute=REBASE(0x51D2F20);
            const uintptr_t RecordingDeviceManagerStartRecording=REBASE(0x51D2540);
            const uintptr_t RecordingDeviceManagerStopRecording=REBASE(0x51D2850);
            const uintptr_t RecordingDeviceNameTooLongWill=REBASE(0x51D2B50);
            const uintptr_t RecordingDevicePermissionsRequestMicroph=REBASE(0x51D4EF0);
            const uintptr_t RobloxAudioDeviceCheckMicrophonePermissi=REBASE(0x51CA000);
            const uintptr_t RobloxAudioDeviceForcingShutdownActively=REBASE(0x51C8400);
            const uintptr_t RobloxAudioDeviceInit=REBASE(0x51C6B10);
            const uintptr_t RobloxAudioDeviceInitPlayout=REBASE(0x51C7600);
            const uintptr_t RobloxAudioDeviceInitRecording=REBASE(0x51C7A70);
            const uintptr_t RobloxAudioDeviceInitRecordingInputAudio=REBASE(0x51C57F0);
            const uintptr_t RobloxAudioDeviceModuleFailedCreatePlatf=REBASE(0x51BEF70);
            const uintptr_t RobloxAudioDeviceModuleRobloxAudioDevice=REBASE(0x51BF500);
            const uintptr_t RobloxAudioDeviceRequestMicrophonePermis=REBASE(0x51CA3D0);
            const uintptr_t RobloxAudioDeviceRobloxAudioDevice=REBASE(0x51C5410);
            const uintptr_t RobloxAudioDeviceSetMicrophoneMuteFalse=REBASE(0x51C9740);
            const uintptr_t RobloxAudioDeviceShutDown=REBASE(0x51C56D0);
            const uintptr_t RobloxAudioDeviceStartDeviceRecordingHas=REBASE(0x51C8110);
            const uintptr_t RobloxAudioDeviceStartPlayout=REBASE(0x51C7C20);
            const uintptr_t RobloxAudioDeviceStartRecording=REBASE(0x51C8AE0);
            const uintptr_t RobloxAudioDeviceStopPlayout=REBASE(0x51C7F10);
            const uintptr_t RobloxAudioDeviceStopRecording=REBASE(0x51C92A0);
            const uintptr_t RobloxAudioDeviceTerminate=REBASE(0x51C6DF0);
            const uintptr_t RomarkAudioDeviceInit=REBASE(0x51CBB30);
            const uintptr_t RomarkAudioDeviceInitPlayout=REBASE(0x51CBD20);
            const uintptr_t RomarkAudioDeviceModuleFailedCreatePlatf=REBASE(0x51C0940);
            const uintptr_t RomarkAudioDeviceModuleRomarkAudioDevice=REBASE(0x51C0CB0);
            const uintptr_t RomarkAudioDeviceModuleSetSelectedMicInd=REBASE(0x51C0590);
            const uintptr_t RomarkAudioDeviceRomarkAudioDevice=REBASE(0x51CB660);
            const uintptr_t RomarkAudioDeviceStartPlayout=REBASE(0x51CBF20);
            const uintptr_t RomarkAudioDeviceStartRecording=REBASE(0x51CC2D0);
            const uintptr_t RomarkAudioDeviceStopPlayout=REBASE(0x51CC1B0);
            const uintptr_t RomarkAudioDeviceStopRecording=REBASE(0x51CC720);
            const uintptr_t SelectedSpeakerDeviceNameGuidIndex=REBASE(0x51C00E0);
            const uintptr_t SendAllPendingStreamTransactionsSendErro=REBASE(0x51ECED0);
            const uintptr_t SessionIDChangedAbandoningClientPeer=REBASE(0x5177D30);
            const uintptr_t SessionIDChangedAbandoningClientPublish=REBASE(0x5155FF0);
            const uintptr_t SessionIDChangedAbandoningClientSubscrib=REBASE(0x516E130);
            const uintptr_t SetRemoteAnswerMovingOpenData=REBASE(0x51821C0);
            const uintptr_t SettingLocalOffer=REBASE(0x5181AA0);
            const uintptr_t SettingMsgOverDc=REBASE(0x5182720);
            const uintptr_t SettingRemoteAnswer=REBASE(0x5181ED0);
            const uintptr_t SetupDataChannelForCullingENTRYSession=REBASE(0x5220250);
            const uintptr_t SetupPublishConnectionENTRYSessionUserna=REBASE(0x521FD70);
            const uintptr_t SetupSubscriptionConnectionENTRYSessionU=REBASE(0x521FFE0);
            const uintptr_t StartCaptureFMODRecordingStartedRingBuff=REBASE(0x52137B0);
            const uintptr_t StartPlayoutGetAudioDeviceReturnedNull=REBASE(0x5213520);
            const uintptr_t StatsRtt1fMsInBytesOutBytes=REBASE(0x5221B00);
            const uintptr_t StopPlayout=REBASE(0x5212F00);
            const uintptr_t StreamSwitchFailedCouldFindHandle=REBASE(0x516EE20);
            const uintptr_t StreamSwitchingProcessingMappingSSRCUser=REBASE(0x513CDC0);
            const uintptr_t StreamTransactionMessageTransportDataCha=REBASE(0x51D7A60);
            const uintptr_t StreamTransactionMessageTransportReceive=REBASE(0x52112B0);
            const uintptr_t SubmitGetStatsAsyncENTRYSession=REBASE(0x5222060);
            const uintptr_t SubmitPublisherGetStatsAsyncENTRYSession=REBASE(0x5221E40);
            const uintptr_t SubmitSubscriberGetStatsAsyncENTRYSessio=REBASE(0x5221F50);
            const uintptr_t SubscribeOpSupersededSeqLatest=REBASE(0x516E200);
            const uintptr_t SubscriberVoiceQualityBufferDrainAndEnco=REBASE(0x5186F50);
            const uintptr_t SubscriberVoiceQualityBufferUnexpectedFo=REBASE(0x51868D0);
            const uintptr_t SubscriptionCreateAnswerENTRYSession=REBASE(0x5220E60);
            const uintptr_t SubscriptionCreateAnswerTag=REBASE(0x5220EC0);
            const uintptr_t SubscriptionOperationStillInitializingPe=REBASE(0x5173190);
            const uintptr_t SubscriptionSetRemoteDescriptionENTRYSes=REBASE(0x5220C90);
            const uintptr_t TearDownWebrtcConnectionsENTRYSession=REBASE(0x5220700);
            const uintptr_t TryPopSdpMessageWithTagENTRYTagSession=REBASE(0x5221730);
            const uintptr_t VoiceChatClientGameDataClientImplGetAudi=REBASE(0x4BF5E50);
            const uintptr_t VoiceChatClientGameDataClientImplSendCli=REBASE(0x4BF4530);
            const uintptr_t VoiceChatClientGameDataClientImplSendOnP=REBASE(0x4BF43E0);
            const uintptr_t VoiceChatClientGameDataClientImplSendPub=REBASE(0x4BF8630);
            const uintptr_t VoiceChatClientGameDataClientImplSendSub=REBASE(0x4BF8840);
            const uintptr_t VoiceChatClientGameDataClientImplSendUpd=REBASE(0x4BF37F0);
            const uintptr_t VoiceChatExtensionIsVoiceEnabledForUserI=REBASE(0x48B2E70);
            const uintptr_t VoiceChatInternalAPISecurityCheckFailed=REBASE(0x51AC4E0);
            const uintptr_t VoiceChatInternalCtor=REBASE(0x51AB1A0);
            const uintptr_t VoiceChatInternalDtor=REBASE(0x51ABAA0);
            const uintptr_t VoiceChatInternalOnServiceProviderOldPro=REBASE(0x51BB4B0);
            const uintptr_t VoiceChatInternalPublishPausePausedInvok=REBASE(0x51AFF30);
            const uintptr_t VoiceChatServiceIsVoiceEnabledForUserIdA=REBASE(0x51A5500);
            const uintptr_t VoiceChatServiceIsVoiceEnabledForUserIds=REBASE(0x51A1670);
            const uintptr_t VoiceChatServiceProcessRemoteEventReplic=REBASE(0x519E4D0);
            const uintptr_t VoiceChatServiceTriggerClientVoiceCapabi=REBASE(0x51A3E60);
            const uintptr_t VoiceChatStatsAccumulateAllTrackersIsPub=REBASE(0x518B400);
            const uintptr_t VoiceChatStatsLoggedMilestone=REBASE(0x518A080);
            const uintptr_t VoiceChatStatsLoggedVoiceExperienceClick=REBASE(0x518A1E0);
            const uintptr_t VoiceChatStatsLoggedVoiceSubscribeFailur=REBASE(0x518AAD0);
            const uintptr_t VoiceChatStatsLoggedVoiceTurnAuthInfo=REBASE(0x518A7E0);
            const uintptr_t VoiceChatStatsReportPublishSecConsumeSec=REBASE(0x518BA10);
            const uintptr_t VoiceChatV2ControlPlaneClientFailedStart=REBASE(0x4BE4CD0);
            const uintptr_t VoiceChatV2ControlPlaneClientStartFailed=REBASE(0x4BE4CC0);
            const uintptr_t VoiceChatV2ControlPlaneClientStarted=REBASE(0x4BE5630);
            const uintptr_t VoiceConnectionInterruptionOutcomeConnec=REBASE(0x518D230);
            const uintptr_t VoiceSettingsEndpointReturnedInvalidResp=REBASE(0x51AE390);
            const uintptr_t VoiceSubscriberAudioQualityCaptureDelayM=REBASE(0x513EC90);
            const uintptr_t WebRTCConnectionAsyncInitRTCThreadsAndAu=REBASE(0x51DE070);
            const uintptr_t WebRTCConnectionAvailable=REBASE(0x5185130);
            const uintptr_t WebRTCConnectionCallingSetRemoteAnswerCa=REBASE(0x51E6E90);
            const uintptr_t WebRTCConnectionCloseConnectionsSettingP=REBASE(0x51EED30);
            const uintptr_t WebRTCConnectionDeallocatePeerConnection=REBASE(0x51EDD20);
            const uintptr_t WebRTCConnectionDeliverSignalingMessageR=REBASE(0x51E5630);
            const uintptr_t WebRTCConnectionOnSignalingDataChannelSt=REBASE(0x51D7E20);
            const uintptr_t WebRTCConnectionSetupCallingConnection=REBASE(0x51E4DA0);
            const uintptr_t WebRTCConnectionSetupCallingSignalingDat=REBASE(0x51E4EB0);
            const uintptr_t WebRTCConnectionSetupDataChannelForCulli=REBASE(0x51E2FD0);
            const uintptr_t WebRTCConnectionTearDownWebrtcConnection=REBASE(0x51EDFA0);
            const uintptr_t WebRTCConnectionWebRTCConnectionNeedWait=REBASE(0x51DC740);
            const uintptr_t WebRTCConnectionWebRTCConnectionWaitShut=REBASE(0x51DC720);
            const uintptr_t WebRTCConnectonSetupCallingConnectionCou=REBASE(0x51E3AE0);
            const uintptr_t WebRTCHostTelemetryUnknownCounter=REBASE(0x52124A0);
            const uintptr_t WebRTCPeerConnectionObserverOnIceConnect=REBASE(0x51DA450);
        }
        namespace Voxel
        {
            const uintptr_t DeserializeFragmentAssetContentMapDone=REBASE(0x4B48570);
            const uintptr_t DeserializeStart=REBASE(0x4B46DB0);
        }
        namespace VoxelGridStreaming
        {
            const uintptr_t ByteRangeLengthExceedsMaximumAllowedSize=REBASE(0x48E78F0);
            const uintptr_t CDNResponseSizeDoesMatchExpected=REBASE(0x48E9AE0);
        }
        namespace WHAM1707StateMachine
        {
            const uintptr_t EnteredRecordingStartedReportIDVideoPath=REBASE(0x439BE10);
            const uintptr_t FailedRemoveFileError=REBASE(0x439AF30);
            const uintptr_t RecordingStartedStateTransitionUnhandled=REBASE(0x439BF70);
            const uintptr_t RecordingStoppedEnterCalledWhileOutputPa=REBASE(0x439B850);
            const uintptr_t RecordingStoppedStateTransitionUnhandled=REBASE(0x439BA50);
            const uintptr_t RecordingTimeLimitReachedWaitingForRepor=REBASE(0x439C310);
            const uintptr_t ReportSubmissionInProgressStateTransitio=REBASE(0x439C610);
            const uintptr_t RetryingTryRemoveFile=REBASE(0x439CED0);
            const uintptr_t Transitioning=REBASE(0x439A5F0);
            const uintptr_t UploadCompleteTransitioningRecordingStop=REBASE(0x439CCC0);
            const uintptr_t VideoReportRecorderReportDetachAnalaytic=REBASE(0x439B3D0);
            const uintptr_t WaitForVideoFinalizeStateTransitionCanUp=REBASE(0x439C930);
            const uintptr_t WaitForVideoFinalizeStateTransitionUnhan=REBASE(0x439C920);
            const uintptr_t WaitingForRecorderStatusStateTransitionU=REBASE(0x439BC30);
            const uintptr_t WaitingForReportSubmitStateTransitionUnh=REBASE(0x439C320);
        }
        namespace WRR
        {
            const uintptr_t BeginFrameLoadingTextureHash=REBASE(0x38C2730);
            const uintptr_t BindDataModelFoundExistingHash=REBASE(0x38C3680);
            const uintptr_t PropertyChangedSignalReceivedHash=REBASE(0x38C3C70);
            const uintptr_t TierAlphaCapFinal=REBASE(0x38C24D0);
            const uintptr_t TierMatchDefault=REBASE(0x38C6A30);
        }
        namespace WaitForAll
        {
            const uintptr_t WaitForAllError=REBASE(0x196E730);
            const uintptr_t WaitForAllFailedErrorCount=REBASE(0x24F6BA0);
        }
        namespace Warning
        {
            const uintptr_t AdPortalInvalid=REBASE(0x117A4D0);
            const uintptr_t AppAgeSignalsOnGetAgeSignalSucceededIgno=REBASE(0x4E04820);
            const uintptr_t AvatarEditorServiceGetInventoryAsyncUnex=REBASE(0x5F0F800);
            const uintptr_t ControlsToJointDriverShortestPathRotatio=REBASE(0x24E5500);
            const uintptr_t CustomAudioMixerMixFailedGetAudioSource=REBASE(0x5AECD00);
            const uintptr_t DecodedFramesAvailableTimestampLld=REBASE(0x5841220);
            const uintptr_t EventHasDuplicateParameterEventWill=REBASE(0x2BAFED0);
            const uintptr_t ExperienceProtocolStartListeningWithCall=REBASE(0x44CE250);
            const uintptr_t ExponentialDecaySmoothingSmoothPreviousF=REBASE(0x1CEDE90);
            const uintptr_t GetAvailableSubscriptionProductsAsyncAPI=REBASE(0x13260B0);
            const uintptr_t GetWindowsVersionVersionSupported=REBASE(0x5223A30);
            const uintptr_t HSRDataDoesHaveAssetPlease=REBASE(0x1BE56E0);
            const uintptr_t HiddenSurfaceRemovalAssetIdDoesExist=REBASE(0x1902350);
            const uintptr_t HiddenSurfaceRemovalDataInvalidReason=REBASE(0x1E0A760);
            const uintptr_t InvalidValueSettingFFlagVariable=REBASE(0x49B4A30);
            const uintptr_t LaunchUGCGameAttemptingRecursivelyJoinSa=REBASE(0x1577E10);
            const uintptr_t LauncherLocalDidInstallAnyWebView2=REBASE(0x179BE10);
            const uintptr_t LinkingProtocolOnHandlePlatformURLRegexH=REBASE(0x44BEF40);
            const uintptr_t LinkingProtocolStartListeningAttemptedSt=REBASE(0x44BDED0);
            const uintptr_t LinkingProtocolStopListeningAttemptedSto=REBASE(0x828E80);
            const uintptr_t LocalStorageLoadingDataGotInvalidOperati=REBASE(0x2A08350);
            const uintptr_t MachineIdCheckFailure=REBASE(0x823640);
            const uintptr_t RestartLuaAppCalledWhilePlayingUGCGame=REBASE(0x1573280);
            const uintptr_t SaveClientSettingsToLocalFailedWriteDisk=REBASE(0x4DD27E0);
            const uintptr_t ScreenTimeGotInvalidErrorCode=REBASE(0x4C9DA40);
            const uintptr_t ScreenTimeHeartbeatHttpStatusErrorBody=REBASE(0x4C9E080);
            const uintptr_t ScreenTimeLogOutDueConsecutiveHeartbeat=REBASE(0x4C9E070);
            const uintptr_t ScreenTimeNotificationResponseEmpty=REBASE(0x4C9D2A0);
            const uintptr_t ScreenTimeStartFailedStatusCodeBodyError=REBASE(0x4C9D060);
            const uintptr_t SetCookieRBXEventTrackerV2Detected=REBASE(0x804020);
            const uintptr_t SignalRWonTWorkIfCookie=REBASE(0x31CE890);
            const uintptr_t SimpleLinearSmoothingSmoothPreviousFACSD=REBASE(0x1CEE0D0);
            const uintptr_t SkinningTransferContextMeshAssociatedPar=REBASE(0x1C08280);
            const uintptr_t VideoCaptureClientCapturePointerWentOutS=REBASE(0x3F1C1A0);
            const uintptr_t VideoCaptureClientHandleSuspendPointerSW=REBASE(0x3F18E00);
            const uintptr_t VideoCaptureClientOnClientPlayPointerWen=REBASE(0x3F198B0);
            const uintptr_t VideoCaptureClientSignalVideoFrameArrive=REBASE(0x3F1BFF0);
            const uintptr_t WebLoginAuthenticationFailedAppQuitting=REBASE(0x826B80);
            const uintptr_t WebLoginCannotRunAuthenticationUrlTicket=REBASE(0x4C1CB30);
            const uintptr_t WebLoginErrorAuthTicketEmpty=REBASE(0x4C1C2A0);
            const uintptr_t WebLoginErrorAuthURLTicketEmpty=REBASE(0x4C1BC00);
            const uintptr_t WebLoginHttpErrorStatusCode=REBASE(0x4C1D120);
            const uintptr_t WebLoginSetBTIDFailed=REBASE(0x4C1F580);
            const uintptr_t WebPlayGameLaunchJoinScriptUrlEmpty=REBASE(0x4C1DBD0);
            const uintptr_t WebView2PlatformSupported=REBASE(0x832F90);
        }
        namespace WebChatFiltering
        {
            const uintptr_t InvalidLocaleId=REBASE(0x307ECA0);
        }
        namespace WebLoginProtocol
        {
            const uintptr_t ErrorPerformingWebLoginErrorCode=REBASE(0x5AA16B0);
            const uintptr_t InvalidPlaceIdValue=REBASE(0x607CFB0);
            const uintptr_t PlaceIdOutRange=REBASE(0x607CEE0);
            const uintptr_t WebLoginProtocolInitializedStopHandling=REBASE(0x5AA05F0);
        }
        namespace WebSocketTrace
        {
            const uintptr_t WsReceivedType=REBASE(0x2CDD7D0);
        }
        namespace WebSocketTraceError
        {
            const uintptr_t WsUrlError=REBASE(0x2CA9740);
        }
        namespace WebSocketTraceLight
        {
            const uintptr_t AddAllWebSocketsIsDevOriginated=REBASE(0x2CCF4D0);
            const uintptr_t AddWsAbortedWebSockets=REBASE(0x2CA9BB0);
            const uintptr_t CouldAddWsDevOriginatedLimit=REBASE(0x2CCF450);
            const uintptr_t RemoveWsAbortedWebSockets=REBASE(0x2CCFF60);
            const uintptr_t RemoveWsTimedShutdowns=REBASE(0x2CCFAD0);
            const uintptr_t WsConnecting=REBASE(0x2CDE600);
            const uintptr_t WsState=REBASE(0x2CA9420);
        }
        namespace WebStreamClient
        {
            const uintptr_t ErrorClosingWebStreamClient=REBASE(0x5FABBD0);
        }
        namespace WebView
        {
            const uintptr_t SendingCommandWebViewService=REBASE(0x50AE960);
        }
        namespace WebView2ClickoutDialog
        {
            const uintptr_t CancelWasClickedClickoutDialog=REBASE(0x17B7C10);
            const uintptr_t ContinueWasClickedClickoutDialog=REBASE(0x17C29F0);
            const uintptr_t CouldnTMakeValidDialogResetting=REBASE(0x17C2740);
            const uintptr_t FamiliesWereGottenDuringFontInitializati=REBASE(0x17CA220);
            const uintptr_t L0x08X=REBASE(0x17CA9A0);
        }
        namespace WebrtcInput
        {
            const uintptr_t AudioPacketReceivedWithinMsProceeding=REBASE(0x1EA14C0);
            const uintptr_t AudioStreamCreatedOPUSHzCh=REBASE(0x1EA3440);
            const uintptr_t BytesVideoAudio=REBASE(0x1E9AB20);
            const uintptr_t DequeuePts=REBASE(0x1E9CBA0);
            const uintptr_t ExchangeSdpTookMsNetMsParse=REBASE(0x1E9DCA0);
            const uintptr_t FailedSendDataChannelMessage=REBASE(0x1EA4300);
            const uintptr_t ICEGatheringTimedOutAfterMs=REBASE(0x1E9EDB0);
            const uintptr_t ICEServersResponseArray=REBASE(0x1E9CD70);
            const uintptr_t OnConnectionStateChange=REBASE(0x1EA0B40);
            const uintptr_t OnIceCandidate=REBASE(0x1EA54D0);
            const uintptr_t OnInputMessageSize=REBASE(0x1EA5870);
            const uintptr_t OnRemoteMessageSize=REBASE(0x1EA56A0);
            const uintptr_t RemoteDataChannel=REBASE(0x1EA0F30);
            const uintptr_t SPSFoundFirstFrameCannotDetermine=REBASE(0x1EA1C50);
            const uintptr_t SendingPLIPacket=REBASE(0x1EA40F0);
            const uintptr_t StratusTurnServerOverrideValidTURNJSON=REBASE(0x1E9CD80);
            const uintptr_t TimedOutWaitingFirstVideoPacket=REBASE(0x1EA14D0);
            const uintptr_t TransportSilentMsThresholdMsDisconnectin=REBASE(0x1EA4660);
            const uintptr_t VideoTransceiverSendPLI=REBASE(0x1EA4100);
            const uintptr_t WaitStreamInfoTookMs=REBASE(0x1E9C980);
        }
        namespace WildMeshSimplifierLog
        {
            const uintptr_t StartWildMeshSimplifierSimplificationPro=REBASE(0x2C323E0);
        }
        namespace WinPinShortcut
        {
            const uintptr_t CannotFindPathRevealPinnedExperience=REBASE(0x17A20B0);
            const uintptr_t FailedCreateUrlFileFileUse=REBASE(0x17A0980);
            const uintptr_t FailedWriteIconFilePlaceId=REBASE(0x17A2C10);
            const uintptr_t FailurePinShortcutPlaceId=REBASE(0x17A41D0);
            const uintptr_t GdiplusBitmapFromStreamFailure=REBASE(0x17A07D0);
        }
        namespace WinRawInput
        {
            const uintptr_t FailedSetupInputDevicesViaWindowsRawInpu=REBASE(0x1793A50);
            const uintptr_t GetRawInputDataReturnedBufferSizeWhileWe=REBASE(0x1794E60);
        }
        namespace WindowProtocolCore
        {
            const uintptr_t BeginDragAvailableCurrentPlatform=REBASE(0x50AABB0);
            const uintptr_t EndDragAvailableCurrentPlatform=REBASE(0x50AAD00);
            const uintptr_t GetLogicalCaptionButtonsBoundsAvailableC=REBASE(0x50AB5B0);
            const uintptr_t GetNativeTitleBarControlsPositionAvailab=REBASE(0x50AAE70);
            const uintptr_t GetTitleBarHeightAvailableCurrentPlatfor=REBASE(0x50AB460);
            const uintptr_t GetWindowStateAvailableCurrentPlatform=REBASE(0x50AB730);
            const uintptr_t MaximizeAvailableCurrentPlatform=REBASE(0x50AA910);
            const uintptr_t MinimizeAvailableCurrentPlatform=REBASE(0x50AA7C0);
            const uintptr_t OnDragAreaDoubleClickedAvailableCurrentP=REBASE(0x50AB880);
            const uintptr_t OnDragAreaRightClickedAvailableCurrentPl=REBASE(0x50AB9D0);
            const uintptr_t RestoreAvailableCurrentPlatform=REBASE(0x50AAA60);
            const uintptr_t SetCustomTitleBarHeightAvailableCurrentP=REBASE(0x50AB300);
            const uintptr_t SetTitleBarModeAvailableCurrentPlatform=REBASE(0x50AB070);
            const uintptr_t ShouldRenderTitleBarControlsNativelyAvai=REBASE(0x50AAF70);
            const uintptr_t WindowIdHasBeenRegistered=REBASE(0x50AA490);
        }
        namespace WindowProtocolService
        {
            const uintptr_t WindowProtocolServiceMethodBeginDragInternal=REBASE(0x4E32C10);
            const uintptr_t WindowProtocolServiceMethodCloseImplCann=REBASE(0x4E32750);
            const uintptr_t WindowProtocolServiceMethodEndDragImplCa=REBASE(0x4E32D40);
            const uintptr_t WindowProtocolServiceMethodGetLogicalCap=REBASE(0x4E33220);
            const uintptr_t WindowProtocolServiceMethodGetNativeTitl=REBASE(0x4E324F0);
            const uintptr_t WindowProtocolServiceMethodGetTitleBarMo=REBASE(0x4E32FB0);
            const uintptr_t WindowProtocolServiceMethodGetWindowStat=REBASE(0x4E33360);
            const uintptr_t WindowProtocolServiceMethodIsAvailableIm=REBASE(0x4E323C0);
            const uintptr_t WindowProtocolServiceMethodMaximizeImplC=REBASE(0x4E329B0);
            const uintptr_t WindowProtocolServiceMethodMinimizeImplC=REBASE(0x4E32880);
            const uintptr_t WindowProtocolServiceMethodOnDragAreaDou=REBASE(0x4E334A0);
            const uintptr_t WindowProtocolServiceMethodOnDragAreaRig=REBASE(0x4E335D0);
            const uintptr_t WindowProtocolServiceMethodRestoreImplCa=REBASE(0x4E32AE0);
            const uintptr_t WindowProtocolServiceMethodSetCustomTitl=REBASE(0x4E330E0);
            const uintptr_t WindowProtocolServiceMethodSetTitleBarMo=REBASE(0x4E32E70);
            const uintptr_t WindowProtocolServiceMethodShouldRenderT=REBASE(0x4E32620);
        }
        namespace WindowsEmbeddedWebView
        {
            const uintptr_t ErrorWhileCallingDomainAllowListChecker=REBASE(0x17C5660);
            const uintptr_t InvalidThemeValueMappedUserId=REBASE(0x17BD0B0);
            const uintptr_t WebView2ClosingHwnd=REBASE(0x17C2540);
            const uintptr_t WebView2OpenWebViewWindowMHwndIsAdPlayer=REBASE(0x17B6D90);
            const uintptr_t WebView2TabNavigateUrl=REBASE(0x17BCE20);
        }
        namespace WindowsLuaApp
        {
            const uintptr_t CannotInitializeWindowsNativeAdsImplMars=REBASE(0x82EBD0);
            const uintptr_t FailedParseNotificationDataJsonWhile=REBASE(0x82D230);
            const uintptr_t FailedRetrieveAuthTokenErrorCode=REBASE(0x831470);
            const uintptr_t WinAuthTokenCopyAuthCookieFromBrowserToE=REBASE(0x8318A0);
            const uintptr_t WinAuthTokenLoadAuthTokenFromDiskEmptyAu=REBASE(0x8244E0);
            const uintptr_t WinAuthTokenSaveAuthTokenToDiskSizeZu=REBASE(0x823D40);
        }
        namespace WindowsMediaPicker
        {
            const uintptr_t UserCanceledSelectFileAction=REBASE(0x5093320);
        }
        namespace WindowsNativeAdsProtocol
        {
            const uintptr_t AdPlayerStartsCallingHandleGetQueryInfoI=REBASE(0x17A98E0);
            const uintptr_t AdPlayerStep1CreateAdPlayerWithGetQueryI=REBASE(0x17A8F80);
            const uintptr_t AdPlayerStep1FinishGetQueryInfoCallbackC=REBASE(0x17AF0D0);
            const uintptr_t AdPlayerStep2FinishLoadAdSetAdStringSucc=REBASE(0x17A9DF0);
            const uintptr_t AdPlayerStep2LoadAdUsingHandleSetAdStrin=REBASE(0x17A9AE0);
            const uintptr_t AdPlayerStep41FinishErrorAdProgress=REBASE(0x17AA6D0);
            const uintptr_t AdPlayerStep4ERRORShowAdPreviousSteps=REBASE(0x17AA460);
            const uintptr_t AdPlayerStep5AdPlayerHasNeverBeen=REBASE(0x17AB430);
            const uintptr_t AdPlayerStep5QuitBrowserFinish=REBASE(0x17AB420);
            const uintptr_t CreatingWindowsNativeAdsImplInstance=REBASE(0x17A7BD0);
            const uintptr_t GettingWindowsNativeAdsImplInstance=REBASE(0x17A7ED0);
            const uintptr_t SendEventToEngineCalledEventMarshallingT=REBASE(0x17A7790);
        }
        namespace WindowsRawInputBrokerLog
        {
            const uintptr_t GetRawInputDataSizeQueryFailedErrorRetur=REBASE(0x44B92B0);
            const uintptr_t RegisterRawInputDevicesFailedErrorHwndRe=REBASE(0x44B9140);
        }
        namespace WindowsSystemThemeProtocol
        {
            const uintptr_t DestroyingWindowsSystemThemeProtocol=REBASE(0x50A8030);
            const uintptr_t FailedActivateUISettings=REBASE(0x50A8150);
            const uintptr_t FailedInitializeWinRTWindowsSystemTheme=REBASE(0x50A6F50);
            const uintptr_t IsDarkModeCalledButWinRTFailedInitialize=REBASE(0x50A8140);
        }
        namespace WindowsThemeInit
        {
            const uintptr_t InvalidThemeValueMappedUserId=REBASE(0x7F9A60);
        }
        namespace WndProcessCheck
        {
            const uintptr_t CannotCreateListeningEventVideoPreroll=REBASE(0x838C50);
            const uintptr_t CannotGoFullscreenResolutionGetMonitorIn=REBASE(0x17B1320);
            const uintptr_t CannotGoFullscreenResolutionMonitorFromW=REBASE(0x17B1330);
            const uintptr_t FailedParseCommandLineArgs=REBASE(0x5E3FE10);
            const uintptr_t UnableRestoreResolutionChangeDisplaySett=REBASE(0x17B09F0);
            const uintptr_t ViewFindBestMonitorMatchEnumDisplaySetti=REBASE(0x17B0A40);
            const uintptr_t WaitForNewPlayerProcessNewWaitingMutexRe=REBASE(0x8372C0);
        }
        namespace WorldStepsBehindG
        {
            const uintptr_t NumberWorldStepsBehindWspsDeltaTime=REBASE(0x15A39A0);
        }
        namespace WrapLogChannel
        {
            const uintptr_t AutoSkinnedMeshFailedLoad=REBASE(0x1BD5A40);
            const uintptr_t DeformerContextCorePerformFittingSkipped=REBASE(0x1DE4AA0);
            const uintptr_t DeformerContextCorePerformSkippedPerform=REBASE(0x1DE5CC0);
            const uintptr_t HsrDataSizeMismatchVsClear=REBASE(0x1BE2000);
            const uintptr_t LCBUNDLEREFCacheBundleAction=REBASE(0x19EBD80);
            const uintptr_t LCDEFORMERPROPERTYSETResultHit=REBASE(0x19B5680);
            const uintptr_t LCFPCLAIMFingerprintResultSource=REBASE(0x19EE330);
            const uintptr_t LCFPPUBLISHFingerprintResultWinner=REBASE(0x19ED460);
            const uintptr_t LLTAllocationOOMBuildInternalRbfSize=REBASE(0x5F171A0);
            const uintptr_t LLTAllocationOOMBuildInternalWsRbfSize=REBASE(0x5F16F00);
            const uintptr_t LLTDecompositionFailedBuildInternalInfoR=REBASE(0x1C12900);
            const uintptr_t LayeredClothingCacheOptimizations=REBASE(0x19A9F30);
            const uintptr_t LayeredClothingFetchBailREASONValid=REBASE(0x19BD9C0);
            const uintptr_t MeshDeformerContextAvatarTooFarAwayOrigi=REBASE(0x1E05BD0);
            const uintptr_t MeshDeformerContextPartSetAlternateMeshI=REBASE(0x1BD8850);
            const uintptr_t MeshDeformerPerformTaskLaunchedDifferent=REBASE(0x19C0170);
            const uintptr_t MeshDeformerUpdateDatamodelSolvedContext=REBASE(0x19B0FE0);
            const uintptr_t OffThreadRbxStorageWriteFailedMesh=REBASE(0x1BDA370);
            const uintptr_t PrecomputeDeformVerticesNullMeshDataWrap=REBASE(0x1DE9510);
            const uintptr_t RBFAllocationOOMBuildInternalRbfSize=REBASE(0x5F17300);
            const uintptr_t RBFAllocationOOMBuildInternalWsRbfSize=REBASE(0x5F170C0);
            const uintptr_t RbfFoundMemSizeKBCount=REBASE(0x1B77410);
            const uintptr_t RbfLLTFRESHCacheMissWill=REBASE(0x1C15EE0);
            const uintptr_t RejectingComposedCageTopologyExceeds16=REBASE(0x1DD5960);
            const uintptr_t SkinningTransferFailedSaveMesh=REBASE(0x1C07730);
            const uintptr_t SkinningTransferUpdateDatamodelDeformerC=REBASE(0x19BAA20);
            const uintptr_t SkinningTransferUpdateDatamodelSkinningC=REBASE(0x19BAA30);
            const uintptr_t SkinningTransferUpdateEndTransferCalled=REBASE(0x19BADE0);
            const uintptr_t WrapContentProviderProcessTaskUnexpected=REBASE(0x19F04E0);
            const uintptr_t WrapDeformMeshProviderFailedSaveMeshRbxS=REBASE(0x19E7660);
            const uintptr_t WrapDeformMeshProviderFetchCachedMeshIdT=REBASE(0x19E8650);
            const uintptr_t WrapDeformMeshProviderMoveMeshRbxStorage=REBASE(0x5F0BA70);
            const uintptr_t WrapDeformMeshProviderRegisterDeformedMe=REBASE(0x19E7E10);
            const uintptr_t WrapDeformMeshProviderUpdateTunableMinCu=REBASE(0x1BD5610);
            const uintptr_t WrapDeformerCanceledAsyncUpdateContextTh=REBASE(0x19AD550);
            const uintptr_t WrapDeformerContextCoreBaseWrapCAddedPie=REBASE(0x1DD4B60);
            const uintptr_t WrapDeformerContextCoreLayerOutBounds=REBASE(0x1DDD6D0);
            const uintptr_t WrapDeformerContextCoreLayerSolutionName=REBASE(0x1DE2E80);
            const uintptr_t WrapDeformerCreateDispatcher=REBASE(0x19ABB50);
            const uintptr_t WrapDeformerDispatcherReset=REBASE(0x1BEC910);
            const uintptr_t WrapDeformerDispatcherStepSucceeded=REBASE(0x1BECA60);
            const uintptr_t WrapDeformerFetchMeshesCouldAccess=REBASE(0x19B1540);
            const uintptr_t WrapDeformerForceUpdate=REBASE(0x19B5110);
            const uintptr_t WrapDeformerInvalidateAllMorphInstances=REBASE(0x19BEBC0);
            const uintptr_t WrapDeformerInvalidateCause=REBASE(0x19B3A00);
            const uintptr_t WrapDeformerInvalidateHSR=REBASE(0x19B4C20);
            const uintptr_t WrapDeformerPerformCouldAccessActual=REBASE(0x19B8BD0);
            const uintptr_t WrapDeformerPerformTaskLaunchedDifferent=REBASE(0x19B8BC0);
            const uintptr_t WrapDeformerRegisterWrap=REBASE(0x19B2AB0);
            const uintptr_t WrapDeformerStartAsyncAssetFetch=REBASE(0x19BCFC0);
            const uintptr_t WrapDeformerStartAsyncPerformContextFlig=REBASE(0x19B7170);
            const uintptr_t WrapDeformerStartAsyncSkinningTransferCo=REBASE(0x19B9C60);
            const uintptr_t WrapDeformerSuppressedInvalidationDeadAv=REBASE(0x19B39F0);
            const uintptr_t WrapDeformerUnregisterWrap=REBASE(0x19B3130);
            const uintptr_t WrapDeformerUpdateDatamodelCouldAccess=REBASE(0x19AE7C0);
            const uintptr_t WrapDeformerUpdateDatamodelSkinningCould=REBASE(0x19AF350);
            const uintptr_t WrapDeformerUpdateDatamodelSolvedContext=REBASE(0x19AE7B0);
            const uintptr_t WrapLayeredDeformerApplySkinningTransfer=REBASE(0x19BF050);
        }
        namespace WriteOnlyBuffer
        {
            const uintptr_t CannotAppendDataMovedWriteOnlyBuffer=REBASE(0x49B13D0);
            const uintptr_t CannotExtractReadOnlySharedBufferMovedWr=REBASE(0x49B15C0);
            const uintptr_t FailedAllocateMemoryWriteOnlyBuffer=REBASE(0x5FF88C0);
            const uintptr_t FailedAppendBuffer=REBASE(0x5FF8990);
            const uintptr_t WriteOnlyBufferMovedCannotExtractFilePat=REBASE(0x49B1900);
            const uintptr_t WriteOnlyBufferMovedCannotGetFilePath=REBASE(0x49B17B0);
        }
    }
}
