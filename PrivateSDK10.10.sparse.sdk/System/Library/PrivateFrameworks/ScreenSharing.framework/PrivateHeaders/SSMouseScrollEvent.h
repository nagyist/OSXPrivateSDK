/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenSharing/SSMouseEvent.h>

@interface SSMouseScrollEvent : SSMouseEvent
{
    short mDeltaX;
    short mDeltaY;
    short mDeltaZ;
    int mFixedDeltaX;
    int mFixedDeltaY;
    int mFixedDeltaZ;
    int mPointDeltaX;
    int mPointDeltaY;
    int mPointDeltaZ;
    unsigned int mScrollPhase;
    unsigned int mMomentumPhase;
    int mScrollCount;
    unsigned int mFlags;
}

+ (id)mouseScrollEventWithCoordinates:(struct SSPoint)arg1 withDeltaX:(short)arg2 withDeltaY:(short)arg3 withDeltaZ:(short)arg4 withFixedDeltaX:(int)arg5 withFixedDeltaY:(int)arg6 withFixedDeltaZ:(int)arg7 withPointDeltaX:(int)arg8 withPointDeltaY:(int)arg9 withPointDeltaZ:(int)arg10 withScrollPhase:(unsigned int)arg11 withMomentumPhase:(unsigned int)arg12 withScrollCount:(int)arg13 withFlags:(unsigned int)arg14;
@property(readonly) int pointDeltaZ; // @synthesize pointDeltaZ=mPointDeltaZ;
@property(readonly) int pointDeltaY; // @synthesize pointDeltaY=mPointDeltaY;
@property(readonly) int pointDeltaX; // @synthesize pointDeltaX=mPointDeltaX;
@property(readonly) int fixedDeltaZ; // @synthesize fixedDeltaZ=mFixedDeltaZ;
@property(readonly) int fixedDeltaY; // @synthesize fixedDeltaY=mFixedDeltaY;
@property(readonly) int fixedDeltaX; // @synthesize fixedDeltaX=mFixedDeltaX;
@property(readonly) unsigned int flags; // @synthesize flags=mFlags;
@property(readonly) int scrollCount; // @synthesize scrollCount=mScrollCount;
@property(readonly) unsigned int momentumPhase; // @synthesize momentumPhase=mMomentumPhase;
@property(readonly) unsigned int scrollPhase; // @synthesize scrollPhase=mScrollPhase;
@property(readonly) short deltaZ; // @synthesize deltaZ=mDeltaZ;
@property(readonly) short deltaY; // @synthesize deltaY=mDeltaY;
@property(readonly) short deltaX; // @synthesize deltaX=mDeltaX;
- (id)initWithCoordinates:(struct SSPoint)arg1 withDeltaX:(short)arg2 withDeltaY:(short)arg3 withDeltaZ:(short)arg4 withFixedDeltaX:(int)arg5 withFixedDeltaY:(int)arg6 withFixedDeltaZ:(int)arg7 withPointDeltaX:(int)arg8 withPointDeltaY:(int)arg9 withPointDeltaZ:(int)arg10 withScrollPhase:(unsigned int)arg11 withMomentumPhase:(unsigned int)arg12 withScrollCount:(int)arg13 withFlags:(unsigned int)arg14;

@end

