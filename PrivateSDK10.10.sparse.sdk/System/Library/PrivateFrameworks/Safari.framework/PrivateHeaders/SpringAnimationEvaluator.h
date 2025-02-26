/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate;

// Not exported
@interface SpringAnimationEvaluator : NSObject
{
    double _mass;
    double _stiffness;
    double _damping;
    double _w0;
    double _wd;
    double _zeta;
    double _A;
    double _B;
    struct __CVDisplayLink *_displayLink;
    NSDate *_startDate;
    id _progressHandler;
    id _completionHandler;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)_handleCallback;
- (double)_progressAtTime:(double)arg1;
- (void)_setUpState;
- (id)initWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 progressHandler:(id)arg4 completionHandler:(void)arg5;

@end

