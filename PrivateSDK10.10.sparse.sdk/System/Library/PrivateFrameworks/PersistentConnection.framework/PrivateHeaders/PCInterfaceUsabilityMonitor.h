/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PCInterfaceUsabilityMonitorProtocol-Protocol.h"

@class CUTWeakReference, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface PCInterfaceUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol>
{
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    long long _interfaceIdentifier;
    NSString *_interfaceName;
    CUTWeakReference *_delegateReference;
    void *_reachability;
    BOOL _isInternetReachable;
    void *_dynamicStore;
    struct __CFRunLoopSource *_linkQualitySource;
    struct __CFString *_lqKey;
    int _linkQuality;
    BOOL _trackUsability;
    unsigned long long _thresholdOffTransitionCount;
    double _trackedTimeInterval;
    NSMutableArray *_offTransitions;
}

+ (id)stringForLinkQuality:(int)arg1;
+ (BOOL)isBadLinkQuality:(int)arg1;
+ (BOOL)isPoorLinkQuality:(int)arg1;
- (void)_createLinkQualityMonitor;
- (void)_createLinkQualityMonitorOnIvarQueue;
- (void)_dynamicStoreCallback:(id)arg1;
- (void)_dynamicStoreCallbackOnIvarQueue:(id)arg1;
- (void)_processLinkQualityUpdateOnIvarQueueWithUpdatedLinkQuality:(int)arg1;
- (void)_unscheduleLinkQualityMonitorOnIvarQueue;
- (void)_reachabilityCallbackOnIvarQueue:(unsigned int)arg1;
- (void)_reachabilityCallback:(unsigned int)arg1;
- (void)_createReachabilityMonitor;
- (void)_createReachabilityMonitorOnIvarQueue;
- (void)_unscheduleReachabilityMonitorOnIvarQueue;
- (void)_callDelegateOnIvarQueueWithBlock:(id)arg1;
@property(nonatomic) id <PCInterfaceUsabilityMonitorDelegate> delegate;
@property(readonly, nonatomic) long long interfaceIdentifier;
@property(readonly, nonatomic) BOOL isRadioHot;
@property(readonly, nonatomic) BOOL isInternetReachable;
@property(readonly, nonatomic) int linkQuality;
@property(readonly, nonatomic) BOOL isBadLinkQuality;
@property(readonly, nonatomic) BOOL isPoorLinkQuality;
@property(readonly, retain, nonatomic) NSString *linkQualityString;
@property(readonly, nonatomic) BOOL isInterfaceHistoricallyUsable;
- (BOOL)_isInterfaceHistoricallyUsableOnIvarQueue;
@property(readonly, nonatomic) BOOL isInterfaceUsable;
- (BOOL)_isInterfaceUsableOnIvarQueue;
- (void)setTrackedTimeInterval:(double)arg1;
- (void)setThresholdOffTransitionCount:(unsigned long long)arg1;
- (void)setTrackUsability:(BOOL)arg1;
- (void)_flushStaleTransitionsOnIvarQueue;
- (void)_updateOffTransitionsForLinkQualityChangeOnIvarQueue;
- (void)dealloc;
- (id)initWithInterfaceName:(id)arg1 interfaceIdentifier:(long long)arg2 delegateQueue:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) struct __CFString *currentRAT;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isLTEWithCDRX;
@property(readonly) Class superclass;
@property(readonly, nonatomic) struct __CFString *wwanInterfaceName;

@end

