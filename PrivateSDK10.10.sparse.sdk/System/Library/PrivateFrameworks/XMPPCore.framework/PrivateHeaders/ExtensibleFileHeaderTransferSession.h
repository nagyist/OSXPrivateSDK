/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XMPPCore/FileTransferSession.h>

@class EFHCataloguer, NSArray, ThreadedMetadataSetter;

@interface ExtensibleFileHeaderTransferSession : FileTransferSession
{
    NSArray *_subpaths;
    EFHCataloguer *_cataloguer;
    BOOL _hasStartedCataloguer;
    ThreadedMetadataSetter *_metaSetter;
    BOOL _metaFinished;
    BOOL _transferFinished;
}

+ (id)namespace;
- (void)dealloc;
- (BOOL)isDir;
- (unsigned int)numFiles;
- (unsigned int)currentFile;
- (id)currentFilename;
- (unsigned long long)currentFileSentBytes;
- (unsigned long long)currentFileSize;
- (id)initWithIncomingNode:(id)arg1 streamManager:(id)arg2;
- (BOOL)_parseIncomingNode:(id)arg1;
- (id)_hexForKey:(id)arg1 inDict:(id)arg2;
- (void)streamClosed;
- (void)extensibleFileHeaderOutputStream:(id)arg1 wroteFile:(id)arg2 withMetadata:(id)arg3;
- (void)_setMetadata:(id)arg1 forPath:(id)arg2;
- (void)threadedMetadataSetterFinishedSettingMetadata:(id)arg1;
- (void)_checkComplete;
- (void)writeProfileOptions:(id)arg1;
- (void)_prepareOutgoingSession;
- (BOOL)needsPreparation;
- (void)efhCataloguerFinished:(id)arg1 withTotalSize:(unsigned long long)arg2 paths:(id)arg3;
- (void)_cleanupWatcher;
- (id)_newIncomingFile;
- (id)_newOutgoingFile;

@end

