/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSURL;

@interface SPCAssetManagerSessionItem : NSObject
{
    NSURL *_fileURL;
}

+ (id)importSessionItemWithFileURL:(id)arg1;
@property(copy) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (void)dealloc;
- (id)initWithSessionType:(long long)arg1 andFileURL:(id)arg2;

@end

