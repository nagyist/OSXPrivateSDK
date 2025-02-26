/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"
#import "TUCallServicesProxyCallActions-Protocol.h"

@protocol TUCallServicesDaemonDelegate <NSObject, TUCallServicesProxyCallActions>
- (void)setRelayCallingEnabled:(BOOL)arg1;
- (void)callModelState:(id)arg1;
- (void)currentCalls:(id)arg1;
- (void)requestHandoffForAllCalls;
- (void)setDisconnectedReason:(int)arg1 forCallWithCallUUID:(id)arg2;
- (void)setEndpointOnCurrentDevice:(BOOL)arg1 forCallWithCallUUID:(id)arg2;
- (void)setWantsHoldMusic:(BOOL)arg1 forCallWithCallUUID:(id)arg2;
- (void)callStateForCallWithCallUUID:(id)arg1 reply:(id)arg2;
- (void)requestPendingCallNotifications:(id)arg1;
- (void)handleNewHostedCallUUID:(id)arg1 reply:(id)arg2;
@end

