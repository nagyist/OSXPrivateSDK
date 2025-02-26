/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SOSpeechItem : NSObject
{
    NSString *_bundleIdentifier;
    NSString *_localeIdentifier;
    NSString *_fallbackLocaleIdentifier;
    unsigned long long _byteSize;
    NSString *_variant;
    NSString *_version;
    NSString *_tagName;
    unsigned long long _visibility;
    unsigned long long _downloadStatus;
    double _downloadPercentComplete;
    NSString *_fullSizeBundleIdentifier;
    unsigned long long _fullSizeByteSize;
    NSString *_fullSizeTagName;
    BOOL _showCountryInDisplayTitle;
    BOOL _downloadFullSize;
    BOOL _offlineDictationOnly;
}

+ (id)installationDictionaryCache;
+ (id)displayStringForTimeRemaining:(double)arg1;
+ (id)displayStringForByteSize:(unsigned long long)arg1;
+ (id)normalizedLocaleIdentifier:(id)arg1;
+ (id)visibleObjectsFromItems:(id)arg1 forLocaleIdentifier:(id)arg2 additionalRequiredItems:(id)arg3;
+ (BOOL)isLocaleIdentifier:(id)arg1 containedInLocaleIdentifiers:(id)arg2;
+ (BOOL)isSameLangaugeFromLocaleIdentifier:(id)arg1 secondLocaleIdentifier:(id)arg2;
+ (BOOL)isSameLocaleIdentifier:(id)arg1 secondLocaleIdentifier:(id)arg2;
+ (id)systemLocaleIdentifier;
@property BOOL offlineDictationOnly; // @synthesize offlineDictationOnly=_offlineDictationOnly;
@property BOOL downloadFullSize; // @synthesize downloadFullSize=_downloadFullSize;
@property(readonly) NSString *fullSizeTagName; // @synthesize fullSizeTagName=_fullSizeTagName;
@property(readonly) unsigned long long fullSizeByteSize; // @synthesize fullSizeByteSize=_fullSizeByteSize;
@property(readonly) NSString *fullSizeBundleIdentifier; // @synthesize fullSizeBundleIdentifier=_fullSizeBundleIdentifier;
@property double downloadPercentComplete; // @synthesize downloadPercentComplete=_downloadPercentComplete;
@property unsigned long long downloadStatus; // @synthesize downloadStatus=_downloadStatus;
@property unsigned long long visibility; // @synthesize visibility=_visibility;
@property BOOL showCountryInDisplayTitle; // @synthesize showCountryInDisplayTitle=_showCountryInDisplayTitle;
@property(retain) NSString *fallbackLocaleIdentifier; // @synthesize fallbackLocaleIdentifier=_fallbackLocaleIdentifier;
@property(retain) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(readonly, retain) NSString *tagName; // @synthesize tagName=_tagName;
@property(readonly, retain) NSString *version; // @synthesize version=_version;
@property(readonly, retain) NSString *variant; // @synthesize variant=_variant;
@property(readonly) unsigned long long byteSize; // @synthesize byteSize=_byteSize;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)_conversionLocale;
- (long long)compareCountryTitle:(id)arg1;
- (long long)compareLanguageTitle:(id)arg1;
- (long long)compareDisplayTitle:(id)arg1;
- (long long)compare:(id)arg1;
- (id)displayedSize;
- (BOOL)isAppropriateForSystemLangauge;
- (BOOL)doesMatchSystemLocale;
- (BOOL)matchesSearchString:(id)arg1;
- (id)countryDisplayString;
- (id)languageDisplayString;
- (id)countryIdentifier;
- (id)languageIdentifier;
- (id)displayTitle;
- (void)dealloc;
- (id)initWithDownloadableBundleIdentifier:(id)arg1 properties:(id)arg2;

@end

