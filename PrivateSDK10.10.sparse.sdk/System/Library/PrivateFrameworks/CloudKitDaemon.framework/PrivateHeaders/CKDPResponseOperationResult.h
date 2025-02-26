/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class CKDPResponseOperationResultError;

@interface CKDPResponseOperationResult : PBCodable <NSCopying>
{
    int _code;
    CKDPResponseOperationResultError *_error;
    struct {
        unsigned int code:1;
    } _has;
}

@property(retain, nonatomic) CKDPResponseOperationResultError *error; // @synthesize error=_error;
@property(nonatomic) int code; // @synthesize code=_code;
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
@property(readonly, nonatomic) BOOL hasError;
@property(nonatomic) BOOL hasCode;

@end

