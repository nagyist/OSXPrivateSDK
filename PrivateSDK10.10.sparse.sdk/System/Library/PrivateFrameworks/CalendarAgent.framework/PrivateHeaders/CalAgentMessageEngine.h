/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CalAgentOperationMap, NSObject<OS_xpc_object>;

@interface CalAgentMessageEngine : NSObject
{
    NSObject<OS_xpc_object> *_listenerConnection;
    CalAgentOperationMap *_operationMap;
}

@property(retain, nonatomic) CalAgentOperationMap *operationMap; // @synthesize operationMap=_operationMap;
@property(retain, nonatomic) NSObject<OS_xpc_object> *listenerConnection; // @synthesize listenerConnection=_listenerConnection;
- (void).cxx_destruct;
- (void)logConnectionInfo:(id)arg1;
- (void)handleMessage:(id)arg1;
- (void)handlePeerConnection:(id)arg1;
- (void)loadOperationMap;
- (void)start;
- (id)description;

@end

