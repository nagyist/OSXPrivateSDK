/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface CUIRenditionMetrics : NSObject
{
    struct CGSize _imageSize;
    struct CGSize _edgeBottomLeftMargin;
    struct CGSize _edgeTopRightMargin;
    struct CGSize _contentBottomLeftMargin;
    struct CGSize _contentTopRightMargin;
    double _baseline;
    double _scale;
    struct crmFlags _crmFlags;
}

- (BOOL)hasOpaqueContentBounds;
- (struct CGRect)insetContentRectWithMetrics:(struct CGRect)arg1;
- (struct CGRect)insetRectWithMetrics:(struct CGRect)arg1;
- (struct CGRect)contentRect;
- (struct CGRect)edgeRect;
- (BOOL)scalesHorizontally;
- (BOOL)scalesVertically;
- (double)scale;
- (double)baseline;
- (struct CGSize)contentTopRightMargin;
- (struct CGSize)contentBottomLeftMargin;
- (struct CGSize)edgeTopRightMargin;
- (struct CGSize)edgeBottomLeftMargin;
- (struct CGSize)imageSize;
- (id)initWithImageSize:(struct CGSize)arg1 edgeBottomLeft:(struct CGSize)arg2 edgeTopRight:(struct CGSize)arg3 contentBottomLeft:(struct CGSize)arg4 contentTopRight:(struct CGSize)arg5 baseline:(double)arg6 scalesVertically:(BOOL)arg7 scalesHorizontally:(BOOL)arg8 scale:(double)arg9;

@end

