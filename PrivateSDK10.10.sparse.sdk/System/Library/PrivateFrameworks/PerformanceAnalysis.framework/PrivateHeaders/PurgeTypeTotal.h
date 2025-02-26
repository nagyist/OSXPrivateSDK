/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PerformanceAnalysis/MallocDataCategorySummary.h>

@class NSMutableArray;

@interface PurgeTypeTotal : MallocDataCategorySummary
{
    int purgeClass;
    NSMutableArray *zones;
}

@property int purgeClass; // @synthesize purgeClass;
@property(retain) NSMutableArray *zones; // @synthesize zones;
- (void)dealloc;
- (id)initWithPurgeType:(int)arg1;
- (void)addAllocation:(id)arg1;
- (id)zoneTotalForZoneName:(id)arg1;
- (BOOL)printData:(id)arg1;
- (id)stringForType;

@end

