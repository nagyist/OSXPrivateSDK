/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSInvocation.h"

@interface MCPriorityInvocation : NSInvocation
{
    unsigned char _priority;
}

+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 object3:(id)arg5 object4:(id)arg6 priority:(unsigned char)arg7;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 object3:(id)arg5 priority:(unsigned char)arg6;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 priority:(unsigned char)arg5;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3 priority:(unsigned char)arg4;
+ (id)invocationWithSelector:(SEL)arg1 target:(id)arg2 priority:(unsigned char)arg3;
@property unsigned char priority; // @synthesize priority=_priority;

@end

