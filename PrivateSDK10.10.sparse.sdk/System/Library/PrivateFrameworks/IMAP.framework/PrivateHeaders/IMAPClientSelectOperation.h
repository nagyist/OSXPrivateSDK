/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMAP/IMAPClientMailboxOperation.h>

@class IMAPMailbox;

@interface IMAPClientSelectOperation : IMAPClientMailboxOperation
{
    BOOL _delayed;
    BOOL _useCondStore;
    IMAPMailbox *_imapMailbox;
}

+ (BOOL)automaticallyNotifiesObserversOfDelayed;
@property BOOL useCondStore; // @synthesize useCondStore=_useCondStore;
@property(retain) IMAPMailbox *imapMailbox; // @synthesize imapMailbox=_imapMailbox;
- (void).cxx_destruct;
@property BOOL delayed;
@property(readonly) BOOL readOnly;
- (BOOL)isReady;
- (BOOL)executeOnConnection:(id)arg1;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (BOOL)handlesAllUntaggedResponses;
- (id)activityString;
- (id)commandTypeString;

@end

