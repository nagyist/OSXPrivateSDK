/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSError.h"

@interface NSError (MMCSKit)
+ (id)MMCSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
- (id)MMCSRetryAfterDate;
- (BOOL)MMCSIsFatalError;
- (BOOL)MMCSIsAuthorizationError;
- (BOOL)MMCSIsNetworkConditionsError;
- (BOOL)MMCSIsCancelError;
- (void)_MMCSApplyBlock:(id)arg1;
- (int)MMCSErrorType;
@end

