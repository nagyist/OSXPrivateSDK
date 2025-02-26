/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

@class NSArray, NSButton, NSMutableDictionary, NSString, NSView;

@interface IACrossAppSetupViewController : NSViewController
{
    NSString *_appBundleID;
    NSMutableDictionary *_settings;
    id _delegate;
    void *_contextInfo;
    NSString *_providerID;
    NSString *_accountID;
    NSMutableDictionary *_existingAccounts;
    NSMutableDictionary *_checkboxes;
    NSMutableDictionary *_apps;
    NSArray *_topLevelObjects2;
    NSView *_view;
    NSButton *_checkbox1;
    NSButton *_checkbox2;
    NSButton *_checkbox3;
    NSButton *_checkbox4;
    NSButton *_checkbox5;
}

@property(retain) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property(retain) NSMutableDictionary *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)createAccountsWithDelegate:(id)arg1 didCreateSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (BOOL)createAccounts;
- (unsigned long long)numberOfAppsNeedingSetup;
- (id)view;
- (BOOL)_initData;
- (BOOL)_accountIsEnabledForApp:(id)arg1;
- (void)_findAppsForServices;
- (void)_findAccountsMatchingAccountID:(id)arg1;
- (BOOL)_createAccounts;
- (id)_providerIDForSettings:(id)arg1;
- (BOOL)_isCastle;
- (void)_fillInCastleInfo;
- (id)_possibleAppleIDForSettings:(id)arg1;
- (id)_providerIDForServerAddress:(id)arg1;
- (id)initWithSettings:(id)arg1 appBundleID:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

