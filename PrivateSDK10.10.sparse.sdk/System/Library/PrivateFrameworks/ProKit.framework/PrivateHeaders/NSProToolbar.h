/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSToolbar.h"

@interface NSProToolbar : NSToolbar
{
    struct {
        unsigned int alwaysDrawsBackground:1;
        unsigned int reserved:31;
    } _ptFlags;
    void *_proReserved2;
    void *_proReserved3;
}

+ (id)_newStandardItemWithItemIdentifier:(id)arg1;
+ (Class)_proToolbarItemClass;
+ (BOOL)_isItemLayoutDebugEnabled;
- (BOOL)_drawsBackground;
- (void)_setAlwaysDrawsBackground:(BOOL)arg1;
- (void)setShowsBaselineSeparator:(BOOL)arg1;
- (void)setCustomizationSheetWidth:(long long)arg1;
- (id)labelFont;
- (BOOL)_isInClassicLargeWindow;
- (id)_windowForMetricsCongruency;
- (id)_newItemFromItemIdentifier:(id)arg1 propertyListRepresentation:(id)arg2 requireImmediateLoad:(BOOL)arg3 willBeInsertedIntoToolbar:(BOOL)arg4;
- (void)_setPreviousSizeAndDisplayMode;
- (void)_setNextSizeAndDisplayMode;
- (unsigned long long)sizeMode;
- (id)_backgroundColor;
- (void)_setToolbarView:(id)arg1;
- (void)resetItemImages:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

