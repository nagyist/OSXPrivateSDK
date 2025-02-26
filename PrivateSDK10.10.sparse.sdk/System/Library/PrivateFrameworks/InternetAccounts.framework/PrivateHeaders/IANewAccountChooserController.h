/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IANewAccountChooserRadioCollection, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTableRowView, NSTableView, NSView;

@interface IANewAccountChooserController : NSObject
{
    NSMutableArray *_items;
    NSMutableDictionary *_visiblePlugins;
    NSArray *_services;
    BOOL _showOther;
    BOOL _variableHeight;
    NSString *_otherRowLabel;
    unsigned long long _style;
    IANewAccountChooserRadioCollection *_radioCollection;
    NSArray *_topLevelObjects;
    NSView *_tableStyleView;
    NSTableView *_table;
    NSTableRowView *_otherTableRowView;
    BOOL _showHelp;
    id <IANewAccountChooserControllerDelegateProtocol> _delegate;
}

@property BOOL showHelp; // @synthesize showHelp=_showHelp;
@property(readonly) IANewAccountChooserRadioCollection *radioCollection; // @synthesize radioCollection=_radioCollection;
@property unsigned long long style; // @synthesize style=_style;
@property BOOL variableHeight; // @synthesize variableHeight=_variableHeight;
@property(retain) NSString *otherRowLabel; // @synthesize otherRowLabel=_otherRowLabel;
@property BOOL showOther; // @synthesize showOther=_showOther;
@property __weak id <IANewAccountChooserControllerDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSTableView *table; // @synthesize table=_table;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)_rowItemWithPlugin:(id)arg1;
- (id)selectedPluginID;
- (id)_buttonForCellView:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)buttonPress:(id)arg1;
- (void)deselectAll;
@property(readonly) NSView *view;
- (id)initWithServices:(id)arg1;
- (void)_prepItems;
- (BOOL)_shouldShowPlugin:(id)arg1;

@end

