/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface CNVCardSelectorMap : NSObject
{
    NSMutableArray *_strings;
    NSMutableArray *_selectors;
}

- (SEL)selectorForString:(id)arg1;
- (void)setSelector:(SEL)arg1 forString:(id)arg2;
- (void)dealloc;
- (id)init;

@end

