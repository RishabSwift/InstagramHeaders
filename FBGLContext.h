//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, NSMutableArray, NSMutableSet;

@interface FBGLContext : NSObject
{
    struct __CVOpenGLESTextureCache *_textureCache;
    struct __CVPixelBufferPool *_pixelBufferPoolBGRA;
    struct __CVPixelBufferPool *_pixelBufferPoolYUV;
    struct CGSize _pixelBufferPoolSizeBGRA;
    struct CGSize _pixelBufferPoolSizeYUV;
    unsigned int _squareVertexBuffer;
    NSMutableArray *_resources;
    NSMutableSet *_cachedSurfaces;
    EAGLContext *_openglContext;
    struct __CVPixelBufferPool *_pixelBufferPool;
    struct CGSize _maxTextureSize;
}

+ (id)currentContext;
- (void).cxx_destruct;
- (void)dealloc;
- (void)flush;
- (id)init;
- (void)makeCurrent;
@property(readonly, nonatomic) struct CGSize maxTextureSize; // @synthesize maxTextureSize=_maxTextureSize;
@property(retain, nonatomic) EAGLContext *openglContext; // @synthesize openglContext=_openglContext;
@property(readonly, nonatomic) struct __CVPixelBufferPool *pixelBufferPool; // @synthesize pixelBufferPool=_pixelBufferPool;
- (struct __CVPixelBufferPool *)pixelBufferPoolForPixelBufferOfPixelFormat:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (id)popReusableSurfaceWithSize:(struct CGSize)arg1;
- (void)pushReusableSurface:(id)arg1;
- (void)removeAllReusableSurfaces;
- (id)resourceForFilter:(id)arg1;
- (void)setResource:(id)arg1 forFilter:(id)arg2;
@property(readonly, nonatomic) unsigned int squareVertexBuffer;
@property(readonly, nonatomic) struct __CVOpenGLESTextureCache *textureCache;

@end

