/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface CalAccumulatingQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_tags;
    NSMutableDictionary *_context;
    id _block;
    float _delay;
}

- (void).cxx_destruct;
- (void)updateTagsAndExecuteBlock:(id)arg1 withContext:(id)arg2;
- (void)updateTagsAndExecuteBlock:(id)arg1;
- (BOOL)_hasQueuedUpBlock;
- (id)initWithQueue:(id)arg1 andBlock:(id)arg2 delay:(void)arg3;
- (id)initWithQueue:(id)arg1 andBlock:(id)arg2;

@end

