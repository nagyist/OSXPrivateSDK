/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterFoundation/GKFriendPlayerInternal.h>

@class NSArray, NSNumber, NSString;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal
{
    NSString *_accountName;
    NSArray *_emailAddresses;
    NSString *_facebookUserID;
    NSNumber *_iCloudUserID;
    unsigned short _numberOfRequests;
    unsigned short _numberOfTurns;
    unsigned short _numberOfChallenges;
}

+ (id)secureCodedPropertyKeys;
- (void)setNumberOfChallenges:(unsigned short)arg1;
- (unsigned short)numberOfChallenges;
- (void)setNumberOfTurns:(unsigned short)arg1;
- (unsigned short)numberOfTurns;
- (void)setNumberOfRequests:(unsigned short)arg1;
- (unsigned short)numberOfRequests;
- (id)iCloudUserID;
- (void)setFacebookUserID:(id)arg1;
- (id)facebookUserID;
- (void)setEmailAddresses:(id)arg1;
- (id)emailAddresses;
- (void)setAccountName:(id)arg1;
- (id)accountName;
- (int)defaultFamiliarity;
- (void)setICloudUserID:(id)arg1;
- (BOOL)isFriend;
- (BOOL)isLocalPlayer;
- (void)setPhotoPending:(BOOL)arg1;
- (BOOL)isPhotoPending;
- (void)setFindable:(BOOL)arg1;
- (BOOL)isFindable;
- (void)setUnderage:(BOOL)arg1;
- (BOOL)isUnderage;
- (void)setPurpleBuddyAccount:(BOOL)arg1;
- (BOOL)isPurpleBuddyAccount;
- (void)dealloc;

@end

