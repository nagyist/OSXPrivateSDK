/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreSpectrum/SPCPath.h>

@interface SPCRectanglePath : SPCPath
{
    CDStruct_f4676b61 _cornerRadii;
}

+ (id)pathWithRect:(struct CGRect)arg1 cornerRadii:(CDStruct_f4676b61)arg2;
+ (id)pathWithRect:(struct CGRect)arg1;
@property(nonatomic) CDStruct_f4676b61 cornerRadii; // @synthesize cornerRadii=_cornerRadii;
- (struct CGPath *)computedPathInRect:(struct CGRect)arg1;
- (BOOL)isClosed;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRect:(struct CGRect)arg1 cornerRadii:(CDStruct_f4676b61)arg2;

@end

