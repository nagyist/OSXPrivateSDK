/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSComboBox.h"

#import "CalUIAutocompletingField-Protocol.h"

@class NSString;

@interface CalUILocationComboBox : NSComboBox <CalUIAutocompletingField>
{
    double _menuWidth;
}

+ (Class)cellClass;
@property double menuWidth; // @synthesize menuWidth=_menuWidth;
- (void)setObjectValue:(id)arg1;
- (id)objectValueAsArray;
@property(getter=isExpanded) BOOL expanded;
- (void)sizeToFit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

