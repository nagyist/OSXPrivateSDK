/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

// Not exported
@interface WBSQuickWebsiteSearchController : NSObject
{
    NSObject<OS_dispatch_queue> *_quickWebsiteSearchProvidersBySourcePageURLStringAccessQueue;
    NSMutableDictionary *_quickWebsiteSearchProvidersByHost;
    NSMutableDictionary *_openSearchDescriptionsByDescriptionDocumentURLString;
    NSMutableDictionary *_hostSetsByOpenSearchDescriptionDocumentURLString;
    struct unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter>> _writer;
    BOOL _quickWebsiteSearchProvidersLoadedFromDisk;
}

+ (id)sharedController;
@property BOOL quickWebsiteSearchProvidersLoadedFromDisk; // @synthesize quickWebsiteSearchProvidersLoadedFromDisk=_quickWebsiteSearchProvidersLoadedFromDisk;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_resetCachedDataWithCompletionHandler:(id)arg1;
- (void)_didCollectOpenSearchDescription:(id)arg1;
- (id)_searchDescriptionsURL;
- (void)_didFinishLoadingFromDisk;
- (void)_loadFromDisk;
- (id)_dictionaryRepresentation;
- (void)_saveToDiskSoon;
- (void)_pruneUnusedQuickWebsiteSearchProviders;
- (BOOL)_shouldRemoveQuickWebsiteSearchProvider:(id)arg1;
- (void)_removeHost:(id)arg1 fromOpenSearchDescriptionWithDocumentURL:(id)arg2;
- (void)_addHost:(id)arg1 toOpenSearchDescriptionWithDocumentURL:(id)arg2;
- (BOOL)_quickWebsiteSearchProviderHasSearchURLTemplateStringOnAccessQueue:(id)arg1;
- (void)removeProviderWithHost:(id)arg1;
- (void)removeProvidersWithHosts:(id)arg1;
- (id)openSearchDescriptionForOpenSearchDescriptionURLString:(id)arg1;
- (id)providerForSourcePageURLString:(id)arg1;
- (void)setOpenSearchDescriptionURLString:(id)arg1 forSourcePageURLString:(id)arg2;
- (void)setSearchURLTemplateStringFromForm:(id)arg1 forSourcePageURLString:(id)arg2;
- (void)didPerformSearchWithProvider:(id)arg1;
- (id)providersMatchingQueryString:(id)arg1;
@property(readonly, nonatomic) NSArray *quickWebsiteSearchHosts;
- (void)_sendNotification:(id)arg1 forQuickWebsiteSearchProvider:(id)arg2;
- (void)removeProvidersAddedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (void)clear;
- (void)savePendingChangesBeforeTermination;
- (void)noteProvidersAreStale;
- (void)beginLoadingFromDiskIfNeeded;
- (id)init;

@end

