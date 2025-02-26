/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUIMac/GKCollectionViewController.h>

#import "GKSegmentedSectionDataSourceEventHandler-Protocol.h"
#import "NSUICollectionViewDelegate-Protocol.h"

@class GKAchievementPointsDataSource, GKCollectionViewAggregateDataSource, GKFriendRecommendationsDataSource, GKFriendRequestSynopsisDataSource, GKFriendsDataSource, GKPlayer, GKSegmentedSectionDataSource, NSString, NSViewController;

@interface GKFriendsViewController : GKCollectionViewController <GKSegmentedSectionDataSourceEventHandler, NSUICollectionViewDelegate>
{
    BOOL _shouldUpdateContentOnlyWhenAuthenticated;
    BOOL _isDisplayingPlayerNotInList;
    GKPlayer *_selectedPlayer;
    GKFriendRequestSynopsisDataSource *_friendRequestSynopsisDataSource;
    GKSegmentedSectionDataSource *_friendsDataSource;
    GKFriendsDataSource *_atozDataSource;
    GKFriendsDataSource *_recentDataSource;
    GKFriendRecommendationsDataSource *_recsDataSource;
    GKCollectionViewAggregateDataSource *_pointsDataSource;
    GKAchievementPointsDataSource *_globalPointsDataSource;
    GKAchievementPointsDataSource *_friendsPointsDataSource;
    NSViewController *_popoverDetailViewController;
    id _deferredPresentRequestsBlock;
    struct CGSize _popoverPreferredSize;
}

+ (id)friendsControllerForLocalPlayer;
@property(copy, nonatomic) id deferredPresentRequestsBlock; // @synthesize deferredPresentRequestsBlock=_deferredPresentRequestsBlock;
@property struct CGSize popoverPreferredSize; // @synthesize popoverPreferredSize=_popoverPreferredSize;
@property(retain) NSViewController *popoverDetailViewController; // @synthesize popoverDetailViewController=_popoverDetailViewController;
@property(nonatomic) BOOL isDisplayingPlayerNotInList; // @synthesize isDisplayingPlayerNotInList=_isDisplayingPlayerNotInList;
@property(retain, nonatomic) GKAchievementPointsDataSource *friendsPointsDataSource; // @synthesize friendsPointsDataSource=_friendsPointsDataSource;
@property(retain, nonatomic) GKAchievementPointsDataSource *globalPointsDataSource; // @synthesize globalPointsDataSource=_globalPointsDataSource;
@property(retain, nonatomic) GKCollectionViewAggregateDataSource *pointsDataSource; // @synthesize pointsDataSource=_pointsDataSource;
@property(retain, nonatomic) GKFriendRecommendationsDataSource *recsDataSource; // @synthesize recsDataSource=_recsDataSource;
@property(retain, nonatomic) GKFriendsDataSource *recentDataSource; // @synthesize recentDataSource=_recentDataSource;
@property(retain, nonatomic) GKFriendsDataSource *atozDataSource; // @synthesize atozDataSource=_atozDataSource;
@property(retain, nonatomic) GKSegmentedSectionDataSource *friendsDataSource; // @synthesize friendsDataSource=_friendsDataSource;
@property(retain, nonatomic) GKFriendRequestSynopsisDataSource *friendRequestSynopsisDataSource; // @synthesize friendRequestSynopsisDataSource=_friendRequestSynopsisDataSource;
@property(retain, nonatomic) GKPlayer *selectedPlayer; // @synthesize selectedPlayer=_selectedPlayer;
@property(nonatomic) BOOL shouldUpdateContentOnlyWhenAuthenticated; // @synthesize shouldUpdateContentOnlyWhenAuthenticated=_shouldUpdateContentOnlyWhenAuthenticated;
- (void)segmentedSectionDataSource:(id)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3;
- (void)segmentedSectionDataSource:(id)arg1 segmentedHeaderDidLoad:(id)arg2;
- (void)showFriendRequest:(id)arg1;
- (void)showFriendRequestForPlayerID:(id)arg1;
- (void)popToRootAndShowNonFriendPlayer:(id)arg1;
- (void)showScore:(id)arg1 inLeaderboard:(id)arg2 orAchievement:(id)arg3 forGameRecord:(id)arg4 purchasableGame:(BOOL)arg5;
- (void)showAchievement:(id)arg1 forGameRecord:(id)arg2 purchasableGame:(BOOL)arg3;
- (void)showScore:(id)arg1 inLeaderboard:(id)arg2 forGameRecord:(id)arg3 purchasableGame:(BOOL)arg4;
- (void)displayPlayerWithID:(id)arg1 withCompletionHandler:(id)arg2;
- (id)separateSecondaryViewControllerForSplitViewController:(id)arg1;
- (void)showRequestsAnimated:(BOOL)arg1 pushRequestForPlayer:(id)arg2;
- (void)showRequestsAnimated:(BOOL)arg1;
- (void)showRequests;
- (void)showFriendOfFriend:(id)arg1 indexPath:(id)arg2 highlightTarget:(id)arg3 sender:(id)arg4;
- (void)localPlayerDidChange:(id)arg1;
- (void)dismissDetailViewController;
- (void)showDetailPopover:(id)arg1 inViewController:(id)arg2 withPopoverFromView:(id)arg3 size:(struct CGSize)arg4;
- (void)updateDetailPresenterSize;
- (void)addFriend;
- (void)didTouchShowAllWithSectionIndex:(unsigned long long)arg1;
- (void)selectPlayer:(id)arg1 animated:(BOOL)arg2;
- (void)selectPlayer:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)didEnterNoContentState;
- (void)loadDataWithCompletionHandlerAndError:(id)arg1;
- (id)playerToSelect;
- (id)indexPathForPlayer:(id)arg1;
- (void)showPlayer:(id)arg1 forViewController:(id)arg2 animated:(BOOL)arg3;
- (id)viewControllerForPlayer:(id)arg1 sender:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)didTouchShowcaseFriends:(id)arg1;
- (void)didTouchShowcaseGlobal:(id)arg1;
- (void)didTouchShowMoreGlobal:(id)arg1;
- (void)didTouchShowMoreFriends:(id)arg1;
- (void)updateMetrics;
- (void)updateShowcaseCellMetrics;
- (void)updateAddButtonMetrics;
- (void)configureAddButtonHeader:(id)arg1;
- (void)configurePointsUnderlineSectionHeader:(id)arg1 indexPath:(id)arg2;
- (void)configureFormatterSectionHeader:(id)arg1;
- (void)configureRecsSectionHeader:(id)arg1;
- (void)configureShowMoreHeader:(id)arg1;
- (void)configureViewFactories;
- (void)configureDataSource;
- (void)addShowcaseCellToMetrics:(id)arg1;
- (id)preservedIndexPathForSelectedItem;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

