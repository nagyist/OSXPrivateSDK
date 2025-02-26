/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <BrowserKit/BKItem.h>

@class NSImage, NSString;

// Not exported
@interface BKFontItem : BKItem
{
    NSString *_itemDisplayName;
    NSString *_itemFontFamily;
    NSString *_itemFontTypeface;
    NSImage *_icon;
}

- (void)dealloc;
- (id)itemPasteboardDataTypes;
- (id)itemPasteboardObjectForType:(id)arg1;
- (id)itemUniqueIdentifier;
- (id)itemIcon;
- (id)itemContentType;
- (id)itemDisplayName;
- (id)itemKeys;
- (id)initWithDisplayName:(id)arg1 family:(id)arg2 typeface:(id)arg3;

@end

