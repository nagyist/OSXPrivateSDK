/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindow.h"

@class NSTextField;

@interface SOCompletionWindow : NSWindow
{
    NSTextField *_axParent;
}

+ (id)cornerMaskImage;
@property __weak NSTextField *axParent; // @synthesize axParent=_axParent;
- (void).cxx_destruct;
- (id)_cornerMask;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (BOOL)acceptsMouseMovedEvents;
- (BOOL)acceptsFirstResponder;
- (BOOL)wantsScrollWheelEvent:(id)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;

@end

