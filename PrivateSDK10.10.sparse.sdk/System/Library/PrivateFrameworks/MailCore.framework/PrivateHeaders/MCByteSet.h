/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@interface MCByteSet : NSObject <NSCopying, NSMutableCopying>
{
    unsigned char _bitString[32];
}

+ (id)nonASCIIByteSet;
+ (id)ASCIIByteSet;
+ (id)asciiWhitespaceSet;
- (BOOL)byteIsMember:(unsigned char)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithCString:(const char *)arg1;
- (id)init;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithRange:(struct _NSRange)arg1;

@end

