/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface IMPurgableObject : NSObject
{
    id _instanceObject;
    id _setupBlock;
    id _cleanupBlock;
    struct dispatch_queue_s *_queue;
}

- (void)_receivedMemoryWarning:(id)arg1;
- (id)instance;
- (void)_cleanupInstance;
- (void)_setupInstance;
- (void)dealloc;
- (id)initWithSetupBlock:(id)arg1 cleanupBlock:(void)arg2 queue:(id)arg3;

@end

