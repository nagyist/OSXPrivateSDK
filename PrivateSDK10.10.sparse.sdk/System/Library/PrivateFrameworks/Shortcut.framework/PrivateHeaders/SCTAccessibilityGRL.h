/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Shortcut/SCTGRL.h>

@class NSString;

@interface SCTAccessibilityGRL : SCTGRL
{
    NSString *mRole;
    NSString *mSubrole;
}

- (void)hide:(id)arg1;
- (void)perform;
- (void)show;
- (void)doFinishShow;
- (void)delayedShowcase:(id)arg1;
- (void)enumerateDescendants:(id)arg1 ofResource:(id)arg2;
- (void)resolveResourceAndInvoke:(id)arg1;
- (BOOL)isWindow;
- (id)resolveFromContainer:(id)arg1;
- (id)fullTitle;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithRootAttribute:(struct __CFString *)arg1;
- (id)initWithElement:(struct __AXUIElement *)arg1 withParent:(id)arg2;
- (void)extractElementPath:(struct __AXUIElement *)arg1;

@end

