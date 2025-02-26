/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOLatLng, GEOTimezone;

@interface GEOPDPlaceInfo : PBCodable <NSCopying>
{
    double _area;
    GEOLatLng *_center;
    GEOTimezone *_timezone;
    BOOL _isApproximateCenter;
    struct {
        unsigned int area:1;
        unsigned int isApproximateCenter:1;
    } _has;
}

+ (id)placeInfoForPlaceData:(id)arg1;
@property(nonatomic) BOOL isApproximateCenter; // @synthesize isApproximateCenter=_isApproximateCenter;
@property(retain, nonatomic) GEOTimezone *timezone; // @synthesize timezone=_timezone;
@property(nonatomic) double area; // @synthesize area=_area;
@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsApproximateCenter;
@property(readonly, nonatomic) BOOL hasTimezone;
@property(nonatomic) BOOL hasArea;
@property(readonly, nonatomic) BOOL hasCenter;
- (void)dealloc;

@end

