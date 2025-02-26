/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class DDLocation, NSArray, NSString;

// Not exported
@interface DDAbstractType : NSObject
{
    NSArray *_arguments;
    NSString *_name;
    int _kind;
    DDLocation *_location;
}

+ (id)anyType;
+ (id)emptyType;
+ (id)typeWithName:(id)arg1 component:(id)arg2 kind:(int)arg3 location:(id)arg4;
+ (id)typeWithName:(id)arg1 components:(id)arg2 kind:(int)arg3 location:(id)arg4;
@property(readonly) NSArray *arguments; // @synthesize arguments=_arguments;
@property(readonly) int kind; // @synthesize kind=_kind;
@property(retain) DDLocation *location; // @synthesize location=_location;
- (id)description;
- (id)verboseDescription;
- (void)appendDescription:(id)arg1;
- (void)_appendComponents:(id)arg1;
@property(readonly) BOOL isFlatName;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)argument;
@property(readonly) BOOL isAny;
@property(readonly) BOOL isEmpty;
- (void)dealloc;
- (id)initWithOptional:(id)arg1;
- (id)initWithConjunctionArg1:(id)arg1 arg2:(id)arg2;
- (id)initWithDisjunctionArg1:(id)arg1 arg2:(id)arg2;
- (id)initWithNameType:(id)arg1;
- (id)initWithName:(id)arg1 components:(id)arg2 kind:(int)arg3 location:(id)arg4;
- (id)computeInhabitant:(id)arg1;

@end

