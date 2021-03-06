//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGImageFilter.h"

@class IGSurface;

@interface IGImageOverlayFilter : IGImageFilter
{
    IGSurface *_overlay;
    _Bool _ignoreTextureTransform;
}

- (void).cxx_destruct;
- (void)configureProgram:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)fragmentShader;
@property(nonatomic) _Bool ignoreTextureTransform; // @synthesize ignoreTextureTransform=_ignoreTextureTransform;
- (id)initWithImage:(id)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1;
@property(nonatomic) struct __CVBuffer *overlay;
- (id)samplers;
- (void)setTextureTransform:(union _GLKMatrix4)arg1;

@end

