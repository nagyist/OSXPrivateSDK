/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSOrderedSet;

@interface SOBlockListController : NSObject
{
    NSOrderedSet *_soBlockItemList;
    id _cmfBlockListUpdatedObserver;
    id _abDatabaseChangedExternallyObserver;
}

+ (void *)_createCMFItemRefWithUnsanitizedAddress:(id)arg1;
+ (id)sharedBlockList;
@property(retain) id abDatabaseChangedExternallyObserver; // @synthesize abDatabaseChangedExternallyObserver=_abDatabaseChangedExternallyObserver;
@property(retain) id cmfBlockListUpdatedObserver; // @synthesize cmfBlockListUpdatedObserver=_cmfBlockListUpdatedObserver;
@property(retain) NSOrderedSet *soBlockItemList; // @synthesize soBlockItemList=_soBlockItemList;
- (void).cxx_destruct;
- (void)_unblockCMFItem:(void *)arg1;
- (BOOL)_blockCMFItemRef:(void *)arg1;
- (id)_addressForCMItemRef:(void *)arg1;
- (void)_buildBlockList;
- (void)unblockAddress:(id)arg1;
- (void)unblockItem:(id)arg1;
- (BOOL)blockAddress:(id)arg1;
- (BOOL)blockItem:(id)arg1;
- (id)blockPersonAlert;
- (BOOL)addressIsBlocked:(id)arg1;
- (BOOL)itemIsBlocked:(id)arg1;
- (void)removeABNotifications;
- (void)listenToABNotifications;
- (id)blockListItems;
- (void)dealloc;
- (id)init;

@end

