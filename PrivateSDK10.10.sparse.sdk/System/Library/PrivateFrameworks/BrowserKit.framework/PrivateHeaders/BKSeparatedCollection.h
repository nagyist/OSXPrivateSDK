/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <BrowserKit/BKItem.h>

#import "BKItemProvider-Protocol.h"

@class NSArray, NSMutableArray;

@interface BKSeparatedCollection : BKItem <BKItemProvider>
{
    NSMutableArray *_itemsLeavesOnly;
    NSMutableArray *_itemsFoldersOnly;
    void *_reserved1;
    void *_reserved2;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(copy) NSArray *itemsFoldersOnly; // @synthesize itemsFoldersOnly=_itemsFoldersOnly;
@property(copy) NSArray *itemsLeavesOnly; // @synthesize itemsLeavesOnly=_itemsLeavesOnly;
- (id)description;
- (void)dealloc;
- (BOOL)itemIsLeaf;
- (id)itemIcon;
- (id)itemIconRepresentationType;
- (id)itemContentType;
- (id)itemKeys;
- (BOOL)itemsLeavesOnlyIsLeaf;
- (BOOL)itemsFoldersOnlyIsLeaf;
- (id)items;
- (id)itemsProviderKeys;
- (void)removeFolderItem:(id)arg1;
- (void)insertFolderItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addFolderItem:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addItem:(id)arg1;
- (void)setItemsFoldersOnlyInternal:(id)arg1;
- (void)setItemsLeavesOnlyInternal:(id)arg1;
- (id)initWithLeaves:(id)arg1 andFolders:(id)arg2;

@end

