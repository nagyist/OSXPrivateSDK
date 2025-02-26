/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface GKSConnectivitySettings : NSObject
{
}

+ (BOOL)supportsLRPEncoding;
+ (int)getKeepAliveTimeoutFromCarrierBundle;
+ (int)getNATTypeFromCarrierBundle;
+ (id)getAllSettings;
+ (struct tagIPPORT *)getIPPortForService:(id)arg1;
+ (struct tagIPPORT *)getCachedIPPort;
+ (id)getAddressForService:(id)arg1;
+ (id)getClientOption:(id)arg1;
+ (void)setClientOptions:(id)arg1;
+ (void)setServerAddresses:(id)arg1;
+ (void)setAddress:(id)arg1 forService:(id)arg2;
+ (void)initialize;
- (void)dealloc;
- (id)init;

@end

