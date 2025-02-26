/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MRLayer.h>

@class MCContainer, MRTransition, MRTransitionChanges, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface MRLayerNavigator : MRLayer
{
    MCContainer *mContainer;
    NSMutableArray *mSublayers;
    NSMutableDictionary *mSublayersForPlugs;
    MRLayer *mNextSublayer;
    MRLayer *mExtraSublayer;
    MRTransition *mCurrentTransition;
    double mTransitionStartTime;
    double mTransitionDuration;
    MRTransitionChanges *mTransitionChanges;
    double mCurrentSublayerContainerTimeOnTransitionStart;
    double mForcedTransitionProgressOffset;
    BOOL mIsInnerTransitioning;
    BOOL mTransitionIsBackwards;
    BOOL mTransitionWasAborted;
    BOOL mTransitionIsSubzero;
    BOOL mTransitionIsNextPrevious;
    BOOL mTransitionStartedWithNext;
    unsigned char mElementToDraw;
    double mCurrentSublayerInterestingTime;
    double mCurrentSublayerLazyDuration;
    double mCurrentSublayerLazyFactor;
    double mCurrentSublayerAnimationDuration;
    double mNextSublayerInterestingTime;
    double mNextSublayerLazyDuration;
    double mNextSublayerLazyFactor;
    double mNextSublayerAnimationDuration;
    double mTotalMotionDuration;
    unsigned long long mFastScrubbingStartIndex;
    double mFastScrubbingProgress;
    BOOL mIsSerializerBased;
    BOOL mIsInSlideFocusMode;
    BOOL mIsFastScrubbing;
    BOOL mPausedSublayersForTransition;
    BOOL mControlsSublayerTimes;
    BOOL mNeedsToResyncToSerializer;
    BOOL mHasWarnedDelegateAboutNearingEnd;
    MRLayer *mSublayerToPrecompute;
    id mPrecomputingTarget;
    unsigned long long mPrecomputingType;
    NSMutableArray *mHistoryBack;
    NSMutableArray *mHistoryForth;
    NSMutableSet *mPotentialTargetSublayers;
    BOOL mNeedsToUpdatePotentialTargetSublayers;
    BOOL _pauseWhenTransitionEnds;
    double _currentSublayerTheoreticalTimeIn;
    BOOL _needsToRecomputeCurrentSublayerTheoreticalTimeIn;
    BOOL mIsTransitioning;
    BOOL mHistoryIsEnabled;
    MRLayer *mCurrentSublayer;
    double mForcedTransitionProgress;
    double _currentSlideshowTime;
}

@property(readonly) double currentSlideshowTime; // @synthesize currentSlideshowTime=_currentSlideshowTime;
@property(nonatomic) double forcedTransitionProgress; // @synthesize forcedTransitionProgress=mForcedTransitionProgress;
@property BOOL historyIsEnabled; // @synthesize historyIsEnabled=mHistoryIsEnabled;
@property(readonly) BOOL isTransitioning; // @synthesize isTransitioning=mIsTransitioning;
@property(readonly) MRLayer *currentSublayer; // @synthesize currentSublayer=mCurrentSublayer;
- (void)getLazyDuration:(double *)arg1 lazyFactor:(double *)arg2 animationDuration:(double *)arg3 fromInterestingTime:(double)arg4;
- (double)interestingTimeForElement:(id)arg1;
- (double)interestingTimeForTime:(double)arg1;
- (BOOL)hasMoreSlidesFromTime:(double)arg1 backwards:(BOOL)arg2 startTime:(double *)arg3 duration:(double *)arg4;
- (BOOL)getStartTime:(double *)arg1 andDuration:(double *)arg2 forMovingToElementID:(id)arg3 backwards:(BOOL)arg4;
- (id)currentSlideInfos;
- (id)currentSlideInfoForElement:(id)arg1;
- (void)setIsInInteractiveMode:(BOOL)arg1;
- (BOOL)isInInteractiveMode;
- (BOOL)hasSlides;
- (double)fastScrubCancel:(id)arg1;
- (double)fastScrubEnd:(id)arg1;
- (double)fastScrubUpdate:(id)arg1;
- (double)fastScrubStart:(id)arg1;
- (void)exitSlideFocusModeWithState:(id)arg1;
- (void)didFocusOnPreviousSlideWithState:(id)arg1;
- (BOOL)willFocusOnPreviousSlideWithState:(id)arg1 animate:(BOOL)arg2;
- (void)didFocusOnNextSlideWithState:(id)arg1;
- (BOOL)willFocusOnNextSlideWithState:(id)arg1 animate:(BOOL)arg2;
- (void)fillInPreviousSlideInformationInState:(id)arg1;
- (void)fillInNextSlideInformationInState:(id)arg1;
- (BOOL)enterSlideFocusModeWithState:(id)arg1;
- (id)_transitionWithTransitionTrigger:(id)arg1;
- (void)_resyncToSerializerForTime:(double)arg1;
- (void)resyncToSerializer;
- (id)_dumpLayerWithOptions:(unsigned long long)arg1;
- (id)_currentState;
- (double)gotoNextOrPreviousSlideInCurrentSublayer:(BOOL)arg1;
- (void)endMovingCurrentSublayer;
- (double)startMovingCurrentSublayer:(BOOL)arg1;
- (void)_registerTransitionForHistory:(id)arg1 withDestinationPlugID:(id)arg2 backwards:(BOOL)arg3;
- (void)jumpToPreviousMarker:(id)arg1;
- (void)jumpToNextMarker:(id)arg1;
- (double)gotoPreviousSublayer:(id)arg1 animate:(BOOL)arg2;
- (double)gotoNextSublayer:(id)arg1 animate:(BOOL)arg2;
- (double)transitionToNextSublayerWithDeltaStartTime:(double)arg1;
- (double)gotoMoreSlidesWithAction:(id)arg1 backwards:(BOOL)arg2 animate:(BOOL)arg3 canCatchCurrentTransition:(BOOL)arg4;
- (BOOL)canTransitionToMoreSlides:(BOOL)arg1;
- (void)endTransitionToSublayer;
- (double)goBack;
- (double)goForth;
- (void)jumpToSublayer:(id)arg1 atTime:(double)arg2;
- (double)doTransition:(id)arg1 backwards:(BOOL)arg2 pzr:(id)arg3;
- (double)doTransition:(id)arg1 withDeltaStartTime:(double)arg2;
- (double)doTransition:(id)arg1 backwards:(BOOL)arg2 updateHistory:(BOOL)arg3 deltaStartTime:(double)arg4 pzr:(id)arg5;
- (double)abortTransition:(id)arg1;
- (double)finishTransition:(id)arg1;
- (double)attemptToFinishTransition:(id)arg1 didTransition:(char *)arg2 gotReversed:(char *)arg3;
- (void)updateTransition:(id)arg1;
- (double)doActionTrigger:(id)arg1;
- (id)sublayerForPlugObjectID:(id)arg1 recursive:(BOOL)arg2;
- (void)setSublayer:(id)arg1 forKey:(id)arg2;
- (id)sublayerForKey:(id)arg1;
- (BOOL)_isNative3D;
- (BOOL)hasAudio;
- (id)sublayerHitAtPoint:(struct CGPoint)arg1 onlyIfHitElement:(BOOL)arg2 localPoint:(struct CGPoint *)arg3;
@property(readonly) NSArray *sublayers; // @synthesize sublayers=mSublayers;
- (id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (BOOL)isInfinite;
- (BOOL)isAlphaFriendly;
- (BOOL)isOpaque;
- (BOOL)isLoadedForTime:(double)arg1;
- (void)depreactivate:(BOOL)arg1;
- (void)deactivate;
- (void)activate;
- (void)endMorphing;
- (void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2;
- (void)synchronizeTime;
- (BOOL)hasSomethingToRender;
- (void)setPixelSize:(struct CGSize)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cleanup;
- (id)initWithParameters:(id)arg1;
- (id)initWithPlug:(id)arg1 andParameters:(id)arg2 inSuperlayer:(id)arg3;
- (void)_getInterestingTimesForSublayerControl;
- (void)_preprecomputeAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)_prerenderSublayersAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (id)_retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)_renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)_precomputeAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
- (void)_setNeedsToRequestRebuildAudio:(BOOL)arg1;
- (void)_unobservePlugOnDepreactivate;
- (void)_observePlugOnPreactivate;
- (void)_unobservePlug;
- (void)_observePlug;
- (void)_unobserveSublayer:(id)arg1;
- (void)_observeSublayer:(id)arg1;
- (void)_removeExtraSublayer;
- (void)_createExtraSublayer;
- (id)_createSublayerForPrecomputingWithPlug:(id)arg1;
- (void)_deleteSublayer:(id)arg1;
- (id)_createSublayerForPlug:(id)arg1;
- (void)_executeLayerCommandQueue;

@end

