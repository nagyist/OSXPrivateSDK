/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface OSIMessageTracer : NSObject
{
    NSMutableArray *messages;
    NSString *version;
    NSString *_targetPath;
}

+ (id)sharedInstance;
- (void)publish;
- (BOOL)writeToTarget;
- (id)_filePath;
- (void)writeMessageWithDomain:(id)arg1 fields:(id)arg2;
@property(retain) NSString *targetPath;
- (id)init;

@end

