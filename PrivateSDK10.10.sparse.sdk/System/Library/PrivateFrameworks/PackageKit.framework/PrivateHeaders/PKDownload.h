/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface PKDownload : NSObject
{
    NSString *_dstPath;
    BOOL _deleteFileOnFailure;
    BOOL _overwriteIfFileExists;
    id <PKDownloadDelegate><NSObject> _delegate;
}

+ (id)downloadWithResumeData:(id)arg1 destination:(id)arg2 delegate:(id)arg3;
+ (id)downloadWithURL:(id)arg1 delegate:(id)arg2;
+ (BOOL)canDownloadWithResumeData:(id)arg1;
+ (BOOL)canDownloadURL:(id)arg1;
+ (void)addDownloadClass:(Class)arg1;
+ (id)_downloadClasses;
- (BOOL)validatesDuringDownload;
- (void)setDestination:(id)arg1 allowOverwrite:(BOOL)arg2;
- (BOOL)deletesFileUponFailure;
- (void)setDeletesFileUponFailure:(BOOL)arg1;
- (id)resumeData;
- (id)sourceURL;
- (id)sourcePath;
- (void)cancel;
- (id)initWithResumeData:(id)arg1 destination:(id)arg2 delegate:(id)arg3;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;

@end

