/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalExchangePersistentOperation.h>

@interface CalExchangeAbstractWriteCalendarItemOperation : CalExchangePersistentOperation
{
}

- (void)updateRecurrenceForCalendarItem:(id)arg1 withEvent:(id)arg2;
- (int)_EWSDayFromCalDay:(unsigned long long)arg1;
- (void)removeUninvitedAttendeesForEvent:(id)arg1;
- (void)updateResourcesForCalendarItem:(id)arg1 withEvent:(id)arg2;
- (void)updateRequiredAttendeesForCalendarItem:(id)arg1 withEvent:(id)arg2;
- (void)updateOptionalAttendeesForCalendarItem:(id)arg1 withEvent:(id)arg2;

@end

