/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "ReopensAtLaunch-Protocol.h"

@class NSButton, NSMatrix, NSTimer;

// Not exported
@interface NetworkingController : NSWindowController <ReopensAtLaunch>
{
    struct Dictionary _networkingStatistics;
    NSTimer *_periodicRefreshTimer;
    NSMatrix *basicNetworkingStatisticsMatrix;
    NSButton *periodicallyRefreshStatistics;
}

+ (void)reopen;
+ (id)sharedNetworkingController;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setNetworkingStatistics:(const struct Dictionary *)arg1;
- (void)refreshStatistics:(id)arg1;
- (void)togglePeriodicallyRefreshStatistics:(id)arg1;
- (void)_schedulePeriodicRefreshTimer;
- (void)_periodicRefreshTimerFired:(id)arg1;
- (void)_cancelPeriodicRefreshTimer;
- (void)killNetworkProcess:(id)arg1;
- (void)windowDidLoad;
- (id)windowNibName;

@end

