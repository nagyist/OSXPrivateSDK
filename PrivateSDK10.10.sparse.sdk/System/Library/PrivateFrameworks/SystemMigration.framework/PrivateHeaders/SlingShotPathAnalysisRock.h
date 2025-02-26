/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SystemMigration/SlingShotRock.h>

@class NSArray, NSString;

@interface SlingShotPathAnalysisRock : SlingShotRock
{
    NSString *_operation;
    NSArray *_paths;
    NSArray *_omitPaths;
    id _result;
}

+ (id)rockID;
+ (id)rockWithPayload:(id)arg1;
+ (id)pathAnalysis;
- (void).cxx_destruct;
- (BOOL)success;
- (id)result;
- (BOOL)returnsData;
- (int)receiveResultFromData:(id)arg1;
- (id)resultData;
- (BOOL)keepAlive;
- (id)description;
- (id)requestPayload;
- (BOOL)isHandshake;
- (id)initWithOperation:(id)arg1 paths:(id)arg2 omitPaths:(id)arg3;
- (id)_resultDictionary;
- (id)slingshotServerInformation;

@end

