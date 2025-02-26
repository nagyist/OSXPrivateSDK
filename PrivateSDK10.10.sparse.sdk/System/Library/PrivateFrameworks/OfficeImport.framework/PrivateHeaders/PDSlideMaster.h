/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/PDSlideBase.h>

@class NSMutableArray, OADColorMap, OADTextListStyle, OADTheme;

// Not exported
@interface PDSlideMaster : PDSlideBase
{
    NSMutableArray *mSlideLayouts;
    OADTheme *mTheme;
    OADColorMap *mColorMap;
    OADTextListStyle *mTitleTextStyle;
    OADTextListStyle *mBodyTextStyle;
    OADTextListStyle *mOtherTextStyle;
    BOOL mHeaderPlaceholderIsVisible;
    BOOL mFooterPlaceholderIsVisible;
    BOOL mSlideNumberPlaceholderIsVisible;
    BOOL mDateTimePlaceholderIsVisible;
}

@property(nonatomic) BOOL dateTimePlaceholderIsVisible; // @synthesize dateTimePlaceholderIsVisible=mDateTimePlaceholderIsVisible;
@property(nonatomic) BOOL slideNumberPlaceholderIsVisible; // @synthesize slideNumberPlaceholderIsVisible=mSlideNumberPlaceholderIsVisible;
@property(nonatomic) BOOL footerPlaceholderIsVisible; // @synthesize footerPlaceholderIsVisible=mFooterPlaceholderIsVisible;
@property(nonatomic) BOOL headerPlaceholderIsVisible; // @synthesize headerPlaceholderIsVisible=mHeaderPlaceholderIsVisible;
@property(retain, nonatomic) NSMutableArray *slideLayouts; // @synthesize slideLayouts=mSlideLayouts;
- (BOOL)hasMappableSlideNumberShape;
- (id)drawingTheme;
- (void)doneWithContent;
- (id)parentSlideBase;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForTables;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (void)setOtherTextStyle:(id)arg1;
- (id)otherTextStyle;
- (void)setBodyTextStyle:(id)arg1;
- (id)bodyTextStyle;
- (void)setTitleTextStyle:(id)arg1;
- (id)titleTextStyle;
- (id)defaultTheme;
- (id)slideLayoutOfType:(int)arg1;
- (id)addSlideLayout;
- (void)addSlideLayout:(id)arg1;
- (id)slideLayoutAtIndex:(unsigned long long)arg1;
- (unsigned long long)slideLayoutCount;
- (id)styleMatrix;
- (id)colorMap;
- (id)fontScheme;
- (id)colorScheme;
- (void)setTheme:(id)arg1;
- (id)theme;
- (void)dealloc;
- (id)initWithDefaultsAndTheme:(id)arg1;
- (id)init;

@end

