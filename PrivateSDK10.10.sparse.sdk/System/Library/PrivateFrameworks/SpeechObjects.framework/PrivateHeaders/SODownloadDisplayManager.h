/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SODownloadDisplayManager : NSObject
{
    double _currentBytesPerSecondValue;
    double _timeRemainingAvergingWindow[7];
}

- (double)_averagedTimeInterval;
- (void)_appendAveragingTimeInterval:(double)arg1;
- (void)reset;
- (double)timeRemainingForActiveInstallations:(id)arg1 withTagPrefix:(id)arg2;
- (void)dealloc;
- (id)init;

@end

