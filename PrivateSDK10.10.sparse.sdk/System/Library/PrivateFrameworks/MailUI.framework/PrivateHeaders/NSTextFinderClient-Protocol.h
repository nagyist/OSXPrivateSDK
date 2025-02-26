/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol NSTextFinderClient <NSObject>

@optional
@property(readonly, copy) NSArray *visibleCharacterRanges;
@property(copy) NSArray *selectedRanges;
@property(readonly) struct _NSRange firstSelectedRange;
@property(readonly) NSString *string;
@property(readonly, getter=isEditable) BOOL editable;
@property(readonly) BOOL allowsMultipleSelection;
@property(readonly, getter=isSelectable) BOOL selectable;
- (void)drawCharactersInRange:(struct _NSRange)arg1 forContentView:(id)arg2;
- (id)rectsForCharacterRange:(struct _NSRange)arg1;
- (id)contentViewAtIndex:(unsigned long long)arg1 effectiveCharacterRange:(struct _NSRange *)arg2;
- (void)didReplaceCharacters;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (BOOL)shouldReplaceCharactersInRanges:(id)arg1 withStrings:(id)arg2;
- (void)scrollRangeToVisible:(struct _NSRange)arg1;
- (unsigned long long)stringLength;
- (id)stringAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 endsWithSearchBoundary:(char *)arg3;
@end

