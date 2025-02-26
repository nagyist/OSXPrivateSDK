/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CALDate.h>

@interface CALFloatingDateTime : CALDate
{
}

+ (id)timeOnlyWithHour:(unsigned int)arg1 minute:(unsigned int)arg2 second:(unsigned int)arg3;
+ (id)dateWithYear:(int)arg1 month:(unsigned int)arg2 day:(unsigned int)arg3 hour:(unsigned int)arg4 minute:(unsigned int)arg5 second:(unsigned int)arg6;
+ (id)date;
- (id)NSCalendarDate;
- (id)NSDate;
- (id)NSDateWithGMT;
- (id)NSDateWithTimeZone:(id)arg1;
- (id)NSDateWithCalendar:(id)arg1;
- (id)description;
- (double)timeIntervalSinceNow;
- (BOOL)isEqualAsDateOnly:(id)arg1;
- (void)setYear:(int)arg1 month:(unsigned int)arg2 day:(unsigned int)arg3 hour:(unsigned int)arg4 minute:(unsigned int)arg5 second:(unsigned int)arg6;
- (void)setYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7;
- (void)takeValueFrom:(id)arg1;
- (void)addYears:(long long)arg1 months:(long long)arg2 days:(long long)arg3 hours:(long long)arg4 minutes:(long long)arg5 seconds:(long long)arg6;
- (void)addSecondsInGMT:(long long)arg1;
- (void)roundToDay;
- (void)setTimeZone:(id)arg1 keepingLocalDate:(BOOL)arg2;
- (void)setTimeZone:(id)arg1;
- (void)years:(long long *)arg1 months:(long long *)arg2 days:(long long *)arg3 hours:(long long *)arg4 minutes:(long long *)arg5 seconds:(long long *)arg6 sinceDate:(id)arg7;
- (BOOL)meetComparisonCondition:(unsigned char)arg1 withDate:(id)arg2;
- (long long)compare:(id)arg1;
- (void)fillComparisonCDate:(struct _CALCDate *)arg1 forDate:(id)arg2;
- (long long)offsetFromGMTForTimeZone:(id)arg1;
- (long long)offsetFromGMT;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 calendarFormat:(id)arg2;
- (id)initWithYear:(int)arg1 month:(unsigned int)arg2 day:(unsigned int)arg3 hour:(unsigned int)arg4 minute:(unsigned int)arg5 second:(unsigned int)arg6;
- (id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
- (id)representationID;

@end

