/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class GKGame, GKPlayer, GKScoreInternal, NSDate, NSString;

@interface GKScore : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    BOOL _shouldSetDefaultLeaderboard;
    GKScoreInternal *_internal;
    GKGame *_game;
}

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (void)reportScores:(id)arg1 whileScreeningChallenges:(BOOL)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(id)arg4;
+ (void)reportScores:(id)arg1 withCompletionHandler:(id)arg2;
+ (BOOL)supportsSecureCoding;
@property(retain) GKGame *game; // @synthesize game=_game;
@property(nonatomic) BOOL shouldSetDefaultLeaderboard; // @synthesize shouldSetDefaultLeaderboard=_shouldSetDefaultLeaderboard;
@property(retain) GKScoreInternal *internal; // @synthesize internal=_internal;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)reportScoreWithCompletionHandler:(id)arg1;
@property(readonly, retain) GKPlayer *player;
@property(readonly, retain) NSString *playerID; // @dynamic playerID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCategory:(id)arg1;
- (id)init;
- (id)initWithLeaderboardIdentifier:(id)arg1 forPlayer:(id)arg2;
- (id)initWithLeaderboardIdentifier:(id)arg1 player:(id)arg2;
- (id)initWithLeaderboardIdentifier:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1 playerInternal:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

// Remaining properties
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property unsigned long long context; // @dynamic context;
@property(readonly, retain) NSDate *date; // @dynamic date;
@property(copy) NSString *formattedValue; // @dynamic formattedValue;
@property(retain) NSString *groupLeaderboardIdentifier; // @dynamic groupLeaderboardIdentifier;
@property(copy) NSString *leaderboardIdentifier; // @dynamic leaderboardIdentifier;
@property long long rank; // @dynamic rank;
@property long long value; // @dynamic value;
@property BOOL valueSet; // @dynamic valueSet;

@end

