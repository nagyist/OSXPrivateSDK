/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OCDEncryptedReader.h>

// Not exported
@interface OCBReader : OCDEncryptedReader
{
    struct OcBinaryReader *mBinaryReader;
    struct __sFILE *mFile;
}

@property(nonatomic) struct __sFILE *file; // @synthesize file=mFile;
@property(nonatomic) struct OcBinaryReader *binaryReader; // @synthesize binaryReader=mBinaryReader;
- (id)read;
- (BOOL)start;
- (void)restartReaderToUseDecryptedDocument;
- (BOOL)retainDecryptorWithErrorCode:(int *)arg1;
- (id)allocDecryptorWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilename:(id)arg2;
- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (_Bool)isBinaryReader;
@property(readonly, nonatomic) struct OCCEncryptionInfoReader *encryptionInfoReader;
- (void)closeFile;
- (void)dealloc;
- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;

@end

