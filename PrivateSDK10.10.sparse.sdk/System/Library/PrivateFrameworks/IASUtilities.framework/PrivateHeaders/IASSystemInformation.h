/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface IASSystemInformation : NSObject
{
}

+ (id)localVisibleUsers;
+ (id)nvramStringForKey:(id)arg1;
+ (BOOL)runningFromInstallMedia;
+ (BOOL)hasAppleIPAddress;
+ (id)_userHomeDirectoriesWithSyncEnabledOnVolume:(id)arg1 includingHomes:(id)arg2;
+ (BOOL)stageKeychainSyncBuddyAfterRestoreOrMigrationForVolumeAtPath:(id)arg1 includingHomes:(id)arg2;
+ (BOOL)isRunningOnACPower;
+ (BOOL)machineHasBattery;

@end

