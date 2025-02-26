/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PKURLAuthenticationHandler-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSURLCredential;

@interface SUSharedAuthenticationHandler : NSObject <PKURLAuthenticationHandler>
{
    NSMutableDictionary *_certValidatedByHost;
    struct dispatch_queue_s *_updateQueue;
    BOOL _evCheckingDisabledByPref;
    NSMutableArray *_disabledHosts;
    NSURLCredential *_stashedURLCredential;
}

+ (id)sharedAuthenticationHandler;
@property(retain) NSURLCredential *stashedURLCredential; // @synthesize stashedURLCredential=_stashedURLCredential;
- (void)didReceiveAuthenticationChallenge:(id)arg1 completionHandler:(id)arg2;
- (void)promptForAuthenticationChallenge:(id)arg1;
- (void)_setCertValidated:(BOOL)arg1 forHost:(id)arg2;
- (BOOL)certValidatedForURL:(id)arg1;
- (BOOL)isHostDiabledForEVCheck:(id)arg1;
- (void)disableHostForEVCheck:(id)arg1;
- (id)init;

@end

