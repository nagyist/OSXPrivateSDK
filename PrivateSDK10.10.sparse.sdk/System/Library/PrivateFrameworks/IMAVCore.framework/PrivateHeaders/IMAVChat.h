/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IMSystemMonitorListener-Protocol.h"

@class IMAVChatParticipant, IMAccount, IMHandle, IMPair, IMTimingCollection, NSArray, NSData, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSTimer;

@interface IMAVChat : NSObject <IMSystemMonitorListener>
{
    NSString *_GUID;
    NSString *_conferenceID;
    NSMutableArray *_participants;
    IMHandle *_initiator;
    IMAVChatParticipant *_localParticipant;
    NSMutableDictionary *_conferenceStateCache;
    NSNumber *_natType;
    NSMutableDictionary *_extraServerContext;
    NSDate *_dateCreated;
    NSDate *_dateStartedConnecting;
    NSDate *_dateConnected;
    NSDate *_dateEnded;
    NSDate *_dateReceivedRelayInitiate;
    NSDate *_dateReceivedRelayUpdate;
    NSDate *_interruptionBegan;
    NSDictionary *_pingTestResults;
    NSNumber *_frontCameraCaptureTime;
    NSNumber *_backCameraCaptureTime;
    NSNumber *_dataRate;
    NSNumber *_dataUploaded;
    NSNumber *_dataDownloaded;
    IMTimingCollection *_timingCollection;
    unsigned long long _localNetworkConnectionType;
    unsigned long long _remoteNetworkConnectionType;
    long long _pingTestResult;
    long long _networkCheckResult;
    NSDictionary *_callerProperties;
    struct dispatch_queue_s *_conferenceQueue;
    NSTimer *_inviteTimeoutTimer;
    NSDate *_inviteTimeoutTimerStart;
    NSTimer *_firstFrameTimeoutTimer;
    NSTimer *_connectionTimeoutTimer;
    NSTimer *_breakBeforeMakeTimeoutTimer;
    NSData *_relayRemotePrimaryIdentifier;
    id _conferenceController;
    unsigned int _sessionID;
    NSError *_error;
    unsigned int _localState;
    unsigned int _lastPostedState;
    IMPair *_pendingPreemptiveRelayInitate;
    NSString *_callStatisticsGUID;
    struct CGSize _portraitAspectRatios;
    struct CGSize _landscapeAspectRatios;
    double _connectionTimeoutTime;
    double _invitationTimeoutTime;
    BOOL _hasGatheredInfo;
    BOOL _hasReceivedFirstFrame;
    BOOL _hasPendingAccept;
    BOOL _hasPendingInit;
    BOOL _isTerminating;
    BOOL _isCaller;
    BOOL _isVideo;
    BOOL _didRemoteMute;
    BOOL _didRemotePause;
    int _connectionType;
    BOOL _needsVideoRestart;
    BOOL _needsAudioRestart;
    BOOL _airplaneModeEnabled;
    BOOL _isVideoInterrupted;
    BOOL _isAudioInterrupted;
    BOOL _isCallUpgrade;
    BOOL _startedAudioSession;
    BOOL _connectionStarted;
    BOOL _isProxied;
    BOOL _wantsHoldMusic;
    BOOL _metadataFinalized;
}

+ (int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(BOOL)arg2;
+ (id)_proxyRepresentationForIMHandle:(id)arg1;
+ (id)_imHandleFromProxyRepresentation:(id)arg1;
+ (void)setDefaultConnectionTimeoutTime:(double)arg1;
+ (double)defaultConnectionTimeoutTime;
+ (void)setDefaultInvitationTimeoutTime:(double)arg1;
+ (double)defaultInvitationTimeoutTime;
+ (id)_avChatWithMatchingIMHandles:(id)arg1 video:(BOOL)arg2;
+ (id)_avChatConnectingFromIMHandle:(id)arg1;
+ (id)_avChatWaitingForReplyFromIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)_avChatInvitedByIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)_bestGuessAVChatWithIMHandle:(id)arg1 conferenceID:(id)arg2 sessionID:(unsigned int)arg3 properties:(id)arg4;
+ (id)_chatsWithIMAVChatState:(unsigned int)arg1;
+ (id)_acceptedChats;
+ (id)_connectedChats;
+ (id)_connectingChats;
+ (id)_outgoingInvitations;
+ (id)_incomingInvitations;
+ (id)_avChatWithGUID:(id)arg1;
+ (id)_avChatWithConferenceID:(id)arg1;
+ (id)_chatListLock;
+ (id)_nonFinalChat;
+ (id)_activeChat;
+ (id)_connectedChat;
+ (id)_chatList;
+ (id)_chatWithSessionID:(unsigned int)arg1;
+ (id)_avChatArray;
+ (id)avChatWithGUID:(id)arg1;
+ (id)chatsWithIMAVChatState:(unsigned int)arg1;
+ (id)acceptedChats;
+ (id)connectedChats;
+ (id)connectingChats;
+ (id)outgoingInvitations;
+ (id)incomingInvitations;
+ (id)nonFinalChat;
+ (id)activeChat;
+ (id)connectedChat;
+ (id)chatList;
@property(nonatomic, setter=_setNetworkCheckResult:) long long _networkCheckResult; // @synthesize _networkCheckResult;
@property(nonatomic, setter=_setPingTestResult:) long long _pingTestResult; // @synthesize _pingTestResult;
@property(retain, nonatomic, setter=_setPingTestResults:) NSDictionary *_pingTestResults; // @synthesize _pingTestResults;
@property(readonly, retain) NSDictionary *_extraServerContext; // @synthesize _extraServerContext;
@property(readonly, retain, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, retain, nonatomic) IMAVChatParticipant *localParticipant; // @synthesize localParticipant=_localParticipant;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_localState;
@property(readonly, retain, nonatomic) NSDate *dateEnded; // @synthesize dateEnded=_dateEnded;
@property(readonly, retain, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, retain, nonatomic) NSDate *dateConnected; // @synthesize dateConnected=_dateConnected;
@property(nonatomic, setter=_setConferenceController:) id _conferenceController; // @synthesize _conferenceController;
- (void)_setGUID:(id)arg1;
@property(retain, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
@property(retain, nonatomic) NSString *conferenceID; // @synthesize conferenceID=_conferenceID;
@property(readonly, nonatomic) BOOL isCaller; // @synthesize isCaller=_isCaller;
@property(nonatomic, setter=_setWantsHoldMusic:) BOOL wantsHoldMusic; // @synthesize wantsHoldMusic=_wantsHoldMusic;
@property(readonly, nonatomic) BOOL isProxied; // @synthesize isProxied=_isProxied;
@property(retain, nonatomic, setter=_setRelayRemotePrimaryIdentifier:) NSData *_relayRemotePrimaryIdentifier; // @synthesize _relayRemotePrimaryIdentifier;
@property(nonatomic, setter=_setConnectionStarted:) BOOL _connectionStarted; // @synthesize _connectionStarted;
@property(nonatomic, setter=_setIsAudioInterrupted:) BOOL _isAudioInterrupted; // @synthesize _isAudioInterrupted;
@property(nonatomic, setter=_setIsVideoInterrupted:) BOOL _isVideoInterrupted; // @synthesize _isVideoInterrupted;
@property(retain, nonatomic, setter=setDataDownloaded:) NSNumber *dataDownloaded; // @synthesize dataDownloaded=_dataDownloaded;
@property(retain, nonatomic, setter=setDataUploaded:) NSNumber *dataUploaded; // @synthesize dataUploaded=_dataUploaded;
@property(retain, nonatomic, setter=setDataRate:) NSNumber *dataRate; // @synthesize dataRate=_dataRate;
@property(retain, nonatomic, setter=_setBackCameraCaptureTime:) NSNumber *_backCameraCaptureTime; // @synthesize _backCameraCaptureTime;
@property(retain, nonatomic, setter=_setFrontCameraCaptureTime:) NSNumber *_frontCameraCaptureTime; // @synthesize _frontCameraCaptureTime;
@property(retain, nonatomic, setter=_setInterruptionBegan:) NSDate *_interruptionBegan; // @synthesize _interruptionBegan;
@property(readonly, nonatomic) BOOL isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic, setter=_setNeedsVideoRestart:) BOOL _needsVideoRestart; // @synthesize _needsVideoRestart;
@property(nonatomic, setter=_setNeedsAudioRestart:) BOOL _needsAudioRestart; // @synthesize _needsAudioRestart;
@property(nonatomic, setter=_setRemoteNetworkConnectionType:) unsigned long long _remoteNetworkConnectionType; // @synthesize _remoteNetworkConnectionType;
@property(nonatomic, setter=_setLocalNetworkConnectionType:) unsigned long long _localNetworkConnectionType; // @synthesize _localNetworkConnectionType;
@property(retain, nonatomic, setter=_setNatType:) NSNumber *_natType; // @synthesize _natType;
@property(readonly, retain, nonatomic) IMHandle *initiatorIMHandle; // @synthesize initiatorIMHandle=_initiator;
@property(retain, nonatomic, setter=_setCallerProperties:) NSDictionary *callerProperties; // @synthesize callerProperties=_callerProperties;
@property(readonly, nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic, setter=_setStartedAudioSession:) BOOL _startedAudioSession; // @synthesize _startedAudioSession;
@property(nonatomic, setter=_setIsCallUpgrade:) BOOL _isCallUpgrade; // @synthesize _isCallUpgrade;
@property(retain, nonatomic, setter=_setCallStatisticsGUID:) NSString *_callStatisticsGUID; // @synthesize _callStatisticsGUID;
@property(nonatomic, setter=_setConnectionType:) int _connectionType; // @synthesize _connectionType;
@property(readonly, nonatomic) struct dispatch_queue_s *_conferenceQueue; // @synthesize _conferenceQueue;
- (BOOL)_cachedBoolForKey:(id)arg1;
- (BOOL)_hasCachedBoolForKey:(id)arg1;
- (void)_cacheBool:(BOOL)arg1 forKey:(id)arg2;
- (void)_clearCache;
- (id)_timings;
- (void)_noteFirstFrame;
- (void)_postNotificationName:(id)arg1 participant:(id)arg2 userInfo:(id)arg3;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_handleAVError:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *_imHandles;
@property(readonly, nonatomic) BOOL isUsingWifi;
@property(readonly, nonatomic) BOOL _usesRelay;
@property(readonly, nonatomic) NSNumber *_relayConnectDuration;
@property(readonly, nonatomic) NSNumber *_callDuration;
@property(readonly, nonatomic) NSNumber *_connectDuration;
@property(readonly, nonatomic) NSNumber *_currentNatType;
@property(readonly, nonatomic) NSNumber *_remoteNatType;
- (BOOL)isConferenceSilent;
@property(readonly, nonatomic) long long _bustedCallID;
- (void)_setDateConnected;
- (void)_setCreationDate;
@property(readonly, nonatomic) unsigned int endedReason;
@property(readonly, nonatomic) int endedError;
- (void)_setConferenceID:(id)arg1;
@property(readonly, retain, nonatomic) IMAccount *account;
@property(readonly, nonatomic) BOOL _isProxy;
- (void)resetWantsHoldMusic;
@property(readonly, retain, nonatomic) IMHandle *otherIMHandle;
- (id)participantMatchingIMHandle:(id)arg1;
- (id)vcPartyIDForIMHandle:(id)arg1;
- (id)participantWithID:(id)arg1;
- (id)participantWithAVConferenceCallID:(long long)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (void)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3;
- (void)_handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3 handled:(BOOL)arg4;
- (void)_responseToVCInvite:(id)arg1;
- (void)__responseToVCInvite:(id)arg1;
- (BOOL)_processVCResponseDict:(id)arg1;
- (void)_setStateDisconnected;
- (void)declineInvitation;
- (void)declineInvitationWithResponse:(unsigned int)arg1;
- (void)acceptInvitationWithHoldMusic;
- (void)acceptInvitation;
- (void)invite:(id)arg1;
- (void)invite:(id)arg1 additionalPeers:(id)arg2;
- (void)cancelInvitation;
- (void)_cancelInvitationWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)inviteAll;
- (void)_breakCallsIfNecessary:(BOOL)arg1;
- (BOOL)_isVideoUpgradeTo:(id)arg1;
- (BOOL)_isCallUpgradeTo:(id)arg1;
- (id)inviteesInfo;
- (void)endChatWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)_endChatWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)endChatWithError:(int)arg1;
- (void)endChatWithReason:(unsigned int)arg1;
- (void)endChat;
- (void)beginChat;
- (id)description;
- (void)dealloc;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2;
- (id)_initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 GUID:(id)arg3;
- (id)initIncomingFrom:(id)arg1 isVideo:(BOOL)arg2 callerProperties:(id)arg3;
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned int)arg3 GUID:(id)arg4 video:(BOOL)arg5 extraProperties:(id)arg6;
- (void)setMetadataFinalized;
- (id)_proxyRepresentation;
- (id)_proxyRepresentationForIMAVChatParticipant:(id)arg1;
@property(nonatomic) void *localVideoBackLayer;
@property(nonatomic) void *localVideoLayer;
- (void)setLocalAspectRatio:(struct CGSize)arg1 cameraOrientation:(unsigned int)arg2 cameraType:(unsigned int)arg3;
- (struct CGSize)localAspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
@property(nonatomic) unsigned int cameraOrientation;
@property(nonatomic) unsigned int cameraType;
- (void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 cameraWillSwitch:(BOOL)arg5 camera:(unsigned int)arg6 orientation:(unsigned int)arg7 aspect:(struct CGSize)arg8;
- (BOOL)stopPreview;
- (BOOL)startPreviewWithError:(id *)arg1;
@property(nonatomic) double connectionTimeoutTime;
@property(nonatomic) double invitationTimeoutTime;
- (void)_breakBeforeMakeTimer:(id)arg1;
- (void)_setBreakBeforeMakeTimer;
- (void)_clearBreakBeforeMakeTimer;
- (void)_firstFrameTimeout:(id)arg1;
- (void)_setFirstFrameTimeoutTimer;
- (void)_clearFirstFrameTimeoutTimer;
- (void)_reduceInvitationTimeoutTime;
- (void)_invitationTimeout:(id)arg1;
- (void)_setInvitationTimeoutTimer;
- (void)_clearInvitationTimeoutTimer;
- (void)_connectionTimeout:(id)arg1;
- (void)_setConnectionTimeoutTimer;
- (void)_clearConnectionTimeoutTimer;
- (void)conferencePersonWithID:(id)arg1 localIPDidChange:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayCancel:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayUpdate:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayRequest:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 mediaDidStall:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didDegrade:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didPause:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didMute:(BOOL)arg2;
- (void)_conferenceOtherParticipant:(id)arg1 didConnect:(BOOL)arg2;
- (void)conferenceAVConferenceCallID:(long long)arg1 didConnect:(BOOL)arg2;
- (void)conferenceDidStopWithCallID:(long long)arg1 error:(id)arg2;
- (void)_vccInitDidFinish:(id)arg1;
@property(nonatomic) BOOL isSendingAudio;
@property(readonly, nonatomic) BOOL didRemoteMute;
@property(nonatomic, setter=setRemoteMute:) BOOL isRemoteMute;
- (void)toggleMute;
@property(nonatomic, setter=setMute:) BOOL isMute;
@property(nonatomic) BOOL isSendingVideo;
@property(readonly, nonatomic) BOOL didRemotePause;
- (void)togglePaused;
@property(nonatomic, setter=setPaused:) BOOL isPaused;
@property(readonly, nonatomic) BOOL hasReceivedFirstFrame;
- (void)_handleRelayCancel:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayInitate:(id)arg1 fromParticipant:(id)arg2;
- (void)_entitlementsChanged:(id)arg1;
- (void)_airplaneModeChanged:(id)arg1;
- (void)systemWillShutdown;
- (void)notificationCenterDidDisappear;
- (void)notificationCenterWillAppear;
- (void)systemApplicationDidResumeForEventsOnly;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidBecomeActive;
- (void)_resumeVideoState;
- (void)_resumeAudioState;
- (void)_saveVideoRestartState;
- (void)_saveAudioRestartState;
- (void)systemDidFastUserSwitchOut;
- (void)_postStateToDelegateIfNecessary;
- (void)participant:(id)arg1 changedFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (void)_setActiveConference;
@property(readonly, nonatomic) BOOL isActive; // @dynamic isActive;
@property(readonly, nonatomic) BOOL isStateFinal; // @dynamic isStateFinal;
- (id)_participantMatchingVCPartyID:(id)arg1;
@property(readonly, nonatomic) BOOL _allParticipantsUsingICE;
@property(readonly, retain, nonatomic) NSArray *remoteParticipants; // @dynamic remoteParticipants;
@property(readonly, retain, nonatomic) IMAVChatParticipant *initiatorParticipant; // @dynamic initiatorParticipant;
- (BOOL)_participantsCheckOut;
- (void)_initParticipantsWithIMHandles:(id)arg1;
- (BOOL)_moveVCPartyID:(id)arg1 toIndex:(unsigned int)arg2 inCount:(unsigned int)arg3;
- (void)_insertRemoteParticipant:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_updateIMHandleInBuddyList:(id)arg1;
- (void)_peerID:(id)arg1 changedTo:(id)arg2;
- (void)_submitCallEndedLoggingWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)__sendEndCallMetricToAWDWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)__sendEndCallMetricToViceroyWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)_submitCallInterruptionEndedLogging;
- (void)_submitCallInterruptionBeganLogging;
- (void)_submitCallConnectedLogging;
- (void)_submitCallStartedLoggingWithRecipientID:(id)arg1 isCaller:(BOOL)arg2 isVideo:(BOOL)arg3;

@end

