/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSView.h"

#import "NSAnimationDelegate-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSMutableArray, NSMutableIndexSet, NSProSlidingAnimation, NSScrollView, NSSet, NSString, NSViewAnimation;

@interface NSProTileView : NSView <NSCoding, NSAnimationDelegate>
{
    NSMutableArray *_tiles;
    id _delegate;
    NSScrollView *_scrollView;
    struct CGSize _spacing;
    struct CGSize _contentSize;
    NSMutableIndexSet *_selectedTileIndexes;
    unsigned long long _selectedTileIndex;
    unsigned long long _dropIndex;
    unsigned long long _dragSourceIndexIfMoving;
    double _draggedItemLength;
    NSSet *_dragTiles;
    id _boundTilesObject;
    NSString *_boundTilesKeyPath;
    id _boundContentObject;
    NSString *_boundContentKeyPath;
    id _boundSelectionObject;
    NSString *_boundSelectionKeyPath;
    NSProSlidingAnimation *_slidingAnimation;
    NSViewAnimation *_viewAnimation;
    NSMutableArray *_pendingAnimations;
    NSMutableArray *_tilesBeingRemoved;
    unsigned long long _draggingSourceOperationMaskForLocal;
    unsigned long long _draggingSourceOperationMaskForNonLocal;
    struct __ptvFlags {
        unsigned int tileOrientation:2;
        unsigned int canReorder:1;
        unsigned int allowsSelection:1;
        unsigned int allowsMultipleSelection:1;
        unsigned int allowsEmptySelection:1;
        unsigned int delegateCanReorderTile:1;
        unsigned int delegateShouldSelectTile:1;
        unsigned int delegateCanMoveTile:1;
        unsigned int delegateDidMoveTile:1;
        unsigned int delegateDidRemoveTile:1;
        unsigned int backgroundStyle:4;
        unsigned int dividerStyle:4;
        unsigned int animationEnabled:1;
        unsigned int tileAutoresizingStyle:3;
        unsigned int delegateCanWriteTiles:1;
        unsigned int delegateCanValidateDrop:1;
        unsigned int delegateCanAcceptDrop:1;
        unsigned int delegateDraggingGap:1;
        unsigned int themeVariant:3;
        unsigned int disableLayout:1;
        unsigned int delegateSlideBackDragImage:1;
        unsigned int delegateDraggingEnded:1;
        unsigned int disableScrollToSelection:1;
        unsigned int reserved:30;
    } _ptvFlags;
    NSView *_originalNextKeyView;
    void *_proReserved1;
    void *_proReserved2;
    void *_proReserved3;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingContent;
- (void)_drawArrowBezelForTile:(id)arg1 inClipRect:(struct CGRect)arg2;
- (void)drawDividerForTile:(id)arg1 inClipRect:(struct CGRect)arg2;
- (void)drawBackgroundForTile:(id)arg1 inClipRect:(struct CGRect)arg2;
- (id)_backgroundColorForTile:(id)arg1;
- (id)_alternatingRowBackgroundColors;
- (void)setBackgroundStyle:(int)arg1;
- (int)backgroundStyle;
- (void)setDividerStyle:(int)arg1;
- (int)dividerStyle;
- (void)animationDidStop:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)_finishAnimations;
- (void)performAnimations;
- (void)addAnimation:(id)arg1;
- (void)setAnimationEnabled:(BOOL)arg1;
- (BOOL)isAnimationEnabled;
- (BOOL)_shouldAnimate;
- (void)_slideTilesIntoPlace;
- (void)_selectTile:(id)arg1 withEvent:(id)arg2;
- (void)_resetSelectionBasedOnTileState;
- (void)setSelectionIndexes:(id)arg1;
- (id)selectionIndexes;
- (void)_selectTileIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2 scrollLastTileToVisible:(BOOL)arg3;
- (void)selectTileIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)setDisableScrollToSelection:(BOOL)arg1;
- (void)deselectAll:(id)arg1;
- (void)selectAll:(id)arg1;
- (BOOL)isTileSelected:(id)arg1;
- (void)deselectTile:(id)arg1;
- (void)_deselectTile:(id)arg1 force:(BOOL)arg2;
- (id)selectedTile;
- (id)selectedTiles;
- (unsigned long long)numberOfSelectedTiles;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (BOOL)allowsMultipleSelection;
- (void)setAllowsEmptySelection:(BOOL)arg1;
- (BOOL)allowsEmptySelection;
- (void)setAllowsSelection:(BOOL)arg1;
- (BOOL)allowsSelection;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)setDraggingSourceOperationMask:(unsigned long long)arg1 forLocal:(BOOL)arg2;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (id)dragImageForTilesWithIndexes:(id)arg1 event:(id)arg2 offset:(struct CGPoint *)arg3;
- (BOOL)canDragTilesWithIndexes:(id)arg1;
- (void)_setDropIndex:(unsigned long long)arg1;
- (unsigned long long)_updateDropTarget:(id)arg1;
- (unsigned long long)_dropIndexFromLocalPoint:(struct CGPoint)arg1;
- (unsigned long long)_dropIndexFromDraggingInfo:(id)arg1;
- (BOOL)shouldResizeToFit;
- (void)setTileAutoresizingStyle:(int)arg1;
- (int)tileAutoresizingStyle;
- (void)_resizeTilesToFit;
- (void)_autoresizeTiles;
- (BOOL)_dragTile:(id)arg1 fromMouseDownEvent:(id)arg2;
- (void)_reorderTile:(id)arg1 fromMouseDownEvent:(id)arg2;
- (void)setCanReorderTiles:(BOOL)arg1;
- (BOOL)canReorderTiles;
- (void)_drawScrollViewFocusRing:(id)arg1 clipRect:(struct CGRect)arg2 needsFullDisplay:(BOOL)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)_showingFocusRingAroundEnclosingScrollView:(id)arg1;
- (BOOL)_shouldDisplayFocusRing;
- (void)_setFocusRingNeedsDisplayIfNecessary;
- (void)_windowChangedKeyState;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)_dragShouldBeginFromMouseDown:(id)arg1 withExpiration:(id)arg2 xHysteresis:(double)arg3 yHysteresis:(double)arg4;
- (id)_lastDraggedOrUpEventFollowing:(id)arg1;
- (struct CGRect)_constrainProposedTileFrame:(struct CGRect)arg1;
- (id)_tileAtPoint:(struct CGPoint)arg1;
- (void)scrollTileToVisible:(id)arg1;
- (void)layoutTilesStartingAtIndex:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)layoutTilesStartingAtIndex:(unsigned long long)arg1;
- (void)layoutTiles;
- (void)_adjustSizeToFitSuperview;
- (void)setIntertileSpacing:(struct CGSize)arg1;
- (struct CGSize)intertileSpacing;
- (void)setNumberOfColumns:(unsigned long long)arg1;
- (unsigned long long)numberOfColumns;
- (void)setOrientation:(int)arg1;
- (int)orientation;
- (BOOL)_isViewValidOriginalNextKeyView:(id)arg1;
- (id)_originalNextKeyView;
- (void)_updateOriginalNextKeyView;
- (void)setNextKeyView:(id)arg1;
- (void)_removeTilesFromKeyLoop:(id)arg1;
- (void)_insertTilesInKeyLoop:(id)arg1;
- (void)moveTile:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)_primitiveRemoveTileAtIndex:(unsigned long long)arg1;
- (void)_primitiveInsertTile:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_primitiveAddTile:(id)arg1;
- (void)_didRemoveTiles:(id)arg1;
- (void)_doRemoveTiles:(id)arg1;
- (void)removeTiles:(id)arg1;
- (void)removeTile:(id)arg1;
- (void)_didAddTiles:(id)arg1;
- (void)insertTiles:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertTile:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addTile:(id)arg1;
- (id)_tileAfterIndex:(unsigned long long)arg1 ignoreDropIndex:(BOOL)arg2;
- (id)_tileBeforeIndex:(unsigned long long)arg1 ignoreDropIndex:(BOOL)arg2;
- (id)tileWithIdentifier:(id)arg1;
- (unsigned long long)_absoluteIndexOfTile:(id)arg1;
- (unsigned long long)indexOfTile:(id)arg1;
- (id)_tileAtAbsoluteIndex:(unsigned long long)arg1;
- (id)tileAtIndex:(unsigned long long)arg1;
- (unsigned long long)_numberOfAllTiles;
- (unsigned long long)numberOfTiles;
- (unsigned long long)countOfTiles;
- (id)_nonEmptyTiles;
- (id)_allTiles;
- (id)tiles;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)setThemeVariant:(long long)arg1;
- (long long)themeVariant;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)viewDidEndLiveResize;
- (void)viewDidMoveToSuperview;
- (BOOL)isFlipped;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)awakeFromNib;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)_shouldEncodeEmptyTiles;
- (id)initWithCoder:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (oneway void)release;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
- (void)removeObjectFromContentAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inContentAtIndex:(unsigned long long)arg2;
- (id)objectInContentAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfContent;
- (void)setContent:(id)arg1;
- (void)removeObjectFromTilesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inTilesAtIndex:(unsigned long long)arg2;
- (id)objectInTilesAtIndex:(unsigned long long)arg1;
- (void)setTiles:(id)arg1;
- (void)_mergeTilesOrContents:(id)arg1 withNewObjects:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)_setBoundContentKeyPath:(id)arg1;
- (id)_boundContentKeyPath;
- (void)_setBoundContentObject:(id)arg1;
- (id)_boundContentObject;
- (void)_setBoundTilesKeyPath:(id)arg1;
- (id)_boundTilesKeyPath;
- (void)_setBoundTilesObject:(id)arg1;
- (id)_boundTilesObject;
- (void)_setBoundSelectionKeyPath:(id)arg1;
- (id)_boundSelectionKeyPath;
- (void)_setBoundSelectionObject:(id)arg1;
- (id)_boundSelectionObject;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

