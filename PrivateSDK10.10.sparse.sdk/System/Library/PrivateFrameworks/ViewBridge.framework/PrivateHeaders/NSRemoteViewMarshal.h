/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <ViewBridge/NSRemoteViewMarshal-Protocol.h>

@class NSRemoteViewBase, NSViewBridge, NSViewRemoteBridge;

@interface NSRemoteViewMarshal : NSObject <NSRemoteViewMarshal>
{
    NSViewRemoteBridge *_bridge;
    NSRemoteViewBase *_view;
    unsigned int _invalid:1;
}

+ (id)eventsInProgress;
@property(readonly) NSViewBridge *bridge; // @synthesize bridge=_bridge;
@property(readonly) NSRemoteViewBase *view; // @synthesize view=_view;
- (void)endPrivateEventLoop:(id)arg1;
- (void)beginPrivateEventLoop:(id)arg1;
- (void)serviceHasService:(int)arg1;
- (void)associateMouseAndMouseCursorPosition:(BOOL)arg1 completion:(id)arg2;
- (void)addChildWindow:(id)arg1 windowBase:(unsigned char)arg2 ordered:(long long)arg3 frame:(struct CGRect)arg4 reply:(id)arg5;
- (void)setServiceWindowEventMask:(unsigned long long)arg1;
- (void)dragWindowRelativeToMouseDown:(struct CGPoint)arg1;
- (void)suspendInFavorOfEndpoint:(id)arg1 serviceName:(id)arg2 serviceSubclassName:(id)arg3 serviceWindowIsKey:(BOOL)arg4 initialBridge:(id)arg5 completion:(id)arg6;
- (void)remoteViewControllerProxy:(id)arg1;
- (void)retreatToConfigPhase;
- (void)sendKeyEventFromServiceAccessoryViewToRemoteAccessoryView:(id)arg1 eventOwner:(unsigned int)arg2 withReply:(id)arg3;
- (void)endModalSession:(id)arg1;
- (void)beginModalSession:(id)arg1 title:(id)arg2 size:(struct CGSize)arg3 serviceTrustsRemoteKeyEvents:(BOOL)arg4 withReply:(id)arg5;
- (void)handleEventFromService:(id)arg1 eventOwner:(unsigned int)arg2 withReply:(id)arg3;
- (BOOL)shouldSendEventToApplicationBypassingSubclasses;
- (void)orderWindow:(unsigned int)arg1 mode:(long long)arg2 relativeTo:(unsigned int)arg3 withReply:(id)arg4;
- (void)serviceAccessoryViewBecameFirstResponder:(unsigned long long)arg1;
- (void)serviceAccessoryViewResignedFirstResponder;
- (void)setAccessoryViewOrigin:(struct CGPoint)arg1;
- (void)forgetAccessoryView;
- (void)beginSheet:(id)arg1 modalForWindow:(id)arg2 size:(struct CGSize)arg3 isCritical:(BOOL)arg4 withReply:(id)arg5;
- (void)setServiceContextID:(unsigned int)arg1;
- (void)setServiceWindowStyleMask:(unsigned long long)arg1;
- (void)serviceWindowDidBecomeKey;
- (void)serviceWindowDidResignKey;
- (void)serviceRequestsResize:(struct CGSize)arg1 animate:(BOOL)arg2 transaction:(id)arg3 completion:(id)arg4;
- (void)serviceHasFirstResponder:(int)arg1 inDirection:(unsigned long long)arg2 withReply:(id)arg3;
- (void)registerBridgeKey:(id)arg1 defaultObject:(id)arg2 owner:(unsigned char)arg3 withReply:(id)arg4;
- (void)setRemoteObject:(id)arg1 forKey:(id)arg2 withReply:(id)arg3;
- (void)exceptionSafeSetRemoteObject:(id)arg1 forKey:(id)arg2 withReply:(id)arg3;
- (void)sendEventUpResponderChain:(id)arg1 eventOwner:(unsigned int)arg2;
- (void)serviceViewReceivedLeftMouseDown;
- (void)serviceWindowReceivedScrollWheel:(id)arg1 eventOwner:(unsigned int)arg2;
- (void)serviceWindowWouldActivate;
- (void)updateContentMinSize:(struct CGSize)arg1;
- (void)updateAccessibilityChildren:(id)arg1;
- (void)discloseAccessoryView:(BOOL)arg1 withOffset:(struct CGPoint)arg2 andAnimationState:(int)arg3 andDuration:(double)arg4;
- (void)hasValidKeyViewInDirection:(unsigned long long)arg1 withReply:(id)arg2;
- (void)lastCallImpliedByAdvancingToPhase:(unsigned char)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

