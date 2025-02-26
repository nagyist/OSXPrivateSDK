/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSFileWrapper.h"

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@interface NSFileWrapper (MailCoreAdditions)
- (id)stringForIndexing;
- (unsigned long long)approximateSize;
- (BOOL)isALargeAttachment;
- (BOOL)isPlaceholder;
- (id)tmpFullPath;
- (id)preferredFilenameWithoutHiddenExtension;
- (void)_isImageFile:(char *)arg1 isPDF:(char *)arg2 bestMimeType:(id *)arg3;
- (void)isImageFile:(char *)arg1 isPDF:(char *)arg2;
- (BOOL)isImageFile;
@property(readonly, copy, nonatomic) NSString *bestMimeType;
- (BOOL)isRemotelyAccessed;
- (unsigned long long)imageBytes;
- (struct CGSize)imageSize;
- (void)setImageSize:(struct CGSize)arg1 imageBytes:(unsigned long long)arg2;
@property(retain, nonatomic) NSString *messageID;
@property(retain, nonatomic) NSArray *whereFroms;
@property(retain, nonatomic) NSDictionary *quarantineProperties;
@property(retain, nonatomic) NSString *mimeType;
@property(retain, nonatomic) NSString *mailSpecialHandlingType;
@property(retain, nonatomic) NSString *contentID;
@property(retain, nonatomic) NSNumber *filePermissions;
@property(nonatomic) BOOL shouldHideExtension;
@property(nonatomic) unsigned short finderFlags;
@property(nonatomic) unsigned int creator;
@property(nonatomic) unsigned int type;
@property(retain, nonatomic) NSData *resourceForkData;
- (void)removeEmptyAttachment;
- (id)emptyAttachmentPath;
- (BOOL)emptyAttachmentExists;
- (BOOL)createEmptyAttachmentAtPath:(id)arg1;
- (BOOL)_writeFinderInfoToPath:(id)arg1 includeDirectoryContents:(BOOL)arg2;
@end

