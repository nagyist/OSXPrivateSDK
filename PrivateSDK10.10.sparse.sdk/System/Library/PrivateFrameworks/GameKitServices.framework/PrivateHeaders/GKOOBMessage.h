/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface GKOOBMessage : NSObject
{
    unsigned short _type;
}

@property(readonly) unsigned short type; // @synthesize type=_type;
- (BOOL)_checkSize:(unsigned long long)arg1;
- (BOOL)_checkType:(unsigned short)arg1;
- (id)data;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithMessageType:(unsigned short)arg1;

@end

