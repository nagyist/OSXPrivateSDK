/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@interface NSView (ProAdditions)
- (BOOL)usesLayerBackedContainerView;
- (id)enclosingContainerViewItem;
- (BOOL)isContainerItemView;
- (BOOL)usesLargeMetrics;
- (long long)themeVariant;
- (void)convertToThemeVariant:(long long)arg1;
- (id)_highlightColorForCell:(id)arg1;
- (struct CGRect)_setFrameY:(double)arg1;
- (void)removeAllToolTipsForView:(id)arg1 withOwner:(id)arg2;
- (void)_dumpHierarchy;
- (void)_dumpHierarchyAtLevel:(long long)arg1;
- (id)_autoresizingString;
- (struct CGRect)_adjustFrameY:(double)arg1;
- (struct CGRect)_moveFrame:(struct CGPoint)arg1;
@end

