/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PCLogging : NSObject
{
}

+ (void)enableLoggingForCustomHandler:(id)arg1;
+ (void)enableFileLogging:(BOOL)arg1;
+ (void)enableConsoleLoggingForLevel:(int)arg1;
+ (void)_appendString:(id)arg1 toFileNamed:(id)arg2;
+ (id)logFileDirectory;
+ (void)logKeepAliveInterval:(double)arg1 forServiceIdentifier:(id)arg2;
+ (void)logAtLevel:(int)arg1 delegate:(id)arg2 format:(id)arg3 arguments:(struct __va_list_tag [1])arg4;
+ (id)_formatBlock;
+ (void)logAtLevel:(int)arg1 delegate:(id)arg2 format:(id)arg3;
+ (BOOL)loggingEnabledForLevel:(int)arg1;
+ (id)getMainBundleId;
+ (void)_configureLogFacilityIfNeeded:(id)arg1;
+ (id)_facilityForIdentifier:(id)arg1;
+ (id)_fileNameForIdentifier:(id)arg1;
+ (void)initialize;

@end

