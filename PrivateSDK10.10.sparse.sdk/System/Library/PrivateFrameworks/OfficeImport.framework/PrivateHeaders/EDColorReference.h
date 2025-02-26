/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class EDResources;

// Not exported
@interface EDColorReference : NSObject <NSCopying>
{
    EDResources *mResources;
    int mSystemColorID;
    unsigned long long mColorIndex;
    unsigned long long mThemeIndex;
    double mTint;
}

+ (id)colorReferenceWithColor:(id)arg1 resources:(id)arg2;
+ (id)colorReferenceWithResources:(id)arg1;
+ (id)colorReferenceWithThemeIndex:(unsigned long long)arg1 tint:(double)arg2 resources:(id)arg3;
+ (id)colorReferenceWithColorIndex:(unsigned long long)arg1 resources:(id)arg2;
+ (id)colorReferenceWithSystemColorID:(int)arg1 resources:(id)arg2;
- (_Bool)isValid;
- (id)color;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToColorReference:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColor:(id)arg1 resources:(id)arg2;
- (id)initWithResources:(id)arg1;
- (double)tint;
- (unsigned long long)themeIndex;
- (unsigned long long)colorIndex;
- (int)systemColorID;

@end

