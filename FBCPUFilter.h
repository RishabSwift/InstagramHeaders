//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBOpenGLFilter.h"

@class NSString;

@interface FBCPUFilter : FBOpenGLFilter
{
    NSString *_fullVertexShader;
    NSString *_fullFragmentShader;
    CDUnknownBlockType _createTransformedBufferBlock;
}

- (void).cxx_destruct;
- (id)fragmentShader;
- (id)fullFragmentShader;
- (id)fullVertexShader;
- (id)generateFullFragmentShader;
- (id)generateFullVertexShader;
- (id)init;
- (id)initWithCreateTransformedBufferBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)inputPixelFormat;
- (unsigned long long)outputPixelFormat;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3 time:(CDStruct_1b6d18a9)arg4;
- (id)vertexShader;

@end

