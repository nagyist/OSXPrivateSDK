/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSMutableDictionary;

@interface UIRAccessibilityElementRecord : NSObject <NSCoding>
{
    NSMutableDictionary *_properties;
}

+ (id)accessibilityStackWithStartingElement:(id)arg1;
- (void)dealloc;
- (struct CGSize)size;
- (struct CGPoint)position;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (void)setProperties:(id)arg1;
- (id)properties;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAXUIElement:(struct __AXUIElement *)arg1 withParentAXUIElement:(struct __AXUIElement *)arg2;
- (id)objectForAXValue:(void *)arg1;

@end

