/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOPDRating, GEOPDUser, NSMutableArray, NSString;

@interface GEOPDReview : PBCodable <NSCopying>
{
    double _reviewTime;
    GEOPDRating *_rating;
    NSString *_reviewId;
    GEOPDUser *_reviewer;
    NSMutableArray *_snippets;
    struct {
        unsigned int reviewTime:1;
    } _has;
}

@property(retain, nonatomic) GEOPDRating *rating; // @synthesize rating=_rating;
@property(retain, nonatomic) NSString *reviewId; // @synthesize reviewId=_reviewId;
@property(retain, nonatomic) GEOPDUser *reviewer; // @synthesize reviewer=_reviewer;
@property(nonatomic) double reviewTime; // @synthesize reviewTime=_reviewTime;
@property(retain, nonatomic) NSMutableArray *snippets; // @synthesize snippets=_snippets;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasRating;
@property(readonly, nonatomic) BOOL hasReviewId;
@property(readonly, nonatomic) BOOL hasReviewer;
@property(nonatomic) BOOL hasReviewTime;
- (id)snippetAtIndex:(unsigned long long)arg1;
- (unsigned long long)snippetsCount;
- (void)addSnippet:(id)arg1;
- (void)clearSnippets;
- (void)dealloc;
- (id)bestLocalizedSnippet;

@end

