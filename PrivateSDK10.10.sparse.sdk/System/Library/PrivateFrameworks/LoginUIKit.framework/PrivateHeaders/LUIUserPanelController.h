/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <LoginUIKit/LUIPanelController.h>

@class LUIEffectsButton, LUISecureTextFieldView, NSImageView, NSTextField;

@interface LUIUserPanelController : LUIPanelController
{
    NSImageView *_userPictureImageView;
    NSTextField *_userNameTextField;
    LUISecureTextFieldView *_userPasswordTextField;
    LUIEffectsButton *_backButton;
}

- (void)dealloc;
- (id)initWithStyle:(int)arg1;
- (id)viewForPopover;
- (void)setSecureTextFieldUsesHint:(BOOL)arg1;
- (void)setSecureTextFieldMode:(int)arg1;
- (struct CGPoint)pointForPopover:(int)arg1;
- (struct CGRect)progressRect;
- (void)setSecurityTextFieldPlaceholderString:(id)arg1;
- (void)setFocusOn:(int)arg1 forced:(BOOL)arg2;
- (void)shake;
- (void)refresh;
- (void)setUIEnabled:(BOOL)arg1;
- (void)setBackButtonHidden:(BOOL)arg1;
- (void)forceDrawFocusRing;
- (void)forceClearFocusRing;
- (void)setUserNameHidden:(BOOL)arg1;
- (void)setUserImageHidden:(BOOL)arg1;
- (void)setSecureTextFieldHidden:(BOOL)arg1;
- (BOOL)secureTextFieldIsHidden;
- (id)secureTextField;
- (id)userName;
- (void)setUserName:(id)arg1;
- (void)setUserImage:(id)arg1;
- (void)resetNameAndPassword;
- (void)_setupContentView;
- (void)_layoutContentView;
- (void)goButtonPressed:(id)arg1;
- (void)_backButtonPressed:(id)arg1;

@end

