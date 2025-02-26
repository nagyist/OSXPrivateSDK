/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IMAPMailboxProxy.h"

@class NFIMAPAccountProxy;

@interface NFIMAPFolderProxy : IMAPMailboxProxy
{
}

- (id)mailbox;
- (BOOL)addMessageToServer:(id)arg1 withMessageType:(BOOL)arg2;
- (BOOL)isMessageDeletedFromPersistence:(id)arg1;
- (void)deleteMessageFromPersistence:(id)arg1;
- (BOOL)messageShouldBePersisted:(id)arg1;
- (id)initWithManagedObject:(id)arg1;

// Remaining properties
@property __weak NFIMAPAccountProxy *account;

@end

