/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ReadingListTableViewContentProvider-Protocol.h"
#import "SidebarContentFilterDelegate-Protocol.h"

@class FilteredCollectionHelper, NSMutableArray, NSString, SidebarContentFilter;

// Not exported
@interface ReadingListContentProvider : NSObject <SidebarContentFilterDelegate, ReadingListTableViewContentProvider>
{
    SidebarContentFilter *_contentFilter;
    FilteredCollectionHelper *_filteredCollectionHelper;
    BOOL _showsOnlyUnreadItems;
    NSMutableArray *_cachedUnreadItems;
}

@property(nonatomic) BOOL showsOnlyUnreadItems; // @synthesize showsOnlyUnreadItems=_showsOnlyUnreadItems;
- (void).cxx_destruct;
- (void)_rebuildCachedUnreadItems;
- (void)_readingListDataStoreItemsDidChange:(id)arg1;
- (id)_filteredCollectionHelper;
- (id)_allReadingListItemsRespectingUnreadState;
- (void)sidebarContentFilterDidCompleteFilterOperation:(id)arg1;
- (void)filterWithSearchString:(id)arg1;
- (BOOL)animateDataSourceChanges;
- (BOOL)itemsAreRemovable;
- (Class)tableCellViewClass;
- (id)itemsChangedNotificationName;
- (id)itemsChangedNotificationObject;
- (id)displayedItemPrecedingItem:(id)arg1;
- (id)displayedItemFollowingItem:(id)arg1;
- (id)displayedItems;
- (id)allReadingListItems;
@property(readonly, nonatomic) SidebarContentFilter *contentFilter; // @synthesize contentFilter=_contentFilter;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

