/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSTimer, SCRApplication, SCRCWeakReferenceContainer, SCRUIElement;

// Not exported
@interface SCRObserverGroup : NSObject
{
    BOOL _registered;
    BOOL _isValid;
    SCRCWeakReferenceContainer *_application;
    struct __CFDictionary *_observers;
    NSString *_name;
    SCRUIElement *_uiElement;
    unsigned long long _observerID;
    struct __AXObserver *_axObserver;
    int *_throttleTimeMSPtr;
    long long *_lastFireDate;
    NSTimer *_delayedFireTimer;
}

@property(retain, nonatomic) NSTimer *delayedFireTimer; // @synthesize delayedFireTimer=_delayedFireTimer;
@property(nonatomic) unsigned long long observerID; // @synthesize observerID=_observerID;
@property(nonatomic) struct __AXObserver *axObserver; // @synthesize axObserver=_axObserver;
@property(retain, nonatomic) SCRUIElement *uiElement; // @synthesize uiElement=_uiElement;
@property(nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)observerCount;
- (void)fireWithAXUIElement:(struct __AXUIElement *)arg1 userInfo:(id)arg2;
- (void)_fireWithAXUIElement:(struct __AXUIElement *)arg1 userInfo:(id)arg2;
- (void)_fireWithAXUIElement:(struct __AXUIElement *)arg1 userInfo:(id)arg2 allTargets:(id)arg3;
- (BOOL)removeObserverWithTarget:(id)arg1;
- (BOOL)addObserver:(id)arg1 selector:(SEL)arg2 name:(struct __CFString *)arg3 uiElement:(id)arg4 cancelMask:(unsigned int)arg5;
- (struct __CFDictionary *)_observers;
- (void)setThrottleTimeMS:(int)arg1;
- (int)throttleTimeMS;
- (double)lastFireDate;
- (void)setLastFireDate:(double)arg1;
- (void)unRegisterObserver;
- (BOOL)registerObserver;
- (void)releaseAllTargets;
- (void)retainAllTargets;
- (id)_copyAllTargets;
- (id)copyForFiring;
@property(readonly, nonatomic) SCRApplication *application; // @dynamic application;
- (void)setApplication:(id)arg1;
- (BOOL)isObserving:(struct __CFString *)arg1 forElement:(id)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1 uiElement:(id)arg2 application:(id)arg3;

@end

