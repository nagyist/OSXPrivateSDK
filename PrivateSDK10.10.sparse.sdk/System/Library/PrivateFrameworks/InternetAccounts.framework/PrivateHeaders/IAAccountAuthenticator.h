/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IADataPluginDelegate-Protocol.h"
#import "NSURLConnectionDelegate-Protocol.h"

@class IADataPlugin, IAMailAccountSetupInput, NSData, NSError, NSHTTPURLResponse, NSMutableData, NSString, NSURLConnection, NSURLCredential, NSURLRequest;

@interface IAAccountAuthenticator : NSObject <NSURLConnectionDelegate, IADataPluginDelegate>
{
    NSURLCredential *_credential;
    long long _authType;
    id _authCompletionBlock;
    NSError *_error;
    BOOL _result;
    NSURLRequest *_urlRequest;
    NSURLConnection *_loginConnection;
    NSMutableData *_incomingData;
    NSData *_urlResponseData;
    NSHTTPURLResponse *_urlResponse;
    IAMailAccountSetupInput *_input;
    IADataPlugin *_mailPlugin;
    IAAccountAuthenticator *_strongSelf;
}

+ (id)errorForHTTPStatus:(long long)arg1;
+ (id)parseGoogleResponse:(id)arg1;
+ (long long)authType;
@property BOOL result; // @synthesize result=_result;
@property(retain) NSError *error; // @synthesize error=_error;
@property(readonly) NSHTTPURLResponse *urlResponse; // @synthesize urlResponse=_urlResponse;
@property(readonly) NSData *urlResponseData; // @synthesize urlResponseData=_urlResponseData;
@property(retain) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property long long authType; // @synthesize authType=_authType;
@property(retain) NSURLCredential *credential; // @synthesize credential=_credential;
- (void).cxx_destruct;
- (BOOL)plugin:(id)arg1 handleCertificateError:(id)arg2;
- (void)plugin:(id)arg1 didChangeAccountUID:(id)arg2;
- (void)plugin:(id)arg1 didDeleteAccountUID:(id)arg2;
- (void)plugin:(id)arg1 didCreateAccountUID:(id)arg2;
- (void)plugin:(id)arg1 accountSetupUpdate:(id)arg2 withStatus:(long long)arg3;
- (void)plugin:(id)arg1 accountSetupDidFinish:(id)arg2 withResult:(id)arg3;
- (void)plugin:(id)arg1 accountSetupDidFail:(id)arg2 withError:(id)arg3;
- (void)authFailure:(id)arg1;
- (void)authSuccess;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)cleanup;
- (void)cancel;
- (void)authenticateWithCompletionBlock:(id)arg1;
- (id)accountProperties;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

