/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSFont.h"

@interface NSProFont : NSFont
{
    struct {
        unsigned int fontAppearance:4;
        unsigned int reserved:28;
    } _pfFlags;
    void *_proReserved2;
}

+ (id)adjustedFontNameForFontName:(id)arg1;
+ (void)usingSmoothingStyleForThemeVariant:(long long)arg1 context:(id)arg2 body:(id)arg3;
+ (BOOL)wantsMinimumSmoothingForThemeVariant:(long long)arg1;
+ (void)setShouldSmoothMedium:(BOOL)arg1;
+ (id)toolTipsFontOfSize:(double)arg1 withAppearance:(long long)arg2;
+ (id)toolTipsFontOfSize:(double)arg1;
+ (id)fontWithFontName:(id)arg1 pointSize:(double)arg2 fontAppearance:(long long)arg3;
+ (id)fontWithName:(id)arg1 size:(double)arg2;
+ (id)textFontWithAppearance:(long long)arg1;
+ (id)listFontWithAppearance:(long long)arg1;
+ (id)listFont;
+ (id)labelFontOfSize:(double)arg1 withAppearance:(long long)arg2;
+ (id)labelFontOfSize:(double)arg1;
+ (id)labelFontWithAppearance:(long long)arg1;
+ (id)labelFont;
+ (id)boldSystemFontOfSize:(double)arg1 withAppearance:(long long)arg2;
+ (id)boldSystemFontOfSize:(double)arg1;
+ (id)systemFontOfSize:(double)arg1 style:(id)arg2 withAppearance:(long long)arg3;
+ (id)systemFontOfSize:(double)arg1 style:(id)arg2;
+ (id)lightSystemFontOfSize:(double)arg1 withAppearance:(long long)arg2;
+ (id)lightSystemFontOfSize:(double)arg1;
+ (id)italicSystemFontOfSize:(double)arg1 withAppearance:(long long)arg2;
+ (id)italicSystemFontOfSize:(double)arg1;
+ (id)mediumSystemFontOfSize:(double)arg1 withAppearance:(long long)arg2;
+ (id)mediumSystemFontOfSize:(double)arg1;
+ (id)systemFontOfSize:(double)arg1 withAppearance:(long long)arg2;
+ (id)systemFontOfSize:(double)arg1;
+ (id)boldSystemFontWithControlSize:(unsigned long long)arg1 withAppearance:(long long)arg2;
+ (id)boldSystemFontWithControlSize:(unsigned long long)arg1;
+ (id)systemFontWithControlSize:(unsigned long long)arg1 withAppearance:(long long)arg2;
+ (id)systemFontWithControlSize:(unsigned long long)arg1;
+ (id)_proSystemFontWithFontName:(id)arg1 pointSize:(double)arg2;
+ (id)_proSystemFontWithFontName:(id)arg1 pointSize:(double)arg2 fontAppearance:(long long)arg3 useSystemHelveticaAdjustments:(BOOL)arg4;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)proSystemControlFont;
+ (id)proLargeSystemControlFont;
+ (id)textFont;
+ (double)labelFontSize;
+ (double)systemFontSizeForControlSize:(unsigned long long)arg1;
+ (unsigned int)_proCustomFontSmoothing;
+ (void)_setProCustomFontSmoothing:(unsigned int)arg1;
+ (void)_clearProSystemFontCache;
+ (long long)_invertedFontAppearance;
+ (long long)_defaultFontAppearance;
+ (void)lookDidChangeNotification:(id)arg1;
+ (void)installProMethodSwizzles;
+ (void)registerProUIFont;
+ (void)initialize;
+ (id)segmentedScrubberObliqueFontForControlSize:(unsigned long long)arg1;
- (id)baseFontForSingleLineModeCell:(id)arg1;
- (void)setInContext:(id)arg1;
- (unsigned int)smoothingStyleIsUsed:(char *)arg1;
- (unsigned int)_smoothingStyleIsUsed:(char *)arg1;
- (double)_ascenderDeltaForBehavior:(long long)arg1;
- (id)screenFontWithRenderingMode:(unsigned long long)arg1;
- (id)description;
- (id)_appearanceDescription;
- (long long)fontAppearance;

@end

