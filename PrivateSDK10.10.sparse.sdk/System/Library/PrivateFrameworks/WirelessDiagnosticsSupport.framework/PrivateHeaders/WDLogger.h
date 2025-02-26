/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CWInterface, NSDateFormatter, NSFileHandle, NSObject<OS_dispatch_queue>, NSString, SFAuthorization, WDXPCClient;

@interface WDLogger : NSObject
{
    WDXPCClient *_xpcClient;
    CWInterface *_interface;
    NSFileHandle *_fileHandle;
    NSString *_tempDirectory;
    NSDateFormatter *_formatter;
    SFAuthorization *_authorization;
    NSObject<OS_dispatch_queue> *_logMutex;
}

+ (id)__descriptionForNetwork:(id)arg1;
+ (id)__descriptionForPHY:(id)arg1;
+ (id)__descriptionForChannel:(id)arg1;
+ (id)__descriptionForRSNIE:(id)arg1;
+ (id)__descriptionForRSNAuthSel:(int)arg1;
+ (id)__descriptionForRSNCipher:(int)arg1;
+ (id)__descriptionForWPAIE:(id)arg1;
+ (id)__descriptionForWPAAuthSel:(int)arg1;
+ (id)__descriptionForWPACipher:(int)arg1;
+ (BOOL)tarWithSource:(id)arg1 destination:(id)arg2;
+ (void)dittoWithSource:(id)arg1 destination:(id)arg2;
+ (BOOL)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 timeout:(double)arg3 error:(id *)arg4 standardErrData:(id *)arg5 standardOutData:(id *)arg6;
- (id)createDiagnosticsReportWithOutputPath:(id)arg1;
- (id)createBasicDiagnosticsReportWithOutputPath:(id)arg1;
- (id)createMiniDiagnosticsReportWithOutputPath:(id)arg1;
- (id)__logAWDLInfo;
- (BOOL)logAirPortRouterInfo;
- (id)__appleProductNameForProductID:(unsigned char)arg1;
- (id)__logScanResults;
- (void)getInfo;
- (void)logNetworkConfigurationInfo;
- (void)logWirelessEnvironmentInfo;
- (void)logBluetoothInfo;
- (void)logWiFiInterfaceInfo;
- (void)setOpenDirectoryLoggingEnabled:(BOOL)arg1;
- (void)setDNSLoggingEnabled:(BOOL)arg1;
- (void)setDHCPLoggingEnabled:(BOOL)arg1;
- (void)setEAPOLLoggingEnabled:(BOOL)arg1;
- (void)setWiFiLoggingEnabled:(BOOL)arg1;
- (void)setSharingLoggingEnabled:(BOOL)arg1;
- (BOOL)sharingLoggingEnabled;
- (BOOL)openDirectoryLoggingEnabled;
- (BOOL)dnsLoggingEnabled;
- (BOOL)dhcpLoggingEnabled;
- (BOOL)eapolLoggingEnabled;
- (BOOL)wifiLoggingEnabled;
- (id)machineSerialNumber;
- (void)logTimestampedMessage:(id)arg1;
- (void)logMessage:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithXPCClient:(id)arg1 interface:(id)arg2 authorization:(id)arg3;

@end

