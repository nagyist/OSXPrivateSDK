/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface CalPublisherManager : NSObject
{
    NSMutableDictionary *_publishers;
    double _autoPublishDelay;
    int _autoPublishStatus;
    BOOL _isAutoPublishEnabled;
    NSObject<OS_dispatch_queue> *_publish_queue;
}

+ (id)defaultManager;
- (void)scheduleAutoPublish;
- (void)removePublisherForKey:(id)arg1;
- (void)setPublisher:(id)arg1 forKey:(id)arg2;
- (id)publisherForKey:(id)arg1;
- (void)removeAllPublishers;
- (void)finalize;
- (void)dealloc;
- (BOOL)autoPublishEnabled;
- (void)setAutoPublishEnabled:(BOOL)arg1;
- (id)init;
- (void)publishNeeded:(id)arg1;
- (void)doAutoPublish;
- (void)cancelAutoPublish;

@end

