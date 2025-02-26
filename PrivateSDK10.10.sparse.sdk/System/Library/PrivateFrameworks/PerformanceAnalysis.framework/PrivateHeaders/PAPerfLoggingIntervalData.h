/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "PAPerfLoggingResult-Protocol.h"

@class NSArray, NSString;

@interface PAPerfLoggingIntervalData : NSObject <PAPerfLoggingResult, NSCoding>
{
    NSString *_intervalType;
    NSString *_processName;
    NSString *_operationCategory;
    NSString *_operationName;
    NSArray *_processedContextDataArray;
    NSArray *_processedContextDataUOMsArray;
    double *_intervalDurationInMsArray;
    double *_intervalStartTimeInSecArray;
    double _averageIntervalDurationInMs;
    double _standardDeviationIntervalDurationInMs;
    double _normalizedStandardDeviation;
    unsigned long long _intervalCount;
    unsigned long long _numUnpairedTransitions;
    double _operationStartTimeInSec;
    double _operationEndTimeInSec;
    double _firstIntervalStartInSec;
    double _endOfLastIntervalInSec;
}

@property(readonly) NSArray *processedContextDataUOMsArray; // @synthesize processedContextDataUOMsArray=_processedContextDataUOMsArray;
@property(readonly) NSArray *processedContextDataArray; // @synthesize processedContextDataArray=_processedContextDataArray;
@property(readonly) double endOfLastIntervalInSec; // @synthesize endOfLastIntervalInSec=_endOfLastIntervalInSec;
@property(readonly) double startOfFirstIntervalInSec; // @synthesize startOfFirstIntervalInSec=_firstIntervalStartInSec;
@property(readonly) const double *intervalStartTimeInSecArray; // @synthesize intervalStartTimeInSecArray=_intervalStartTimeInSecArray;
@property(readonly) double *intervalDurationInMsArray; // @synthesize intervalDurationInMsArray=_intervalDurationInMsArray;
@property(readonly) double operationEndTimeInSec; // @synthesize operationEndTimeInSec=_operationEndTimeInSec;
@property(readonly) double operationStartTimeInSec; // @synthesize operationStartTimeInSec=_operationStartTimeInSec;
@property(retain) NSString *operationName; // @synthesize operationName=_operationName;
@property(retain) NSString *operationCategory; // @synthesize operationCategory=_operationCategory;
@property(retain) NSString *processName; // @synthesize processName=_processName;
@property unsigned long long numUnpairedIntervalEndsOrStarts; // @synthesize numUnpairedIntervalEndsOrStarts=_numUnpairedTransitions;
@property unsigned long long intervalCount; // @synthesize intervalCount=_intervalCount;
@property(readonly) double normalizedStandardDeviation; // @synthesize normalizedStandardDeviation=_normalizedStandardDeviation;
@property(readonly) double standardDeviationIntervalDurationInMs; // @synthesize standardDeviationIntervalDurationInMs=_standardDeviationIntervalDurationInMs;
@property(readonly) double averageIntervalDurationInMs; // @synthesize averageIntervalDurationInMs=_averageIntervalDurationInMs;
@property(retain) NSString *intervalType; // @synthesize intervalType=_intervalType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)printTimelineToFile:(struct __sFILE *)arg1;
- (void)printAggregatedStackshotToFile:(struct __sFILE *)arg1 forIntervalIndex:(unsigned long long)arg2 withSampleTimeSeriesDataStore:(id)arg3;
- (void)logIntervalData:(BOOL)arg1;
- (void)addIntervalDataToMessageTracerMessage:(struct __asl_object_s *)arg1;
- (void)_addNSStringDataType:(id)arg1 andDoubleValue:(double)arg2 toMessageTracerMessage:(struct __asl_object_s *)arg3;
- (char *)_newMessageTracerIntervalSpecificCStringKeyForNSStringDataType:(id)arg1;
- (void)_logPAPerfLoggingDataValue:(double)arg1 uom:(id)arg2 doLocalLogging:(BOOL)arg3;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithIntervalType:(id)arg1 andIntervalDurationInMSArray:(double *)arg2 andIntervalStartTimeInSecArray:(double *)arg3 ofLength:(unsigned long long)arg4 andNumUnpairedTransitions:(unsigned long long)arg5 andTimeOfFirstIntervalStartInSec:(double)arg6 andTimeOfLastIntervalEndInSec:(double)arg7 andProcessedMetaDataArray:(id)arg8 andProcessedMetaDataUOMsArray:(id)arg9 andSampleTimeSeriesDataStore:(id)arg10 withPAPerfLoggingData:(id)arg11;
- (void)_initializeFieldsFromParentOperationInformation:(id)arg1;
@property(readonly) double trailingDelayDurationInMs;
@property(readonly) double initialDelayDurationInMs;
@property(readonly) double timeBetweenOperationStartAndFirstIntervalInMs;
@property(readonly) double intervalRateOverOperationIgnoringDelayInIntervalsPerSec;
@property(readonly) double intervalRateOverOperationInIntervalsPerSec;
- (id)trailingDelayStackshotUsingSampleTimeSeriesDataStore:(id)arg1;
- (id)initialDelayStackshotUsingSampleTimeSeriesDataStore:(id)arg1;
@property(readonly) double totalOperationDurationInMs;
- (BOOL)_isWSFrameInterval;

@end

