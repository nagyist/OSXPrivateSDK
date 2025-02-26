/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FIFinderViewGutsController.h>

@class FI_TView, NSBox, NSLayoutConstraint, NSSegmentedControl, NSView, NSVisualEffectView;

// Not exported
@interface FIFinderViewAppCentricGutsController : FIFinderViewGutsController
{
    NSView *_topBarContainerView;
    NSVisualEffectView *_visualEffectView;
    struct TNSRef<FIScrollViewMirrorView *> _browserViewMirrorView;
    struct TNSRef<FIScrollViewMirrorView *> _sidebarMirrorView;
    struct vector<TNSRef<FIScrollViewMirrorView *>, std::__1::allocator<TNSRef<FIScrollViewMirrorView *>>> _columnViewMirrorViews;
    struct TNSRef<FIMouseDownCanMoveWindowClipView *> _columnViewMirrorViewClipView;
    struct TNotificationCenterObserver _columnViewBoundsChangeObserver;
    struct TNotificationCenterObserver _columnViewDidAddColumnObserver;
    struct TNotificationCenterObserver _columnViewDidSetLastColumnObserver;
    struct TNSRef<NSLayoutConstraint *> _sidebarMirrorViewEqualWidthConstraint;
    struct TNSRef<NSLayoutConstraint *> _browserViewMirrorViewEqualWidthConstraint;
    NSBox *_bottomLine;
    NSSegmentedControl *_toggleSidebarButton;
    NSSegmentedControl *_topBarEditTagsButton;
    NSSegmentedControl *_topBarSharingButton;
    NSLayoutConstraint *_backForwardWidthConstraint;
    NSLayoutConstraint *_backForwardLeadingConstraint;
    double _backForwardWidthConstant;
    double _backForwardLeadingConstant;
    NSSegmentedControl *_bottomBarViewSwitcher;
    _Bool _showBackForward;
    _Bool _showingAllTopBarItems;
    FI_TView *_popoverView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)containerTargetDidChange:(id)arg1;
- (id)finderLocationPopUpRequestRecentPlaces:(id)arg1;
- (void)finderLocationPopUp:(id)arg1 didChangeToDirectoryURL:(id)arg2;
- (_Bool)shouldShowAllMyFiles;
- (void)setTargetPath:(const struct TFENodeVector *)arg1 withViewStyle:(id)arg2;
- (_Bool)sidebarInitiallyVisible;
- (void)unbindViewSwitcher;
- (void)bindViewSwitcher;
- (void)cacheShareButton:(id)arg1;
- (void)cacheTagsButton:(id)arg1;
- (_Bool)shouldShowViewSwitcher;
- (void)cacheViewSwitcher:(id)arg1;
- (void)configureViewSwitcher;
- (_Bool)shouldEnableShareButton;
- (void)showUbiquityStatus;
- (void)updateUbiquityStatus;
- (_Bool)hasUbiquityError;
- (void)unregisterForUbiquityStatus;
- (void)registerForUbiquityStatus;
- (void)viewDidMoveToWindow;
- (void)adjustBackForwardSegments;
- (void)containerContentChanged:(id)arg1;
- (_Bool)adjustTopBarViewSwitcher;
- (void)adjustTopBar;
- (void)configureWindowForContentChange;
- (void)_configureMirrorViews;
- (void)_configureSidebarMirrorViewWidthConstraint:(id)arg1;
- (void)_configureMirrorViewForBrowserColumnView:(id)arg1;
- (void)didChangeSelection;
- (struct TMDQueryAliasNode *)userSearchTarget;
- (void)moreInitialization;
- (void)updateICloudButtonImage;
- (void)setIsSavePanel:(_Bool)arg1;
- (struct TString)clientAppName;
- (void)prepareToHide;
- (void)prepareToShow;
- (void)didSetLastColumn;
- (void)didAddColumn;
- (void)columnViewContentViewBoundsChanged;
- (void)dealloc;
- (void)aboutToDestroyBrowserView;
- (void)_tearDownMirrorViews;
- (struct TFENode)_initialTargetNode;
- (Class)browserContainerClass;
- (id)initWithView:(id)arg1;
- (id)sidebarSplitView;
- (id)viewStyle;
- (void)refreshSearchScopeButtons;
- (void)iCloudModeChanged;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)viewLoaded;
- (id)nibName;

@end

