/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface VMUVMRegion : NSObject
{
    struct _VMURange range;
    unsigned int prot;
    unsigned int maxProt;
    NSString *type;
    NSString *path;
    BOOL summarized;
    BOOL recalculate_pages_resident;
    unsigned char external_pager;
    unsigned char share_mode;
    int purgeable;
    unsigned long long virtual_pages;
    unsigned long long pages_resident;
    unsigned long long pages_shared_now_private;
    unsigned long long pages_swapped_out;
    unsigned long long pages_dirtied;
    unsigned long long ref_count;
    unsigned int user_tag;
    unsigned long long object_id;
    unsigned int nesting_depth;
    BOOL is_submap;
    unsigned long long mallocBlockCount;
    unsigned int mallocTypeFlag;
    unsigned long long pages_purgable_vol;
    unsigned long long pages_purgable_non_vol;
    unsigned long long pages_purgable_empty;
}

+ (id)columnHeadersWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2;
- (id)breakAtLength:(unsigned long long)arg1;
- (void)addInfoFromRegion:(id)arg1;
- (BOOL)hasSameInfoAsRegion:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSubmap;
- (unsigned long long)purgeablePageCount;
- (unsigned long long)swappedOutPageCount;
- (unsigned long long)sharedNowPrivatePageCount;
- (unsigned long long)dirtyPageCount;
- (unsigned long long)residentPageCount;
- (unsigned long long)virtualPageCount;
- (unsigned int)maxProtection;
- (unsigned int)protection;
- (id)path;
- (id)type;
- (struct _VMURange)range;
- (id)description;
- (id)descriptionWithOptions:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

@end

