/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Safari/DownloadFileUnarchiver.h>

// Not exported
@interface DownloadFileBOMUnarchiver : DownloadFileUnarchiver
{
    struct _BOMCopier *_copier;
}

@property(nonatomic) struct _BOMCopier *copier; // @synthesize copier=_copier;
- (void)interruptUnarchiving;
- (BOOL)canInterruptUnarchiving;
- (void)unarchive;
- (id)optionsForExtraction;

@end

