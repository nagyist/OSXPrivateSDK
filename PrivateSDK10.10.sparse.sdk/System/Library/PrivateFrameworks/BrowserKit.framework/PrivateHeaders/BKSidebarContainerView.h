/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

// Not exported
@interface BKSidebarContainerView : NSView
{
    struct CGSize _optimalContentSize;
    BOOL _tiling;
    BOOL _usesInsetColors;
    BOOL _tuckFirstLine;
}

@property BOOL usesInsetColors; // @synthesize usesInsetColors=_usesInsetColors;
@property BOOL tuckFirstLine; // @synthesize tuckFirstLine=_tuckFirstLine;
@property(readonly) struct CGSize optimalContentSize; // @synthesize optimalContentSize=_optimalContentSize;
- (BOOL)_scrollRectToVisible:(const struct CGRect *)arg1 fromView:(id)arg2;
- (void)viewWillStartLiveResize;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (void)drawRect:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)tile;
- (void)_sizeToFit;
- (void)_drawBackground:(struct CGRect)arg1;
- (id)_enclosingScrollView;
- (void)_windowChangedKeyState;

@end

