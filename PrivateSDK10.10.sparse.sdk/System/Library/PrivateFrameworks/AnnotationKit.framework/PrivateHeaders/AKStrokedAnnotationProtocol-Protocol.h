/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSColor;

@protocol AKStrokedAnnotationProtocol <NSObject>
@property BOOL hasShadow;
@property long long brushStyle;
@property(getter=isDashed) BOOL dashed;
@property(retain) NSColor *strokeColor;
@property double strokeWidth;
@end

