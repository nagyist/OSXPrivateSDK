/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol DMPrincipalManagement
- (id)listGroupsForAccountNamed:(id)arg1;
- (id)groupExists:(id)arg1;
- (id)listMembers:(id)arg1;
- (id)removeGroup:(id)arg1;
- (id)removePrincipals:(id)arg1 fromGroup:(id)arg2;
- (id)addPrincipals:(id)arg1 toGroup:(id)arg2;
- (id)createGroup:(id)arg1 withMembers:(id)arg2;
- (id)allSecondaryUserInfo;
- (id)listSecondaryUsersForAccountNamed:(id)arg1;
- (id)resetPassword:(id)arg1 forSecondaryUserNamed:(id)arg2;
- (id)lookupPasswordForSecondaryUserNamed:(id)arg1;
- (id)removeSecondaryUserNamed:(id)arg1;
- (id)createSecondaryUserNamed:(id)arg1 withPassword:(id)arg2;
- (id)initWithIDiskSession:(id)arg1;
@end

