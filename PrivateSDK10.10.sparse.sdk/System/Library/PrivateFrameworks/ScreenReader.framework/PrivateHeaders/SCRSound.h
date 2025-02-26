/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ScreenReader/SCROutputSound.h>

// Not exported
@interface SCRSound : SCROutputSound
{
    struct OpaqueAudioFileID *_audioFile;
    void *_info;
    void *_reservedData[7];
    float _volume;
    int _busId;
    double _audioDuration;
    unsigned long long _soundID;
}

+ (id)_soundForID:(unsigned long long)arg1;
+ (void)_unregisterSound:(id)arg1;
+ (void)_registerSound:(id)arg1;
+ (void)initialize;
@property(nonatomic) unsigned long long soundID; // @synthesize soundID=_soundID;
- (id)description;
- (id)soundData;
- (void)setBusId:(int)arg1;
- (int)busId;
- (void)audioCompletedCleanup;
- (void)_audioSchedulingComplete;
- (BOOL)_audioFailed:(id)arg1;
- (BOOL)stopImmediately;
- (BOOL)stop;
- (BOOL)play;
- (BOOL)isPlaying;
- (double)audioDuration;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 byReference:(BOOL)arg2;
- (id)initWithContentsOfFile:(id)arg1 byReference:(BOOL)arg2;
- (id)init;
- (void)_postInitialization;

@end

