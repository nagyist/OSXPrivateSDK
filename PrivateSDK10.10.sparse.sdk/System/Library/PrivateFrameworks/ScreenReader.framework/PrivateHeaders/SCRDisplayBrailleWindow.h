/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenReader/SCRDisplayWindow.h>

@class CALayer, CAScrollLayer, NSAttributedString, NSMutableArray, NSString, SCRCTargetSelectorTimer;

// Not exported
@interface SCRDisplayBrailleWindow : SCRDisplayWindow
{
    NSAttributedString *_brailleString;
    struct {
        NSString *cells;
        long long length;
        int alignment;
    } _brailleStatus;
    int _brailleDisplayMode;
    long long _brailleLineSize;
    long long _brailleLineOffset;
    long long _brailleLineLength;
    struct CGSize _brailleCellSize;
    CALayer *_brailleHardwareLayer;
    NSMutableArray *_blinkLayers;
    NSMutableArray *_brailleWordArray;
    SCRCTargetSelectorTimer *_blinkTimer;
    struct CGRect _oldVisibleRect;
    double _fontSize;
    BOOL _isHidden;
    int _resizeHType;
    int _resizeVType;
    struct CGRect _mouseDownWindowBounds;
    double _mouseDownFontSize;
    BOOL _isOptionMouseDown;
    BOOL _liveResize;
    CAScrollLayer *_scrollLayer;
}

+ (void)setKeyCaptureDisplayEnabled:(BOOL)arg1;
+ (void)_displayBraille:(id)arg1;
+ (void)displayBraille:(id)arg1;
+ (void)displayConfigurationDidChange;
+ (void)_defaultsChangedForKeyPath:(id)arg1 speak:(id)arg2;
+ (int)initialWindowLevel;
+ (void)moveRightByStep:(double)arg1;
+ (void)moveLeftByStep:(double)arg1;
+ (void)moveDownByStep:(double)arg1;
+ (void)moveUpByStep:(double)arg1;
+ (void)decreaseWidthByStep:(double)arg1;
+ (void)increaseWidthByStep:(double)arg1;
+ (void)_setMetric:(double)arg1 forKey:(id)arg2;
+ (void)_updateMetrics:(id)arg1;
+ (void)addSizeToRequest:(id)arg1;
+ (void)addLocationToRequest:(id)arg1;
+ (void)hide;
+ (void)show;
+ (void)hideOnly;
+ (void)showOnly;
+ (void)_echoUpdateEnabled:(BOOL)arg1;
+ (void)decreaseFontSize;
+ (void)increaseFontSize;
+ (void)_echoUpdateFontSize:(double)arg1;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (id)sharedBrailleWindow;
+ (void)initialize;
- (void)handleMouseDragEvent:(struct _CGSEventRecord)arg1;
- (void)handleMouseDownEvent:(struct _CGSEventRecord)arg1;
- (void)handleMouseUpEvent:(struct _CGSEventRecord)arg1;
- (void)_blinker;
- (void)setBraille:(id)arg1;
- (void)_getFontSize:(double *)arg1;
- (void)setBrailleRaisedPinFontColor:(struct CGColor *)arg1;
- (void)setFontSize:(double)arg1 useRect:(struct CGRect *)arg2 growTop:(BOOL)arg3 constrain:(BOOL)arg4;
- (void)_updateLayout;
- (void)hide;
- (void)show;
- (BOOL)isHidden;
- (void)dealloc;
- (id)initWithScreenRect:(struct CGRect)arg1;

@end

