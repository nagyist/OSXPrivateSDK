/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MCJunkRecorder, NSMutableString, NSSet;

@interface MCStringRenderContext : NSObject
{
    NSMutableString *_buffer;
    BOOL _updateBodyFlags;
    MCJunkRecorder *_junkRecorder;
    unsigned long long _imageCount;
    unsigned long long _characterCount;
    NSSet *_URLs;
    NSSet *_imageURLs;
    long long _mode;
}

@property(readonly, nonatomic) NSMutableString *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) BOOL updateBodyFlags; // @synthesize updateBodyFlags=_updateBodyFlags;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSSet *imageURLs; // @synthesize imageURLs=_imageURLs;
@property(retain, nonatomic) NSSet *URLs; // @synthesize URLs=_URLs;
@property(nonatomic) unsigned long long characterCount; // @synthesize characterCount=_characterCount;
@property(nonatomic) unsigned long long imageCount; // @synthesize imageCount=_imageCount;
@property(retain, nonatomic) MCJunkRecorder *junkRecorder; // @synthesize junkRecorder=_junkRecorder;
- (void).cxx_destruct;
- (id)renderString;
- (id)init;
- (id)initForMode:(long long)arg1;

@end

