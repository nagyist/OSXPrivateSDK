/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ACFHTTPMethodInvocationDelegate-Protocol.h"
#import "ACMHTTPTransportProtocol-Protocol.h"

@class ACFHTTPMethodInvocation, NSData, NSDictionary, NSString;

@interface ACHTTPTransport : NSObject <ACFHTTPMethodInvocationDelegate, ACMHTTPTransportProtocol>
{
    NSString *_address;
    NSString *_httpMethod;
    NSDictionary *_httpHeader;
    NSDictionary *_httpGETParameters;
    NSData *_httpPOSTBody;
    ACFHTTPMethodInvocation *_methodInvocation;
    double _timeout;
    BOOL _isCanceled;
    id _completionBlock;
}

@property(copy, nonatomic) id completionBlock; // @synthesize completionBlock=_completionBlock;
@property(nonatomic) BOOL isCanceled; // @synthesize isCanceled=_isCanceled;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) ACFHTTPMethodInvocation *methodInvocation; // @synthesize methodInvocation=_methodInvocation;
@property(retain, nonatomic) NSData *httpPOSTBody; // @synthesize httpPOSTBody=_httpPOSTBody;
@property(retain, nonatomic) NSDictionary *httpGETParameters; // @synthesize httpGETParameters=_httpGETParameters;
@property(retain, nonatomic) NSDictionary *httpHeader; // @synthesize httpHeader=_httpHeader;
@property(retain, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
- (void)httpMethodInvocation:(id)arg1 didFailWithError:(id)arg2;
- (void)httpMethodInvocation:(id)arg1 didFinishWithResult:(id)arg2;
- (void)terminateRequest;
- (void)cancelRequest;
- (void)performRequest;
- (void)performRequestWithCompletionBlock:(id)arg1;
- (void)finalizeInvocation;
- (id)urlWithRequest:(id)arg1;
- (id)requestString:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

