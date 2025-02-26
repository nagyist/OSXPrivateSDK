/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FamilyControls/FCSafariBookmark.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray;

@interface FCSafariBookmarkFolder : FCSafariBookmark <NSCoding>
{
    NSMutableArray *_children;
}

+ (id)bookmarkWithDictionary:(id)arg1;
+ (id)bookmarkFolderWithFlatArray:(id)arg1;
- (id)description;
- (id)flatArrayOLD;
- (id)flatArray;
- (id)flatArrayWithArray:(id)arg1 beginningAtPath:(id)arg2;
- (void)removeBookmarkAtIndex:(long long)arg1;
- (void)removeBookmarks:(id)arg1;
- (void)removeBookmark:(id)arg1;
- (void)addBookmark:(id)arg1 atPath:(id)arg2;
- (void)addBookmark:(id)arg1 atIndex:(long long)arg2;
- (void)addBookmark:(id)arg1;
- (BOOL)isFolder;
- (long long)count;
- (id)folderForBookmark:(id)arg1;
- (long long)indexOfBookmark:(id)arg1;
- (long long)indexOfBookmarkFolderWithTitle:(id)arg1;
- (id)bookmarkAtIndex:(long long)arg1;
- (id)allBookmarks;
- (id)bookmarks;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)initWithTitle:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

