/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreSpectrum/SPCExpression.h>

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSString;

@interface SPCFunctionExpression : SPCExpression <NSSecureCoding>
{
    NSString *_functionName;
    NSArray *_arguments;
}

+ (BOOL)supportsSecureCoding;
+ (id)expressionWithFunction:(id)arg1 arguments:(id)arg2 error:(id *)arg3;
@property(copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
- (id)evaluateWithEnvironment:(id)arg1 error:(id *)arg2;
- (id)referencedVariables;
- (long long)expressionType;
- (id)description;
- (id)representationForSPCArchive:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFunction:(id)arg1 arguments:(id)arg2 error:(id *)arg3;

@end

