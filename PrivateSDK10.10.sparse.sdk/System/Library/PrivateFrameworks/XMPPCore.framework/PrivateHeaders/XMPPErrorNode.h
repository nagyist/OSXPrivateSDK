/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <XMPPCore/XMPPNode.h>

@class NSString, XMPPXMLNode;

@interface XMPPErrorNode : XMPPNode
{
    NSString *_errorContents;
    NSString *_errorText;
    NSString *_errorType;
    XMPPXMLNode *_appSpecificError;
    int _errorCode;
    unsigned int _legacyNode:1;
}

- (id)newChildWithName:(id)arg1 attributes:(id)arg2;
- (void)addText:(id)arg1;
- (id)initWithName:(id)arg1 attributes:(id)arg2;
- (id)_error;
- (id)_newPlainTextNodeFor:(id *)arg1;
- (void)dealloc;

@end

