/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MBMailAppISPConfiguraion : NSObject
{
    NSString *_Identifier;
    NSString *_POPAccountID;
    NSString *_SMTPAccountID;
    NSString *_AccountName;
    NSString *_EmailAddressDomain;
    NSString *_POPServerName;
    NSString *_SMTPServerName;
    NSString *_SupportURL;
}

+ (id)sharedConfiguration;
- (BOOL)writeToFile;
- (void)configureWithINSSettings:(id)arg1 forISP:(id)arg2;
- (void)configureWithXMLSettings:(id)arg1;
- (id)_generateCFUUIDString;
- (id)_reverseOrder:(id)arg1;
- (id)_extractDomainName:(id)arg1;

@end

