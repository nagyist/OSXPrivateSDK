/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CalendarPersistence/CalFTPOperation.h>

@class NSData, NSMutableData;

@interface CalFTPReadOperation : CalFTPOperation
{
    struct __CFReadStream *_readStream;
    NSMutableData *_mutableData;
    unsigned long long _resourceSize;
    BOOL _resourceSizeIsKnown;
    BOOL _resourceSizeChecked;
}

@property(nonatomic) BOOL resourceSizeChecked; // @synthesize resourceSizeChecked=_resourceSizeChecked;
@property(nonatomic) BOOL resourceSizeIsKnown; // @synthesize resourceSizeIsKnown=_resourceSizeIsKnown;
@property(nonatomic) unsigned long long resourceSize; // @synthesize resourceSize=_resourceSize;
@property(retain, nonatomic) NSMutableData *mutableData; // @synthesize mutableData=_mutableData;
- (void)readStream:(struct __CFReadStream *)arg1 receivedEventWithType:(unsigned long long)arg2;
- (void)setProperties;
- (void)cancel;
- (void)start;
- (void)tearDownStream;
@property(readonly, retain, nonatomic) NSData *data;
- (id)description;
- (void)dealloc;
- (id)initWithURL:(id)arg1 user:(id)arg2 password:(id)arg3;

@end

