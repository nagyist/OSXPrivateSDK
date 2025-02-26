/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDSDaemonListenerProtocol-Protocol.h"

@class NSArray, NSData, NSDictionary, NSInputStream, NSOutputStream, NSString, NSUUID, _IDSWeakReference;

@interface _IDSDevice : NSObject <IDSDaemonListenerProtocol>
{
    NSDictionary *_info;
    NSString *_serviceToken;
    _IDSWeakReference *_account;
    int _socket;
    int _nearbyToken;
    BOOL _nearby;
    id _openSocketCompletionHandler;
    struct dispatch_queue_s *_openSocketCompletionHandlerQueue;
    NSString *_openSocketCompletionHandlerID;
    NSInputStream *_inputStreamForSocket;
    NSOutputStream *_outputStreamForSocket;
}

- (void)closeSocketForDomain:(id)arg1;
- (void)xpcObject:(void *)arg1 objectContext:(id)arg2;
- (void)closeStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (void)closeSocket:(int)arg1;
- (void)openSocketWithOptions:(id)arg1 completionHandler:(id)arg2 onQueue:(void)arg3;
- (int)socketForDomain:(id)arg1;
- (void)_setAccount:(id)arg1;
- (void)_nearbyStateChanged;
- (void)_addIdentity:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *identities;
@property(readonly, retain, nonatomic) NSData *pushToken;
@property(readonly, retain, nonatomic) NSString *enclosureColor;
@property(readonly, retain, nonatomic) NSString *deviceColor;
@property(readonly, nonatomic) BOOL supportsPhoneCalls;
@property(readonly, nonatomic) BOOL supportsMMSRelay;
@property(readonly, nonatomic) BOOL supportsSMSRelay;
@property(readonly, nonatomic) BOOL supportsHandoff;
@property(readonly, nonatomic) BOOL supportsTethering;
@property(readonly, nonatomic) BOOL supportsiCloudPairing;
- (void)_updateNSUUID:(id)arg1;
@property(retain, nonatomic, setter=setNSUUID:) NSUUID *nsuuid;
@property(readonly, retain, nonatomic) NSArray *linkedUserURIs;
@property(readonly, nonatomic) unsigned long long pairingProtocolVersion;
@property(readonly, nonatomic) BOOL isDefaultLocalDevice;
@property(readonly, nonatomic) BOOL isDefaultPairedDevice;
@property(readonly, nonatomic) BOOL locallyPresent;
@property(readonly, nonatomic, getter=isNearby) BOOL nearby;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) NSString *service;
@property(readonly, retain, nonatomic) NSString *name;
@property(readonly, retain, nonatomic) NSString *modelIdentifier;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic) NSString *productBuildVersion;
@property(readonly, retain, nonatomic) NSString *uniqueID;
- (void)_connect;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

