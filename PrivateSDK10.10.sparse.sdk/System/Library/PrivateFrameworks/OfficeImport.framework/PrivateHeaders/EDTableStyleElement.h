/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "EDKeyedObject-Protocol.h"
#import "NSCopying-Protocol.h"

@class EDCollection, EDDifferentialStyle, NSString;

// Not exported
@interface EDTableStyleElement : NSObject <EDKeyedObject, NSCopying>
{
    EDCollection *mDifferentialStyles;
    int mType;
    unsigned int mBandSize;
    EDDifferentialStyle *mDifferentialStyle;
}

+ (id)tableStyleElementWithResources:(id)arg1;
- (void)setDifferentialStyleWithIndex:(unsigned long long)arg1;
- (void)setDifferentialStyle:(id)arg1;
- (id)differentialStyle;
- (void)setBandSize:(unsigned int)arg1;
- (unsigned int)bandSize;
- (void)setType:(int)arg1;
- (int)type;
- (long long)key;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithResources:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

