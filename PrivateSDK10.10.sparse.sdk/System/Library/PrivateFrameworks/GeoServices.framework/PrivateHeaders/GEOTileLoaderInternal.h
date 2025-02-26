/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEOTileLoader.h>

#import "GEOResourceManifestTileGroupObserver-Protocol.h"
#import "GEOTileServerProxyDelegate-Protocol.h"

@class GEOTileLoaderConfiguration, GEOTilePool, GEOTileServerProxy, NSMutableArray, NSMutableSet, NSString;

// Not exported
@interface GEOTileLoaderInternal : GEOTileLoader <GEOTileServerProxyDelegate, GEOResourceManifestTileGroupObserver>
{
    struct list<LoadItem, std::__1::allocator<LoadItem>> _loadItems;
    struct mutex _lock;
    GEOTilePool *_cache;
    GEOTilePool *_expiringCache;
    struct unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer>> _timer;
    struct dispatch_queue_s *_loadQ;
    NSMutableSet *_openers;
    CDStruct_34734122 _sortPoint;
    GEOTileServerProxy *_proxy;
    int _memoryHits;
    int _diskHits;
    int _networkHits;
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)>>> _shrinkCacheRequesters;
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)>>> _freeableSizeRequesters;
    NSMutableArray *_tileDecoders;
    BOOL _networkActive;
    id <GEOTileLoaderInternalDelegate> _internalDelegate;
    struct dispatch_queue_s *_internalDelegateQ;
    GEOTileLoaderConfiguration *_config;
    struct mutex _usageLock;
    struct unordered_map<_GEOTileKey, UsageData, std::__1::hash<GEOTileKey>, std::__1::equal_to<GEOTileKey>, std::__1::allocator<std::__1::pair<const _GEOTileKey, UsageData>>> _usageData;
    struct unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer>> _usageTimer;
    BOOL _isUsageTimerScheduled;
    int _rollingBatchId;
    struct deque<ErrorInfo, std::__1::allocator<ErrorInfo>> _recentErrors;
}

- (int)networkHits;
- (int)diskHits;
- (int)memoryHits;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cachedTileForKey:(const struct _GEOTileKey *)arg1;
- (id)_findInCache:(const struct _GEOTileKey *)arg1;
- (struct dispatch_queue_s *)internalDelegateQ;
- (void)setInternalDelegateQ:(struct dispatch_queue_s *)arg1;
- (id)internalDelegate;
- (void)setInternalDelegate:(id)arg1;
- (id)proxy;
- (void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2;
- (void)proxy:(id)arg1 didShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2;
- (void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3;
- (void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const struct _GEOTileKey *)arg3 info:(id)arg4;
- (void)_loadedTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2 fromOfflinePack:(id)arg3;
- (void)_loadedTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2 info:(id)arg3;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)expireTilesWithPredicate:(id)arg1;
- (void)registerTileLoader:(Class)arg1;
- (void)registerTileDecoder:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_tileEditionChanged:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)_activeTileGroupChanged:(id)arg1;
- (void)clearAllCaches;
- (void)calculateFreeableSizeWithCallbackQ:(struct dispatch_queue_s *)arg1 finished:(id)arg2;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(struct dispatch_queue_s *)arg2 finished:(id)arg3;
- (void)endPreloadSessionForClient:(id)arg1;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2 exclusive:(BOOL)arg3;
- (void)cancelAllForClient:(id)arg1;
- (void)cancelKey:(const struct _GEOTileKey *)arg1 forClient:(id)arg2;
- (void)setSortPoint:(const CDStruct_c3b9c2ee *)arg1;
- (void)_timerFired;
- (void)_requestOnlineTiles;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 callbackQ:(struct dispatch_queue_s *)arg5 beginNetwork:(id)arg6 callback:(void)arg7;
- (void)_usageTimerFired;
- (BOOL)reprioritizeKey:(const struct _GEOTileKey *)arg1 forClient:(id)arg2 newPriority:(unsigned int)arg3;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 proxyClient:(id)arg4 options:(unsigned long long)arg5 callbackQ:(struct dispatch_queue_s *)arg6 beginNetwork:(id)arg7 callback:(void)arg8;
- (BOOL)_cancelIfNeeded:(__list_iterator_d839716a *)arg1;
- (void)_cancel:(__list_iterator_d839716a *)arg1 err:(id)arg2;
- (void)_updateNetworkActive;
- (void)closeForClient:(id)arg1;
- (void)openForClient:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

