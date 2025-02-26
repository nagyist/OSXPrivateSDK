/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSString;

@interface MSMessage : NSObject <NSSecureCoding>
{
    BOOL _isRead;
    unsigned int _messageFlags;
    NSDate *_dateReceived;
    NSDate *_dateSent;
    NSString *_sender;
    NSString *_subject;
    NSArray *_toRecipients;
    NSArray *_CCRecipients;
    NSString *_snippet;
    NSString *_messageID;
    NSString *_path;
    long long _libraryID;
}

+ (id)toOrCCRecipientsAllowedClasses;
+ (BOOL)supportsSecureCoding;
@property BOOL isRead; // @synthesize isRead=_isRead;
@property long long libraryID; // @synthesize libraryID=_libraryID;
@property unsigned int messageFlags; // @synthesize messageFlags=_messageFlags;
@property(copy) NSString *path; // @synthesize path=_path;
@property(copy) NSString *messageID; // @synthesize messageID=_messageID;
@property(copy) NSString *snippet; // @synthesize snippet=_snippet;
@property(copy) NSArray *CCRecipients; // @synthesize CCRecipients=_CCRecipients;
@property(copy) NSArray *toRecipients; // @synthesize toRecipients=_toRecipients;
@property(copy) NSString *subject; // @synthesize subject=_subject;
@property(copy) NSString *sender; // @synthesize sender=_sender;
@property(copy) NSDate *dateSent; // @synthesize dateSent=_dateSent;
@property(copy) NSDate *dateReceived; // @synthesize dateReceived=_dateReceived;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateReceived:(id)arg1 dateSent:(id)arg2 sender:(id)arg3 subject:(id)arg4 toRecipients:(id)arg5 CCRecipients:(id)arg6 snippet:(id)arg7 messageID:(id)arg8 path:(id)arg9 messageFlags:(unsigned int)arg10 libraryID:(long long)arg11 isRead:(BOOL)arg12;

@end

