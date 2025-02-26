/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSXPCListenerDelegate-Protocol.h"

@class NSArray, NSLock, NSMutableArray, NSString;

@interface ISServiceDelegate : NSObject <NSXPCListenerDelegate>
{
    NSLock *_clientsLock;
    NSMutableArray *_clients;
    NSString *_serviceName;
}

+ (Class)clientInterfaceClass;
+ (id)sharedInstance;
@property(readonly) NSArray *clients; // @synthesize clients=_clients;
- (void).cxx_destruct;
- (void)client:(id)arg1 didInvalidationConnection:(id)arg2;
- (void)client:(id)arg1 didInterruptConnection:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithServiceName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

