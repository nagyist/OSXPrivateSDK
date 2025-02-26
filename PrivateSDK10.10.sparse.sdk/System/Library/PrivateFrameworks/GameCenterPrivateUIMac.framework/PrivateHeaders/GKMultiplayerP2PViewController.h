/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUIMac/GKMultiplayerViewController.h>

@class GKInvite;

@interface GKMultiplayerP2PViewController : GKMultiplayerViewController
{
    BOOL _hosted;
    id <GKMultiplayerP2PViewControllerDelegate> _delegateWeak;
    id <GKNearbyBrowserDelegate> _nearbyDelegate;
    long long _mode;
    GKInvite *_acceptedInvite;
}

@property(copy, nonatomic) GKInvite *acceptedInvite; // @synthesize acceptedInvite=_acceptedInvite;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) id <GKNearbyBrowserDelegate> nearbyDelegate; // @synthesize nearbyDelegate=_nearbyDelegate;
@property(nonatomic, getter=isHosted) BOOL hosted; // @synthesize hosted=_hosted;
- (void)cancelAlertWithoutDelegateCallback;
- (void)showAutomatchingErrorAlert;
- (void)showInviterDisconnectedAlert;
- (void)processStatusUpdateMessageFromBytes:(const char *)arg1 withLength:(unsigned int)arg2;
- (void)sendStatusUpdate;
- (void)playerDisconnected:(id)arg1;
- (void)startGameWithDelay;
- (void)playerConnected:(id)arg1;
- (void)removedPlayer:(id)arg1;
- (void)cancelPendingInvites;
- (void)invitePlayers:(id)arg1;
- (void)willPresentPlayerPicker:(id)arg1;
- (void)startGame;
- (void)playNow;
- (void)applicationWillEnterForeground;
- (void)inviterCancelled;
- (void)setFailedWithError:(id)arg1;
- (void)setAutomatchFailedWithError:(id)arg1;
- (void)setInvitesFailedWithError:(id)arg1;
- (void)setPlayer:(id)arg1 sentData:(id)arg2;
- (void)setPlayer:(id)arg1 connected:(BOOL)arg2;
- (void)setPlayer:(id)arg1 responded:(long long)arg2;
- (void)setAutomatchPlayerCount:(long long)arg1;
- (void)setExistingPlayers:(id)arg1;
- (BOOL)havePendingPlayers;
- (BOOL)haveInvitedPlayers;
- (void)finishWithError:(id)arg1;
- (void)cancel;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)configureDataSource;
@property(nonatomic) id <GKMultiplayerP2PViewControllerDelegate> delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;
- (id)initWithAcceptedInvite:(id)arg1;

@end

