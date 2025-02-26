/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ProKit/NSProButtonCell.h>

@interface NSProVerticalZoomButtonCell : NSProButtonCell
{
    struct CGRect mZoomImageRect;
    int mZoomLevel;
    void *_proReserved4;
    void *_proReserved5;
    void *_proReserved6;
}

- (long long)_zoomLevelAtMousePoint:(struct CGPoint)arg1;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (BOOL)isValidControlSize:(unsigned long long)arg1;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (void)_commonInit;
- (void)setZoomLevel:(int)arg1;
- (int)zoomLevel;

@end

