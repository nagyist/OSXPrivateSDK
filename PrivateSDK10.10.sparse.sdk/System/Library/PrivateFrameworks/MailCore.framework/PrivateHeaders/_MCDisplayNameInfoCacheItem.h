/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MCDisplayNameInfo, NSString;

@interface _MCDisplayNameInfoCacheItem : NSObject
{
    MCDisplayNameInfo *_info;
    NSString *_rawAddress;
}

@property(readonly, copy, nonatomic) NSString *rawAddress; // @synthesize rawAddress=_rawAddress;
@property(readonly, nonatomic) MCDisplayNameInfo *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (id)init;
- (id)initWithInfo:(id)arg1 address:(id)arg2;

@end

