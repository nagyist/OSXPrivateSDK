/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, VolumeInfo;

@interface SpotlightLiveIndexer : NSObject
{
    NSString *_volumePath;
    struct __MDBackup *_mdBackupInstance;
    BOOL _mdSessionHasBegun;
    BOOL _indexCancellationRequested;
    NSObject<OS_dispatch_queue> *_indexDispatchQueue;
    NSObject<OS_dispatch_semaphore> *_endMDSessionSemaphore;
    VolumeInfo *_volumeInfo;
    NSString *_machineName;
    NSString *_overlayMountPoint;
    NSMutableSet *_alreadyIndexedBundlesInEpoch;
}

@property(retain, nonatomic) NSMutableSet *alreadyIndexedBundlesInEpoch; // @synthesize alreadyIndexedBundlesInEpoch=_alreadyIndexedBundlesInEpoch;
@property(retain, nonatomic) NSString *overlayMountPoint; // @synthesize overlayMountPoint=_overlayMountPoint;
@property(retain, nonatomic) NSString *machineName; // @synthesize machineName=_machineName;
@property(retain, nonatomic) VolumeInfo *volumeInfo; // @synthesize volumeInfo=_volumeInfo;
@property(readonly) BOOL indexCancellationRequested; // @synthesize indexCancellationRequested=_indexCancellationRequested;
@property(retain, nonatomic) NSString *volumePath; // @synthesize volumePath=_volumePath;
- (void)dealloc;
- (id)endMDSessionSemaphore;
- (void)finishAllIndexing:(BOOL)arg1;
- (void)cancelAll;
- (void)waitUntilFinished;
- (void)waitUntilFinished:(BOOL)arg1;
- (void)newEpochHasBegun;
- (void)indexFileInDelta:(id)arg1 atPath:(id)arg2 wasAtPath:(id)arg3 inSnapshot:(id)arg4 isCreation:(BOOL)arg5;
- (id)findBundleAbsolutePath:(id)arg1;
- (void)endAndBeginIndexing;
- (void)endIndexing;
- (void)beginIndexing;
- (void)submitToDispatchQueue:(id)arg1;
- (BOOL)indexFileInternalOperation:(id)arg1 spotlightStorePath:(id)arg2 attributes:(id)arg3;
- (BOOL)endInternalOperation;
- (BOOL)beginInternalOperation;
- (id)initWithVolumePath:(id)arg1;

@end

