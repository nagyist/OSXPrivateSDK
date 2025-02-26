/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SSInputEventSource-Protocol.h"

@class NSObject<SSInputEventConsumer>;

@interface SSEventHelperManager : NSObject <SSInputEventSource>
{
    NSObject<SSInputEventConsumer> *mInputEventConsumer;
    unsigned int mServerPort;
    unsigned int mClientPort;
    struct __CFRunLoopSource *mRunLoopSource;
    struct __CFMachPort *mCFMachPort;
    unsigned long long mLastModifierFlags;
    void *mReservedForInstanceVariables;
}

+ (id)sharedManager;
@property unsigned long long lastModifierFlags; // @synthesize lastModifierFlags=mLastModifierFlags;
@property(readonly, nonatomic) NSObject<SSInputEventConsumer> *inputEventConsumer; // @synthesize inputEventConsumer=mInputEventConsumer;
- (void)ssSetInputEventConsumer:(id)arg1;
- (void)ssStopInputEventSource;
- (void)ssStartInputEventSource;
- (void)stopKeyCapture;
- (void)captureSpecialKeys:(id)arg1;
- (void)dealloc;
- (id)init;

@end

