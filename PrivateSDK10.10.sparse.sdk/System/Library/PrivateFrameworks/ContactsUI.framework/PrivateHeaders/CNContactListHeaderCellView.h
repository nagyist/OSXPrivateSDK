/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

@class NSArray, NSTextField;

@interface CNContactListHeaderCellView : NSView
{
    NSTextField *_headerTextField;
    NSArray *_customConstraints;
}

@property(retain) NSArray *customConstraints; // @synthesize customConstraints=_customConstraints;
@property(retain) NSTextField *headerTextField; // @synthesize headerTextField=_headerTextField;
- (void).cxx_destruct;
- (id)metrics;
- (id)views;
- (void)updateConstraints;
- (void)setHeader:(id)arg1;
- (void)awakeFromNib;

@end

