/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <BrowserKit/BKItem.h>

@class NSImage, NSString;

// Not exported
@interface BKFavoritesMissingItem : BKItem
{
    NSString *_itemDisplayName;
    NSString *_itemContentType;
    NSImage *_itemIcon;
}

- (void)dealloc;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)itemIsOffline;
- (BOOL)itemIsLeaf;
- (id)itemIcon;
- (id)itemIconRepresentationType;
- (id)itemKeys;
- (id)initWithDisplayName:(id)arg1 andContentType:(id)arg2;

@end

