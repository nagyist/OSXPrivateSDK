/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface DataSourceManagerTestClient_Private : NSObject
{
    unsigned int _kernelDataBufferSizeInMB;
    id <DataSourceManager> _dsmToTest;
}

+ (id)reportResultsForDataStream:(id)arg1;
+ (void)printStreamDescription:(id)arg1 withErrorArray:(id)arg2;
@property(readonly) unsigned int kernelDataBufferSizeInMB; // @synthesize kernelDataBufferSizeInMB=_kernelDataBufferSizeInMB;
@property(readonly) id <DataSourceManager> dsmToTest; // @synthesize dsmToTest=_dsmToTest;
- (void).cxx_destruct;
- (id)initWithDataSourceManager:(id)arg1 andKernelDataBufferSizeInMB:(unsigned int)arg2;
- (id)testModeWithName:(id)arg1 andDataStreamsWithNames:(id)arg2;
- (id)testModeWithName:(id)arg1 andDataStreamWithName:(id)arg2;
- (id)testAllDataStreamsForModeWithName:(id)arg1;
- (id)testAllModesAndAllDataStreams;
- (id)listDataStreamsForModesWithNames:(id)arg1;
- (id)listDataStreamsForModeWithName:(id)arg1;
- (id)listAllDataStreamsForAllModes;
- (void)listAllModes;

@end

