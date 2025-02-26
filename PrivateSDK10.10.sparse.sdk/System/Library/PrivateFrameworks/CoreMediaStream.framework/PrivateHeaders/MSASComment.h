/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSString;

@interface MSASComment : NSObject
{
    BOOL _isLike;
    BOOL _isCaption;
    BOOL _isBatchComment;
    BOOL _isDeletable;
    BOOL _isMine;
    int _ID;
    NSString *_GUID;
    NSDate *_timestamp;
    NSDate *_clientTimestamp;
    NSString *_personID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_fullName;
    NSString *_email;
    NSString *_content;
}

+ (BOOL)supportsSecureCoding;
+ (id)comment;
+ (id)MSASPCommentFromProtocolDictionary:(id)arg1;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) BOOL isMine; // @synthesize isMine=_isMine;
@property(nonatomic) BOOL isDeletable; // @synthesize isDeletable=_isDeletable;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(nonatomic) BOOL isBatchComment; // @synthesize isBatchComment=_isBatchComment;
@property(nonatomic) BOOL isCaption; // @synthesize isCaption=_isCaption;
@property(nonatomic) BOOL isLike; // @synthesize isLike=_isLike;
@property(retain, nonatomic) NSDate *clientTimestamp; // @synthesize clientTimestamp=_clientTimestamp;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) int ID; // @synthesize ID=_ID;
@property(retain, nonatomic) NSString *GUID; // @synthesize GUID=_GUID;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end

