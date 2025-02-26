/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol NSApplicationDelegate <NSObject>

@optional
- (void)applicationDidChangeOcclusionState:(id)arg1;
- (void)applicationDidChangeScreenParameters:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidUpdate:(id)arg1;
- (void)applicationWillUpdate:(id)arg1;
- (void)applicationDidResignActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillBecomeActive:(id)arg1;
- (void)applicationDidUnhide:(id)arg1;
- (void)applicationWillUnhide:(id)arg1;
- (void)applicationDidHide:(id)arg1;
- (void)applicationWillHide:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)application:(id)arg1 didUpdateUserActivity:(id)arg2;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(id)arg3;
- (BOOL)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)application:(id)arg1 didDecodeRestorableState:(id)arg2;
- (void)application:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (id)application:(id)arg1 willPresentError:(id)arg2;
- (id)applicationDockMenu:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (unsigned long long)application:(id)arg1 printFiles:(id)arg2 withSettings:(id)arg3 showPrintPanels:(BOOL)arg4;
- (BOOL)application:(id)arg1 printFile:(id)arg2;
- (BOOL)application:(id)arg1 openFileWithoutUI:(id)arg2;
- (BOOL)applicationOpenUntitledFile:(id)arg1;
- (BOOL)applicationShouldOpenUntitledFile:(id)arg1;
- (BOOL)application:(id)arg1 openTempFile:(id)arg2;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
@end

