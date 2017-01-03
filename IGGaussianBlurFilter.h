//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGImageFilter.h"

@interface IGGaussianBlurFilter : IGImageFilter
{
    _Bool _needsConfigure;
    struct CGSize _dimension;
    union _GLKVector2 _blurVector;
    double _sigma;
    unsigned long long _kernelSize;
}

- (void)configureProgram:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)fragmentFunctions;
- (id)fragmentShader;
- (id)fragmentShaderPrecision;
- (id)initWithKernelSize:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long kernelSize; // @synthesize kernelSize=_kernelSize;
- (void)render:(id)arg1 to:(id)arg2 program:(id)arg3;
@property(nonatomic) double sigma; // @synthesize sigma=_sigma;

@end

