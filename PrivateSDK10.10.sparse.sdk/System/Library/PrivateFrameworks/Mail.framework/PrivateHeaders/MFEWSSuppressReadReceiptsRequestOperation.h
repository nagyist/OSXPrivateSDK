/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Mail/MFEWSRequestOperation.h>

@class MFEWSGetItemsResponseOperation;

@interface MFEWSSuppressReadReceiptsRequestOperation : MFEWSRequestOperation
{
    MFEWSGetItemsResponseOperation *_getItemsResponse;
}

+ (Class)classForResponse;
@property(readonly, nonatomic) MFEWSGetItemsResponseOperation *getItemsResponse; // @synthesize getItemsResponse=_getItemsResponse;
- (void).cxx_destruct;
- (id)prepareRequest;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (id)initWithGetItemsResponse:(id)arg1 gateway:(id)arg2;

@end

