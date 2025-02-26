/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SABaseCommand.h>

#import "SAServerBoundCommand-Protocol.h"

@class NSArray, NSString;

@interface SAEmailSearchCompleted : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)searchCompletedWithResults:(id)arg1;
+ (id)searchCompletedWithEmailResults:(id)arg1;
+ (id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)searchCompleted;
@property(copy, nonatomic) NSArray *results;
@property(copy, nonatomic) NSArray *emailResults;
- (id)initWithResults:(id)arg1;
- (id)initWithEmailResults:(id)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

