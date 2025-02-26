/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XQuery/XQueryExpr.h>

#import "XQueryExprBehavior-Protocol.h"

@class NSArray, NSString;

// Not exported
@interface XQueryTypeswitchExpr : XQueryExpr <XQueryExprBehavior>
{
    id _expr;
    NSArray *_caseClauses;
}

+ (id)expr:(id)arg1 withCaseClauses:(id)arg2;
- (id)evaluateWithContext:(id)arg1;
- (void)bindInfoForProlog:(id)arg1;
- (id)initWithExpr:(id)arg1 caseClauses:(id)arg2;
- (void)finalize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

