//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class CPTColorSpace;

@interface CPTGradient : NSObject <NSCopying, NSCoding>
{
    CPTColorSpace *colorspace;
    long long blendingMode;
    double angle;
    long long gradientType;
    struct _CPTGradientElement *elementList;
    struct CGFunction *gradientFunction;
    struct CGPoint startAnchor;
    struct CGPoint endAnchor;
}

+ (id)aquaNormalGradient;
+ (id)aquaPressedGradient;
+ (id)aquaSelectedGradient;
+ (id)gradientWithBeginningColor:(id)arg1 endingColor:(id)arg2;
+ (id)gradientWithBeginningColor:(id)arg1 endingColor:(id)arg2 beginningPosition:(double)arg3 endingPosition:(double)arg4;
+ (id)hydrogenSpectrumGradient;
+ (id)rainbowGradient;
+ (id)sourceListSelectedGradient;
+ (id)sourceListUnselectedGradient;
+ (id)unifiedDarkGradient;
+ (id)unifiedNormalGradient;
+ (id)unifiedPressedGradient;
+ (id)unifiedSelectedGradient;
- (void).cxx_destruct;
- (id)addColorStop:(id)arg1 atPosition:(double)arg2;
- (void)addElement:(struct _CPTGradientElement *)arg1;
@property(nonatomic) double angle; // @synthesize angle;
@property(nonatomic) long long blendingMode; // @synthesize blendingMode;
@property(retain, nonatomic) CPTColorSpace *colorspace; // @synthesize colorspace;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)debugQuickLookObject;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (struct _CPTGradientElement *)elementAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementCount;
@property(nonatomic) struct _CPTGradientElement *elementList; // @synthesize elementList;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) struct CGPoint endAnchor; // @synthesize endAnchor;
- (void)fillPathInContext:(struct CGContext *)arg1;
- (void)fillRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
@property(nonatomic) struct CGFunction *gradientFunction; // @synthesize gradientFunction;
@property(nonatomic) long long gradientType; // @synthesize gradientType;
- (id)gradientWithAlphaComponent:(double)arg1;
- (id)gradientWithBlendingMode:(long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isOpaque) _Bool opaque; // @dynamic opaque;
- (struct CGShading *)newAxialGradientInRect:(struct CGRect)arg1;
- (struct CGColor *)newColorAtPosition:(double)arg1;
- (struct CGColor *)newColorStopAtIndex:(unsigned long long)arg1;
- (struct CGShading *)newRadialGradientInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)removeAllElements;
- (id)removeColorStopAtIndex:(unsigned long long)arg1;
- (id)removeColorStopAtPosition:(double)arg1;
- (struct _CPTGradientElement)removeElementAtIndex:(unsigned long long)arg1;
- (struct _CPTGradientElement)removeElementAtPosition:(double)arg1;
@property(nonatomic) struct CGPoint startAnchor; // @synthesize startAnchor;

@end

