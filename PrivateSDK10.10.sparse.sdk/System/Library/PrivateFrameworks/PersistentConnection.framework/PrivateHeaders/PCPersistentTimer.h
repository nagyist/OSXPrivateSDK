/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CUTPowerMonitorDelegate-Protocol.h"
#import "PCLoggingDelegate-Protocol.h"

@class NSObject<OS_dispatch_queue>, NSString, PCSimpleTimer;

@interface PCPersistentTimer : NSObject <PCLoggingDelegate, CUTPowerMonitorDelegate>
{
    double _fireTime;
    double _startTime;
    unsigned long long _guidancePriority;
    double _minimumEarlyFireProportion;
    BOOL _triggerOnGMTChange;
    BOOL _disableSystemWaking;
    NSString *_serviceIdentifier;
    id _target;
    SEL _selector;
    id _userInfo;
    PCSimpleTimer *_simpleTimer;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)_updateTime:(double)arg1 forGuidancePriority:(unsigned long long)arg2;
+ (double)_currentGuidanceTime;
+ (double)currentMachTimeInterval;
+ (id)lastSystemWakeDate;
+ (id)_backgroundUpdateQueue;
@property(readonly, nonatomic) NSString *loggingIdentifier; // @synthesize loggingIdentifier=_serviceIdentifier;
@property(nonatomic) BOOL disableSystemWaking; // @synthesize disableSystemWaking=_disableSystemWaking;
@property(nonatomic) double minimumEarlyFireProportion; // @synthesize minimumEarlyFireProportion=_minimumEarlyFireProportion;
@property(readonly, copy) NSString *debugDescription;
- (double)_nextForcedAlignmentAbsoluteTime;
- (void)interfaceManagerInternetReachabilityChanged:(id)arg1;
- (void)interfaceManagerWWANInterfaceChangedPowerState:(id)arg1;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(id)arg1;
- (void)_fireTimerFired;
- (void)_updateTimers;
- (double)_earlyFireTime;
- (id)userInfo;
- (BOOL)firingIsImminent;
- (BOOL)isValid;
@property(readonly, nonatomic) double fireTime;
- (void)invalidate;
- (void)scheduleInQueue:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1;
- (void)dealloc;
- (id)_initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned long long)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 triggerOnGMTChange:(BOOL)arg7;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned long long)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

