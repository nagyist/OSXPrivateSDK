/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MUPoolObject.h>

#import "NSCopying-Protocol.h"

@class NSObject;

@interface MURetainingKey : MUPoolObject <NSCopying>
{
    NSObject *_object;
}

+ (id)retainingKeyWithObject:(id)arg1;
+ (BOOL)clearVars;
+ (CDStruct_7b508128 *)poolInfo;
@property(readonly) NSObject *object; // @synthesize object=_object;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)purge;
- (id)initWithObject:(id)arg1;

@end

