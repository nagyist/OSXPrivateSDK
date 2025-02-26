/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray;

// Not exported
@interface OADColor : NSObject <NSCopying>
{
    NSMutableArray *mTransforms;
}

+ (id)tsuColorWithRgbColor:(id)arg1;
+ (id)tsuColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
+ (id)tsuColorWithColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (float)alphaWithColor:(id)arg1;
+ (id)rgbColorWithColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (id)mapAdjustedColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
+ (int)mapSchemeColorID:(int)arg1 colorMap:(id)arg2;
+ (id)basicMapOfColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)colorForStyleColor:(id)arg1;
- (void)addTransformOfType:(int)arg1 value:(float)arg2;
- (void)addTransformOfType:(int)arg1;
- (void)setTransforms:(id)arg1;
- (id)transforms;
- (void)dealloc;
- (void)addTransform:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

