/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSDate, NSUUID;

@interface AKSignature : NSObject <NSSecureCoding>
{
    struct CGPath *_path;
    BOOL _shouldPersist;
    NSUUID *_uniqueID;
    double _baselineOffset;
    NSDate *_creationDate;
}

+ (BOOL)supportsSecureCoding;
@property(retain) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property double baselineOffset; // @synthesize baselineOffset=_baselineOffset;
@property(retain) NSUUID *uniqueID; // @synthesize uniqueID=_uniqueID;
@property BOOL shouldPersist; // @synthesize shouldPersist=_shouldPersist;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly) struct CGPath *path;
- (void)setPath:(struct CGPath *)arg1;
@property(readonly) struct CGRect pathBounds;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPath:(struct CGPath *)arg1 baselineOffset:(double)arg2 creationDate:(id)arg3;
- (id)initWithPath:(struct CGPath *)arg1 baselineOffset:(double)arg2;

@end

