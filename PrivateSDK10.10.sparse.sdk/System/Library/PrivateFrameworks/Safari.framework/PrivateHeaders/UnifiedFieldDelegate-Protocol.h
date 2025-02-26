/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTextFieldDelegate-Protocol.h"

@protocol UnifiedFieldDelegate <NSTextFieldDelegate>
- (void)unifiedFieldURLDropped:(id)arg1;
- (id)bookmarkToDragFromSiteIconInUnifiedField:(id)arg1;
- (BOOL)unifiedField:(id)arg1 trackSearchButtonForEvent:(id)arg2;
- (void)unifiedField:(id)arg1 mouseUpInSecurityPill:(id)arg2;
- (void)unifiedField:(id)arg1 mouseUpInStopReloadButton:(id)arg2;
- (void)unifiedFieldPerformSecurityPillAction:(id)arg1;
- (void)unifiedFieldPerformStopReloadButtonAction:(id)arg1;
- (BOOL)unifiedFieldShouldSelectAllAfterMouseDown:(id)arg1;
- (void)unifiedFieldMarkedTextDidChange:(id)arg1;
- (void)unifiedFieldAutocompleteSelectionDidChange:(id)arg1;
- (void)unifiedFieldResignedFirstResponder:(id)arg1;
- (void)unifiedFieldBecameFirstResponder:(id)arg1;
@end

