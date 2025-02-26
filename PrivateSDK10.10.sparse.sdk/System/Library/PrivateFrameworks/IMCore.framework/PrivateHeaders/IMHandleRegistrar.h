/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface IMHandleRegistrar : NSObject
{
    id _internal;
}

+ (id)sharedInstance;
- (void)_clearChatSiblingsForGUID:(id)arg1 handle:(id)arg2;
- (id)_existingChatSiblingsForHandle:(id)arg1;
- (BOOL)_buildingChatSiblings;
- (id)_chatSiblingsForHandle:(id)arg1;
- (void)_clearAccountSiblingsForGUID:(id)arg1 handle:(id)arg2;
- (id)_existingAccountSiblingsForHandle:(id)arg1;
- (id)_accountSiblingsForHandle:(id)arg1;
- (void)_accountsChanged:(id)arg1;
- (void)_dumpOutAllIMHandlesForAccount:(id)arg1;
- (void)_dumpOutAllIMHandles;
- (id)allIMHandles;
- (id)siblingsForIMHandle:(id)arg1;
- (void)clearSiblingCacheForIMHandle:(id)arg1;
- (void)unregisterIMHandle:(id)arg1;
- (void)registerIMHandle:(id)arg1;
- (void)_clearSiblingsCacheForIMHandle:(id)arg1 rebuildAfter:(BOOL)arg2;
- (void)_buildSiblingsForIMHandle:(id)arg1;
- (void)_emptySiblingCacheForIMHandleGUID:(id)arg1;
@property(nonatomic) long long nameStyle;
- (void)dealloc;
- (id)init;
- (void)_addressBookChanged:(id)arg1;

@end

