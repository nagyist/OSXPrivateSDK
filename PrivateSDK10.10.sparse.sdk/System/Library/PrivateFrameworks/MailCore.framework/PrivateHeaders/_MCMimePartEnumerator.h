/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSEnumerator.h"

@class MCMimePart;

@interface _MCMimePartEnumerator : NSEnumerator
{
    BOOL _onlyAttachments;
    BOOL _isFirstIteration;
    MCMimePart *_currentPart;
}

@property(retain, nonatomic) MCMimePart *currentPart; // @synthesize currentPart=_currentPart;
@property(nonatomic) BOOL isFirstIteration; // @synthesize isFirstIteration=_isFirstIteration;
@property(nonatomic) BOOL onlyAttachments; // @synthesize onlyAttachments=_onlyAttachments;
- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithMimeBody:(id)arg1 onlyAttachments:(BOOL)arg2;

@end

