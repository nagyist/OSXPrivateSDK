/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCache, NSMutableDictionary;

// Not exported
@interface BookmarkFolderTouchIconGenerator : NSObject
{
    NSMutableDictionary *_tokensToRequests;
    NSMutableDictionary *_tokensToResponseHandlers;
    NSMutableDictionary *_tokensToInternalTokenSets;
    NSMutableDictionary *_tokensToThumbnailArrays;
    NSMutableDictionary *_tokensToBackgroundColors;
    NSMutableDictionary *_tokensToRunLoopObservers;
    NSCache *_folderUUIDsToTouchIconInfo;
}

+ (id)sharedGenerator;
- (void).cxx_destruct;
- (void)_bookmarksWereRemoved:(id)arg1;
- (id)_thumbnailImageViewForImage:(id)arg1 backgroundColor:(id)arg2;
- (id)_touchIconForToken:(id)arg1 size:(struct CGSize)arg2;
- (void)_dispatchResponseForToken:(id)arg1 touchIcon:(id)arg2;
- (void)_dispatchResponseForToken:(id)arg1;
- (void)_cancelPendingResponseDispatchForToken:(id)arg1;
- (void)_coalesceResponseDispatchForToken:(id)arg1;
- (void)_setObject:(id)arg1 withNullPaddingToIndex:(unsigned long long)arg2 inArray:(id)arg3;
- (void)_setThumbnailBackgroundColor:(id)arg1 atIndex:(unsigned long long)arg2 forToken:(id)arg3;
- (void)_setThumbnailImage:(id)arg1 atIndex:(unsigned long long)arg2 forToken:(id)arg3;
- (id)_responseHandlerForToken:(SEL)arg1 thumbnailIndex:(id)arg2;
- (void)_registerRequest:(id)arg1 token:(id)arg2;
- (id)_defaultTouchIconForRequest:(id)arg1;
- (id)_initGenerator;
- (BOOL)cancelRequestWithToken:(id)arg1;
- (id)registerRequest:(id)arg1 responseHandler:(id)arg2;

@end

