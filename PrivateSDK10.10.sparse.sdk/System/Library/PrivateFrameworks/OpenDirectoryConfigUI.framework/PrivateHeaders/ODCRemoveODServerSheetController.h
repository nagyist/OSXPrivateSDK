/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSAlert, NSButton, NSDictionary, NSProgressIndicator, NSTextField, NSView, NSWindow, ODCRemoveODServerAction, ODCServersViewController, SFAuthorizationView;

@interface ODCRemoveODServerSheetController : NSObject
{
    NSWindow *_docWindow;
    SFAuthorizationView *_authView;
    NSDictionary *_serverDict;
    ODCServersViewController *_serversViewController;
    NSWindow *_sheet;
    NSAlert *_alert;
    ODCRemoveODServerAction *_action;
    NSButton *_removeButton;
    NSButton *_cancelButton;
    NSView *_accessoryView;
    NSProgressIndicator *_spinner;
    NSTextField *_progressLabel;
}

@property ODCRemoveODServerAction *action; // @synthesize action=_action;
- (void)buttonHit:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithServerDict:(id)arg1 modalForWindow:(id)arg2 authView:(id)arg3 serversViewController:(id)arg4;
- (void)showErrorAlertAndReleaseSelf:(id)arg1;
- (void)actionDidFinish:(id)arg1;
- (void)setControlsEnabled:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

