/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CALOccurrence.h>

@class CALDate, CALDuration;

@interface CALBusyTimeOccurrence : CALOccurrence
{
    CALDate *_cachedEndDate;
    CALDuration *_cachedDuration;
    int _type;
}

- (id)occurrenceID;
- (id)endDate;
- (int)type;
- (id)duration;
- (void)dealloc;
- (id)initWithEntity:(id)arg1 withFreeBusyTime:(id)arg2;

@end

