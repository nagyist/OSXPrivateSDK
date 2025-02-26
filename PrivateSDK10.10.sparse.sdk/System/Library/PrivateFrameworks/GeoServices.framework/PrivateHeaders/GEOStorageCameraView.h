/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOURLCamera, PBUnknownFields;

@interface GEOStorageCameraView : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOURLCamera *_camera;
    int _mapType;
    struct {
        unsigned int mapType:1;
    } _has;
}

@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(retain, nonatomic) GEOURLCamera *camera; // @synthesize camera=_camera;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasMapType;
@property(readonly, nonatomic) BOOL hasCamera;
- (void)dealloc;

@end

