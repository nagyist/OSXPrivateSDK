/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EWSFreeBusyView, EWSResponseMessageType;

@interface EWSFreeBusyResponseType : NSObject
{
    EWSResponseMessageType *_ResponseMessage;
    EWSFreeBusyView *_FreeBusyView;
}

+ (id)definition;
@property(retain, nonatomic) EWSFreeBusyView *FreeBusyView; // @synthesize FreeBusyView=_FreeBusyView;
@property(retain, nonatomic) EWSResponseMessageType *ResponseMessage; // @synthesize ResponseMessage=_ResponseMessage;
- (void)dealloc;

@end

