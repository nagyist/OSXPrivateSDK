/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol PRRequestDelegate <NSObject>
- (id)responseNotificationStringForRequest:(id)arg1 fromFamilyMember:(id)arg2;
- (id)requestNotificationStringForRequest:(id)arg1 fromFamilyMember:(id)arg2;
- (id)requestStringForRequest:(id)arg1 fromFamilyMember:(id)arg2 shownInNotification:(BOOL)arg3;
- (void)attemptLocalApprovalForRequest:(id)arg1 completionHandler:(id)arg2;
- (void)performCancellationForDeclinedRequest:(id)arg1 completionHandler:(id)arg2;
- (void)performAuthorizationForApprovedRequest:(id)arg1 completionHandler:(id)arg2;
- (void)permissionRequest:(id)arg1 didChangeStatusTo:(unsigned long long)arg2;
- (void)didCreateNewPermissionRequest:(id)arg1;
@end

