/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@interface GEOPDAmenities : PBCodable <NSCopying>
{
    CDStruct_f0010152 *_amenitys;
    unsigned long long _amenitysCount;
    unsigned long long _amenitysSpace;
}

+ (id)amentiesForPlaceData:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setAmenitys:(CDStruct_f0010152 *)arg1 count:(unsigned long long)arg2;
- (CDStruct_f0010152)amenityAtIndex:(unsigned long long)arg1;
- (void)addAmenity:(CDStruct_f0010152)arg1;
- (void)clearAmenitys;
@property(readonly, nonatomic) CDStruct_f0010152 *amenitys;
@property(readonly, nonatomic) unsigned long long amenitysCount;
- (void)dealloc;
- (BOOL)valueForAmenityType:(int)arg1;
- (BOOL)hasAmenityType:(int)arg1;

@end

