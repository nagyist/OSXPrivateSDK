/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Install/IFInstallQueueElement.h>

@class NSString;

@interface IFRemoveTempDirsElement : IFInstallQueueElement
{
    NSString *_tempPath;
    int _installKey;
}

- (long long)run;
- (id)description;
- (id)logDescription;
- (void)dealloc;
- (id)initWithPath:(id)arg1 installKey:(int)arg2;

@end

