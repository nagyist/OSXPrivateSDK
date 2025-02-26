/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class CKDPIdentifier, NSData, NSString;

// Not exported
@interface CKDPParticipant : PBCodable <NSCopying>
{
    NSString *_emailAddress;
    NSData *_invitationSignature;
    CKDPIdentifier *_inviterId;
    CKDPIdentifier *_participantId;
    int _participantType;
    int _permission;
    int _state;
    CKDPIdentifier *_userId;
    BOOL _createdOutOfProcess;
    struct {
        unsigned int participantType:1;
        unsigned int permission:1;
        unsigned int state:1;
        unsigned int createdOutOfProcess:1;
    } _has;
}

@property(retain, nonatomic) NSData *invitationSignature; // @synthesize invitationSignature=_invitationSignature;
@property(nonatomic) BOOL createdOutOfProcess; // @synthesize createdOutOfProcess=_createdOutOfProcess;
@property(retain, nonatomic) CKDPIdentifier *inviterId; // @synthesize inviterId=_inviterId;
@property(nonatomic) int permission; // @synthesize permission=_permission;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain, nonatomic) CKDPIdentifier *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) CKDPIdentifier *participantId; // @synthesize participantId=_participantId;
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
@property(readonly, nonatomic) BOOL hasInvitationSignature;
@property(nonatomic) BOOL hasParticipantType;
@property(nonatomic) int participantType; // @synthesize participantType=_participantType;
@property(nonatomic) BOOL hasCreatedOutOfProcess;
@property(readonly, nonatomic) BOOL hasInviterId;
@property(nonatomic) BOOL hasPermission;
@property(nonatomic) BOOL hasState;
@property(readonly, nonatomic) BOOL hasEmailAddress;
@property(readonly, nonatomic) BOOL hasUserId;
@property(readonly, nonatomic) BOOL hasParticipantId;

@end

