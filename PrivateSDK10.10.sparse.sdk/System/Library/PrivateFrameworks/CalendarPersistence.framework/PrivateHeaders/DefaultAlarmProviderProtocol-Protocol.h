/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class CalManagedDefaultAlarmSet;

@protocol DefaultAlarmProviderProtocol <NSObject>
@property(readonly, retain) CalManagedDefaultAlarmSet *localDefaultAlarmSet;
@property(readonly, retain) CalManagedDefaultAlarmSet *defaultAlarmSet;
@property BOOL shareDefaultAlarmSettings;
@end

