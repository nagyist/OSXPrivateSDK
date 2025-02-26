/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import <ProKit/ProThemeImageSource-Protocol.h>

@interface NSProThemeFacet : NSObject <ProThemeImageSource, NSCopying, NSCoding>
{
    struct _renditionkeytoken *_renditionKeyList;
    unsigned long long _themeIndex;
    long long _validThemeLookIndex;
    long long _renditionType;
    struct CGSize _thumbnailSize;
    struct CGPoint _hotSpot;
    struct {
        unsigned int hasCheckedButtonGlyph:1;
        unsigned int isButtonGlyph:1;
        unsigned int reserved:14;
    } _fFlags;
    void *reserved1;
    void *reserved2;
    void *reserved3;
}

+ (id)cursorFacetWithName:(id)arg1 fromTheme:(unsigned long long)arg2;
+ (id)_facetWithKeyList:(const struct _renditionkeytoken *)arg1 andRenditionKeyClass:(Class)arg2 orRenditionKey:(id)arg3 fromTheme:(unsigned long long)arg4;
+ (id)facetWithRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;
+ (id)facetWithElement:(long long)arg1 part:(long long)arg2 dimension1:(long long)arg3 dimension2:(long long)arg4 fromTheme:(unsigned long long)arg5;
+ (id)facetWithElement:(long long)arg1 part:(long long)arg2 fromTheme:(unsigned long long)arg3;
+ (unsigned long long)themeForBundleIdentifier:(id)arg1;
+ (void)initialize;
+ (void)loadCarFile:(id)arg1;
+ (BOOL)themeRefExistsForIdentifier:(id)arg1 themeRef:(unsigned long long *)arg2;
+ (id)_themeStoreForThemeIndex:(unsigned long long)arg1;
+ (void)_invalidateArtworkCaches;
+ (id)_themeRefsByBundleID;
- (id)maskWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;
- (id)highlightWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;
- (id)imageWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;
- (void)drawPatternFromSlice:(long long)arg1 inFrame:(struct CGRect)arg2 alpha:(double)arg3 owner:(id)arg4 userInfo:(id)arg5;
- (id)imageForSlice:(long long)arg1 withKeyAdjustment:(id)arg2;
- (id)patternForSlice:(long long)arg1 withKeyAdjustment:(id)arg2;
- (id)maskForSlice:(long long)arg1 withKeyAdjustment:(id)arg2;
- (id)description;
- (long long)_sliceIndexForSlice:(long long)arg1 ofRendition:(id)arg2;
- (void)_applyFixedAttributesToKey:(id)arg1;
- (struct CGSize)topLeftCapSize;
- (struct CGSize)thumbnailSize;
- (id)thumbnail;
- (id)displayName;
- (long long)renditionType;
- (id)renditionKey;
- (unsigned long long)themeIndex;
- (void)_setThemeIndex:(unsigned long long)arg1;
- (id)gradientWithKeyAdjustment:(id)arg1 angle:(double *)arg2 style:(unsigned long long *)arg3;
- (struct CGSize)imageSizeForVariant:(long long)arg1;
- (id)imageWithKeyAdjustment:(id)arg1;
- (BOOL)useHighlightForState:(long long)arg1 value:(long long)arg2 variant:(long long)arg3 size:(unsigned long long)arg4;
- (BOOL)useDisabledForState:(long long)arg1 value:(long long)arg2 variant:(long long)arg3 size:(unsigned long long)arg4;
- (BOOL)isOpaqueForState:(long long)arg1 value:(long long)arg2 variant:(long long)arg3 size:(unsigned long long)arg4;
- (BOOL)isBorderedForState:(long long)arg1 value:(long long)arg2 variant:(long long)arg3 size:(unsigned long long)arg4;
- (BOOL)useHighlightForState:(long long)arg1 value:(long long)arg2 variant:(long long)arg3;
- (BOOL)useDisabledForState:(long long)arg1 value:(long long)arg2 variant:(long long)arg3;
- (BOOL)isOpaqueForState:(long long)arg1 value:(long long)arg2 variant:(long long)arg3;
- (BOOL)isBorderedForState:(long long)arg1 value:(long long)arg2 variant:(long long)arg3;
- (id)imageForState:(long long)arg1 value:(long long)arg2 variant:(long long)arg3 size:(unsigned long long)arg4;
- (id)imageForState:(long long)arg1 value:(long long)arg2 variant:(long long)arg3;
- (BOOL)isValidButtonImageSource;
- (BOOL)isValidButtonImageSourceForSize:(unsigned long long)arg1;
- (BOOL)isValidButtonImageSourceForVariant:(long long)arg1 size:(unsigned long long)arg2;
- (BOOL)hasValueSlices;
- (struct CGSize)imageSize;
- (BOOL)useHighlightEffectForState:(long long)arg1;
- (BOOL)useDisabledEffectForState:(long long)arg1;
- (BOOL)isOpaqueForState:(long long)arg1;
- (BOOL)isBorderedForState:(long long)arg1;
- (id)imageForState:(long long)arg1 withValue:(long long)arg2;
- (id)imageForState:(long long)arg1;
- (id)renditionSliceInformationForRect:(struct CGRect)arg1 keyAdjustment:(id)arg2;
- (id)renditionMetricsWithKeyAdjustment:(id)arg1;
- (void)_drawSlice:(long long)arg1 inFrame:(struct CGRect)arg2 withKeyAdjustment:(id)arg3;
- (void)_drawSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 alpha:(double)arg3 operation:(unsigned long long)arg4 isFocused:(BOOL)arg5 isFlipped:(BOOL)arg6;
- (void)_drawAsMaskSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 alpha:(double)arg3 operation:(unsigned long long)arg4 isFocused:(BOOL)arg5;
- (void)_drawMaskFromSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 alpha:(double)arg3 operation:(unsigned long long)arg4 isFocused:(BOOL)arg5;
- (void)_drawPatternForSpecificRenditionKey:(id)arg1 fromSlice:(long long)arg2 inFrame:(struct CGRect)arg3 alpha:(double)arg4 isFlipped:(BOOL)arg5;
- (void)drawPulseInFrame:(struct CGRect)arg1 pulseValue:(double)arg2 isFocused:(BOOL)arg3 keyAdjustment:(id)arg4;
- (void)drawPatternInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFlipped:(BOOL)arg3 keyAdjustment:(id)arg4;
- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(unsigned long long)arg3 isFocused:(BOOL)arg4 keyAdjustment:(id)arg5;
- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(BOOL)arg3 keyAdjustment:(id)arg4;
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(unsigned long long)arg3 keyAdjustment:(id)arg4;
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 keyAdjustment:(id)arg3;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(unsigned long long)arg3 isFocused:(BOOL)arg4 keyAdjustment:(id)arg5;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(BOOL)arg3 keyAdjustment:(id)arg4;
- (void)drawGradientInFrame:(struct CGRect)arg1 angle:(double)arg2 alpha:(double)arg3 operation:(unsigned long long)arg4 isFocused:(BOOL)arg5 keyAdjustment:(id)arg6;
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(unsigned long long)arg3 owner:(id)arg4 userInfo:(id)arg5;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(unsigned long long)arg3 owner:(id)arg4 userInfo:(id)arg5;
- (void)drawPulseInFrame:(struct CGRect)arg1 pulseValue:(double)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (void)drawPatternInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (BOOL)hitTestAtPoint:(struct CGPoint)arg1 inFrame:(struct CGRect)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (BOOL)_canGetRenditionForKey:(id)arg1 withDrawingLayer:(long long)arg2;
- (void)drawPatternInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3;
- (void)drawMaskInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3;
- (void)drawHighlightInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3;
- (void)drawInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(unsigned long long)arg3 isFocused:(BOOL)arg4;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(BOOL)arg3;
- (void)setControlSize:(long long)arg1;
- (long long)controlSize;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;
- (void)_initWithRenditionKey:(id)arg1;
- (id)_patternCacheKeyForSlice:(long long)arg1 renditionKey:(id)arg2;
- (id)_imageForRenditionFromKey:(id)arg1 withSize:(struct CGSize)arg2 isMask:(BOOL)arg3;
- (void)instantiateWithObjectInstantiator:(id)arg1;
- (BOOL)_isButtonGlyph;
- (void)_setIsButtonGlyph:(BOOL)arg1;
- (void)_setHasCheckedButtonGlyph:(BOOL)arg1;
- (struct CGSize)_thumbnailSizeForRendition:(id)arg1;
- (id)_rendition;
- (id)_renditionForSpecificKey:(id)arg1;
- (id)_approximateRenditionForRenditionKey:(id)arg1;
- (long long)_validThemeLookIndex;
- (void)_updateSpecificRenditionKey:(id)arg1 isFocused:(char *)arg2 owner:(id)arg3 userInfo:(id)arg4;
- (struct CGPoint)_hotSpot;
- (id)_themeStore;
- (id)_initWithSystemRenditionKeyList:(struct _renditionkeytoken *)arg1;

@end

