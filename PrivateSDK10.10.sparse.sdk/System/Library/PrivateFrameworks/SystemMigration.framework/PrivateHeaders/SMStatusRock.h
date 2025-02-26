/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SystemMigration/SlingShotRock.h>

@class NSArray, NSNumber, NSString;

@interface SMStatusRock : SlingShotRock
{
    NSArray *_errorsAndWarnings;
    NSArray *_arguments;
    NSNumber *_percentDone;
    NSNumber *_timeRemaining;
    NSString *_text;
}

+ (id)rockID;
+ (id)rockWithPayload:(id)arg1;
@property(retain) NSString *text; // @synthesize text=_text;
@property(retain) NSNumber *timeRemaining; // @synthesize timeRemaining=_timeRemaining;
@property(retain) NSNumber *percentDone; // @synthesize percentDone=_percentDone;
@property(retain) NSArray *arguments; // @synthesize arguments=_arguments;
@property(retain) NSArray *errorsAndWarnings; // @synthesize errorsAndWarnings=_errorsAndWarnings;
- (void).cxx_destruct;
- (BOOL)keepAlive;
- (BOOL)returnsData;
- (id)requestPayload;
- (id)description;
- (int)sendResult;

@end

