/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface FI_TPopoverSubviewData : NSObject
{
    struct TNSRef<FI_TView *> _subview;
    struct TNSRef<FI_TLayoutBinder *> _layoutBinder;
    struct TNSRef<FI_TGradientSeparator *> _separator;
    struct TNSRef<FI_TLayoutBinder *> _separatorLayoutBinder;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeSeparator;
- (void)addSeparator;
- (id)layoutBinder;
- (id)subview;
- (void)dealloc;
- (id)initWithSubview:(id)arg1;

@end

