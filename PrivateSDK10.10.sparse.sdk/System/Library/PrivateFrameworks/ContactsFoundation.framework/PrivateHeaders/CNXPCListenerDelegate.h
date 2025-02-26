/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString, Protocol;

// Not exported
@interface CNXPCListenerDelegate : NSObject <NSXPCListenerDelegate>
{
    id _exportedObject;
    Protocol *_exportedInterfaceProtocol;
}

- (void)dealloc;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithWithExportedObject:(id)arg1 exportedInterfaceProtocol:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

