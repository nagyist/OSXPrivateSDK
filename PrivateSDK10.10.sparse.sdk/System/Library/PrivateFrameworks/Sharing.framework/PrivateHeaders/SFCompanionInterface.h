/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSXPCInterface, Protocol;

@interface SFCompanionInterface : NSObject
{
    NSXPCInterface *_interface;
}

+ (id)interfaceWithProtocol:(id)arg1;
@property(retain) NSXPCInterface *interface; // @synthesize interface=_interface;
- (id)interfaceForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3;
- (void)setInterface:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4;
- (id)classesForSelector:(SEL)arg1 argumentIndex:(unsigned long long)arg2 ofReply:(BOOL)arg3;
- (void)setClasses:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3 ofReply:(BOOL)arg4;
@property Protocol *protocol;
- (void)dealloc;
- (id)initWithNSXPCInterface:(id)arg1;

@end

