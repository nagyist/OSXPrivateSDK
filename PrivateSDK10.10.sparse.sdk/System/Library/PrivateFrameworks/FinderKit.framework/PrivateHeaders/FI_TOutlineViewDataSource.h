/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTreeController.h"

#import "NSOutlineViewDataSource-Protocol.h"

@class FI_TOutlineView, NSString;

// Not exported
@interface FI_TOutlineViewDataSource : NSTreeController <NSOutlineViewDataSource>
{
    FI_TOutlineView *_outlineView;
}

@property(nonatomic) FI_TOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (id)flattenedContent;
- (void)clear;
- (void)unbindFromTableColumn:(id)arg1;
- (void)bindToTableColumn:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)awakeCommon;
- (void)initCommon;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

