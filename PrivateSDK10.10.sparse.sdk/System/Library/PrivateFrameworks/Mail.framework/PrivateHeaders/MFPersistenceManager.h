/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MFPersistenceManager : NSObject
{
}

+ (id)_adjustPathForV2:(id)arg1 usingPrefix:(id)arg2;
+ (id)adjustAccountPathForV2:(id)arg1;
+ (id)autoDownloadDirectoryPath;
+ (id)mailDataSupportDirectory;
+ (id)mailDataDirectory;
+ (id)defaultMailDirectory;
+ (id)mailAccountDirectory;
+ (id)mailDataDirectoryName;
+ (id)supportDirectory;
+ (void)resetV1Layout;
+ (BOOL)persistenceLayoutIsV1;
+ (id)nonContainerizedMailRootDirectory;
+ (id)baseMailDirectory;
+ (id)unresolvedBaseMailDirectory;
+ (id)tildeUnresolvedBaseMailDirectory;

@end

