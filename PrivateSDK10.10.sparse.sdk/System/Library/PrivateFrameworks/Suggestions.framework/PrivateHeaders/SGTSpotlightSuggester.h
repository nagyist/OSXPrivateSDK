/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Suggestions/SGTSuggester.h>

@class NSArray, NSString, SGTSpotlightSuggesterReserved;

@interface SGTSpotlightSuggester : SGTSuggester
{
    SGTSpotlightSuggesterReserved *_reserved2;
}

+ (id)defaultSortingAttributeNames;
+ (id)suggesterForMails;
+ (id)suggesterForFiles;
- (void)setRunWarmingQuery:(BOOL)arg1;
- (void)scheduleWarmingQuery;
- (void)_reallyScheduleWarmingQuery;
- (void)_warmingQueryDidFinish:(id)arg1;
- (void)_launchWarmingQuery;
- (void)_discardWarmingQuery;
- (void)becomesIdle;
- (void)didFinishProcessingResultsForInput:(id)arg1;
- (id)filterSuggestions:(id)arg1 forInput:(id)arg2;
- (id)filterSuggestion:(id)arg1 fromItem:(id)arg2 forInput:(id)arg3;
- (id)additionalSuggestionsForInput:(id)arg1;
- (void)willStartProcessingResultsForInput:(id)arg1;
- (void)willStartSearchingSuggestionsForInput:(id)arg1;
@property(readonly) NSArray *attributeNames;
@property(copy) NSArray *sortingAttributeNames;
@property(copy) NSArray *additionalAttributeNames;
@property BOOL matchesSupportFiles;
@property BOOL matchesFinderFilesOnly;
@property(copy) NSArray *searchScope;
- (void)setInput:(id)arg1;
- (void)setImagesForTags:(id)arg1;
@property(copy) NSString *baseQuery;
- (void)_forceQueryResults:(struct __MDQuery *)arg1;
- (void)_queryDidFinish:(id)arg1;
- (id)_findBestDidYouMeanSuggestionFromSuggestions:(id)arg1 rawInput:(id)arg2;
- (void)_processQueryResults:(struct __MDQuery *)arg1 intermediateResults:(BOOL)arg2 suggestionsCount:(long long *)arg3;
- (void)_setCurrentQuery:(struct __MDQuery *)arg1;
- (void)_getCurrentQueryAttributeNames:(id *)arg1 inputString:(id *)arg2;
- (void)_performBlock:(id)arg1;
- (void)_performBlockOnMainThread:(id)arg1;
- (void)dealloc;
- (id)initWithAttributeNames:(id)arg1;

@end

