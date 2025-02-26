/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PASample32bitKernelFrame, PASample32bitUserFrame, PASample64bitKernelFrame, PASample64bitUserFrame, PAStackshotThread;

@interface PASampleFrameIterator : NSObject
{
    PAStackshotThread *_stackshotThread;
    PASample64bitKernelFrame *_kernel64;
    PASample32bitKernelFrame *_kernel32;
    PASample64bitUserFrame *_user64;
    PASample32bitUserFrame *_user32;
}

@property PAStackshotThread *stackshotThread; // @synthesize stackshotThread=_stackshotThread;
- (void)iterateFrames:(id)arg1;
- (void)dealloc;

@end

