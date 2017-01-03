//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "CPTResponder.h"

@class CPTGraph, CPTShadow, NSSet, NSString;

@interface CPTLayer : CALayer <CPTResponder>
{
    _Bool masksToBorder;
    _Bool useFastRendering;
    _Bool renderingRecursively;
    CPTGraph *graph;
    double paddingLeft;
    double paddingTop;
    double paddingRight;
    double paddingBottom;
    CPTShadow *shadow;
    const struct CGPath *outerBorderPath;
    const struct CGPath *innerBorderPath;
    id <NSCopying><NSCoding><NSObject> identifier;
}

- (void).cxx_destruct;
- (id)actionForKey:(id)arg1;
- (void)addSublayer:(id)arg1;
- (struct CGPoint)anchorPoint;
- (void)applyMaskToContext:(struct CGContext *)arg1;
- (void)applySublayerMaskToContext:(struct CGContext *)arg1 forSublayer:(id)arg2 withOffset:(struct CGPoint)arg3;
- (void)applyTransform:(struct CATransform3D)arg1 toContext:(struct CGContext *)arg2;
- (struct CGRect)bounds;
@property double contentsScale; // @dynamic contentsScale;
- (id)dataForPDFRepresentationOfLayer;
- (void)dealloc;
- (id)debugQuickLookObject;
@property(readonly, copy) NSString *description;
- (void)display;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) __weak CPTGraph *graph; // @synthesize graph;
@property(copy, nonatomic) id <NSCopying><NSCoding><NSObject> identifier; // @synthesize identifier;
- (struct UIImage *)imageOfLayer;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayer:(id)arg1;
@property(nonatomic) const struct CGPath *innerBorderPath; // @synthesize innerBorderPath;
- (void)insertSublayer:(id)arg1 above:(id)arg2;
- (void)insertSublayer:(id)arg1 atIndex:(unsigned int)arg2;
- (void)insertSublayer:(id)arg1 below:(id)arg2;
@property(nonatomic, getter=isRenderingRecursively) _Bool renderingRecursively; // @synthesize renderingRecursively;
- (void)layoutAndRenderInContext:(struct CGContext *)arg1;
- (void)layoutSublayers;
- (void)logLayers;
@property(readonly, nonatomic) const struct CGPath *maskingPath; // @dynamic maskingPath;
@property(nonatomic) _Bool masksToBorder; // @synthesize masksToBorder;
@property(nonatomic) const struct CGPath *outerBorderPath; // @synthesize outerBorderPath;
@property(nonatomic) double paddingBottom; // @synthesize paddingBottom;
@property(nonatomic) double paddingLeft; // @synthesize paddingLeft;
@property(nonatomic) double paddingRight; // @synthesize paddingRight;
@property(nonatomic) double paddingTop; // @synthesize paddingTop;
- (void)pixelAlign;
- (_Bool)pointingDeviceCancelledEvent:(struct UIEvent *)arg1;
- (_Bool)pointingDeviceDownEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)pointingDeviceDraggedEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)pointingDeviceUpEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (void)recursivelyRenderInContext:(struct CGContext *)arg1;
- (void)renderAsVectorInContext:(struct CGContext *)arg1;
- (void)replaceSublayer:(id)arg1 with:(id)arg2;
- (void)setAnchorPoint:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)setPosition:(struct CGPoint)arg1;
@property(copy, nonatomic) CPTShadow *shadow; // @synthesize shadow;
- (void)setSublayers:(id)arg1;
@property(nonatomic) _Bool useFastRendering; // @synthesize useFastRendering;
@property(readonly, nonatomic) struct CGSize shadowMargin; // @dynamic shadowMargin;
- (id)subLayersAtIndex:(unsigned long long)arg1;
- (void)sublayerMarginLeft:(double *)arg1 top:(double *)arg2 right:(double *)arg3 bottom:(double *)arg4;
@property(readonly, nonatomic) const struct CGPath *sublayerMaskingPath; // @dynamic sublayerMaskingPath;
@property(readonly, nonatomic) NSSet *sublayersExcludedFromAutomaticLayout; // @dynamic sublayersExcludedFromAutomaticLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
