/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/AceObject.h>

#import "SAAceSerializable-Protocol.h"

@class NSString;

@interface SALocalSearchRating : AceObject <SAAceSerializable>
{
}

+ (id)ratingWithDictionary:(id)arg1 context:(id)arg2;
+ (id)rating;
@property(nonatomic) double value;
@property(copy, nonatomic) NSString *providerId;
@property(nonatomic) double maxValue;
@property(copy, nonatomic) NSString *description;
@property(nonatomic) long long count;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

