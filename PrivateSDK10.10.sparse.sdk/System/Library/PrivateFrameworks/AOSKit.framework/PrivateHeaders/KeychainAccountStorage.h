/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface KeychainAccountStorage : NSObject
{
}

+ (id)configuredAccountIdentifiers;
+ (void)_deleteFileAtPath:(id)arg1 ifNotOfExpectedType:(id)arg2;
+ (BOOL)_accountsDirectoryCreated;
+ (void)_setCachedKey:(id)arg1 forDSID:(id)arg2;
+ (id)_cachedKeyForDSID:(id)arg1;
+ (void)_removeInfoForDSID:(id)arg1;
+ (id)_dsidForAccount:(struct AOSAccount *)arg1;
+ (id)_dsidForAlias:(id)arg1;
+ (id)_aliasPathsForDSID:(id)arg1;
+ (void)_removeAliasesForDSID:(id)arg1;
+ (BOOL)_updateAlias:(id)arg1 forDSID:(id)arg2;
+ (BOOL)_updateAliases:(id)arg1 forDSID:(id)arg2;
+ (id)_generateKeyFromData:(id)arg1;
+ (id)_decryptedDataForDSID:(id)arg1 andKey:(id)arg2;
+ (BOOL)_storeInfo:(id)arg1 forDSID:(id)arg2 withKey:(id)arg3;
+ (id)_storedInfoForDSID:(id)arg1 withKey:(id)arg2;
+ (void)_removeKeyForDSID:(id)arg1 andService:(id)arg2;
+ (int)_updateItem:(struct OpaqueSecKeychainItemRef *)arg1 withNewServiceName:(id)arg2;
+ (BOOL)_storeKey:(id)arg1 forDSID:(id)arg2 service:(id)arg3 primaryAppleID:(id)arg4 andAccount:(struct AOSAccount *)arg5;
+ (id)_storedKeyForDSID:(id)arg1 andAccount:(struct AOSAccount *)arg2;
+ (void)removeInfoForAccount:(struct AOSAccount *)arg1;
+ (BOOL)storeInfo:(id)arg1 forAccount:(struct AOSAccount *)arg2;
+ (id)storedInfoForAccount:(struct AOSAccount *)arg1;
+ (void)initialize;

@end

