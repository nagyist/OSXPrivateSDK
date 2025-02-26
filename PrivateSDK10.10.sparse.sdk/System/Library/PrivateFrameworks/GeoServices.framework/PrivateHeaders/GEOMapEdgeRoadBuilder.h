/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEOMapEdgeBuilder.h>

// Not exported
@interface GEOMapEdgeRoadBuilder : GEOMapEdgeBuilder
{
    struct deque<GEORoadEdge, std::__1::allocator<GEORoadEdge>> _edges;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_tileFinderForMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;
- (id)_lastTile;
- (id)_firstTile;
- (Matrix_8746f91e)_lastPoint;
- (Matrix_8746f91e)_firstPoint;
- (CDStruct_dde70fb6 *)_lastJunction;
- (CDStruct_dde70fb6 *)_firstJunction;
- (BOOL)_findEdgeBehindInTile:(id)arg1;
- (BOOL)_findEdgeAheadInTile:(id)arg1;
- (void)_buildCompleteEdge;
- (void)dealloc;
- (id)initWithMap:(id)arg1 firstEdge:(const CDStruct_91f75a7f *)arg2;

@end

