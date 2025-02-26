/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class GKPlayer;

@interface GKMultiplayerParticipant : NSObject <NSCopying>
{
    long long _type;
    long long _status;
    GKPlayer *_player;
    long long _number;
}

@property(nonatomic) long long number; // @synthesize number=_number;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

