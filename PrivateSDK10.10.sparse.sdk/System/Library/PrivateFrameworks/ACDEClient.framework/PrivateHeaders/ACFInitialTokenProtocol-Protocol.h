/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class ACFPrincipal, NSData, NSDate, NSMutableDictionary, NSNumber, NSString;

@protocol ACFInitialTokenProtocol <NSObject>
+ (id)initialTokenWithRequest:(id)arg1;
@property(retain, nonatomic) NSData *initializationVector;
@property(retain, nonatomic) NSData *randomKey;
@property(readonly, nonatomic) NSString *tokenSourceString;
@property(readonly, nonatomic) NSMutableDictionary *parametersDictionary;
@property(retain) NSDate *creationDate;
@property(retain) NSString *tokenVersion;
@property(retain) NSString *sessionToken;
@property(retain) NSString *dsKeyVersion;
@property(retain) NSString *appIDKey;
@property(retain) NSString *currentUserKey;
@property(retain) NSString *oldUserKey;
@property(retain) NSString *nonce;
@property(retain) NSString *encryptionHash;
@property(retain) NSNumber *appID;
@property(retain) id <ACFTicketRequestProtocol> request;
@property(retain) ACFPrincipal *principal;
@end

