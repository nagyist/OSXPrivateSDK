/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AnnotationKit/AKFormFeature.h>

@class AKFormFeatureLine, NSArray;

@interface AKFormFeatureSegmented : AKFormFeature
{
    AKFormFeatureLine *_baseline;
    NSArray *_characterSegmentRects;
    struct CGRect _enclosingRegionRect;
}

+ (id)segments:(id)arg1 withEnclosingRect:(struct CGRect)arg2 baseline:(id)arg3 onPage:(id)arg4;
@property(retain, nonatomic) NSArray *characterSegmentRects; // @synthesize characterSegmentRects=_characterSegmentRects;
@property(nonatomic) struct CGRect enclosingRegionRect; // @synthesize enclosingRegionRect=_enclosingRegionRect;
@property(retain, nonatomic) AKFormFeatureLine *baseline; // @synthesize baseline=_baseline;
- (void).cxx_destruct;
- (id)initWithCharacterSegments:(id)arg1 enclosingRect:(struct CGRect)arg2 baseline:(id)arg3 onPage:(id)arg4;

@end

