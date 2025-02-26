/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSSharingService.h"

#import "NSSharingServiceDelegate-Protocol.h"

@class NSString;

// Not exported
@interface BrowserSharingService : NSSharingService <NSSharingServiceDelegate>
{
}

- (id)initWithTitle:(id)arg1 image:(id)arg2 alternateImage:(id)arg3 items:(id)arg4 handler:(id)arg5;
- (id)initWithSharingService:(id)arg1 title:(id)arg2 items:(id)arg3 handler:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

