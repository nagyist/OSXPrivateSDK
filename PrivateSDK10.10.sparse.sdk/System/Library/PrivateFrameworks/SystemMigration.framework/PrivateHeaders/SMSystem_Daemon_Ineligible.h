/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SystemMigration/SMSystem_Daemon.h>

@class NSImage, NSString, NSURL;

@interface SMSystem_Daemon_Ineligible : SMSystem_Daemon
{
    BOOL _obsoleteSoftware;
    unsigned long long systemType;
    NSString *systemName;
    NSString *path;
    NSURL *url;
    NSString *_reason;
    NSImage *_overrideIcon;
}

@property(retain) NSImage *overrideIcon; // @synthesize overrideIcon=_overrideIcon;
@property BOOL obsoleteSoftware; // @synthesize obsoleteSoftware=_obsoleteSoftware;
@property(readonly) NSString *reason; // @synthesize reason=_reason;
@property(retain) NSURL *url; // @synthesize url;
@property(retain) NSString *path; // @synthesize path;
@property(retain) NSString *systemName; // @synthesize systemName;
@property unsigned long long systemType; // @synthesize systemType;
- (void).cxx_destruct;
- (BOOL)enabled;
- (BOOL)selectableSystem;
- (id)warningBadge;
- (id)accessibilityDescription;
- (id)initWithURL:(id)arg1 systemName:(id)arg2 andReason:(id)arg3 pc:(BOOL)arg4;
- (id)initWithURL:(id)arg1 systemName:(id)arg2 andReason:(id)arg3;
- (id)initWithPath:(id)arg1 andReason:(id)arg2;

@end

