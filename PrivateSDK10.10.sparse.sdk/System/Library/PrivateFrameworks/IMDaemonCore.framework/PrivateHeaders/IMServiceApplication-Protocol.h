/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol IMServiceApplication <NSObject>
- (oneway void)plugInDidUpdateProperties:(id)arg1 ofHandle:(id)arg2;
- (oneway void)plugInDidFailToAuthenticate;
- (oneway void)plugInDidLogOutWithError:(id)arg1 reconnect:(BOOL)arg2;
- (oneway void)plugInDidLogIn;
@end

