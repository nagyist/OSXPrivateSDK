/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVTaskGroupDelegate-Protocol.h"

@protocol CoreDAVLocalDBInfoProvider <CoreDAVTaskGroupDelegate>
- (void)containerSyncTask:(id)arg1 completedWithNewCTag:(id)arg2 newSyncToken:(id)arg3 addedOrModified:(id)arg4 removed:(id)arg5 error:(id)arg6;
- (void)containerSyncTask:(id)arg1 retrievedAddedOrModifiedActions:(id)arg2 removed:(id)arg3;
- (id)copyAllLocalURLsInFolderWithURL:(id)arg1;
- (id)copyLocalETagsForURLs:(id)arg1 inFolderWithURL:(id)arg2;

@optional
- (BOOL)syncBulkChangeTask:(id)arg1 error:(id)arg2;
- (BOOL)syncDeleteTask:(id)arg1 error:(id)arg2;
- (BOOL)syncPostTask:(id)arg1 data:(id)arg2 error:(id)arg3;
- (BOOL)syncPutTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;
- (BOOL)syncBulkChangeTask:(id)arg1 parentTaskGroup:(id)arg2 completedWithError:(id)arg3;
- (BOOL)syncDeleteTask:(id)arg1 parentTaskGroup:(id)arg2 completedWithError:(id)arg3;
- (BOOL)syncPostTask:(id)arg1 postedData:(id)arg2 parentTaskGroup:(id)arg3 error:(id)arg4;
- (BOOL)syncPutTask:(id)arg1 completedWithNewETag:(id)arg2 parentTaskGroup:(id)arg3 error:(id)arg4;
- (BOOL)setLocalETag:(id)arg1 forItemWithURL:(id)arg2 inFolderWithURL:(id)arg3;
@end

