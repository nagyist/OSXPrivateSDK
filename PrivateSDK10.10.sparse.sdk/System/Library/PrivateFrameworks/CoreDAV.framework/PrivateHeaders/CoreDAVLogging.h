/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CoreDAVLogging : NSObject
{
    struct __CFDictionary *_logDelegates;
    struct dispatch_queue_s *_delegateMuckingQueue;
}

+ (id)sharedLogging;
- (void)logDiagnosticForProvider:(id)arg1 withLevel:(long long)arg2 format:(id)arg3 args:(struct __va_list_tag [1])arg4;
- (id)delegatesToLogTransmittedDataForAccountInfoProvider:(id)arg1;
- (BOOL)_shouldOutputAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2;
- (BOOL)shouldLogAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2;
- (id)_delegatesToLogForProvider:(id)arg1;
- (void)removeLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;
- (void)addLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;
- (void)dealloc;
- (id)init;

@end

