/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADLineJoin.h>

// Not exported
@interface OADMiterLineJoin : OADLineJoin
{
    float mLimit;
    unsigned int mIsLimitOverridden:1;
}

+ (id)defaultProperties;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLimitOverridden;
- (void)setLimit:(float)arg1;
- (float)limit;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

