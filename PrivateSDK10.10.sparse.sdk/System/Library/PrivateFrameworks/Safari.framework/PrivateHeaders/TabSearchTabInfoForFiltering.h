/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSURL;

// Not exported
@interface TabSearchTabInfoForFiltering : NSObject
{
    NSString *_title;
    NSURL *_url;
}

+ (id)infoWithTitle:(id)arg1 url:(id)arg2;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 url:(id)arg2;

@end

