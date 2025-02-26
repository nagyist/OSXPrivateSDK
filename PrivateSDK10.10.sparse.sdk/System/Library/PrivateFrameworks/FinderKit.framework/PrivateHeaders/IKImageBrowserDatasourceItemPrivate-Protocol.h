/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol IKImageBrowserDatasourceItemPrivate

@optional
- (id)statusInfo;
- (id)statusImageForCell:(id)arg1;
- (id)statusInfoForCell:(id)arg1;
- (id)tagImageForCell:(id)arg1;
- (BOOL)datasourceItemIsThreadSafe;
- (id)IKImageRepresentationWithType:(id)arg1;
- (id)inlinePreviewQuickLookClientProperties;
- (struct CGRect)quickLookContentFrameForImageSize:(struct CGSize)arg1;
- (struct OpaqueIconRef *)createAlternativeIconRepresentation;
- (struct OpaqueIconRef *)createAlternativeIconRepresentationWithOptions:(id)arg1;
- (id)imageToDrawForCell:(id)arg1;
- (BOOL)isDimmed;
- (BOOL)holesFlavor;
- (struct __CFDictionary *)quickLookThumbnailOptions;
- (id)_ikThumbnailImage;
- (id)posterImage;
- (struct CGRect)imageSourceRectForCell:(id)arg1 withThumbnailSize:(struct CGSize)arg2;
- (double)aspectRatio;
@end

