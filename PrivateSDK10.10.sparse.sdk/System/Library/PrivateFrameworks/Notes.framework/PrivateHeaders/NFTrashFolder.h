/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Notes/NFFolder.h>

@class NFAccount;

@interface NFTrashFolder : NFFolder
{
}

- (void)emptyContents;
- (BOOL)validateParent:(inout id *)arg1 error:(out id *)arg2;
- (void)awakeFromInsert;

// Remaining properties
@property(retain, nonatomic) NFAccount *trashAccount; // @dynamic trashAccount;

@end

