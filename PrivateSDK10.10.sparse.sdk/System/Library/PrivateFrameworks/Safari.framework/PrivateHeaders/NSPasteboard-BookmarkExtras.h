/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSPasteboard.h"

@interface NSPasteboard (BookmarkExtras)
+ (id)safari_writableBookmarkUTIs;
+ (id)safari_bookmarkPasteboardTypes;
- (id)_safari_bookmarksTopLevelOnly:(BOOL)arg1;
- (void)_safari_writeBookmarks:(id)arg1 withOwner:(id)arg2 forInternalUseOnly:(BOOL)arg3;
- (BOOL)safari_isDraggingFavoriteButton;
- (void)safari_getExistingBookmarksFromPasteboard:(id *)arg1 newBookmarks:(id *)arg2;
- (id)safari_topLevelBookmarksOnPasteboard;
- (id)safari_bookmarksOnPasteboard;
- (unsigned long long)safari_numberOfBookmarkFoldersOnPasteboard;
- (unsigned long long)safari_numberOfBookmarksOnPasteboard;
- (BOOL)safari_hasAnyBookmarks;
- (void)safari_writeBookmarksForInternalUseOnly:(id)arg1 withOwner:(id)arg2;
- (void)safari_writeBookmarks:(id)arg1 withOwner:(id)arg2;
@end

