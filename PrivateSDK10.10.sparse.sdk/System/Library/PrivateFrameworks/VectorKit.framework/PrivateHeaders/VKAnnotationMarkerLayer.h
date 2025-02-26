/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, VKAnnotationMarker, VKAnnotationModel;

// Not exported
@interface VKAnnotationMarkerLayer : NSObject
{
    VKAnnotationModel *_model;
    VKAnnotationMarkerLayer *_superlayer;
    NSMutableArray *_sublayers;
    VKAnnotationMarker *_annotationMarker;
    struct CGPoint _centerOffset;
    struct CGPoint _accumulatedCenterOffset;
    BOOL _hasScreenRect;
    CDStruct_aca18c62 _screenRect;
    BOOL _hasMass;
    long long _styleType;
    double _contentScale;
}

@property(nonatomic) VKAnnotationModel *model; // @synthesize model=_model;
@property(nonatomic) long long styleType; // @synthesize styleType=_styleType;
@property(readonly, nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
@property(nonatomic) BOOL hasMass; // @synthesize hasMass=_hasMass;
@property(nonatomic) CDStruct_d2b197d1 screenRect; // @synthesize screenRect=_screenRect;
@property(readonly, nonatomic) BOOL hasScreenRect; // @synthesize hasScreenRect=_hasScreenRect;
@property(nonatomic) struct CGPoint accumulatedCenterOffset; // @synthesize accumulatedCenterOffset=_accumulatedCenterOffset;
@property(nonatomic) struct CGPoint centerOffset; // @synthesize centerOffset=_centerOffset;
@property(nonatomic) VKAnnotationMarker *annotationMarker; // @synthesize annotationMarker=_annotationMarker;
@property(readonly, copy, nonatomic) NSArray *sublayers; // @synthesize sublayers=_sublayers;
@property(nonatomic) VKAnnotationMarkerLayer *superlayer; // @synthesize superlayer=_superlayer;
- (id).cxx_construct;
- (void)stylesheetDidChange;
- (void)_updateStyle;
- (long long)_vectorType;
- (void)updateWithStyleQuery:(const shared_ptr_6e6219d6 *)arg1;
- (id)_styleAttributes;
- (double)distanceFromPoint:(struct VKPoint)arg1 canvasSize:(struct CGSize)arg2;
- (void)updateWithContentScale:(double)arg1;
- (void)layoutWithContext:(id)arg1;
- (void)appendCommandsToBuffer:(struct CommandBuffer *)arg1 inContext:(id)arg2;
- (void)willLayoutWithContext:(id)arg1;
- (BOOL)shouldSnapToPixelsWithContext:(id)arg1;
- (void)insertSublayer:(id)arg1 aboveSublayer:(id)arg2;
- (void)insertSublayer:(id)arg1 belowSublayer:(id)arg2;
- (void)addSublayer:(id)arg1;
- (void)removeFromSuperlayer;
- (void)removeSublayer:(id)arg1;
- (void)runAnimation:(id)arg1;
- (void)dealloc;
- (id)init;

@end

