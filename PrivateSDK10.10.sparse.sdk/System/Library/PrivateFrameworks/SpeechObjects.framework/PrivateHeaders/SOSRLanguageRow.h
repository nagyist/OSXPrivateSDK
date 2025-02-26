/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, SOSRLanguageItem;

@interface SOSRLanguageRow : NSObject
{
    NSString *_title;
    unsigned long long _tableIndex;
    BOOL _selected;
    BOOL _groupRow;
    SOSRLanguageItem *_srLanguageItem;
}

+ (id)arrangedRowsFromSRLanguageItems:(id)arg1 groupCountries:(BOOL)arg2 useLanguageCodeOnlyToSelectItems:(BOOL)arg3 showCurrentLocaleAtTop:(BOOL)arg4;
@property(readonly, retain) SOSRLanguageItem *srLanguageItem; // @synthesize srLanguageItem=_srLanguageItem;
@property(readonly, retain) NSString *title; // @synthesize title=_title;
@property unsigned long long tableIndex; // @synthesize tableIndex=_tableIndex;
@property(getter=isGroupRow) BOOL groupRow; // @synthesize groupRow=_groupRow;
- (id)description;
- (void)setSelectedUsingLanguageCodeOnlyToSelectItems:(BOOL)arg1;
@property(getter=isSelected) BOOL selected;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 srLanguageItem:(id)arg2;

@end

