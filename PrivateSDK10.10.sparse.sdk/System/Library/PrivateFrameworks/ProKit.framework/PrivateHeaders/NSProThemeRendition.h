/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface NSProThemeRendition : NSObject
{
    struct _renditionkeytoken stackKey[14];
    struct _renditionkeytoken *key;
    long long type;
    unsigned int subtype;
    unsigned int scale;
    unsigned long long width;
    unsigned long long height;
    struct {
        unsigned int isHeaderFlaggedFPO:1;
        unsigned int isExcludedFromContrastFilter:1;
        unsigned int reserved:30;
    } renditionFlags;
    long long artworkStatus;
    long long colorSpaceID;
    NSString *name;
    void *srcData;
    long long validLookGradation;
}

+ (id)displayNameForRenditionType:(long long)arg1;
+ (id)filteredPSIDataFromBasePSIData:(id)arg1;
- (unsigned int)gradientStyle;
- (id)gradient;
- (double)gradientDrawingAngle;
- (long long)themeScaleFactor;
- (BOOL)isScaled;
- (BOOL)isTiled;
- (id)sliceInformation;
- (id)metrics;
- (id)patternForSliceIndex:(long long)arg1;
- (id)maskForSliceIndex:(long long)arg1;
- (id)imageForSliceIndex:(long long)arg1;
- (BOOL)isValidForLookGradation:(long long)arg1;
- (long long)colorSpaceID;
- (long long)artworkStatus;
- (BOOL)isHeaderFlaggedFPO;
- (id)name;
- (long long)type;
- (const struct _renditionkeytoken *)key;
- (void)finalize;
- (void)dealloc;
- (id)_initWithPSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (id)initWithPSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (id)initWithPSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;
- (id)_initWithPSIHeader:(const struct _psiheader *)arg1;
- (void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1;

@end

