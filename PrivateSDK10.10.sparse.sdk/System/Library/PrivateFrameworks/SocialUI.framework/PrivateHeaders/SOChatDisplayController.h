/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSResponder.h"

#import "NSCoding-Protocol.h"
#import "NSTextStorageDelegate-Protocol.h"

@class IMAccount, IMChat, NSArray, NSAttributedString, NSDate, NSMutableDictionary, NSOrderedSet, NSString, NSTextStorage, NSUndoManager, SOTranscriptSettings;

@interface SOChatDisplayController : NSResponder <NSCoding, NSTextStorageDelegate>
{
    BOOL _isShowingSendingText;
    BOOL _hasHitBoundsLimit;
    _Bool _joiningInvitation;
    NSString *_title;
    NSString *_customTitle;
    NSString *_defaultTitle;
    NSString *_persistentGUID;
    NSDate *_lastActivityDate;
    NSString *_summary;
    IMChat *_chat;
    IMAccount *_sendingAccount;
    NSTextStorage *_inputLineTextStorage;
    NSArray *_inputLineSelectedRanges;
    NSUndoManager *_inputLineUndoManager;
    NSArray *_recipients;
    NSArray *_recipientHandles;
    NSMutableDictionary *_viewConfigurationStorage;
}

@property(retain) NSMutableDictionary *viewConfigurationStorage; // @synthesize viewConfigurationStorage=_viewConfigurationStorage;
@property(readonly, nonatomic, getter=isJoiningInvitation) _Bool joiningInvitation; // @synthesize joiningInvitation=_joiningInvitation;
@property BOOL hasHitBoundsLimit; // @synthesize hasHitBoundsLimit=_hasHitBoundsLimit;
@property(copy, nonatomic) NSArray *recipientHandles; // @synthesize recipientHandles=_recipientHandles;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, nonatomic) NSUndoManager *inputLineUndoManager; // @synthesize inputLineUndoManager=_inputLineUndoManager;
@property(retain, nonatomic) NSArray *inputLineSelectedRanges; // @synthesize inputLineSelectedRanges=_inputLineSelectedRanges;
@property(readonly, nonatomic) NSTextStorage *inputLineTextStorage; // @synthesize inputLineTextStorage=_inputLineTextStorage;
@property(nonatomic, setter=setShowingSendingText:) BOOL isShowingSendingText; // @synthesize isShowingSendingText=_isShowingSendingText;
@property(retain, nonatomic) IMAccount *sendingAccount; // @synthesize sendingAccount=_sendingAccount;
@property(retain, nonatomic) IMChat *chat; // @synthesize chat=_chat;
@property(readonly, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) NSDate *lastActivityDate; // @synthesize lastActivityDate=_lastActivityDate;
@property(retain, nonatomic) NSString *persistentGUID; // @synthesize persistentGUID=_persistentGUID;
@property(readonly, copy, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(copy, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)textStorageWillProcessEditing:(id)arg1;
- (void)_updateRecipientHandles;
- (void)_chatDisplayNameDidChange:(id)arg1;
- (void)_addressBookPreferencesChanged:(id)arg1;
- (void)_handleInfoChanged:(id)arg1;
- (void)_chatRecipientsDidChange:(id)arg1;
- (void)chatDisplayNameDidChange;
- (void)chatRecipientsDidChange;
- (void)chatDidChange;
- (void)chatWillChange:(id)arg1;
- (void)updateTitle;
- (void)_handleInfoDidChange:(id)arg1;
- (void)_commonSOChatDisplayControllerInit;
- (BOOL)sendFormattedString:(id)arg1 error:(id *)arg2;
- (BOOL)sendInputLineContentsAndReturnError:(id *)arg1;
- (BOOL)appendFilesAtURLs:(id)arg1 intoInputLineContentsReturningError:(id *)arg2;
- (BOOL)insertFilesAtURLs:(id)arg1 intoInputLineContentsReturningError:(id *)arg2;
- (BOOL)canInsertFilesAtURLs:(id)arg1 intoInputLineContentsReturningError:(id *)arg2;
- (unsigned long long)validateIMHandle:(id)arg1;
- (void)recipientHandlesDidChange;
- (void)recipientsDidChange;
- (void)restoreInputLineSelectedRanges:(id)arg1;
- (void)setValue:(id)arg1 forViewConfigurationStorageKey:(id)arg2;
- (id)valueForViewConfigurationStorageKey:(id)arg1;
@property(readonly) BOOL canRemoveRecipientHandles; // @dynamic canRemoveRecipientHandles;
@property(readonly, nonatomic) BOOL canAddRecipientHandles; // @dynamic canAddRecipientHandles;
@property(readonly, nonatomic) NSOrderedSet *actionableHandles; // @dynamic actionableHandles;
@property(readonly) BOOL recipientIsChat; // @dynamic recipientIsChat;
@property(readonly, nonatomic) SOTranscriptSettings *transcriptSettings; // @dynamic transcriptSettings;
@property(readonly, nonatomic) BOOL canInsertAttachmentsIntoInputLineContents; // @dynamic canInsertAttachmentsIntoInputLineContents;
@property(readonly) BOOL inputLineContainsFileTransfers; // @dynamic inputLineContainsFileTransfers;
@property(readonly, nonatomic) BOOL inputLineHasContent; // @dynamic inputLineHasContent;
@property(copy, nonatomic) NSAttributedString *inputLineAttributedString; // @dynamic inputLineAttributedString;
@property(readonly, nonatomic) BOOL canBeRestored; // @dynamic canBeRestored;
@property(readonly, nonatomic) BOOL representsNewChat; // @dynamic representsNewChat;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

