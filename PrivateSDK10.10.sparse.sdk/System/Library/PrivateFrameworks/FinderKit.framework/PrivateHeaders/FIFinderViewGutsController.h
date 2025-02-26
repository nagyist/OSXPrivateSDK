/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_TViewController.h>

#import "BrowserContainerDelegate-Protocol.h"
#import "BrowserContainerSearching-Protocol.h"
#import "BrowserContainerTargeting-Protocol.h"
#import "FILocationPopUpDelegate-Protocol.h"
#import "NSMenuDelegate-Protocol.h"

@class FIContainerController, FIFinderView, FILocationPopUp, FI_TArrangeByMenuController, NSArray, NSBox, NSSearchField, NSSegmentedControl, NSString, NSView;

// Not exported
@interface FIFinderViewGutsController : FI_TViewController <FILocationPopUpDelegate, NSMenuDelegate, BrowserContainerTargeting, BrowserContainerSearching, BrowserContainerDelegate>
{
    id _mainView;
    id _splitViewHolder;
    NSView *_topBar;
    NSBox *_horizontalLineAtTop;
    NSSearchField *_searchField;
    NSSegmentedControl *_backForward;
    NSSegmentedControl *_viewSwitcher;
    NSSegmentedControl *_arrangeView;
    FILocationPopUp *_locationPopUp;
    FILocationPopUp *_associatedLocationPopup;
    struct TNSRef<FITopBarTitlebarAccessoryViewController *> _topBarTitlebarAccessoryViewController;
    FIContainerController *_activeContainer;
    _Bool _showing;
    FIFinderView *_finderView;
    struct TNSRef<FI_NewFolderController *> _newFolderController;
    struct list<TNSRef<NSURL *>, std::__1::allocator<TNSRef<NSURL *>>> _pendingTargetURLQueue;
    struct TNSRef<NSURL *> _lastTargetedURL;
    _Bool _synchronousTargeting;
    _Bool _reloadIsPending;
    struct TNSRef<NSArray *> _pendingSelectedURLs;
    struct TNSRef<NSArray *> _ubiquityContainerURLs;
    struct TFENodeVector _targetPath;
    unsigned long long _mediaBrowserShownTypes;
    _Bool _pendingSelectFirstKeyView;
    _Bool _expanded;
    _Bool _isPopulationInProgress;
    FI_TArrangeByMenuController *_arrangeByMenuController;
    NSString *_pendingViewStyle;
    NSString *_previousViewStyle;
    _Bool _treatsFilePackagesAsDirectories;
    _Bool _resolvesAliases;
    _Bool _canClickDisabledFiles;
    _Bool _allowsExpandingMultipleDirectories;
    _Bool _updatingTargetPath;
    _Bool _allowsMultipleSelection;
    _Bool _alreadySetIsSavePanel;
    _Bool _isSavePanel;
    _Bool _showsNewDocumentButton;
    _Bool _binding;
}

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (_Bool)shouldForwardSelectorToContainer:(SEL)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)setControllerCurrentlyCreatingView:(id)arg1;
+ (id)controllerCurrentlyCreatingView;
+ (struct TFENode)fallbackTargetNode;
+ (_Bool)windowIsSavePanel:(id)arg1;
+ (void)finalizeCounted;
+ (void)initializeCounted;
+ (void)initialize;
@property(readonly, nonatomic) _Bool isPopulationInProgress; // @synthesize isPopulationInProgress=_isPopulationInProgress;
@property(readonly, nonatomic) _Bool showing; // @synthesize showing=_showing;
@property(readonly, nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(readonly, nonatomic) _Bool reloadIsPending; // @synthesize reloadIsPending=_reloadIsPending;
@property(nonatomic) _Bool isSavePanel; // @synthesize isSavePanel=_isSavePanel;
@property(nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property(retain, nonatomic) NSString *previousViewStyle; // @synthesize previousViewStyle=_previousViewStyle;
@property(retain, nonatomic) NSString *pendingViewStyle; // @synthesize pendingViewStyle=_pendingViewStyle;
@property(nonatomic) _Bool binding; // @synthesize binding=_binding;
@property(retain, nonatomic) FIContainerController *activeContainer; // @synthesize activeContainer=_activeContainer;
@property(nonatomic) FIFinderView *finderView; // @synthesize finderView=_finderView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)containerCloseContainer:(id)arg1;
- (void)container:(id)arg1 updateWindowSize:(struct CGSize)arg2;
- (void)container:(id)arg1 updateWindowFrame:(struct CGRect)arg2;
- (void)containerWindowDidChange:(id)arg1;
- (void)containerContentChanged:(id)arg1;
- (void)containerSelectionChanged:(id)arg1;
- (_Bool)containerInBrowseMode:(id)arg1;
- (id)containerWindowState:(id)arg1;
- (id)windowState;
- (id)containerParentView:(id)arg1;
- (id)containerWindow:(id)arg1;
- (void)toolbarUpdateForSplitterChange;
- (id)toolbarHistorySearchTemplate;
- (_Bool)toolbarMakeSearchFieldFirstResponder;
- (id)toolbarSearchField;
- (_Bool)toolbarSearchFieldIsVisible;
- (id)containerQuerySearchUTIs:(id)arg1;
- (void)containerForgetSpringState:(id)arg1;
- (void)container:(id)arg1 adjustProposedTargetPath:(struct TFENodeVector *)arg2;
- (void)containerTargetDidChange:(id)arg1;
- (void)containerTargetWillChange:(id)arg1;
- (void)containerViewStyleChanged:(id)arg1;
- (_Bool)shouldShowBottombarForTarget:(const struct TFENode *)arg1;
- (_Bool)quickLookShouldShowOpenButtonForNode:(const struct TFENode *)arg1;
- (void)openQuickLookNode:(const struct TFENode *)arg1;
- (_Bool)shouldTypeSelectForEvent:(id)arg1 withCurrentSearchString:(id)arg2;
- (_Bool)allowsBrowsingPackages;
- (_Bool)canBrowseNode:(const struct TFENode *)arg1;
- (_Bool)shouldEnableTagsButton;
- (void)cmdEditTagsInOpenPanel:(id)arg1;
- (void)cacheTagsButton:(id)arg1;
- (id)viewSwitcher;
- (_Bool)shouldShowViewSwitcher;
- (void)cacheViewSwitcher:(id)arg1;
- (void)unbindViewSwitcher;
- (void)bindViewSwitcher;
- (_Bool)shouldEnableShareButton;
- (void)shareWithSharingService:(id)arg1;
- (void)cacheShareButton:(id)arg1;
- (void)associateWithLocationPopUp:(id)arg1;
- (void)_configureSidebarForMediaBrowserTypes;
- (void)setMediaBrowserShownTypes:(unsigned long long)arg1;
- (id)_sidebarViewController;
- (BOOL)previewPanel:(id)arg1 shouldShowOpenButtonForItem:(id)arg2;
- (id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)seamlessOpener:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)selectedSeamlessOpenerPreviewItems;
- (void)disableHistoryAndDoWork:(id)arg1;
- (id)defaultDirectoryURL;
- (_Bool)showGotoWithInitialFilename:(id)arg1;
- (void)_delegateConfigureForGotoWithFilename:(id)arg1;
- (void)finderLocationPopUpWillDisplay:(id)arg1;
- (struct TString)extensionForPanel:(id)arg1;
- (void)cmdToggleFinderKitSidebar:(id)arg1;
- (_Bool)finderLocationPopUpSidebarIsShowing:(id)arg1;
- (_Bool)finderLocationPopUpWantsSidebarMenuItem:(id)arg1;
- (id)finderLocationPopUpRequestRecentPlaces:(id)arg1;
- (void)finderLocationPopUp:(id)arg1 didChangeToDirectoryURL:(id)arg2;
- (void)copySearchFieldFromOther:(id)arg1;
- (void)searchTextChanged:(id)arg1;
- (void)configureWindowForContentChange;
- (_Bool)inBrowseMode;
- (void)searchFieldCancel;
- (void)_windowDidResize:(id)arg1;
- (void)_windowDidEndLiveResize:(id)arg1;
- (void)_windowWillStartLiveResize:(id)arg1;
- (void)saveQuery:(_Bool)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (_Bool)containerValidateToolbarItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)selectFirstKeyView;
- (_Bool)sidebarContainsURL:(id)arg1;
- (void)refreshContents;
- (_Bool)isNewFolderDialogRunning;
- (_Bool)canSaveNewDocument;
- (_Bool)canCreateNewFolder;
- (_Bool)makeNewFolderForSavePanel:(id)arg1;
- (_Bool)hidesSharedSection;
- (void)setHidesSharedSection:(_Bool)arg1;
- (void)setAllowsExpandingMultipleDirectories:(_Bool)arg1;
- (_Bool)allowsExpandingMultipleDirectories;
- (void)clickedOnDisabledNode:(const struct TFENode *)arg1;
- (_Bool)canClickDimmedNodes;
- (void)setCanClickDisabledFiles:(_Bool)arg1;
- (_Bool)canClickDisabledFiles;
- (void)setResolvesAliases:(_Bool)arg1;
- (_Bool)resolvesAliases;
- (void)setTreatsFilePackagesAsDirectories:(_Bool)arg1;
- (_Bool)treatsFilePackagesAsDirectories;
- (void)setShowsHiddenFiles:(_Bool)arg1;
- (_Bool)showsHiddenFiles;
- (id)rootDirectoryURL;
- (id)directoryURL;
- (void)setRootDirectoryURL:(id)arg1;
- (void)setDirectoryURL:(id)arg1;
- (void)reloadView;
- (void)urlResolutionCompleted:(id)arg1;
- (void)handleInitialTargeting:(id)arg1;
- (void)deferredRetargetAndReload;
- (void)deferredRetargetAndReloadForNode:(struct TFENode)arg1;
- (id)viewStyle;
- (void)_changeMediaBrowserTypeTo:(unsigned long long)arg1;
- (_Bool)arrangeByEnabled;
- (_Bool)viewSwitcherEnabled;
- (void)_notifyDelegateViewStyleChanged;
- (void)backForwardClicked:(id)arg1;
- (id)topBar;
- (void)adjustTopBar;
- (void)adjustBackForwardSegments;
- (_Bool)allowBackForward;
- (void)setTargetPath:(const struct TFENodeVector *)arg1 withViewStyle:(id)arg2;
- (void)historyBeginsNow;
- (void)_internalSetTargetPath:(const struct TFENodeVector *)arg1 withViewStyle:(id)arg2;
- (Class)browserContainerClass;
- (id)_convertViewStyle:(id)arg1 forTargetPath:(const struct TFENodeVector *)arg2;
- (void)setTargetNode:(const struct TFENode *)arg1 withViewStyle:(id)arg2;
- (struct TFENode)validateCloudTarget:(const struct TFENode *)arg1;
- (void)setTargetNode:(const struct TFENode *)arg1;
- (void)updateTitle;
- (double)fauxToolbarHeightForAppCentric:(BOOL)arg1 runningAsAService:(BOOL)arg2;
- (void)setIsPopulationInProgress:(_Bool)arg1;
- (void)tellDelegatePopulationInProgress:(_Bool)arg1;
- (_Bool)canSelectNode:(const struct TFENode *)arg1;
- (_Bool)panelDisableNode:(const struct TFENode *)arg1;
- (_Bool)containerIsCompatibleWithSavePanel:(const struct TFENode *)arg1;
- (_Bool)urlIsDimmed:(id)arg1;
- (_Bool)nodeIsDimmed:(const struct TFENode *)arg1;
- (struct TFENode)_quickFollowAliasChainForNode:(const struct TFENode *)arg1;
- (void)openLocation:(const struct TFENode *)arg1 origin:(shared_ptr_524a2e6c)arg2;
- (struct TFENode)target;
- (void)didChangeSelection;
- (void)didChangeTarget;
- (void)openSelection;
- (_Bool)_delegateHandleOpenSelection;
- (_Bool)_goIntoSelectedFolder;
- (_Bool)_goUpToParentFolder;
@property(copy, nonatomic) NSArray *selectedURLs; // @dynamic selectedURLs;
- (_Bool)_canSelectURL:(id)arg1 itemIsContainer:(_Bool)arg2 itemIsPackage:(_Bool)arg3;
- (_Bool)_canSelectURL:(id)arg1;
- (void)ubiquityIdentityChanged:(id)arg1;
- (_Bool)targetingICloud;
@property(copy, nonatomic) NSArray *ubiquityContainerURLs; // @dynamic ubiquityContainerURLs;
- (id)fileURLOrNil:(id)arg1;
- (const struct TFENodeVector *)targetPath;
- (struct TFENode)targetNode;
- (void)_didResolveNode:(id)arg1;
- (void)_replaceUnresolvedTarget:(const struct TFENode *)arg1 withTarget:(const struct TFENode *)arg2;
- (void)_searchFieldCancelButton:(id)arg1;
- (id)window;
- (void)finalize;
- (void)dealloc;
- (void)aboutToDestroyBrowserView;
- (void)viewDidMoveToWindow;
- (void)setExpanded:(_Bool)arg1;
- (void)windowOrderedOut;
- (void)windowOrderedIn;
- (void)windowWillOrderOnScreen;
- (void)prepareToHide;
- (void)prepareToShow;
@property(nonatomic) _Bool showsNewDocumentButton; // @dynamic showsNewDocumentButton;
- (_Bool)shouldShowAllMyFiles;
- (_Bool)sidebarInitiallyVisible;
- (id)activeLocationPopUp;
- (void)configureForOptions:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)moreInitialization;
- (id)nibName;
- (void)setInitialTarget;
- (struct TFENode)_initialTargetNode;
- (void)forceContainerToExist;
@property(readonly, nonatomic) _Bool downloadsUbiquitousContents;
- (long long)windowNumber;
- (id)activeBrowserViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

