/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSPanel.h"

@interface SHKShareWindow : NSPanel
{
    BOOL _isClosing;
}

@property BOOL isClosing; // @synthesize isClosing=_isClosing;
- (void)_close;
- (void)displayIfNeeded;
- (void)display;
- (BOOL)hidesOnDeactivate;
- (BOOL)isMovableByWindowBackground;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;

@end

