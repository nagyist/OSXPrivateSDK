/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class CKDPShareIdentifier, NSData, NSMutableArray, NSString;

// Not exported
@interface CKDPShare : PBCodable <NSCopying>
{
    NSData *_keyData;
    NSString *_keyVersion;
    NSMutableArray *_participants;
    NSData *_resource;
    NSString *_resourceProvider;
    int _resourceState;
    CKDPShareIdentifier *_shareId;
    struct {
        unsigned int resourceState:1;
    } _has;
}

@property(retain, nonatomic) NSData *keyData; // @synthesize keyData=_keyData;
@property(retain, nonatomic) NSString *keyVersion; // @synthesize keyVersion=_keyVersion;
@property(nonatomic) int resourceState; // @synthesize resourceState=_resourceState;
@property(retain, nonatomic) NSData *resource; // @synthesize resource=_resource;
@property(retain, nonatomic) NSString *resourceProvider; // @synthesize resourceProvider=_resourceProvider;
@property(retain, nonatomic) NSMutableArray *participants; // @synthesize participants=_participants;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasKeyData;
@property(readonly, nonatomic) BOOL hasKeyVersion;
@property(nonatomic) BOOL hasResourceState;
@property(readonly, nonatomic) BOOL hasResource;
@property(readonly, nonatomic) BOOL hasResourceProvider;
- (id)participantAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (void)addParticipant:(id)arg1;
- (void)clearParticipants;
@property(readonly, nonatomic) BOOL hasShareId;

@end

