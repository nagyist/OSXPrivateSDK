/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FinderKit/FI_TFileSystemOperationDelegate.h>

// Not exported
@interface FI_TRenameOperationDelegate : FI_TFileSystemOperationDelegate
{
    struct TString _newName;
    struct TriStateBool _extensionHiddenState;
}

+ (_Bool)isReservedName:(const struct TString *)arg1 syntaxHint:(const struct NodeNameSyntaxHint *)arg2;
+ (int)validateNewName:(const struct TString *)arg1 forNode:(const struct TFENode *)arg2 isDisplayName:(_Bool)arg3 allowInteraction:(_Bool)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)configureNewName:(struct TString *)arg1 forNode:(const struct TFENode *)arg2 isDisplayName:(_Bool)arg3 allowInteraction:(_Bool)arg4;
- (int)asyncNodeOperation:(id)arg1 subOperationCompleted:(unsigned int)arg2 targetNode:(const struct TFENode *)arg3;
- (int)asyncNodeOperation:(id)arg1 errorNotification:(const struct OperationMonitor *)arg2 error:(const struct OperationErrorRecord *)arg3 reply:(struct NodeEventReply *)arg4;
- (const struct TriStateBool *)extensionHiddenState;
- (const struct TString *)newName;

@end

