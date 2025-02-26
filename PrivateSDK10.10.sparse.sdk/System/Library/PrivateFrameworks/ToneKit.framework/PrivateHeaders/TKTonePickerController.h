/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSIndexPath, NSMutableArray, NSString, TKTonePickerItem, TLSound, TLToneManager;

@interface TKTonePickerController : NSObject
{
    BOOL _behavesAsRingtonePicker;
    BOOL _defaultToneIdentifierWasExplicitlySet;
    BOOL _selectedToneWasExplicitlySetToDefaultTone;
    BOOL _showsToneStore;
    BOOL _showsDefault;
    BOOL _showsNone;
    BOOL _noneAtTop;
    BOOL _showsNothingSelected;
    BOOL _shouldCachePickerItems;
    BOOL _mediaAtTop;
    BOOL _showsVibrations;
    int _alertType;
    id <TKTonePickerControllerDelegate> _delegate;
    unsigned long long _toneTypes;
    NSString *_accountIdentifier;
    NSString *_defaultToneIdentifier;
    NSString *_noneString;
    NSMutableArray *_cachedPickerSectionItems;
    NSMutableArray *_cachedPickerRowItems;
    NSMutableArray *_cachedClassicRingtonePickerItems;
    NSMutableArray *_cachedClassicAlertTonePickerItems;
    NSIndexPath *_selectedToneIndexPath;
    NSArray *_classicAlertToneIdentifiers;
    NSArray *_classicRingtoneIdentifiers;
    unsigned long long _selectedClassicRingtoneIndex;
    unsigned long long _selectedClassicAlertToneIndex;
    NSMutableArray *_toneGroupLists;
    NSMutableArray *_toneGroupNames;
    TLToneManager *_toneManager;
    TLSound *_playingPreviewSound;
    NSString *_selectedVibrationIdentifier;
}

@property(copy, nonatomic, setter=_setSelectedVibrationIdentifier:) NSString *_selectedVibrationIdentifier; // @synthesize _selectedVibrationIdentifier;
@property(nonatomic, setter=_setShowsVibrations:) BOOL _showsVibrations; // @synthesize _showsVibrations;
@property(nonatomic, getter=isMediaAtTop) BOOL mediaAtTop; // @synthesize mediaAtTop=_mediaAtTop;
@property(retain, nonatomic, setter=_setPlayingPreviewSound:) TLSound *_playingPreviewSound; // @synthesize _playingPreviewSound;
@property(retain, nonatomic, setter=_setToneManager:) TLToneManager *_toneManager; // @synthesize _toneManager;
@property(retain, nonatomic, setter=_setToneGroupNames:) NSMutableArray *_toneGroupNames; // @synthesize _toneGroupNames;
@property(retain, nonatomic, setter=_setToneGroupLists:) NSMutableArray *_toneGroupLists; // @synthesize _toneGroupLists;
@property(nonatomic, setter=_setSelectedClassicAlertToneIndex:) unsigned long long _selectedClassicAlertToneIndex; // @synthesize _selectedClassicAlertToneIndex;
@property(nonatomic, setter=_setSelectedClassicRingtoneIndex:) unsigned long long _selectedClassicRingtoneIndex; // @synthesize _selectedClassicRingtoneIndex;
@property(retain, nonatomic, setter=_setClassicRingtoneIdentifiers:) NSArray *_classicRingtoneIdentifiers; // @synthesize _classicRingtoneIdentifiers;
@property(retain, nonatomic, setter=_setClassicAlertToneIdentifiers:) NSArray *_classicAlertToneIdentifiers; // @synthesize _classicAlertToneIdentifiers;
@property(retain, nonatomic, setter=_setSelectedToneIndexPath:) NSIndexPath *_selectedToneIndexPath; // @synthesize _selectedToneIndexPath;
@property(retain, nonatomic, setter=_setCachedClassicAlertTonePickerItems:) NSMutableArray *_cachedClassicAlertTonePickerItems; // @synthesize _cachedClassicAlertTonePickerItems;
@property(retain, nonatomic, setter=_setCachedClassicRingtonePickerItems:) NSMutableArray *_cachedClassicRingtonePickerItems; // @synthesize _cachedClassicRingtonePickerItems;
@property(retain, nonatomic, setter=_setCachedPickerRowItems:) NSMutableArray *_cachedPickerRowItems; // @synthesize _cachedPickerRowItems;
@property(retain, nonatomic, setter=_setCachedPickerSectionItems:) NSMutableArray *_cachedPickerSectionItems; // @synthesize _cachedPickerSectionItems;
@property(nonatomic, setter=_setShouldCachePickerItems:) BOOL _shouldCachePickerItems; // @synthesize _shouldCachePickerItems;
@property(nonatomic, setter=_setShowsNothingSelected:) BOOL _showsNothingSelected; // @synthesize _showsNothingSelected;
@property(copy, nonatomic, setter=_setNoneString:) NSString *_noneString; // @synthesize _noneString;
@property(nonatomic, getter=isNoneAtTop) BOOL noneAtTop; // @synthesize noneAtTop=_noneAtTop;
@property(nonatomic, setter=_setShowsNone:) BOOL _showsNone; // @synthesize _showsNone;
@property(nonatomic, setter=_setShowsDefault:) BOOL _showsDefault; // @synthesize _showsDefault;
@property(nonatomic, setter=_setShowsToneStore:) BOOL _showsToneStore; // @synthesize _showsToneStore;
@property(nonatomic, setter=_setSelectedToneWasExplicitlySetToDefaultTone:) BOOL _selectedToneWasExplicitlySetToDefaultTone; // @synthesize _selectedToneWasExplicitlySetToDefaultTone;
@property(nonatomic, setter=_setDefaultToneIdentifierWasExplicitlySet:) BOOL _defaultToneIdentifierWasExplicitlySet; // @synthesize _defaultToneIdentifierWasExplicitlySet;
@property(copy, nonatomic, setter=_setDefaultToneIdentifier:) NSString *_defaultToneIdentifier; // @synthesize _defaultToneIdentifier;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic, setter=_setAlertType:) int _alertType; // @synthesize _alertType;
@property(nonatomic, setter=_setBehavesAsRingtonePicker:) BOOL _behavesAsRingtonePicker; // @synthesize _behavesAsRingtonePicker;
@property(nonatomic, setter=_setToneTypes:) unsigned long long _toneTypes; // @synthesize _toneTypes;
@property(nonatomic) id <TKTonePickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_toneManagerContentsChanged:(id)arg1;
- (void)_resetSelectedClassicAlertToneIndex;
- (void)_resetSelectedClassicRingtoneIndex;
- (void)_didUpdateCheckedStatus:(BOOL)arg1 ofToneClassicsPickerItem:(id)arg2;
- (void)_didUpdateDetailText:(id)arg1 ofPickerItemForRowAtIndexPath:(id)arg2;
- (void)_didUpdateCheckedStatus:(BOOL)arg1 ofPickerItemForRowAtIndexPath:(id)arg2;
- (void)_didSelectToneWithIdentifier:(id)arg1;
- (void)_didReloadTones;
- (id)_annotatedNameForToneIdentifier:(id)arg1;
- (void)_updateDetailTextOfVibrationItem;
- (void)_unregisterForUserGeneratedVibrationsDidChangeNotification;
- (void)_registerForUserGeneratedVibrationsDidChangeNotification;
- (id)_nameOfVibrationWithIdentifier:(id)arg1;
- (void)_resetSelectedVibrationIdentifier;
@property(copy, nonatomic) NSString *selectedVibrationIdentifier;
@property(nonatomic) BOOL showsVibrations;
- (void)_reloadMediaItems;
- (void)_didSelectMediaItemWithIdentifier:(id)arg1;
- (unsigned long long)_indexOfMediaItemWithIdentifier:(id)arg1;
- (id)_identifierOfMediaItemAtIndex:(unsigned long long)arg1;
- (unsigned long long)_mediaItemsCount;
- (BOOL)_isMediaAtTop;
- (BOOL)_showsMedia;
- (void)finishedWithPicker;
- (void)stopPlayingWithFadeOut:(BOOL)arg1;
- (void)_togglePlayForToneWithIdentifier:(id)arg1;
- (void)_playToneWithIdentifier:(id)arg1;
- (BOOL)_shouldUseAudioServicesForPlayback;
- (void)_goToStore;
@property(readonly, nonatomic) BOOL canShowStore;
- (void)_sortToneIdentifiersArray:(id)arg1;
- (void)_addRingtonesInDirectory:(id)arg1 toArray:(id)arg2 fileExtension:(id)arg3;
- (id)_loadRingtonesFromPlist;
- (id)_loadAlertTonesFromPlist;
- (id)_loadTonesFromPlistNamed:(id)arg1;
@property(readonly, nonatomic) NSString *_ringtonesPlistName;
@property(readonly, nonatomic) NSString *_alertTonesPlistName;
- (void)_reloadTonesForExternalChange:(BOOL)arg1;
- (void)_reloadTones;
- (BOOL)_didSelectToneClassicsPickerItem:(id)arg1;
- (BOOL)didSelectTonePickerItem:(id)arg1;
- (id)_selectedIdentifier:(char *)arg1;
- (id)_identifierOfSelectedClassicRingtone;
- (id)_identifierOfSelectedClassicAlertTone;
- (void)_setSelectedToneIdentifier:(id)arg1 currentlyReloadingTones:(BOOL)arg2;
@property(copy, nonatomic) NSString *selectedToneIdentifier;
@property(readonly, nonatomic) TKTonePickerItem *selectedTonePickerItem;
@property(readonly, nonatomic) TKTonePickerItem *_topLevelSelectedTonePickerItem;
- (id)_identifierAtIndexPath:(id)arg1 isMediaItem:(char *)arg2;
- (id)_identifierOfToneAtIndexPath:(id)arg1;
- (id)_indexPathForToneWithIdentifier:(id)arg1;
- (BOOL)_isDividerAtIndexPath:(id)arg1;
- (BOOL)_isVibrationGroupAtIndexPath:(id)arg1;
- (BOOL)_isMediaGroupAtIndexPath:(id)arg1;
- (BOOL)_isNoneGroupAtIndexPath:(id)arg1;
- (BOOL)_isDefaultGroupAtIndexPath:(id)arg1;
- (BOOL)_isToneStoreGroupAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSIndexPath *indexPathForSelectedTone;
@property(readonly, nonatomic) NSIndexPath *_indexPathForVibrationGroup;
@property(readonly, nonatomic) NSIndexPath *_indexPathForNone;
@property(readonly, nonatomic) NSIndexPath *_indexPathForMediaGroup;
@property(readonly, nonatomic) NSIndexPath *_indexPathForFirstToneGroup;
@property(readonly, nonatomic) NSIndexPath *_indexPathForDefaultGroup;
@property(readonly, nonatomic) NSIndexPath *_indexPathForToneStoreGroup;
- (void)_invalidatePickerItemCaches;
- (BOOL)_cacheToneClassicsPickerItem:(id)arg1 forIndex:(long long)arg2 headerKind:(unsigned long long)arg3;
- (id)_cachedToneClassicsPickerItemForIndex:(long long)arg1 headerKind:(unsigned long long)arg2;
- (BOOL)_cachePickerRowItem:(id)arg1 atIndex:(long long)arg2 inSectionForItem:(id)arg3;
- (id)_cachedPickerRowItemAtIndex:(long long)arg1 inSectionForItem:(id)arg2;
- (BOOL)_cachePickerRowItem:(id)arg1 forSection:(long long)arg2;
- (id)_cachedPickerItemForSection:(long long)arg1;
- (id)_toneClassicsPickerItemAtIndex:(long long)arg1 belowTonePickerItem:(id)arg2;
- (id)_pickerRowItemAtIndex:(long long)arg1 inSectionForItem:(id)arg2;
- (id)pickerItemForSection:(long long)arg1;
- (long long)numberOfSections;
@property(nonatomic) BOOL showsNothingSelected;
@property(copy, nonatomic) NSString *noneString;
@property(nonatomic) BOOL showsNone;
@property(nonatomic) BOOL showsDefault;
@property(nonatomic) BOOL showsToneStore;
@property(copy, nonatomic) NSString *defaultToneIdentifier;
@property(readonly, nonatomic) int alertType;
- (void)dealloc;
- (id)initWithAlertType:(int)arg1;
- (id)init;

@end

