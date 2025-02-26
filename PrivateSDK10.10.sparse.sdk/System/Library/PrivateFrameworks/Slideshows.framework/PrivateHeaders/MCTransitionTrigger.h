/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MCAction.h>

#import <Slideshows/MCTransitionTrigger-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface MCTransitionTrigger : MCAction <MCTransitionTrigger>
{
    NSMutableDictionary *_transitionAttributes;
    NSString *_transitionID;
    double _transitionDuration;
    NSString *_transitionDestinationPlugID;
}

+ (id)transitionForTargetPlugObjectID:(id)arg1 withTransitionID:(id)arg2;
@property(copy) NSString *transitionDestinationPlugID; // @synthesize transitionDestinationPlugID=_transitionDestinationPlugID;
@property(copy, nonatomic) NSDictionary *transitionAttributes; // @synthesize transitionAttributes=_transitionAttributes;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(copy) NSString *transitionID; // @synthesize transitionID=_transitionID;
- (id)description;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)xmlElement;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1;

@end

