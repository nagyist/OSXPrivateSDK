/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

// Not exported
@interface GEOVPointOnRoad : PBCodable <NSCopying>
{
    int _featureIndex;
    int _vertexIndex;
    struct {
        unsigned int vertexIndex:1;
    } _has;
}

@property(nonatomic) int vertexIndex; // @synthesize vertexIndex=_vertexIndex;
@property(nonatomic) int featureIndex; // @synthesize featureIndex=_featureIndex;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasVertexIndex;

@end

