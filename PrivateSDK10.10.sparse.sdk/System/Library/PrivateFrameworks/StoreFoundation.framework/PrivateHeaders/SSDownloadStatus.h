/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSError, SSDownloadPhase;

@interface SSDownloadStatus : NSObject <NSSecureCoding>
{
    SSDownloadPhase *_activePhase;
    NSError *_error;
    BOOL _failed;
    BOOL _paused;
    BOOL _cancelled;
    BOOL _waiting;
}

+ (BOOL)supportsSecureCoding;
@property BOOL waiting; // @synthesize waiting=_waiting;
@property(nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isPaused) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isFailed) BOOL failed; // @synthesize failed=_failed;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) SSDownloadPhase *activePhase; // @synthesize activePhase=_activePhase;
- (void).cxx_destruct;
- (void)setOperationProgress:(id)arg1;
@property(readonly, nonatomic) long long phaseTimeRemaining;
@property(readonly, nonatomic) float phasePercentComplete;
@property(readonly, nonatomic) float percentComplete;
@property(readonly, nonatomic, getter=isPausable) BOOL pausable;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

