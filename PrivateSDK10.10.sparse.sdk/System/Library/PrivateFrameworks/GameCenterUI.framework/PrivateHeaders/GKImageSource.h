/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GKImageBrush, GKThreadsafeCache, NSImage, NSString;

@interface GKImageSource : NSObject
{
    BOOL _shouldRenderDefaultImageWithBrush;
    GKThreadsafeCache *_cache;
    NSString *_name;
    GKImageBrush *_imageBrush;
    NSImage *_defaultImage;
    NSImage *_renderedDefaultImage;
}

+ (id)cacheDirectoryForImageID:(id)arg1;
+ (void)clearCache;
+ (id)sharedCache;
+ (id)syncQueue;
@property(nonatomic) BOOL shouldRenderDefaultImageWithBrush; // @synthesize shouldRenderDefaultImageWithBrush=_shouldRenderDefaultImageWithBrush;
@property(retain, nonatomic) NSImage *renderedDefaultImage; // @synthesize renderedDefaultImage=_renderedDefaultImage;
@property(retain, nonatomic) NSImage *defaultImage; // @synthesize defaultImage=_defaultImage;
@property(readonly, nonatomic) GKImageBrush *imageBrush; // @synthesize imageBrush=_imageBrush;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) GKThreadsafeCache *cache; // @synthesize cache=_cache;
- (void)clearCachedImageForIdentifier:(id)arg1;
- (id)processAndCacheImageDataInContext:(id)arg1 withImage:(id)arg2 forIdentifier:(id)arg3;
- (id)processAndCacheImageDataInContext:(id)arg1 withImage:(id)arg2 forKey:(id)arg3;
- (id)processAndCacheImage:(id)arg1 forIdentifier:(id)arg2;
- (id)processAndCacheImage:(id)arg1 forKey:(id)arg2;
- (id)renderedTestImage;
- (BOOL)shouldUseTestImage;
- (id)cachedImageForIdentifier:(id)arg1;
- (id)cachedImageForKey:(id)arg1;
- (id)fastCachedOrDefaultImageForIdentifier:(id)arg1;
- (id)fastCachedOrDefaultImageForForKey:(id)arg1;
- (id)fastCachedImageForIdentifier:(id)arg1;
- (id)fastCachedImageForKey:(id)arg1;
- (void)validateFileSystemCache;
- (unsigned long long)cacheCostForImage:(id)arg1;
- (id)renderedImageWithImage:(id)arg1;
- (id)renderedImageWithImage:(id)arg1 returnContext:(id *)arg2;
- (id)renderedImageWithImage:(id)arg1 defaultSize:(struct CGSize)arg2 returnContext:(id *)arg3;
- (id)keyForImageIdentifier:(id)arg1;
- (id)subsourceWithBrush:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 imageBrush:(id)arg2;

@end

