/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecord;

// Not exported
@interface CKDGetUserRecordURLRequest : CKDURLRequest
{
    id _recordFetchedBlock;
    CKRecord *_userRecord;
}

@property(retain, nonatomic) CKRecord *userRecord; // @synthesize userRecord=_userRecord;
@property(copy, nonatomic) id recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)requestOperationClasses;
- (int)operationType;

@end

