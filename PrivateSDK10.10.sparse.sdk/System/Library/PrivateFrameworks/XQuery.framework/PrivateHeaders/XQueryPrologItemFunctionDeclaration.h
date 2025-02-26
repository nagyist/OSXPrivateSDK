/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XQueryPrologItemBehavior-Protocol.h"

@class NSArray, NSString, XQueryTypeDeclaration;

// Not exported
@interface XQueryPrologItemFunctionDeclaration : NSObject <XQueryPrologItemBehavior>
{
    NSString *name;
    NSArray *paramList;
    XQueryTypeDeclaration *type;
    id expr;
    BOOL external;
    long long line;
}

+ (id)function:(id)arg1 withParams:(id)arg2 ofType:(id)arg3 forExpr:(id)arg4 isExternal:(BOOL)arg5 atLine:(long long)arg6;
- (void)finalize;
- (void)dealloc;
- (void)XQueryUpdateProlog:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

