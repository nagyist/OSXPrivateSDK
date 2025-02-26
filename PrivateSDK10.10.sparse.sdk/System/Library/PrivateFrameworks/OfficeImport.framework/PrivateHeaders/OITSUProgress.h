/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

// Not exported
@interface OITSUProgress : NSObject
{
    NSMutableSet *mProgressObservers;
    NSObject<OS_dispatch_queue> *mProgressObserversQueue;
    NSString *mMessage;
}

@property(copy) NSString *message; // @synthesize message=mMessage;
- (double)protected_minProgressObserverValueInterval;
- (BOOL)protected_hasProgressObservers;
- (void)protected_progressDidChange;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id)arg3;
@property(readonly, getter=isIndeterminate) BOOL indeterminate;
@property(readonly) double maxValue;
@property(readonly) double value;
- (void)dealloc;
- (id)init;

@end

