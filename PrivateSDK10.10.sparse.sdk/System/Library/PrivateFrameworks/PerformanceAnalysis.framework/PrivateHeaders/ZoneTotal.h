/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PerformanceAnalysis/MallocDataCategorySummary.h>

@class NSMutableDictionary;

@interface ZoneTotal : MallocDataCategorySummary
{
    NSMutableDictionary *allocationTotals;
}

@property(retain) NSMutableDictionary *allocationTotals; // @synthesize allocationTotals;
- (BOOL)printData:(id)arg1;
- (void)addAllocation:(id)arg1;
- (void)dealloc;
- (id)initWithAllocation:(id)arg1;

@end

