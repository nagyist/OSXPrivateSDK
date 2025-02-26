/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "SPCObjectArchival-Protocol.h"

@class NSMapTable;

@interface SPCTableUserKeyStore : NSObject <SPCObjectArchival, NSCopying, NSSecureCoding>
{
    unsigned long long _userKeyStorageOptions;
    unsigned long long _nextIndex;
    NSMapTable *_keyToIndex;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSMapTable *keyToIndex; // @synthesize keyToIndex=_keyToIndex;
@property(nonatomic) unsigned long long nextIndex; // @synthesize nextIndex=_nextIndex;
@property(readonly, nonatomic) unsigned long long userKeyStorageOptions; // @synthesize userKeyStorageOptions=_userKeyStorageOptions;
- (void)shiftAllIndicesGreaterThanOrEqualTo:(id)arg1 by:(long long)arg2;
- (unsigned long long)nextIndexDecrease;
- (unsigned long long)nextIndexIncrease;
@property(readonly, nonatomic) unsigned long long count;
- (void)removeKeyAtIndex:(unsigned long long)arg1;
- (unsigned long long)removeKey:(id)arg1;
- (void)moveKey:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)includeIndex:(unsigned long long)arg1;
- (void)insertIndex:(unsigned long long)arg1;
- (void)setKey:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertKey:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)addKey:(id)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForKey:(id)arg1 addIfNecessary:(BOOL)arg2;
- (unsigned long long)indexForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithUserKeyStorage:(unsigned long long)arg1 keyToIndex:(id)arg2 nextIndex:(unsigned long long)arg3;
- (id)initWithUserKeyStorage:(unsigned long long)arg1;
- (id)init;
- (id)uniqueIdentifierForArchiving;

@end

