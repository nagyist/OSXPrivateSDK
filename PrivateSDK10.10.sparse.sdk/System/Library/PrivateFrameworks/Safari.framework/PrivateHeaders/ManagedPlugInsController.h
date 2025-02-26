/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ManagedPlugIn, NSMutableDictionary;

// Not exported
@interface ManagedPlugInsController : NSObject
{
    BOOL _didGetManagedPlugIns;
    NSMutableDictionary *_plugIns;
    ManagedPlugIn *_javaPlugIn;
}

+ (id)plugInNameForBundleIdentifier:(id)arg1;
+ (BOOL)isPlugInHidden:(id)arg1;
+ (BOOL)isJavaPlugIn:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_hostPolicyForPlugInWithInfo:(id)arg1;
- (id)_blockedPlugInWithInfo:(id)arg1 plugInWasCreated:(char *)arg2;
- (void)_loadLegacyUserDefaultsPoliciesForJavaPlugIn:(id)arg1;
- (void)_setUpPlugIn:(id)arg1 withUserDefaults:(id)arg2 isManagedByAdmin:(BOOL)arg3;
- (void)_loadUserDefaultsPoliciesForPlugIn:(id)arg1;
- (void)reloadPlugInPoliciesFromUserDefaults;
- (void)savePlugInPoliciesToUserDefaults;
- (void)_removeDataForExpiredPlugIns;
- (void)removePlugInDataRelatedToPageWithURL:(id)arg1;
- (void)clearAllBlockPolicies;
- (void)clearAllPlugInPolicies;
- (void)_updateBlockedPlugInsUsingBlock:(id)arg1;
- (void)_enumeratePlugInsUsingBlock:(id)arg1;
- (void)_showPromptBeforeUseSheetForPlugInHostPolicy:(id)arg1 inBrowserContentViewController:(struct BrowserContentViewController *)arg2 forVisiblePlugInPlaceholder:(BOOL)arg3;
- (void)_setDidShowUnavailableDialogForManagedPlugIn:(id)arg1;
- (BOOL)_didShowInitializationErrorDialogForManagedPlugInWithInfo:(id)arg1 inBrowserContentViewController:(struct BrowserContentViewController *)arg2;
- (void)showInitializationErrorDialogIfNecessaryForManagedPlugInWithInfo:(id)arg1 inBrowserContentViewController:(struct BrowserContentViewController *)arg2;
- (void)showDialogIfNecessaryForManagedPlugInWithInfo:(id)arg1 inBrowserContentViewController:(struct BrowserContentViewController *)arg2;
- (id)managedPlugInHostPolicyForBrowserContentViewController:(struct BrowserContentViewController *)arg1;
- (void)browserContentViewControllerWillClose:(struct BrowserContentViewController *)arg1;
- (void)browserContentViewController:(struct BrowserContentViewController *)arg1 didFinishUsingPlugInOnPageWithURL:(id)arg2;
- (unsigned int)loadPolicyForPlugInInfo:(id)arg1 inBrowserContentViewController:(struct BrowserContentViewController *)arg2 unavailabilityDescription:(id *)arg3;
- (void)getManagedPlugInsUsingBlock:(id)arg1;
- (void)populateManagedPlugInsIfNecessaryUsingCompletionHandler:(id)arg1;
- (void)dealloc;
- (id)init;

@end

