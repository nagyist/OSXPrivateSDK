/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ProKit/NSProOneDFramesTimecodeFormatDeputy.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

// Not exported
@interface NSProOneDVideoTimecodeFormatDeputy : NSProOneDFramesTimecodeFormatDeputy <NSCoding, NSCopying>
{
}

+ (long long)version;
+ (id)subtractFramesInvocation;
+ (id)addFramesInvocation;
+ (id)setFramesInvocation;
+ (id)framesInvocation;
+ (void)initialize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requiredProtocol;

@end

