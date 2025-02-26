/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSOrderedSet, NSString, TDPNGAsset;

@interface TDSimpleArtworkRenditionSpec : TDRenditionSpec
{
    struct CGRect _alignmentRect;
    BOOL _allowsMultiPassEncoding;
}

+ (void)initialize;
@property(nonatomic) BOOL allowsMultiPassEncoding; // @synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (CDStruct_1ba92a5e)_edgeMetricsForAlignmentRect:(struct CGRect)arg1 originalRenditionSize:(CDStruct_1ef3fb1f)arg2 newRenditionSize:(CDStruct_1ef3fb1f)arg3;
- (id)_sliceRectanglesForRenditionSize:(CDStruct_1ef3fb1f)arg1;
- (id)_slicesToUseForCSI;
- (void)_logExtra:(id)arg1;
- (void)_logWarning:(id)arg1;
- (void)_logError:(id)arg1;
- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (void)awakeFromFetch;
@property(nonatomic) struct CGRect alignmentRect; // @dynamic alignmentRect;
@property(nonatomic) struct CGRect primitiveAlignmentRect;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSString *alignmentRectString; // @dynamic alignmentRectString;
@property(retain, nonatomic) TDPNGAsset *asset; // @dynamic asset;
@property(retain, nonatomic) NSOrderedSet *slices; // @dynamic slices;

@end

