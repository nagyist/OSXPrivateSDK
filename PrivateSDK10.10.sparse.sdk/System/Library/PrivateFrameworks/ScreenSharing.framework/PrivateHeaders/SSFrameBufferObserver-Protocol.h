/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SSFrameBufferObserver <NSObject>
- (void)ssFrameBufferSizeDidChange:(id)arg1;
- (void)ssFrameBuffer:(id)arg1 sizeWillChangeTo:(struct SSSize)arg2;
- (void)ssFrameBuffer:(id)arg1 rectangleChanged:(struct SSRect)arg2;
@end

