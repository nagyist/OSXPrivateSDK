/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PKDistribution;

@interface PKDistributionContainer : NSObject
{
    PKDistribution *_distribution;
}

+ (id)localizationNamesAtPath:(id)arg1;
+ (id)_lprojSubpathsInDirectory:(id)arg1;
- (id)resourceDataForKey:(id)arg1 returningMIMEType:(id *)arg2 returningUTI:(id *)arg3;
- (id)_resourceContentType:(id)arg1 forKey:(id)arg2;
- (id)_resourceDataForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;
- (id)stringsDictionary;
- (id)distribution;
- (void)dealloc;
- (id)initWithArchive:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 error:(id *)arg2;
- (id)initWithDistributionData:(id)arg1 distributionURL:(id)arg2 error:(id *)arg3;
- (id)_initWithDistributionData:(id)arg1 distributionURL:(id)arg2 error:(id *)arg3;

@end

