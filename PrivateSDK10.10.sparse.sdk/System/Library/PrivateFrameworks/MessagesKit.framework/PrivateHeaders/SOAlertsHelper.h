/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MessagesKit/SOHelper.h>

#import "SOAlertsHelperReceiverProtocol-Protocol.h"

@class NSString;

@interface SOAlertsHelper : SOHelper <SOAlertsHelperReceiverProtocol>
{
    id <SOAlertsHelperAppleScriptDelegate> _delegate;
}

+ (id)weakSharedInstance;
+ (id)bundleName;
+ (id)remoteReceiverProtocol;
+ (id)receiverProtocol;
@property __weak id <SOAlertsHelperAppleScriptDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)performActionScriptForChatGUID:(id)arg1 handleID:(id)arg2 messageText:(id)arg3 accountGUID:(id)arg4 event:(int)arg5;
- (void)clearMessageDeliveryError;
- (void)copySampleScriptsFrom:(id)arg1 to:(id)arg2 withCompletionBlock:(id)arg3;
- (void)setValue:(id)arg1 forControllerKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

