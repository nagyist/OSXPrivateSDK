/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSImage.h"

@class NSColor;

// Not exported
@interface SGTLabelSwatchColorImage : NSImage
{
    NSColor *color;
}

- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 respectFlipped:(BOOL)arg5 hints:(id)arg6;
- (struct CGSize)size;
- (void)dealloc;
- (id)initWithColor:(id)arg1;

@end

