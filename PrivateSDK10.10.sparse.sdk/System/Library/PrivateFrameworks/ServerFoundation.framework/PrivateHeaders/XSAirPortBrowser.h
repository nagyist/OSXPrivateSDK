/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSNetServiceBrowserDelegate-Protocol.h"
#import "NSNetServiceDelegate-Protocol.h"

@class NSMutableArray, NSNetServiceBrowser, NSString;

@interface XSAirPortBrowser : NSObject <NSNetServiceDelegate, NSNetServiceBrowserDelegate>
{
    NSString *_domain;
    NSNetServiceBrowser *_netServiceBrowser;
    NSMutableArray *_netServices;
    BOOL _running;
}

@property BOOL running; // @synthesize running=_running;
@property(retain) NSMutableArray *netServices; // @synthesize netServices=_netServices;
@property(retain) NSNetServiceBrowser *netServiceBrowser; // @synthesize netServiceBrowser=_netServiceBrowser;
@property(retain) NSString *domain; // @synthesize domain=_domain;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)stop;
- (void)browse;
- (id)serviceRecords;
- (void)dealloc;
- (id)init;
- (id)initWithDomain:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

