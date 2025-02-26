/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewService.h"

#import "SHKClientWindowSyncDelegate-Protocol.h"
#import <ShareKit/SHKSharingViewService-Protocol.h>

@class NSImageView, NSMutableArray, NSSharingUIExtensionContext, NSString, NSUUID, NSView, NSWindow, SHKAutoLayoutConstraintPair, SHKBlockQueue;

@interface SHKSharingViewService : NSViewService <SHKClientWindowSyncDelegate, SHKSharingViewService>
{
    BOOL _draggable;
    BOOL _animatesLikeMarkup;
    BOOL _animateMarkupWithoutImageCopy;
    BOOL _serviceUsesAutoLayout;
    unsigned long long _serviceMask;
    NSView *_containerView;
    NSView *_backgroundView;
    NSWindow *_window;
    NSUUID *_uuid;
    NSSharingUIExtensionContext *_extensionContext;
    NSImageView *_itemImageView;
    NSView *_itemBorderView;
    NSMutableArray *_queuedSharingAnimations;
    id _closingFinishedBlock;
    SHKBlockQueue *_animationBlockQueue;
    SHKBlockQueue *_completionBlockQueue;
    SHKAutoLayoutConstraintPair *_sameCenterConstraints;
    SHKAutoLayoutConstraintPair *_fixedDimensionsContainerConstraints;
    SHKAutoLayoutConstraintPair *_fixedDimensionsBackgroundConstraints;
    struct CGPoint _originOffset;
}

@property(retain) SHKAutoLayoutConstraintPair *fixedDimensionsBackgroundConstraints; // @synthesize fixedDimensionsBackgroundConstraints=_fixedDimensionsBackgroundConstraints;
@property(retain) SHKAutoLayoutConstraintPair *fixedDimensionsContainerConstraints; // @synthesize fixedDimensionsContainerConstraints=_fixedDimensionsContainerConstraints;
@property(retain) SHKAutoLayoutConstraintPair *sameCenterConstraints; // @synthesize sameCenterConstraints=_sameCenterConstraints;
@property(retain) SHKBlockQueue *completionBlockQueue; // @synthesize completionBlockQueue=_completionBlockQueue;
@property(retain) SHKBlockQueue *animationBlockQueue; // @synthesize animationBlockQueue=_animationBlockQueue;
@property(copy) id closingFinishedBlock; // @synthesize closingFinishedBlock=_closingFinishedBlock;
@property(retain) NSMutableArray *queuedSharingAnimations; // @synthesize queuedSharingAnimations=_queuedSharingAnimations;
@property(retain) NSView *itemBorderView; // @synthesize itemBorderView=_itemBorderView;
@property(retain) NSImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
@property BOOL serviceUsesAutoLayout; // @synthesize serviceUsesAutoLayout=_serviceUsesAutoLayout;
@property BOOL animateMarkupWithoutImageCopy; // @synthesize animateMarkupWithoutImageCopy=_animateMarkupWithoutImageCopy;
@property BOOL animatesLikeMarkup; // @synthesize animatesLikeMarkup=_animatesLikeMarkup;
@property struct CGPoint originOffset; // @synthesize originOffset=_originOffset;
@property __weak NSSharingUIExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain) NSWindow *window; // @synthesize window=_window;
@property(retain) NSView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) NSView *containerView; // @synthesize containerView=_containerView;
@property unsigned long long serviceMask; // @synthesize serviceMask=_serviceMask;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)clientHasSourceWindow;
- (BOOL)isInNotificationCenter;
- (void)proceedWithSharingTransitionOutWithSuccess:(BOOL)arg1 duration:(double)arg2;
- (void)animateClosingWithSuccess:(BOOL)arg1 finishedBlock:(id)arg2;
- (id)animatingItemsAndSetHasAtLeastOneFinalImage:(char *)arg1;
- (struct CGRect)finalImageFrameForSharingItemProvider:(id)arg1 imageContentFrame:(struct CGRect)arg2 bloggingController:(id)arg3 transitionFrame:(struct CGRect)arg4;
- (struct CGRect)initialWindowFrameForSourceFrameForWindow:(struct CGRect)arg1 forWindowFrame:(struct CGRect)arg2;
- (struct CGRect)sourceFrameForViewControllerView:(id)arg1;
- (void)proceedWithSharingTransitionIn;
- (struct CGRect)bumpedRectFromRect:(struct CGRect)arg1 oldContainerFrameRect:(struct CGRect)arg2 newContainerFrameRect:(struct CGRect)arg3;
- (struct CGRect)symmetricalRectFromRect:(struct CGRect)arg1 aroundPoint:(struct CGPoint)arg2;
- (void)addFirstImageSubviewAnimationsToQueuedAnimationsForImageViews:(id)arg1;
- (void)prepareForShareSheetIntroduction;
- (BOOL)viewControllerSupportsAnimation:(id)arg1;
- (void)proceedWithInstantTransitionOut;
- (void)proceedWithMarkupTransitionOut;
- (void)animateClosingOfEditorServiceWithSuccess:(BOOL)arg1 finishedBlock:(id)arg2;
- (void)proceedWithInstantTransitionIn;
- (void)proceedWithMarkupTransitionIn;
- (void)prepareForEditorServiceIntroduction;
- (struct CGAffineTransform)affineTransformToHideRect:(struct CGRect)arg1 behindRect:(struct CGRect)arg2;
- (id)viewController;
- (void)changeViewControllerViewToSize:(struct CGSize)arg1 transactionUUID:(id)arg2;
- (void)preferredContentSizeDidChangeForViewController:(id)arg1;
- (void)setDraggable:(BOOL)arg1;
- (BOOL)draggable;
- (void)moveClientWindowWithEvent:(id)arg1;
- (void)serviceWindowDidShow;
- (void)setup;
- (id)fixedDimensionsConstraintsForView:(id)arg1 size:(struct CGSize)arg2;
- (id)fixedDimensionsConstraintsForView:(id)arg1;
- (id)sameCenterConstraintsForView:(id)arg1;
- (id)viewControllerView;
- (void)setupEditorServiceWithView:(id)arg1;
- (id)_effectiveSourceItemView;
- (void)setupWithSourceWindowFrame:(struct CGRect)arg1;
- (void)setupWithOptionsDictionary:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (unsigned long long)awakeFromRemoteView;
- (BOOL)remoteViewSizeChanged:(struct CGSize)arg1 transaction:(id)arg2;
- (struct CGRect)serviceViewScreenFrame;
- (void)requestResizeToNeededRemoteViewFrameThenDo:(id)arg1;
- (void)performQueuedCompletionActions;
- (void)performQueuedAnimationActionsWithCompletionBlock:(id)arg1;
- (void)_setServiceWindowFrame:(struct CGRect)arg1 withClientWindowSync:(BOOL)arg2 animation:(id)arg3 completion:(void)arg4;
- (void)_setServiceWindowFrame:(struct CGRect)arg1 animation:(id)arg2 completion:(void)arg3;
- (id)remoteViewControllerInterface;
- (void)positionServiceViewInRemoteViewFrame:(struct CGRect)arg1;
- (struct CGRect)neededRemoteViewFrame;
- (id)singleItemSourceImage;
- (struct CGRect)singleItemSourceFrameForEditorService;
- (struct CGRect)sourceWindowContentRect;
- (struct CGRect)sourceWindowScreenVisibleFrame;
- (struct CGRect)sourceWindowFrame;
- (void)loadView;
- (id)exportedObject;
- (id)exportedInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

