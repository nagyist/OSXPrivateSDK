/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface FI_TKeyValueObserverBridge : NSObject
{
    struct TKeyValueObserver _observer;
    function_f9feaa7d _functor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithArrayOfObjsToObserve:(id)arg1 indexesOfObjectsToObserve:(id)arg2 keyPathToObserve:(const struct TString *)arg3 options:(unsigned long long)arg4 functor:(const function_f9feaa7d *)arg5;
- (id)initWithObjToObserve:(id)arg1 keyPathToObserve:(const struct TString *)arg2 options:(unsigned long long)arg3 functor:(const function_f9feaa7d *)arg4;

@end

