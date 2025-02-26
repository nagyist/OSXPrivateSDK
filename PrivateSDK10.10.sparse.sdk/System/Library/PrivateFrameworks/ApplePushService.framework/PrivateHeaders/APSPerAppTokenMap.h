/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

// Not exported
@interface APSPerAppTokenMap : NSObject
{
    NSMutableDictionary *_perAppTokenMap;
    long long _missingTokens;
    BOOL _enumerating;
}

- (id)description;
- (id)debugDescription;
- (void)enumerateTokensUsingBlock:(id)arg1;
- (void)enumerateMissingTokensUsingBlock:(id)arg1;
- (id)identifiersForTopic:(id)arg1;
- (id)topics;
- (BOOL)isEmpty;
- (BOOL)hasMissingTokens;
- (id)tokensForTopic:(id)arg1;
- (id)allPerAppTokens;
- (void)setFlag:(BOOL)arg1 forTopic:(id)arg2 identifier:(id)arg3;
- (BOOL)flagForTopic:(id)arg1 identifier:(id)arg2;
- (id)tokenForTopic:(id)arg1 identifier:(id)arg2;
- (void)removeAllTokens;
- (void)setToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3;
- (void)removeIdentifier:(id)arg1 forTopic:(id)arg2;
- (void)addIdentifier:(id)arg1 forTopic:(id)arg2;
- (void)dealloc;
- (id)init;

@end

