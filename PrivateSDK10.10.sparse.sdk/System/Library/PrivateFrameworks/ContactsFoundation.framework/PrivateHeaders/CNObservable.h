/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <ContactsFoundation/CNObservable-Protocol.h>

@class NSString;

@interface CNObservable : NSObject <CNObservable>
{
}

+ (id)concatenate:(id)arg1;
+ (id)observableWithBlock:(id)arg1;
+ (id)observableWithResult:(id)arg1;
+ (id)observableOnNotificationCenter:(id)arg1 withName:(id)arg2 object:(id)arg3;
+ (id)observableOnDefaultNotificationCenterWithName:(id)arg1 object:(id)arg2;
+ (id)observableForKeyPath:(id)arg1 ofObject:(id)arg2 withOptions:(unsigned long long)arg3;
- (id)subscribe:(id)arg1;
- (id)onEmpty:(id)arg1;
- (id)map:(id)arg1;
- (id)filter:(id)arg1;
- (id)allObjects:(id *)arg1;
- (id)observeOn:(id)arg1;
- (id)subscribeOn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

