/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IMDAccount, IMDService, IMDServiceSession, IMMessageItem, NSArray, NSDictionary, NSMutableDictionary, NSRecursiveLock, NSString;

@interface IMDChat : NSObject
{
    NSRecursiveLock *_lock;
    NSString *_accountID;
    NSString *_serviceName;
    NSDictionary *_properties;
    NSString *_chatIdentifier;
    NSString *_guid;
    NSString *_groupID;
    NSString *_roomName;
    NSString *_displayName;
    NSString *_lastAddressedLocalHandle;
    NSArray *_participants;
    IMMessageItem *_lastMessage;
    NSMutableDictionary *_chatInfo;
    long long _state;
    unsigned char _style;
    unsigned long long _unreadCount;
    long long _rowID;
    BOOL _isArchived;
}

- (void)updateDisplayName:(id)arg1;
- (void)updateLastAddressedHandle:(id)arg1;
- (void)updateGroupID:(id)arg1;
- (void)storeAndBroadcastChatChanges;
- (void)updateProperties:(id)arg1;
- (void)_updateLastMessage:(id)arg1;
@property(readonly, retain) NSDictionary *dictionaryRepresentation;
- (id)copyDictionaryRepresentation:(BOOL)arg1;
@property(readonly, retain) NSDictionary *chatProperties;
- (id)description;
@property(readonly, retain) IMDServiceSession *serviceSession;
@property(readonly, retain) IMDService *service;
@property(readonly, retain) IMDAccount *account;
@property(copy) NSString *accountID;
- (void)removeParticipant:(id)arg1;
- (void)removeParticipants:(id)arg1;
- (void)addParticipant:(id)arg1;
- (void)addParticipants:(id)arg1;
- (void)_updateCachedParticipants;
- (void)_setRowID:(long long)arg1;
@property long long rowID;
@property(readonly) BOOL isArchived;
- (void)_setUnreadCount:(unsigned long long)arg1;
@property unsigned long long unreadCount;
@property long long state;
@property unsigned char style;
@property(retain) IMMessageItem *lastMessage;
@property(retain) NSDictionary *properties;
@property(copy) NSString *lastAddressedLocalHandle;
@property(copy) NSString *groupID;
@property(copy) NSString *displayName;
@property(copy) NSString *roomName;
@property(copy) NSArray *participants;
@property(copy) NSString *serviceName;
@property(copy) NSString *chatIdentifier;
@property(copy) NSString *guid;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 service:(id)arg2 guid:(id)arg3 groupID:(id)arg4 chatIdentifier:(id)arg5 participants:(id)arg6 roomName:(id)arg7 displayName:(id)arg8 lastAddressedLocalHandle:(id)arg9 properties:(id)arg10 state:(long long)arg11 style:(unsigned char)arg12;

@end

