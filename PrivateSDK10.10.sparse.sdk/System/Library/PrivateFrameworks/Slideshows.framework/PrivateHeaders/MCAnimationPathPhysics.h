/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Slideshows/MCAnimationPath.h>

@interface MCAnimationPathPhysics : MCAnimationPath
{
    float _staticFriction;
    float _kineticFriction;
    float _skinFriction;
}

@property(nonatomic) float skinFriction; // @synthesize skinFriction=_skinFriction;
@property(nonatomic) float kineticFriction; // @synthesize kineticFriction=_kineticFriction;
@property(nonatomic) float staticFriction; // @synthesize staticFriction=_staticFriction;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)xmlElement;
- (id)imprint;
- (id)initWithImprint:(id)arg1;

@end

