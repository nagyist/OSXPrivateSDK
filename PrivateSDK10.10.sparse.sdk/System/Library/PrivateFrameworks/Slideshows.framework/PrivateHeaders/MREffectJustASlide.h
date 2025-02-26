/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MREffect.h>

@class MRCroppingSprite;

@interface MREffectJustASlide : MREffect
{
    MRCroppingSprite *mSprite;
    BOOL mForceIsOpaque;
    double _panX;
    double _panY;
    double _scale;
    double _rotation;
    struct CGPoint _startSlideCenter;
    double _startSlideScale;
    double _startSlideRotation;
    double _x0;
    double _y0;
    BOOL _pzrWasUpdated;
    BOOL _pzrDoRotation;
    BOOL _isInitialized;
    BOOL _isInZoomMode;
    BOOL _isFocuser;
}

@property(nonatomic) BOOL isFocuser; // @synthesize isFocuser=_isFocuser;
- (void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2;
- (BOOL)getVerticesCoordinates:(struct CGPoint (*)[4])arg1 withMatrix:(float [16])arg2 forElement:(id)arg3;
- (id)elementHitAtPoint:(struct CGPoint)arg1 withInverseMatrix:(float [16])arg2 localPoint:(struct CGPoint *)arg3;
- (id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isAlphaFriendly;
- (BOOL)isOpaque;
- (BOOL)isNative3D;
- (void)_cleanup;
- (id)init;
- (BOOL)canMoveInDirection:(unsigned char)arg1 withPZR:(id)arg2;
- (void)resetPZR;
- (double)pzrCancel:(id)arg1;
- (double)pzrEnd:(id)arg1;
- (double)pzrUpdate:(id)arg1;
- (double)pzrStart:(id)arg1;

@end

