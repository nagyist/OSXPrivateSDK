/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface ISDialogButton : NSObject <NSSecureCoding>
{
    int _actionType;
    id _parameter;
    NSString *_title;
    long long _urlType;
    NSNumber *_state;
}

+ (BOOL)supportsSecureCoding;
+ (id)buttonWithTitle:(id)arg1;
@property(retain) NSNumber *state; // @synthesize state=_state;
@property long long urlType; // @synthesize urlType=_urlType;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) id parameter; // @synthesize parameter=_parameter;
@property int actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (long long)_urlTypeForString:(id)arg1;
- (int)_actionTypeForString:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)performActionFromDialog:(id)arg1 withStoreClient:(id)arg2;
- (void)performActionWithStoreClient:(id)arg1;
- (void)loadFromDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1 superficial:(BOOL)arg2;

@end

