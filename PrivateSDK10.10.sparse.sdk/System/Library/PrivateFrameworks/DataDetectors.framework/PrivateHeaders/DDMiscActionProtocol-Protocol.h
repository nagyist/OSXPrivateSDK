/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol DDMiscActionProtocol
+ (BOOL)canRunInAppSandbox;
+ (id)runActionWithResult:(struct __DDResult *)arg1 url:(id)arg2 textCheckingResult:(id)arg3 context:(id)arg4;

@optional
+ (id)prepareMenuItem:(id)arg1 result:(struct __DDResult *)arg2 url:(id)arg3 textCheckingResult:(id)arg4 context:(id)arg5;
+ (id)localizedDynamicName;
+ (id)runXPCActionWithDictionary:(id)arg1 peerConnection:(struct _xpc_connection_s *)arg2;
+ (id)dictionaryWithResult:(struct __DDResult *)arg1 url:(id)arg2 textCheckingResult:(id)arg3 context:(id)arg4;
+ (BOOL)willNotifyXPCServiceWhenUIFinished;
+ (BOOL)requiresMatchedString;
+ (BOOL)actionValidForTextCheckingResult:(id)arg1;
+ (BOOL)actionValidForDataDetectorsResult:(struct __DDResult *)arg1;
@end

