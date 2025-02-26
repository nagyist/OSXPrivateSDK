/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface CNVCardActivityAlertScanner : NSObject
{
    NSString *_string;
    unsigned long long _position;
}

+ (BOOL)characterIsStringValueCharacter:(unsigned short)arg1;
+ (id)scannerWithString:(id)arg1;
+ (id)scanAlertValueFromString:(id)arg1;
- (BOOL)atEnd;
- (unsigned long long)position;
- (unsigned short)nextUnescapedCharacter;
- (unsigned short)nextCharacter;
- (void)scanPastWhitespace;
- (BOOL)scanPastCharacter:(unsigned short)arg1;
- (unsigned short)scanCharacterWithEscaping:(BOOL)arg1;
- (unsigned short)scanCharacter;
- (BOOL)scanPastItemDelimiter;
- (BOOL)scanPastKeyValueSeparator;
- (id)scanQuotedStringValue;
- (id)scanUnquotedStringValue;
- (id)scanStringValue;
- (id)scanKeyValuePair;
- (id)scanAlertValue;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end

