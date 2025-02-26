/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MDRenderTarget-Protocol.h"

@class NSString;

// Not exported
@interface GGLImageCanvas : NSObject <MDRenderTarget>
{
    struct CGSize _size;
    double _contentScale;
    BOOL _canMakeImage;
    BOOL _recreateRenderTarget;
    struct unique_ptr<ggl::Texture2D, std::__1::default_delete<ggl::Texture2D>> _colorTexture;
    struct unique_ptr<ggl::TextureBuffer, std::__1::default_delete<ggl::TextureBuffer>> _flippedColorBuffer;
    struct unique_ptr<ggl::IOSurfaceTexture, std::__1::default_delete<ggl::IOSurfaceTexture>> _flippedSurfaceTexture;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget>> _flippedRenderTarget;
    struct unique_ptr<ggl::TextureBuffer, std::__1::default_delete<ggl::TextureBuffer>> _colorBuffer;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _depthStencilBuffer;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget>> _renderTarget;
    BOOL _useMultisampling;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _msaaColorBuffer;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer>> _msaaDepthStencilBuffer;
    struct unique_ptr<ggl::RenderTargetOperation, std::__1::default_delete<ggl::RenderTargetOperation>> _msaaBlitOperation;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget>> _msaaRenderTarget;
}

@property(readonly, nonatomic) BOOL useMultisampling; // @synthesize useMultisampling=_useMultisampling;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) double contentScale; // @synthesize contentScale=_contentScale;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGImage *)newImageWithRenderer:(struct Renderer *)arg1;
- (shared_ptr_edb96180)bitmapDataWithRenderer:(struct Renderer *)arg1;
- (void)didDrawView;
- (void)willDrawView;
- (void)_destroyMSAARenderTarget;
- (void)_createMSAARenderTarget;
- (void)_destroyRenderTarget;
- (void)_createRenderTarget;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 useMultisampling:(BOOL)arg3;
@property(readonly, nonatomic) struct CGSize sizeInPixels;
@property(readonly, nonatomic) struct RenderTargetOperation *msaaBlitOperation;
@property(readonly, nonatomic) struct RenderTarget *finalRenderTarget;
@property(readonly, nonatomic) struct RenderTarget *msaaRenderTarget;
@property(readonly, nonatomic) struct RenderTarget *renderTarget;

// Remaining properties
@property(readonly, nonatomic) float averageFPS;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

