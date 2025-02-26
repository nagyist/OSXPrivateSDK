/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ASBContainer, NSDate, NSString;

@interface ASBContainerArchivedFile : NSObject
{
    ASBContainer *_container;
    NSString *_absolutePath;
    NSString *_relativePath;
    struct stat _sb;
    NSDate *_creationDate;
    NSDate *_modificationDate;
}

+ (id)archivedFilesWithPath:(id)arg1 relativeToContainer:(id)arg2 error:(id *)arg3;
- (id)fileModificationDate;
- (id)fileCreationDate;
- (id)fileType;
- (unsigned long long)fileSize;
- (id)absolutePath;
- (id)relativePath;
- (id)container;
- (id)description;

@end

