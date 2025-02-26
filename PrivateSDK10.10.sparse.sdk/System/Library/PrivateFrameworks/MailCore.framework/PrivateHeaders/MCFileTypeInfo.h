/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MCFileTypeInfo : NSObject
{
    unsigned int _osType;
    NSString *_mimeType;
    NSString *_pathExtension;
}

@property(nonatomic) unsigned int osType; // @synthesize osType=_osType;
@property(copy, nonatomic) NSString *pathExtension; // @synthesize pathExtension=_pathExtension;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
- (void).cxx_destruct;
- (id)getPedigree;
- (void)_getTypeInfoFromFallbackFields:(unsigned long long *)arg1;
- (void)_getTypeInfoBasedOnFields:(unsigned long long *)arg1 inputClass:(struct __CFString *)arg2 inputValue:(struct __CFString *)arg3;
- (BOOL)getTypeInfoForDesiredFields:(unsigned long long)arg1;
- (id)description;

@end

