/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PRUIHelper : NSObject
{
}

+ (id)sharedInstance;
- (void)showStorePreviewWindowForRequest:(id)arg1 fromFamilyMember:(id)arg2 withRequestString:(id)arg3 delegate:(id)arg4;
- (void)promptForApprovalSignInWithRequest:(id)arg1 localApproval:(BOOL)arg2 statusToSet:(unsigned long long)arg3 familyMembers:(id)arg4 explanation:(id)arg5 delegate:(id)arg6;
- (id)remoteObjectWithErrorHandler:(id)arg1;
- (id)helperConnection;
- (id)init;

@end

