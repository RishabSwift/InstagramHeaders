//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGLFilter.h"

@class NSData;

@interface IGStabilizationFilter : IGGLFilter
{
    unsigned int _vertexBuffer;
    unsigned int _indexBuffer;
    unsigned long long _stripSize;
    struct _GLKMatrix4 _projection;
    _Bool _needsRefresh;
    _Bool _needsMeshUpdate;
    long long _mode;
    double _zoom;
    NSData *_frameWarp;
    CDStruct_c91b0ade _cameraParameters;
}

- (void).cxx_destruct;
- (void)bindAttributeArrays:(id)arg1;
- (void)bindIndexBufferWithProgram:(id)arg1;
- (void)bindVertexBufferWithProgram:(id)arg1;
@property(nonatomic) CDStruct_c91b0ade cameraParameters; // @synthesize cameraParameters=_cameraParameters;
@property(retain, nonatomic) NSData *frameWarp; // @synthesize frameWarp=_frameWarp;
- (id)fullFragmentShader;
- (id)fullVertexShader;
- (id)init;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3;
@property(nonatomic) double zoom; // @synthesize zoom=_zoom;

@end
