/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WhitePages/WPResource.h>

@interface WPLocation : WPResource
{
}

+ (id)defaultLargeImage;
+ (id)defaultImage;
+ (id)locationsWithName:(id)arg1 attributesToBeReturned:(id)arg2 session:(id)arg3;
+ (id)locationsWithName:(id)arg1 attributesToBeReturned:(id)arg2;
+ (id)locationWithGUID:(id)arg1 attributesToBeReturned:(id)arg2 session:(id)arg3;
+ (id)locationWithGUID:(id)arg1 attributesToBeReturned:(id)arg2;
+ (id)locationWithODRecord:(id)arg1 session:(id)arg2;
- (void)reset;
- (void)setPhone:(id)arg1;
- (void)setCapacity:(id)arg1;
- (void)setFloor:(id)arg1;
- (void)setBuilding:(id)arg1;
- (id)badgeImage;
- (id)phone;
- (unsigned int)capacity;
- (id)floor;
- (id)building;
- (id)pluralRecordCategory;
- (id)singularRecordCategory;
- (id)recordType;
- (id)printableAttributedString;
- (void)dealloc;
- (id)initRecordWithCachedAttributes:(id)arg1 session:(id)arg2;
- (id)initLocationWithODRecord:(id)arg1 session:(id)arg2;

@end

