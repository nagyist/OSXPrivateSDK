/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Install/IFInstallQueueElement.h>

#import "IFPatchProgress-Protocol.h"

@class NSLock;

@interface IFApplyPatchesElement : IFInstallQueueElement <IFPatchProgress>
{
    unsigned int _numberOfPatchFiles;
    int _installKey;
    int _patchStatus;
    BOOL _patchIsInProgress;
    NSLock *_callbackLock;
}

- (void)patchCompletedWithStatus:(int)arg1;
- (oneway void)noteCurrentFile:(bycopy id)arg1 totalCount:(unsigned int)arg2;
- (void)_updateSha1OfPatchedFile:(id)arg1;
- (long long)run;
- (long long)getNumberOfPatchFilesFromPlan:(id)arg1;
- (id)description;
- (id)logDescription;
- (void)dealloc;
- (id)initWithInstallElement:(id)arg1 installKey:(int)arg2;

@end

