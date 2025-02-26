/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/SiteMetadataFetchOperation.h>

#import "SiteMetadataFetcherClient-Protocol.h"

@class NSString;

// Not exported
@interface SnapshotFetchOperation : SiteMetadataFetchOperation <SiteMetadataFetcherClient>
{
    struct RefPtr<Safari::SiteMetadataFetcher> _fetcher;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didReceiveSiteMetadataResponse:(id)arg1 toRequest:(id)arg2;
- (void)_startOffscreenSnapshotRequest;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

