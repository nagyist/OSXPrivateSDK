/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

#import "MBUIDelegate-Protocol.h"
#import "MBWebKitViewControllerDelegate-Protocol.h"

@class MMMBWebKitViewController, NSString, NSView, NSWindow;

@interface SMiCloudLoginController : NSViewController <MBUIDelegate, MBWebKitViewControllerDelegate>
{
    BOOL _leftNavigationEnabled;
    BOOL _rightNavigationEnabled;
    NSString *_titleText;
    NSString *_messageText;
    NSString *_leftNavigationText;
    NSString *_rightNavigationText;
    NSView *_webViewContainer;
    NSString *_username;
    NSString *_password;
    MMMBWebKitViewController *_iCloudWebView;
    NSWindow *_window;
    id _replyBlock;
}

@property(copy) id replyBlock; // @synthesize replyBlock=_replyBlock;
@property __weak NSWindow *window; // @synthesize window=_window;
@property(retain) MMMBWebKitViewController *iCloudWebView; // @synthesize iCloudWebView=_iCloudWebView;
@property(copy) NSString *password; // @synthesize password=_password;
@property(copy) NSString *username; // @synthesize username=_username;
@property __weak NSView *webViewContainer; // @synthesize webViewContainer=_webViewContainer;
@property BOOL rightNavigationEnabled; // @synthesize rightNavigationEnabled=_rightNavigationEnabled;
@property BOOL leftNavigationEnabled; // @synthesize leftNavigationEnabled=_leftNavigationEnabled;
@property(copy) NSString *rightNavigationText; // @synthesize rightNavigationText=_rightNavigationText;
@property(copy) NSString *leftNavigationText; // @synthesize leftNavigationText=_leftNavigationText;
@property(copy) NSString *messageText; // @synthesize messageText=_messageText;
@property(copy) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)mbWebkitViewTermsAndConditions:(id)arg1 completionHandler:(id)arg2;
- (void)mbWebkitViewControllerDidFail:(id)arg1 error:(id)arg2;
- (void)mbWebkitViewControllerDidFinishLoading:(id)arg1;
- (void)mbWebkitViewControllerDidSucceed:(id)arg1;
- (void)mbWebkitViewControllerDidDismiss:(id)arg1 reason:(id)arg2;
- (void)mbWebkitViewControllerDidCancel:(id)arg1;
- (void)mbWebkitViewSetRightNavigationButtonEnabled:(BOOL)arg1;
- (void)mbWebkitViewSetRightNavigationButtonTitle:(id)arg1;
- (void)mbWebkitViewSetLeftNavigationButtonEnabled:(BOOL)arg1;
- (void)mbWebkitViewSetLeftNavigationButtonTitle:(id)arg1;
- (void)mbWebkitViewSetWindowMessage:(id)arg1;
- (void)mbWebkitViewSetWindowTitle:(id)arg1;
- (void)signalCompletionWithSuccess:(BOOL)arg1;
- (void)repairFlow:(id)arg1;
- (void)authenticateComplete:(id)arg1;
- (void)stopObservingiCloudResponses;
- (void)startObservingiCloudResponses;
- (void)signInWithUsername:(id)arg1 andPassword:(id)arg2 overWindow:(id)arg3 withCompletionHandler:(id)arg4;
- (id)iCloudDelegateRequest;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

