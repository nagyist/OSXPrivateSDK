/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MCConnection.h"

@class NSArray, NSData, NSMapTable, NSMutableData;

@interface MFPOPConnection : MCConnection
{
    NSMutableData *_sendBuffer;
    NSMapTable *_listResults;
    NSMapTable *_serverMessageIdsByNumber;
    id <MFPOPConnectionDelegate> _delegate;
    NSData *_apopTimeStamp;
    NSArray *_capabilities;
    BOOL _capaCommandFailed;
    BOOL _currentlyFetchingMessage;
    BOOL _connectionShouldPrefetchMessages;
    id _context;
    unsigned long long _numberOfMessagesToFetch;
    unsigned long long _numberOfMessagesFetched;
    unsigned long long _totalBytesToFetch;
    unsigned long long _totalBytesReceived;
    long long _activityMonitorKey;
    unsigned long long _numberOfMessagesAvailable;
}

@property(nonatomic) BOOL connectionShouldPrefetchMessages; // @synthesize connectionShouldPrefetchMessages=_connectionShouldPrefetchMessages;
@property(nonatomic) unsigned long long numberOfMessagesAvailable; // @synthesize numberOfMessagesAvailable=_numberOfMessagesAvailable;
@property(nonatomic) long long activityMonitorKey; // @synthesize activityMonitorKey=_activityMonitorKey;
@property(nonatomic) BOOL currentlyFetchingMessage; // @synthesize currentlyFetchingMessage=_currentlyFetchingMessage;
@property(nonatomic) unsigned long long totalBytesReceived; // @synthesize totalBytesReceived=_totalBytesReceived;
@property(nonatomic) unsigned long long totalBytesToFetch; // @synthesize totalBytesToFetch=_totalBytesToFetch;
@property(nonatomic) unsigned long long numberOfMessagesFetched; // @synthesize numberOfMessagesFetched=_numberOfMessagesFetched;
@property(nonatomic) unsigned long long numberOfMessagesToFetch; // @synthesize numberOfMessagesToFetch=_numberOfMessagesToFetch;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void).cxx_destruct;
- (BOOL)_readMultilineResponseWithMaxSize:(unsigned long long)arg1 intoMutableData:(id)arg2 informDelegate:(BOOL)arg3;
- (BOOL)_parseSingleLineResponse:(id)arg1 status:(long long)arg2 responseCode:(long long *)arg3 textRange:(struct _NSRange *)arg4 humanReadableText:(id *)arg5;
- (void)_parseErrorFromResponseData:(id)arg1 isCapabilitiesError:(BOOL)arg2 isAuthenticationError:(BOOL)arg3;
- (id)_copyResponseLineData;
- (BOOL)_readAndParseSingleLineResponseIsCapabilities:(BOOL)arg1 isAuthentication:(BOOL)arg2;
- (BOOL)_sendCommand:(const char *)arg1 dontLogIndex:(long long)arg2 withArguments:(id)arg3;
- (BOOL)dele:(unsigned long long)arg1;
- (BOOL)deleteMessagesOnServer:(id)arg1;
- (id)_newDataForMessage:(unsigned long long)arg1 ofSize:(unsigned long long)arg2 informDelegate:(BOOL)arg3;
- (BOOL)_retr:(unsigned long long)arg1;
- (BOOL)fetchMessages:(id)arg1 totalBytes:(unsigned long long)arg2;
- (void)getTopOfMessageNumber:(unsigned long long)arg1 intoMutableData:(id)arg2;
- (id)newMessageHeaderForMessageNumber:(unsigned long long)arg1;
- (void)setMessageID:(id)arg1 forMessageNumber:(unsigned long long)arg2;
- (id)messageIDForMessageNumber:(unsigned long long)arg1;
- (BOOL)_getListResults;
- (unsigned long long)sizeOfMessageNumber:(unsigned long long)arg1;
- (BOOL)getMessageNumbers:(id *)arg1 andMessageIdsByNumber:(id *)arg2;
- (BOOL)doStat;
- (BOOL)messagesAvailable;
- (BOOL)_pass:(id)arg1;
- (BOOL)_user:(id)arg1;
- (BOOL)_apopWithUsername:(id)arg1 password:(id)arg2;
- (BOOL)_supportsAuthResponseCode;
- (BOOL)_supportsResponseCodes;
- (BOOL)_supportsAPOP;
- (BOOL)_supportsUSER;
- (BOOL)_supportsStartTLS;
- (id)_capabilities;
- (BOOL)_quit;
- (void)quit;
- (BOOL)_supportsPlainTextSchemes;
- (id)_authenticateWithPlainTextSchemes;
- (id)_authenticateWithNonPlainTextSchemes;
- (BOOL)_authenticateWithSaslClient:(id)arg1;
- (BOOL)authenticate;
- (id)authenticationMechanisms;
- (BOOL)_completeConnectionWithResult:(BOOL)arg1;
- (BOOL)_startTLS;
@property __weak id <MFPOPAccount> account;
- (void)setDelegate:(id)arg1 context:(id)arg2;
- (id)init;

@end

