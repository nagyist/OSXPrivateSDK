/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol HPDQueryDelegate <NSObject>
- (void)helpQuery:(id)arg1 didReturnResults:(id)arg2;

@optional
- (void)helpQueryDidFinishSearching:(id)arg1;
- (void)helpQuery:(id)arg1 didEncounterError:(id)arg2;
- (void)helpQuery:(id)arg1 didReturnActions:(id)arg2;
- (void)helpQuery:(id)arg1 didReturnSuggestions:(id)arg2;
@end

