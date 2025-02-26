/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface VKPlatform : NSObject
{
    unsigned long long _memSize;
    int _numCPUs;
    BOOL _proceduralRoadAlpha;
    BOOL _useCheapTrafficShader;
    BOOL _shouldUseTrafficAlphaHack;
    BOOL _supportsBuildingStrokes;
    BOOL _supports3DBuildingStrokes;
}

+ (id)sharedPlatform;
@property(readonly, nonatomic) BOOL supports3DBuildingStrokes; // @synthesize supports3DBuildingStrokes=_supports3DBuildingStrokes;
@property(readonly, nonatomic) BOOL supportsBuildingStrokes; // @synthesize supportsBuildingStrokes=_supportsBuildingStrokes;
@property(readonly, nonatomic) BOOL shouldUseTrafficAlphaHack; // @synthesize shouldUseTrafficAlphaHack=_shouldUseTrafficAlphaHack;
@property(readonly, nonatomic) BOOL useCheapTrafficShader; // @synthesize useCheapTrafficShader=_useCheapTrafficShader;
@property(readonly, nonatomic) BOOL proceduralRoadAlpha; // @synthesize proceduralRoadAlpha=_proceduralRoadAlpha;
@property(readonly, nonatomic) unsigned long long memorySize; // @synthesize memorySize=_memSize;
@property(readonly, nonatomic) BOOL supportsBuildingShadows;
@property(readonly, nonatomic) unsigned int tileDecodeQueueWidth;
@property(readonly, nonatomic) BOOL shouldPregenerateLabelGlyphs;
@property(readonly, nonatomic) BOOL shouldStyleLabelsInParallel;
@property(readonly, nonatomic) BOOL supportsHiResBuildings;
@property(readonly, nonatomic) double mainScreenPPI;
@property(readonly, nonatomic) double maxContentScaleForRendering;
@property(readonly, nonatomic) double mainScreenScale;
@property(readonly, nonatomic) BOOL shouldDrawWhenReady;
@property(readonly, nonatomic) BOOL isPad;
@property(readonly, nonatomic) BOOL canMakeSharingThumbnails;
@property(readonly, nonatomic) BOOL supportsHiResRTT;
@property(readonly, nonatomic) unsigned int tilePrefetchNumberOfScreens;
@property(readonly, nonatomic) unsigned long long tileMaximumLimit;
- (unsigned long long)tileReserveLimit:(BOOL)arg1;
@property(readonly, nonatomic) BOOL roadsWithSimpleLineMeshesAvailable;
- (void)_determineHardware;
- (unsigned long long)_calculateMemSize;
- (void)dealloc;
- (id)init;

@end

