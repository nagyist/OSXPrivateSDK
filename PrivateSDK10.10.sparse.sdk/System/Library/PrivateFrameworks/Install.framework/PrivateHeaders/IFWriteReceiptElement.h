/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Install/IFTaskElement.h>

@class IFDiskObject, IFInstallPlan;

@interface IFWriteReceiptElement : IFTaskElement
{
    IFDiskObject *_targetVolume;
    IFInstallPlan *_installPlan;
    BOOL _creatingFinal;
    BOOL _elementIsRunningInSessionQueueContext;
}

- (long long)run;
- (BOOL)_runnerCreateReceiptDirectoriesAt:(id)arg1;
- (id)description;
- (id)logDescription;
- (void)dealloc;
- (id)initWithTargetVolume:(id)arg1 installKey:(int)arg2 stateDelegate:(id)arg3 packageController:(id)arg4;
- (id)initWithTargetVolume:(id)arg1 installKey:(int)arg2 stateDelegate:(id)arg3 packageController:(id)arg4 creatingFinal:(BOOL)arg5;

@end

