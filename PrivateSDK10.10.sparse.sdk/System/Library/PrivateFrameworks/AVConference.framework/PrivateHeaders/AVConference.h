/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVConferenceXPCClient, CALayer, NSDictionary, NSObject<AVConferenceDelegate>, NSTimer;

@interface AVConference : NSObject
{
    id weakAVConference;
    AVConferenceXPCClient *connection;
    id opaqueConf;
    BOOL useServer;
    BOOL runningInServer;
    NSObject<AVConferenceDelegate> *delegate;
    NSDictionary *serverBag;
    CALayer *remoteLayerFront;
    CALayer *remoteLayerBack;
    CALayer *remoteSubLayerFront;
    CALayer *remoteSubLayerBack;
    BOOL shouldDisplayVideoInfoLayer;
    BOOL _isUsingFrontCamera;
    int _localCellTech;
    BOOL shouldDisplayVideoInfoLayer_;
    BOOL shouldDisplayNetworkQualityGraph_;
    NSTimer *networkQualityUpdateTimer_;
    CALayer *networkQualityGraphLayer_;
}

+ (unsigned int)doBlockingConnectionCheck:(BOOL)arg1;
+ (unsigned int)doBlockingConnectionCheck;
+ (void)stopAudioSession;
+ (void)startAudioSession;
+ (void)setAudioSessionProperties:(id)arg1;
+ (id)externalAddressForSelfConnectionBlob:(id)arg1;
+ (short)addressPointerFromBlob:(id)arg1;
+ (void)refreshLoggingParameters;
@property(retain) CALayer *networkQualityGraphLayer; // @synthesize networkQualityGraphLayer=networkQualityGraphLayer_;
@property(retain) NSTimer *networkQualityUpdateTimer; // @synthesize networkQualityUpdateTimer=networkQualityUpdateTimer_;
@property BOOL shouldDisplayNetworkQualityGraph; // @synthesize shouldDisplayNetworkQualityGraph=shouldDisplayNetworkQualityGraph_;
@property BOOL shouldDisplayVideoInfoLayer; // @synthesize shouldDisplayVideoInfoLayer=shouldDisplayVideoInfoLayer_;
@property NSObject<AVConferenceDelegate> *delegate; // @synthesize delegate;
- (void)shouldSendBlackFrames:(BOOL)arg1 callID:(long long)arg2;
- (void)processCancelRelayRequest:(long long)arg1 cancelDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (void)processRelayUpdate:(long long)arg1 updateDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (void)processRelayRequestResponse:(long long)arg1 responseDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (void)videoConference:(id)arg1 closeConnectionForCallID:(long long)arg2;
- (void)videoConference:(id)arg1 reinitializeCallForCallID:(unsigned int)arg2;
- (void)videoConference:(id)arg1 localAudioEnabled:(BOOL)arg2 forCallID:(unsigned int)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 remoteAudioEnabled:(BOOL)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned int)arg2;
- (void)videoConference:(id)arg1 didReceiveData:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 networkHint:(BOOL)arg3;
- (void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned int)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (void)videoConference:(id)arg1 cancelRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 sendRelayUpdate:(unsigned int)arg2 updateDict:(id)arg3;
- (void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
- (void)videoConference:(id)arg1 updateInputFrequencyLevel:(id)arg2;
- (void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned int)arg2;
- (void)videoConference:(id)arg1 remoteMediaStalled:(BOOL)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3 callMetadata:(id)arg4;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned int)arg3 withUserInfo:(id)arg4 error:(id)arg5;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;
- (unsigned int)doBlockingConnectionCheck;
- (void)setLocalScreenAttributes:(id)arg1;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (BOOL)setServerInfo:(id)arg1;
- (void)updateCapabilities:(id)arg1 forCallID:(long long)arg2;
- (BOOL)setPauseVideo:(BOOL)arg1 callID:(long long)arg2 error:(id *)arg3;
- (BOOL)setPauseAudio:(BOOL)arg1 callID:(long long)arg2 error:(id *)arg3;
@property(readonly) unsigned int natType;
@property(getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
- (id)statsForCallID:(long long)arg1;
- (double)roundTripTimeForCallID:(long long)arg1;
- (double)localPacketLossRateForCallID:(long long)arg1;
- (double)remotePacketLossRateForCallID:(long long)arg1;
- (int)remoteFrameWidthForCallID:(long long)arg1;
- (int)remoteFrameHeightForCallID:(long long)arg1;
@property(readonly) int localFrameWidth;
@property(readonly) int localFrameHeight;
- (double)remoteBitrateForCallID:(long long)arg1;
- (double)remoteFramerateForCallID:(long long)arg1;
- (double)localBitrateForCallID:(long long)arg1;
- (double)localFramerateForCallID:(long long)arg1;
- (void)setRemoteVideoBackLayer:(void *)arg1;
- (void)setRemoteVideoLayer:(void *)arg1;
- (void *)remoteVideoBackLayer;
- (void *)remoteVideoLayer;
- (void)setActiveRemoteVideoLayerFront:(BOOL)arg1;
- (void)stopNetworkQualityUpdateTimer;
- (void)startNetworkQualityUpdateTimer;
- (BOOL)updateNetworkQualityGraph;
- (float)networkQuality;
- (BOOL)setAudioInputDevice:(id)arg1;
- (id)currentAudioInputDevice;
@property(nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;
@property(readonly) float inputMeterLevel;
- (BOOL)getIsVideoPaused:(char *)arg1 callID:(long long)arg2 error:(id *)arg3;
- (BOOL)getIsAudioPaused:(char *)arg1 callID:(long long)arg2 error:(id *)arg3;
@property(readonly) float outputMeterLevel;
@property(nonatomic, getter=isOutputFrequencyMeteringEnabled) BOOL outputFrequencyMeteringEnabled;
@property(nonatomic, getter=isInputFrequencyMeteringEnabled) BOOL inputFrequencyMeteringEnabled;
@property(nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property(nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
- (void)processRemoteIPChange:(id)arg1 callID:(long long)arg2;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (void)setLastActiveCallID:(long long)arg1;
- (long long)lastActiveCallID;
- (BOOL)setActive:(BOOL)arg1;
- (void)setCallReport:(long long)arg1 withReport:(id)arg2;
- (void)sendProtobuf:(id)arg1 withType:(long long)arg2 forCallID:(long long)arg3;
- (void)remoteCancelledCallID:(long long)arg1;
- (void)stopCallID:(long long)arg1;
- (BOOL)startConnectionWithCallID:(long long)arg1 usingInviteData:(id)arg2 isCaller:(BOOL)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(BOOL)arg5 capabilities:(id)arg6 error:(id *)arg7;
- (BOOL)startConnectionWithCallID:(long long)arg1 oldCallID:(long long)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(BOOL)arg6 capabilities:(id)arg7 error:(id *)arg8;
- (BOOL)startConnectionWithCallID:(long long)arg1 usingInviteData:(id)arg2 isCaller:(BOOL)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(BOOL)arg5 capabilities:(id)arg6 idsSocket:(int)arg7 error:(id *)arg8;
- (BOOL)startConnectionWithCallID:(long long)arg1 oldCallID:(long long)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(BOOL)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 error:(id *)arg9;
- (id)convertBlobtoNewBlob:(id)arg1;
- (id)convertBlobtoOldBlob:(id)arg1;
@property(nonatomic) BOOL requiresWifi;
- (double)networkQualityForCallID:(long long)arg1;
- (void)setSessionID:(id)arg1 callID:(long long)arg2;
- (void)setPeerCN:(id)arg1 callID:(long long)arg2;
- (id)callMetadataForCallID:(long long)arg1;
- (void)inviteDictionaryForCallID:(long long)arg1 remoteInviteDictionary:(id)arg2 nonCellularCandidateTimeout:(double)arg3 block:(id)arg4 queue:(void)arg5;
- (id)newRandomParticipantID;
- (void)sendData:(id)arg1 forCallID:(long long)arg2 encrypted:(BOOL)arg3;
- (void)sendARPLData:(id)arg1 toCallID:(long long)arg2;
- (void)addGKSCallEvent:(id)arg1 sessionID:(id)arg2;
- (void)setSetSessionID:(id)arg1 forCallID:(long long)arg2;
@property(getter=isUsingViceroyBlobFormat) BOOL useViceroyBlobFormat;
- (void)dealloc;
- (void)warmupForCall;
- (long long)initializeNewCallWithDeviceRole:(int)arg1;
- (long long)initializeNewCall;
- (id)initWithClientUUID:(id)arg1;
- (id)init;
- (void)handleGKSConnectivitySettingsUpdate:(id)arg1;
- (void)updateGKSConnectivitySettings;
- (void)stopListeningForNotifications;
- (void)listenForNotifications;
- (void)serverDied;
- (void)serverReconnected;
- (void)setRemoteVideoLayerContentsRect:(struct CGRect)arg1 camera:(int)arg2;
- (void)deregisterBlocksForVCNotifications;
- (void)registerBlocksForVCNotifications;
- (id)connectionTypeToString:(int)arg1;

@end

