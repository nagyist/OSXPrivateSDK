/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iCalendar/ICSProperty.h>

@class NSString;

@interface ICSAttachment : ICSProperty
{
}

- (BOOL)shouldObscureValue;
@property(retain, nonatomic) NSString *x_apple_ews_attachmentid;
@property(retain, nonatomic) NSString *x_apple_filename;
@property(retain, nonatomic) NSString *managed_filename;
@property(nonatomic) BOOL x_apple_autoarchived;
@property(retain, nonatomic) NSString *fmtype;
@property(retain, nonatomic) NSString *managed_id;
@property(nonatomic) int size;
- (id)filename;
- (BOOL)isBinary;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setData:(id)arg1;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;

@end

