/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSViewController.h"

@class NSButton, NSPopover, NSTextField, NSTimer;

@interface FRScrollPerformanceViewController : NSViewController
{
    NSTimer *_uiUpdateTimer;
    struct CGRect originalFPSLabelRect;
    struct CGRect originalFPSUnitsLabelRect;
    BOOL _isLiveReporting;
    double _framesPerSecond;
    NSPopover *_popover;
    NSTextField *_fpsLabel;
    NSButton *_doneButton;
}

@property(retain) NSButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain) NSTextField *fpsLabel; // @synthesize fpsLabel=_fpsLabel;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
@property BOOL isLiveReporting; // @synthesize isLiveReporting=_isLiveReporting;
@property double framesPerSecond; // @synthesize framesPerSecond=_framesPerSecond;
- (void).cxx_destruct;
- (void)closeButtonClicked:(id)arg1;
- (void)stopLiveReporting;
- (void)startLiveReporting;
- (void)_pollSystemLogForFramerate;
- (void)updateFrameRateUI;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

