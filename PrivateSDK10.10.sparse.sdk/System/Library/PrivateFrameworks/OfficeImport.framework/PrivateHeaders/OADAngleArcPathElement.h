/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADPathElement.h>

// Not exported
@interface OADAngleArcPathElement : OADPathElement
{
    struct OADAdjustPoint mCenter;
    struct OADAdjustPoint mSemiaxes;
    struct OADAdjustCoord mStartAngle;
    struct OADAdjustCoord mAngleLength;
    BOOL mConnectedToPrevious;
}

- (id).cxx_construct;
- (BOOL)connectedToPrevious;
- (struct OADAdjustCoord)angleLength;
- (struct OADAdjustCoord)startAngle;
- (struct OADAdjustPoint)semiaxes;
- (struct OADAdjustPoint)center;
- (id)initWithCenter:(struct OADAdjustPoint)arg1 semiaxes:(struct OADAdjustPoint)arg2 startAngle:(struct OADAdjustCoord)arg3 angleLength:(struct OADAdjustCoord)arg4 connectedToPrevious:(BOOL)arg5;

@end

