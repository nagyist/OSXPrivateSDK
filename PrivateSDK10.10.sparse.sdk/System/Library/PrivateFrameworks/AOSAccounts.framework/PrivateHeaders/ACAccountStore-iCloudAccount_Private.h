/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ACAccountStore.h"

@interface ACAccountStore (iCloudAccount_Private)
+ (id)sharedStore;
- (id)accountWithAccountType:(id)arg1 userName:(id)arg2;
- (id)filterAccounts:(id)arg1 withAccountType:(id)arg2;
- (id)icaRecommendedAppleIDForAccountSignInWithTypeIdentifier:(id)arg1 appleAccounts:(id)arg2 otherAccounts:(id)arg3;
- (id)collectOtherAccounts:(id)arg1 andDelegateParameters:(id)arg2;
- (id)collectOtherAccountTypes:(id)arg1 andDelegateParameters:(id)arg2 error:(id *)arg3;
- (id)collectAppleAccounts:(id)arg1 aosAccounts:(id)arg2;
@end

