//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class UIImage;

@interface CPTImage : NSObject <NSCoding, NSCopying>
{
    _Bool tiled;
    _Bool tileAnchoredToContext;
    struct UIImage *nativeImage;
    struct CGImage *image;
    double scale;
    double lastDrawnScale;
    struct _CPTEdgeInsets edgeInsets;
    struct _CPTImageSlices slices;
}

+ (id)imageForPNGFile:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageWithNativeImage:(struct UIImage *)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugQuickLookObject;
- (void)drawImage:(struct CGImage *)arg1 inContext:(struct CGContext *)arg2 rect:(struct CGRect)arg3 scaleRatio:(double)arg4;
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
@property(nonatomic) struct _CPTEdgeInsets edgeInsets; // @synthesize edgeInsets;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
@property(nonatomic) struct CGImage *image; // @synthesize image;
- (id)init;
- (id)initForPNGFile:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithNativeImage:(struct UIImage *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isOpaque) _Bool opaque; // @dynamic opaque;
@property(nonatomic, getter=isTiled) _Bool tiled; // @synthesize tiled;
@property(nonatomic) double lastDrawnScale; // @synthesize lastDrawnScale;
- (void)makeImageSlices;
@property(copy, nonatomic) UIImage *nativeImage; // @synthesize nativeImage;
@property(nonatomic) double scale; // @synthesize scale;
@property(nonatomic) struct _CPTImageSlices slices; // @synthesize slices;
@property(nonatomic) _Bool tileAnchoredToContext; // @synthesize tileAnchoredToContext;

@end
