/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

// Not exported
@interface OCXSStream : NSObject
{
    NSMutableArray *mLevelStack;
}

- (BOOL)hasLevels;
- (BOOL)popLevel;
- (void)pushLevel:(int)arg1 name:(const char *)arg2;
- (int)currentContextChildDepth;
- (int)currentContextDepth;
- (void)dealloc;
- (id)init;

@end

