/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSAttributedString, NSImage, NSString;

// Not exported
@interface ContinuousReadingListPageItem : NSObject <NSCopying>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *reposterScreenName;
@property(readonly, nonatomic) NSString *reposterDisplayName;
@property(readonly, nonatomic, getter=isRepostedByAuthenticatedUser) BOOL repostedByAuthenticatedUser;
@property(readonly, nonatomic, getter=isSocial) BOOL social;
@property(readonly, nonatomic) BOOL hasDefaultSiteIcon;
@property(readonly, nonatomic) NSImage *secondaryIcon;
@property(readonly, nonatomic) NSImage *icon;
@property(readonly, nonatomic) NSString *screenName;
@property(readonly, nonatomic) NSString *itemDescription;
@property(readonly, nonatomic) NSAttributedString *title;
@property(readonly, nonatomic) NSString *urlString;
@property(readonly, nonatomic) NSObject *representedReadingListItem;

@end

