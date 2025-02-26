/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMAVCore/IMAVInterface.h>

#import "AVConferenceDelegate-Protocol.h"

@class AVConference, NSLock, NSMutableArray, NSMutableDictionary;

@interface IMAVConferenceInterface : IMAVInterface <AVConferenceDelegate>
{
    NSMutableArray *_avConferencesToCleanup;
    NSMutableDictionary *_avConferences;
    NSLock *_avConferencesLock;
    BOOL _duringInit;
    BOOL _pendingCleanup;
}

+ (void)_postParticipantScreenAttributesChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 cameraWillSwitch:(BOOL)arg5 camera:(unsigned int)arg6 orentation:(unsigned int)arg7 aspect:(struct CGSize)arg8;
+ (void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 contentRectChanged:(BOOL)arg5 cameraWillSwitch:(BOOL)arg6 camera:(unsigned int)arg7 orentation:(unsigned int)arg8 aspect:(struct CGSize)arg9 contentRect:(struct CGRect)arg10;
+ (BOOL)_useMultipleAVConference;
+ (BOOL)_forceRelayMode;
- (void)updateAVChat:(id)arg1 withCallMetadata:(id)arg2;
- (BOOL)_submitEndCallMetric:(id)arg1 forCallID:(long long)arg2;
- (BOOL)_submitLoggingInformation:(id)arg1 forChat:(id)arg2;
- (void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(struct CGSize)arg2 localPortraitAspectRatio:(struct CGSize)arg3;
- (void)chatStateUpdated;
- (id)_controller;
@property(readonly, nonatomic) AVConference *controller;
- (void)processRemoteIPChanged:(id)arg1 fromParticipant:(id)arg2;
- (void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (BOOL)supportsRelay;
- (void)setRemoteVideoLayersFromChat:(id)arg1 toChat:(id)arg2;
- (void)setLocalVideoBackLayer:(void *)arg1;
- (void *)localVideoBackLayer;
- (void)setRemoteVideoBackLayer:(void *)arg1 forChat:(id)arg2;
- (void *)remoteVideoBackLayerForChat:(id)arg1;
- (void)setLocalVideoLayer:(void *)arg1;
- (void *)localVideoLayer;
- (void)setRemoteVideoLayer:(void *)arg1 forChat:(id)arg2;
- (void *)remoteVideoLayerForChat:(id)arg1;
- (BOOL)supportsLayers;
- (void)serverDiedForConference:(id)arg1;
- (void)conference:(id)arg1 didChangeLocalVariablesForCallID:(long long)arg2;
- (void)conference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 reinitializeCallForCallID:(unsigned int)arg2;
- (void)conference:(id)arg1 withCallID:(long long)arg2 remoteMediaStalled:(BOOL)arg3;
- (void)conference:(id)arg1 videoQualityNotificationForCallID:(long long)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (void)conference:(id)arg1 withCallID:(long long)arg2 networkHint:(BOOL)arg3;
- (void)conference:(id)arg1 cancelRelayRequest:(long long)arg2 requestDict:(id)arg3;
- (void)conference:(id)arg1 sendRelayUpdate:(long long)arg2 updateDict:(id)arg3;
- (void)conference:(id)arg1 inititiateRelayRequest:(long long)arg2 requestDict:(id)arg3;
- (void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(long long)arg3;
- (void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(long long)arg2;
- (void)conference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
- (void)conference:(id)arg1 updateInputFrequencyLevel:(id)arg2;
- (void)conference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)conference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3;
- (void)conference:(id)arg1 didStopWithCallID:(long long)arg2 error:(id)arg3 callMetadata:(id)arg4;
- (void)conference:(id)arg1 didStartSession:(BOOL)arg2 withUserInfo:(id)arg3;
- (BOOL)avChat:(id)arg1 generateCallInfoForID:(id)arg2 service:(id)arg3 usingRelay:(BOOL)arg4 callInfo:(id)arg5;
- (void)avChat:(id)arg1 prepareConnectionWithCallInfo:(id)arg2;
- (id)natTypeForAVChat:(id)arg1;
- (id)getNatIPFromICEData:(id)arg1;
- (void)_notifyAboutPotentialCallForChat:(id)arg1;
- (int)avChat:(id)arg1 endConferenceForUserID:(id)arg2;
- (void)_avChatDealloc:(id)arg1;
- (void)endAVConferenceWithChat:(id)arg1 callID:(long long)arg2;
- (int)endConferenceForAVChat:(id)arg1;
- (BOOL)stopPreview;
- (BOOL)startPreviewWithError:(id *)arg1;
- (unsigned long long)capabilities;
- (unsigned long long)capabilitiesOfCPU;
- (unsigned long long)capabilitiesOfNetwork;
- (void)avChat:(id)arg1 setSendingVideo:(BOOL)arg2;
- (BOOL)isSendingVideoForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setSendingAudio:(BOOL)arg2;
- (BOOL)isSendingAudioForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setPaused:(BOOL)arg2;
- (BOOL)isPausedForAVChat:(id)arg1;
- (void)avChat:(id)arg1 setMute:(BOOL)arg2;
- (BOOL)isMuteForAVChat:(id)arg1;
- (void)_conferenceEnded:(id)arg1;
- (BOOL)isAVInterfaceReady;
- (void)initAVInterface;
- (void)_queueAVConferenceForCleanup:(id)arg1;
- (void)_cleanupAVInterface;
- (id)_avChatForConference:(id)arg1 callID:(long long)arg2 errorString:(id)arg3;
- (id)_imAVChatParticipantForConference:(id)arg1 callID:(long long)arg2 errorString:(id)arg3;
- (id)_avChatForConference:(id)arg1;
- (id)_conferenceForAVChat:(id)arg1;
- (id)_existingConferenceForAVChatGUID:(id)arg1;
- (id)_existingConferenceForAVChat:(id)arg1;
- (BOOL)_hasAVConferenceObjectsForChatsOtherThan:(id)arg1;
- (void)_configureAVConference:(id)arg1 forChat:(id)arg2;
- (void)_setAudioSessionPropertiesForChat:(id)arg1;
- (id)_getFaceTimeUUID;
- (void)dealloc;
- (id)init;

@end

