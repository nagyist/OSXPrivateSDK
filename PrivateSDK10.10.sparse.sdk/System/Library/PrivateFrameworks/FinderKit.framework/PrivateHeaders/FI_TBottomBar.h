/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class FI_TBottomBarController, NSColor;

// Not exported
@interface FI_TBottomBar : NSView
{
    FI_TBottomBarController *_controller;
    struct TNSRef<NSColor *> _backgroundColor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSColor *backgroundColor; // @dynamic backgroundColor;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeKeyView;
- (void)_windowChangedKeyState;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)awakeFromNib;

@end

