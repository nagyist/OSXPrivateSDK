/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol BKSelectionPathModuleProtocol
@property id <BKSelectionPathModuleProtocol> nextSelectionModule;
- (BOOL)setSelectionPath:(id)arg1;
- (id)selectionPath;
- (BOOL)handlesPathComponent:(id)arg1;

@optional
- (BOOL)handlesRootedSelectionPaths;
- (id)rootObjectsFromSelectionPath:(id)arg1;
- (void)appendItemsToSelectionPath:(id)arg1;
@end

