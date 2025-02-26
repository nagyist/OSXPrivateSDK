/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, SOAPFaultDetail;

@interface SOAPFault : NSObject
{
    SOAPFaultDetail *_detail;
    NSString *_faultactor;
    NSString *_faultcode;
    NSString *_faultstring;
}

+ (id)definition;
@property(copy, nonatomic) NSString *faultstring; // @synthesize faultstring=_faultstring;
@property(copy, nonatomic) NSString *faultcode; // @synthesize faultcode=_faultcode;
@property(copy, nonatomic) NSString *faultactor; // @synthesize faultactor=_faultactor;
@property(retain, nonatomic) SOAPFaultDetail *detail; // @synthesize detail=_detail;
- (id)description;
- (void)setReason:(id)arg1;
- (void)setCode:(id)arg1;
- (void)dealloc;

@end

