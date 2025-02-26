/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface VCCallLinkCongestionDetector : NSObject
{
    BOOL isLinkCongested;
    double rttThreshold;
    double lossRateThreshold;
}

@property(nonatomic) BOOL isLinkCongested; // @synthesize isLinkCongested;
- (void)addNewRTT:(double)arg1 packetLossRate:(double)arg2 timestamp:(double)arg3;
- (id)initWithRTTThreshold:(double)arg1 lossRateThreshold:(double)arg2;

@end

