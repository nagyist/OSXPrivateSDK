/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSColor, _GKCustomDrawnSpeechBalloonBackgroundView;

@interface GKSpeechBalloonBackgroundView : NSView
{
    unsigned char _drawStyle;
    unsigned char _tipDirection;
    _GKCustomDrawnSpeechBalloonBackgroundView *_customDrawnView;
}

@property(retain, nonatomic) _GKCustomDrawnSpeechBalloonBackgroundView *customDrawnView; // @synthesize customDrawnView=_customDrawnView;
@property(nonatomic) unsigned char tipDirection; // @synthesize tipDirection=_tipDirection;
@property(nonatomic) unsigned char drawStyle; // @synthesize drawStyle=_drawStyle;
@property(retain, nonatomic) NSColor *balloonColor;
- (struct NSEdgeInsets)alignmentRectInsets;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

