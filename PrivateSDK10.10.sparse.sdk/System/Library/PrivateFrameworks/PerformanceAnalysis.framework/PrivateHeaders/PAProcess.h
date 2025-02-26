/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSArray, NSString, PAMallocData, PAPageResidency;

@interface PAProcess : NSObject <NSCoding>
{
    NSString *procName;
    NSString *displayName;
    struct kinfo_proc kp;
    NSArray *memRegions;
    PAPageResidency *privateRes;
    PAPageResidency *sharedRes;
    PAMallocData *mallocData;
    NSArray *images;
    NSArray *imageSegments;
    unsigned int task;
    int pid;
    int responsiblePid;
    unsigned int userWired;
    unsigned int numPorts;
    unsigned int numFaults;
    unsigned int numPageins;
    unsigned int numCOWFaults;
    unsigned int numMessagesSent;
    unsigned int numMessagesReceived;
    unsigned int numSyscallsUnix;
    unsigned int numSyscallsMach;
    unsigned int numContextSwitches;
    unsigned int numThreads;
    unsigned long long userCPUTime;
    unsigned long long systemCPUTime;
    unsigned long long kmem;
    BOOL is64bit;
    BOOL hasValidPort;
    int idleExitStatus;
}

+ (id)gatherGroupOfRunningChildProcessesFor:(id)arg1;
+ (id)findChildProcessesOf:(id)arg1 usingCandidateProcesses:(id)arg2;
+ (id)getAllProcesses;
+ (id)getProcessesWithName:(id)arg1;
+ (id)nameForLivingProcessWithPid:(int)arg1;
@property(readonly) struct kinfo_proc kp; // @synthesize kp;
@property(readonly) int idleExitStatus; // @synthesize idleExitStatus;
@property unsigned long long kmem; // @synthesize kmem;
@property unsigned int numContextSwitches; // @synthesize numContextSwitches;
@property unsigned int numSyscallsMach; // @synthesize numSyscallsMach;
@property unsigned int numSyscallsUnix; // @synthesize numSyscallsUnix;
@property unsigned int numMessagesReceived; // @synthesize numMessagesReceived;
@property unsigned int numMessagesSent; // @synthesize numMessagesSent;
@property unsigned int numCOWFaults; // @synthesize numCOWFaults;
@property unsigned int numPageins; // @synthesize numPageins;
@property unsigned int numFaults; // @synthesize numFaults;
@property unsigned long long systemCPUTime; // @synthesize systemCPUTime;
@property unsigned long long userCPUTime; // @synthesize userCPUTime;
@property unsigned int numThreads; // @synthesize numThreads;
@property unsigned int numPorts; // @synthesize numPorts;
@property(retain) NSArray *imageSegments; // @synthesize imageSegments;
@property(retain) NSArray *images; // @synthesize images;
@property(retain) NSArray *memRegions; // @synthesize memRegions;
@property BOOL is64bit; // @synthesize is64bit;
@property int responsiblePid; // @synthesize responsiblePid;
@property int pid; // @synthesize pid;
@property unsigned int task; // @synthesize task;
@property(copy) NSString *displayName; // @synthesize displayName;
@property(retain) NSString *procName; // @synthesize procName;
- (void)discardDetailedData;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)imageNamesWithSegmentsAndSectionsString;
- (id)imageNamesWithSegmentsString;
- (id)imageNamesString;
- (id)allRegionsString;
- (id)topLevelStatsString;
- (id)description;
- (id)architectureString;
- (id)memorySummaryString;
- (id)totalLeakedMemoryString;
- (id)totalAllocatedMemoryString;
- (id)wiredMemoryString;
- (id)contextSwitchString;
- (id)syscallString;
- (id)messagesString;
- (id)cpuTimeString;
- (id)sharedResidencyBytesString;
- (id)sharedResidencyString;
- (id)privateResidencyBytesString;
- (id)privateResidencyString;
- (id)portString;
- (id)eventString;
- (id)fullNameString;
- (id)nameString;
- (void)dealloc;
- (void)_gatherIdleExitStatus;
- (void)_gatherDisplayName;
- (id)initWithPid:(int)arg1;
- (void)gatherImageInformation;
- (id)getSharedResidency;
- (id)mallocData;
- (id)getPrivateResidency;
- (double)totalCpuTimeInSeconds;
- (double)systemCpuTimeInSeconds;
- (double)userCpuTimeInSeconds;
- (id)mallocDataWithFilter:(int)arg1;
- (void)gatherMallocDetailsNoStacks;
- (void)gatherMallocDetails;
- (void)gatherMallocInfo;
- (void)classifyMemoryRegions;
- (void)getThreadAndCPUInfo;
- (void)getKmem;
- (void)getEventInfo;
- (void)getPortInfo;
- (void)gatherResidentInfoDetailed:(BOOL)arg1;
- (void)initSharedResidency;
- (void)initPrivateResidency;
- (void)countObjectReferences;

@end

