/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudDocsDaemon/BRCOperation.h>

@class CKRecordID;

// Not exported
@interface BRCFetchiWorkSharingInfoOperation : BRCOperation
{
    CKRecordID *_recordID;
}

@property(retain, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (void).cxx_destruct;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)initWithItem:(id)arg1;

@end

