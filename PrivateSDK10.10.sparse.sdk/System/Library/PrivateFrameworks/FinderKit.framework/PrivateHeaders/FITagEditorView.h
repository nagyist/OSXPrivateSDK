/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSControl.h"

@class FI_TTagEditorController, NSArray;

@interface FITagEditorView : NSControl
{
    id <FITagEditorDelegate> _delegate;
    id _controller;
    id _reserved;
    id _reserved2;
    id _reserved3;
}

+ (_Bool)accessibilityIsSingleCelled;
+ (void)initialize;
@property(retain, nonatomic) FI_TTagEditorController *controller; // @synthesize controller=_controller;
@property id <FITagEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)accessibilityIsIgnored;
- (void)selectText:(id)arg1;
- (void)setSelectable:(_Bool)arg1;
- (BOOL)isSelectable;
- (void)setEditable:(BOOL)arg1;
- (_Bool)isEditable;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (long long)userInterfaceLayoutDirection;
- (void)sizeToFit;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setTag:(long long)arg1;
- (long long)tag;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setOptions:(id)arg1;
@property(copy) NSArray *tags; // @dynamic tags;
- (void)didFinishEditing:(id)arg1;
- (id)taggingTokenField;
- (void)deallocCommon;
- (void)finalize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

