/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface CoreWiFiIE : NSObject
{
    NSData *rawIE;
    BOOL isValid;
    unsigned long long signatureLength;
    BOOL forBeacon;
    BOOL forProbeRequest;
    BOOL forProbeResponse;
    BOOL forAssocRequest;
    BOOL forAssocResponse;
}

@property(nonatomic) BOOL forAssocResponse; // @synthesize forAssocResponse;
@property(nonatomic) BOOL forAssocRequest; // @synthesize forAssocRequest;
@property(nonatomic) BOOL forProbeResponse; // @synthesize forProbeResponse;
@property(nonatomic) BOOL forProbeRequest; // @synthesize forProbeRequest;
@property(nonatomic) BOOL forBeacon; // @synthesize forBeacon;
@property(nonatomic) unsigned long long signatureLength; // @synthesize signatureLength;
@property(readonly, nonatomic) BOOL isValid; // @synthesize isValid;
@property(retain, nonatomic) NSData *rawIE; // @synthesize rawIE;
- (BOOL)setManagementFramesWithOptionString:(id)arg1 error:(id *)arg2;
- (BOOL)setRawInformationElementFromHexString:(id)arg1 error:(id *)arg2;
- (BOOL)isEquivalentToIE:(id)arg1;
@property(readonly) NSData *signatureIE; // @dynamic signatureIE;
@property(readonly) NSData *driverFriendlyIE; // @dynamic driverFriendlyIE;
- (BOOL)generateIE:(id *)arg1;
- (BOOL)parseIE:(id *)arg1;
- (id)skeleton;
- (id)description;
- (void)dealloc;
- (id)initWithSkeleton:(id)arg1;
- (id)initWithIE:(id)arg1;
- (id)init;
- (id)representedIE;

@end

