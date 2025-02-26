/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreChineseEngine/CIMPreferencesModule.h>

@class CIMFuzzyPinyinTableView, NSLayoutConstraint, NSMutableArray, NSWindow;

@interface CIMPinyinPreferencesModule : CIMPreferencesModule
{
    NSWindow *_fuzzyPinyinPreferencesSheet;
    NSMutableArray *_fuzzyPinyinPreferences;
    CIMFuzzyPinyinTableView *_fuzzyPinyinTableView;
    NSLayoutConstraint *_fuzzyPinyinTableViewWidth;
}

@property(retain, nonatomic) NSLayoutConstraint *fuzzyPinyinTableViewWidth; // @synthesize fuzzyPinyinTableViewWidth=_fuzzyPinyinTableViewWidth;
@property(retain, nonatomic) CIMFuzzyPinyinTableView *fuzzyPinyinTableView; // @synthesize fuzzyPinyinTableView=_fuzzyPinyinTableView;
@property(retain, nonatomic) NSMutableArray *fuzzyPinyinPreferences; // @synthesize fuzzyPinyinPreferences=_fuzzyPinyinPreferences;
@property(retain, nonatomic) NSWindow *fuzzyPinyinPreferencesSheet; // @synthesize fuzzyPinyinPreferencesSheet=_fuzzyPinyinPreferencesSheet;
- (void)closeFuzzyPinyinPreferences:(id)arg1;
- (void)openFuzzyPinyinPreferences:(id)arg1;
- (void)adjustColumnWidth;
- (void)saveFuzzyPinyinPairs;
- (void)loadFuzzyPinyinPairs;
- (void)dealloc;

@end

