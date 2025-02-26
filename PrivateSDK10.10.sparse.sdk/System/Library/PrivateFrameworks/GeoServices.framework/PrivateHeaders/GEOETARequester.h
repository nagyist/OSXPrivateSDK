/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSMapTable;

// Not exported
@interface GEOETARequester : NSObject
{
    NSMapTable *_pendingRequests;
    NSLock *_pendingRequestsLock;
}

+ (id)sharedRequester;
- (void)cancelRequest:(id)arg1;
- (void)startSimpleETARequest:(id)arg1 finished:(id)arg2 networkActivity:(void)arg3 error:(id)arg4;
- (void)_startRequest:(id)arg1 provider:(id)arg2 isRequestUpdate:(BOOL)arg3 connectionProperties:(const CDStruct_96e0509c *)arg4 willSendRequest:(id)arg5 finished:(void)arg6 networkActivity:(id)arg7 error:(void)arg8;
- (void)updateRequest:(id)arg1 finished:(id)arg2 networkActivity:(void)arg3 error:(id)arg4;
- (void)startRequest:(id)arg1 finished:(id)arg2 networkActivity:(void)arg3 error:(id)arg4;
- (void)startRequest:(id)arg1 connectionProperties:(const CDStruct_96e0509c *)arg2 willSendRequest:(id)arg3 finished:(void)arg4 networkActivity:(id)arg5 error:(void)arg6;
- (void)dealloc;
- (id)init;

@end

