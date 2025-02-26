/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSConditionLock, NSMutableArray, NSMutableDictionary, NSString, NSTimer;

// Not exported
@interface HistoryTextCache : NSObject
{
    NSConditionLock *_flushCountConditionLock;
    NSConditionLock *_cachingThreadConditionLock;
    NSConditionLock *_pdfExtractThreadConditionLock;
    struct __SKIndex *_searchIndexRef;
    NSString *_searchIndexFilePath;
    BOOL _needsCompaction;
    BOOL _shouldRemoveAllCachedPageText;
    NSMutableDictionary *_pageTextToCache;
    NSTimer *_flushTimer;
    BOOL _pendingFlushIncludesRemovals;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
    NSMutableArray *_pdfsToExtract;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)URLStringMatchesFromCachedPageTextForString:(id)arg1;
- (void)_removeAllCachedPageText;
- (void)removeAllCachedPageText;
- (void)removeCachedPageTextForHistoryItems:(id)arg1;
- (void)removeCachedPageTextForURLString:(id)arg1;
- (void)savePendingChangesSynchronously;
- (void)dealloc;
- (id)init;
- (void)cachePageText:(id)arg1 forURLString:(id)arg2;
- (void)_cacheText:(id)arg1 forURLString:(id)arg2;
- (void)_finishUpdatingPageTextToCache;
- (void)_startUpdatingPageTextToCache;
- (void)_backgroundCachePageText:(id)arg1 originalURLString:(id)arg2;
- (void)_runPDFExtractionThread;
- (void)_backgroundExtractPDFDocument:(id)arg1 originalURLString:(id)arg2;
- (void)_setPendingFlushIncludesRemovals:(BOOL)arg1;
- (void)_setNeedsCompaction:(BOOL)arg1;
- (BOOL)_removeCachedPageTextForURLStringWithoutFlushing:(id)arg1;
- (BOOL)_needsCompaction;
- (void)_closeSearchIndex;
- (void)_initializeSearchIndexCreatingIfNecessary:(BOOL)arg1;
- (void)_runFlushThreadWithSuddenTerminationDisabler:(id)arg1;
- (void)_runCachingThread;
- (void)_flushRemovalsSoon;
- (void)_flushSoon;
- (void)_detachFlushThread;
- (void)_cancelFlushTimer;

@end

