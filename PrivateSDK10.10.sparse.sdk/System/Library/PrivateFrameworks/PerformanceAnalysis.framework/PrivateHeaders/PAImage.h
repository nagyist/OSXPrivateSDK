/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSArray, NSString;

@interface PAImage : NSObject <NSCoding>
{
    long long slide;
    NSString *name;
    NSString *path;
    NSArray *segments;
    unsigned int fileType;
    BOOL isInSharedCache;
}

+ (id)imagesForProcessWithPort:(unsigned int)arg1;
+ (id)sharedCacheImage;
@property BOOL isInSharedCache; // @synthesize isInSharedCache;
@property unsigned int fileType; // @synthesize fileType;
@property(retain) NSArray *segments; // @synthesize segments;
@property(retain) NSString *path; // @synthesize path;
@property(retain) NSString *name; // @synthesize name;
@property long long slide; // @synthesize slide;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)segmentsAndSectionsString;
- (id)segmentsString;
- (id)nameString;
- (long long)compare:(id)arg1;
- (BOOL)isExecutable;
- (void)dealloc;
- (id)initWithSegmentSymbolOwner:(struct _CSTypeRef)arg1 SectionOwner:(struct _CSTypeRef)arg2;
- (id)nameFromPath;

@end

