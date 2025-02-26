/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalRemoteCalendarSource.h>

@class CALAddress, NSManagedObjectID, NSString;

@interface CalExchangeCalendarSource : CalRemoteCalendarSource
{
    NSString *_host;
    NSManagedObjectID *_sessionID;
    CALAddress *_meForSource;
    BOOL _isDelegate;
    BOOL _isEditable;
}

@property(retain) NSManagedObjectID *sessionID; // @synthesize sessionID=_sessionID;
@property(retain) CALAddress *meForSource; // @synthesize meForSource=_meForSource;
@property BOOL isDelegate; // @synthesize isDelegate=_isDelegate;
@property(retain) NSString *host; // @synthesize host=_host;
- (BOOL)isSourceInSameAccount:(id)arg1;
- (BOOL)calendarUserAddressIsEquivalentToURL:(id)arg1;
- (BOOL)hasCapability:(int)arg1;
- (id)initWithKey:(id)arg1;
- (void)dealloc;
- (id)freeBusyCache;
- (BOOL)isExchange;

@end

