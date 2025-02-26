/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface ODICycle : NSObject
{
}

+ (BOOL)mapIdentifier:(id)arg1 state:(id)arg2;
+ (BOOL)map2NodeWithState:(id)arg1;
+ (BOOL)map1NodeWithState:(id)arg1;
+ (void)mapTransition:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;
+ (void)mapNode:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;
+ (struct CGRect)mapGSpaceWithState:(id)arg1;
+ (struct CGRect)nodeBoundsWithIndex:(unsigned int)arg1 state:(id)arg2;
+ (struct CGRect)boundingBoxWithIsTight:(BOOL)arg1 state:(id)arg2;
+ (struct CGSize)nodeSizeWithState:(id)arg1;
+ (unsigned long long)nodeCountWithState:(id)arg1;
+ (void)mapWithState:(id)arg1;

@end

