/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarUI/EKUILabeledGadget.h>

@class EKAlarm, EKUIAlarmButton, EKUIAlarmCompositeGadget, EKUIPopUpButton, NSArray, NSView;

@interface EKUIAlarmGadget : EKUILabeledGadget
{
    BOOL _addButtonAvailible;
    EKAlarm *_alarm;
    NSView *_container;
    EKUIPopUpButton *_alarmPicker;
    EKUIAlarmButton *_addButton;
    unsigned long long _currentTrigger;
    EKUIAlarmCompositeGadget *_alarmsContainer;
    NSArray *_alarmConstraints;
}

@property(retain) NSArray *alarmConstraints; // @synthesize alarmConstraints=_alarmConstraints;
@property __weak EKUIAlarmCompositeGadget *alarmsContainer; // @synthesize alarmsContainer=_alarmsContainer;
@property unsigned long long currentTrigger; // @synthesize currentTrigger=_currentTrigger;
@property(retain) EKUIAlarmButton *addButton; // @synthesize addButton=_addButton;
@property(retain) EKUIPopUpButton *alarmPicker; // @synthesize alarmPicker=_alarmPicker;
@property(retain) NSView *container; // @synthesize container=_container;
@property BOOL addButtonAvailible; // @synthesize addButtonAvailible=_addButtonAvailible;
@property(retain) EKAlarm *alarm; // @synthesize alarm=_alarm;
- (void).cxx_destruct;
- (void)updateWithAlarm:(id)arg1;
- (id)defaultAlarmDescriptionWithAbbreviation:(BOOL)arg1;
- (id)alarmDescriptionWithAbbreviation:(BOOL)arg1;
- (id)viewForBaselineAlignment;
- (double)pixelsBetweenLabelAndControl;
- (double)baselineOffset;
- (id)control;
- (id)labelString;
- (BOOL)shouldDisplayForEvent:(id)arg1;
- (BOOL)isEditable;
- (void)mouseExitedGadgetView;
- (void)mouseEnteredGadgetView;
- (void)updateConstraints;
- (void)updateAlarmWithTrigger:(unsigned long long)arg1;
- (unsigned long long)triggerForRelativeOffset:(double)arg1;
- (double)relativeOffsetForTrigger:(unsigned long long)arg1;
- (void)alarmTriggerSelected;
- (void)addMenuItemForTrigger:(unsigned long long)arg1 withTitle:(id)arg2 abbreviatedTitle:(id)arg3;
- (void)setMenuItem:(id)arg1 title:(id)arg2 withAbbreviatedTitle:(id)arg3;
- (id)initWithCompositeGadget:(id)arg1;

@end

