/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOPDCanonicalLocationSearchParameters, GEOPDGeocodingParameters, GEOPDLocationDirectedSearchParameters, GEOPDPlaceLookupParameters, GEOPDPlaceRefinementParameters, GEOPDReverseGeocodingParameters, GEOPDSearchParameters, GEOPDSiriSearchParameters;

@interface GEOPDPlaceRequestParameters : PBCodable <NSCopying>
{
    GEOPDCanonicalLocationSearchParameters *_canonicalLocationSearchParameters;
    GEOPDGeocodingParameters *_geocodingParameters;
    GEOPDLocationDirectedSearchParameters *_locationDirectedSearchParameters;
    GEOPDPlaceLookupParameters *_placeLookupParameters;
    GEOPDPlaceRefinementParameters *_placeRefinementParameters;
    GEOPDReverseGeocodingParameters *_reverseGeocodingParameters;
    GEOPDSearchParameters *_searchParameters;
    GEOPDSiriSearchParameters *_siriSearchParameters;
}

@property(retain, nonatomic) GEOPDLocationDirectedSearchParameters *locationDirectedSearchParameters; // @synthesize locationDirectedSearchParameters=_locationDirectedSearchParameters;
@property(retain, nonatomic) GEOPDSiriSearchParameters *siriSearchParameters; // @synthesize siriSearchParameters=_siriSearchParameters;
@property(retain, nonatomic) GEOPDPlaceRefinementParameters *placeRefinementParameters; // @synthesize placeRefinementParameters=_placeRefinementParameters;
@property(retain, nonatomic) GEOPDPlaceLookupParameters *placeLookupParameters; // @synthesize placeLookupParameters=_placeLookupParameters;
@property(retain, nonatomic) GEOPDReverseGeocodingParameters *reverseGeocodingParameters; // @synthesize reverseGeocodingParameters=_reverseGeocodingParameters;
@property(retain, nonatomic) GEOPDCanonicalLocationSearchParameters *canonicalLocationSearchParameters; // @synthesize canonicalLocationSearchParameters=_canonicalLocationSearchParameters;
@property(retain, nonatomic) GEOPDGeocodingParameters *geocodingParameters; // @synthesize geocodingParameters=_geocodingParameters;
@property(retain, nonatomic) GEOPDSearchParameters *searchParameters; // @synthesize searchParameters=_searchParameters;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasLocationDirectedSearchParameters;
@property(readonly, nonatomic) BOOL hasSiriSearchParameters;
@property(readonly, nonatomic) BOOL hasPlaceRefinementParameters;
@property(readonly, nonatomic) BOOL hasPlaceLookupParameters;
@property(readonly, nonatomic) BOOL hasReverseGeocodingParameters;
@property(readonly, nonatomic) BOOL hasCanonicalLocationSearchParameters;
@property(readonly, nonatomic) BOOL hasGeocodingParameters;
@property(readonly, nonatomic) BOOL hasSearchParameters;
- (void)dealloc;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 maxResults:(unsigned int)arg3;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4;
- (id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 maxResults:(unsigned int)arg4 traits:(id)arg5;
- (id)initWithCoordinateHint:(CDStruct_c3b9c2ee)arg1 addressHint:(id)arg2 placeNameHint:(id)arg3 traits:(id)arg4;
- (id)initWithCanonicalLocationSearchQueryString:(id)arg1;
- (id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2;
- (id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned int)arg2 traits:(id)arg3;
- (id)initWithReverseGeocodeCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)initWithMUIDs:(id)arg1;

@end

