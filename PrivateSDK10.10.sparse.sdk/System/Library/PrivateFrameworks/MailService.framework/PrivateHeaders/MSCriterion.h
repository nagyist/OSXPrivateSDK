/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@interface MSCriterion : NSObject <NSSecureCoding>
{
    BOOL _allRequired;
    long long _type;
    long long _qualifier;
    id _expression;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL allRequired; // @synthesize allRequired=_allRequired;
@property(copy, nonatomic) id expression; // @synthesize expression=_expression;
@property(nonatomic) long long qualifier; // @synthesize qualifier=_qualifier;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 qualifier:(long long)arg2 expression:(id)arg3;

@end

