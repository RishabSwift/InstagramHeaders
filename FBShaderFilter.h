//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBOpenGLFilter.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface FBShaderFilter : FBOpenGLFilter
{
    _Bool _needsSetup;
    double _baseTime;
    struct CGSize _destinationSize;
    NSString *_customVertexShader;
    NSString *_customFragmentShader;
    NSDictionary *_assets;
    double _forcedRenderTimeSeconds;
    union _GLKMatrix4 _contentTransform;
    union _GLKMatrix4 _surfaceTransform;
    double _mediaTime;
    NSDictionary *_bufferDefinitions;
    NSArray *_passTargets;
    NSMutableDictionary *_buffers;
    double _mediaDuration;
}

- (void).cxx_destruct;
- (void)_cleanupRenderForProgram:(id)arg1 withSource:(id)arg2;
- (void)_configureGeometryForProgram:(id)arg1 withDestination:(id)arg2;
- (void)_configureProgram:(id)arg1 withSource:(id)arg2 destination:(id)arg3;
- (void)_renderPassesForProgram:(id)arg1 withDestination:(id)arg2;
- (double)_sizeForBufferNamed:(id)arg1;
- (union _GLKMatrix4)_surfaceTransformFromContentTransform:(union _GLKMatrix4)arg1;
- (id)fullFragmentShader;
- (id)fullVertexShader;
- (id)init;
- (unsigned long long)inputPixelFormat;
- (unsigned long long)outputPixelFormat;
- (void)processCommand:(id)arg1;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3 time:(CDStruct_1b6d18a9)arg4;
- (id)samplers;
- (void)setParameters:(id)arg1;

@end

