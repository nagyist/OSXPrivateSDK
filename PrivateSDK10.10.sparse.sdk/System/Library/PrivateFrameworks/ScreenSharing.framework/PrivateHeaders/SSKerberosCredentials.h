/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenSharing/SSCredentials.h>

@class NSString;

@interface SSKerberosCredentials : SSCredentials
{
    NSString *mClientPrincipal;
    NSString *mServicePrincipal;
    void *mReservedForInstanceVariablesKerberos;
}

+ (id)kerberosCredentialsWithClientPrincipal:(id)arg1 withServicePrincipal:(id)arg2;
@property(readonly) NSString *servicePrincipal; // @synthesize servicePrincipal=mServicePrincipal;
@property(readonly) NSString *clientPrincipal; // @synthesize clientPrincipal=mClientPrincipal;
- (id)description;
@property(readonly) NSString *username;
- (void)dealloc;
- (id)initWithAuthenticationType:(id)arg1 withClientPrincipal:(id)arg2 withServicePrincipal:(id)arg3;

@end

