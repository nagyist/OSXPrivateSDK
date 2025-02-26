/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"

@class VKTileKeyMap;

// Not exported
@interface VKTileKeyList : NSObject <NSFastEnumeration, NSCopying>
{
    void *_head;
    void *_tail;
    VKTileKeyMap *_map;
    unsigned long long _count;
    unsigned long long _maxCount;
}

- (BOOL)isEqualToList:(id)arg1;
- (BOOL)removeKey:(const struct VKTileKey *)arg1;
- (void)removeKeysMatchingPredicate:(id)arg1;
- (void)sort:(id)arg1;
- (id)listWithout:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)count;
- (unsigned long long)capacity;
- (BOOL)containsKey:(const struct VKTileKey *)arg1;
- (void)_addKeyToBack:(const struct VKTileKey *)arg1;
- (void)addKey:(const struct VKTileKey *)arg1;
- (BOOL)addKey:(const struct VKTileKey *)arg1 lostKey:(struct VKTileKey *)arg2;
- (struct VKTileKey *)firstKey;
- (id)description;
- (void)dealloc;
- (id)copyWithMaxCapacity:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMaxCapacity:(unsigned long long)arg1;
- (id)init;

@end

