/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindow.h"

@class NSImageView, NSTextField, NSView;

@interface GKNotificationBannerWindow : NSWindow
{
    NSTextField *label;
    NSImageView *iconView;
}

+ (id)notificationBannerWithTitle:(id)arg1 message:(id)arg2;
+ (id)semaphore;
+ (id)queue;
@property(retain) NSImageView *iconView; // @synthesize iconView;
- (void)showWithCompletionHandler:(id)arg1;
- (void)showForDuration:(double)arg1 withCompletionHandler:(id)arg2;
- (void)sendEvent:(id)arg1;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (void)awakeFromNib;
- (id)icon;
- (void)setIcon:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(retain) NSView *contentView; // @dynamic contentView;

@end

