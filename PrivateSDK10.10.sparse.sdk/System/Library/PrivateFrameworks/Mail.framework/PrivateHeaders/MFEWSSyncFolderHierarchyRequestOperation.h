/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Mail/MFEWSRequestOperation.h>

@class NSString;

@interface MFEWSSyncFolderHierarchyRequestOperation : MFEWSRequestOperation
{
    NSString *_syncState;
}

+ (Class)classForResponse;
@property(readonly, copy, nonatomic) NSString *syncState; // @synthesize syncState=_syncState;
- (void).cxx_destruct;
- (id)prepareRequest;
- (id)activityString;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (id)initWithSyncState:(id)arg1 createBlock:(id)arg2 updateBlock:(void)arg3 deleteBlock:(id)arg4 gateway:(void)arg5;

@end

