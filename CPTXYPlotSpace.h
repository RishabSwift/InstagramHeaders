//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPTPlotSpace.h"

#import "CPTAnimationDelegate.h"

@class CPTPlotRange, NSMutableArray, NSString;

@interface CPTXYPlotSpace : CPTPlotSpace <CPTAnimationDelegate>
{
    _Bool allowsMomentumX;
    _Bool allowsMomentumY;
    CPTPlotRange *xRange;
    CPTPlotRange *yRange;
    CPTPlotRange *globalXRange;
    CPTPlotRange *globalYRange;
    long long xScaleType;
    long long yScaleType;
    long long momentumAnimationCurve;
    long long bounceAnimationCurve;
    double momentumAcceleration;
    double bounceAcceleration;
    double minimumDisplacementToDrag;
    double lastDragTime;
    double lastDeltaTime;
    NSMutableArray *animations;
    struct CGPoint lastDragPoint;
    struct CGPoint lastDisplacement;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowsMomentum; // @dynamic allowsMomentum;
@property(nonatomic) _Bool allowsMomentumX; // @synthesize allowsMomentumX;
@property(nonatomic) _Bool allowsMomentumY; // @synthesize allowsMomentumY;
- (void)animateRangeForCoordinate:(long long)arg1 shift:(CDStruct_6ece915e)arg2 momentumTime:(double)arg3 speed:(double)arg4 acceleration:(double)arg5;
- (void)animationDidFinish:(id)arg1;
@property(retain, nonatomic) NSMutableArray *animations; // @synthesize animations;
@property(nonatomic) double bounceAcceleration; // @synthesize bounceAcceleration;
@property(nonatomic) long long bounceAnimationCurve; // @synthesize bounceAnimationCurve;
- (void)cancelAnimations;
- (id)constrainRange:(id)arg1 toGlobalRange:(id)arg2;
- (id)debugQuickLookObject;
- (double)doublePrecisionPlotCoordinateForViewLength:(double)arg1 linearPlotRange:(id)arg2 boundsLength:(double)arg3;
- (double)doublePrecisionPlotCoordinateForViewLength:(double)arg1 logModulusPlotRange:(id)arg2 boundsLength:(double)arg3;
- (double)doublePrecisionPlotCoordinateForViewLength:(double)arg1 logPlotRange:(id)arg2 boundsLength:(double)arg3;
- (void)doublePrecisionPlotPoint:(double *)arg1 numberOfCoordinates:(unsigned long long)arg2 forEvent:(struct UIEvent *)arg3;
- (void)doublePrecisionPlotPoint:(double *)arg1 numberOfCoordinates:(unsigned long long)arg2 forPlotAreaViewPoint:(struct CGPoint)arg3;
- (void)encodeWithCoder:(id)arg1;
@property(copy, nonatomic) CPTPlotRange *globalXRange; // @synthesize globalXRange;
@property(copy, nonatomic) CPTPlotRange *globalYRange; // @synthesize globalYRange;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) double lastDeltaTime; // @synthesize lastDeltaTime;
@property(nonatomic) struct CGPoint lastDisplacement; // @synthesize lastDisplacement;
@property(nonatomic) struct CGPoint lastDragPoint; // @synthesize lastDragPoint;
@property(nonatomic) double lastDragTime; // @synthesize lastDragTime;
@property(nonatomic) double minimumDisplacementToDrag; // @synthesize minimumDisplacementToDrag;
@property(nonatomic) double momentumAcceleration; // @synthesize momentumAcceleration;
@property(nonatomic) long long momentumAnimationCurve; // @synthesize momentumAnimationCurve;
- (unsigned long long)numberOfCoordinates;
- (struct CGPoint)plotAreaViewPointForDoublePrecisionPlotPoint:(double *)arg1 numberOfCoordinates:(unsigned long long)arg2;
- (struct CGPoint)plotAreaViewPointForEvent:(struct UIEvent *)arg1;
- (struct CGPoint)plotAreaViewPointForPlotPoint:(id)arg1;
- (struct CGPoint)plotAreaViewPointForPlotPoint:(CDStruct_6ece915e *)arg1 numberOfCoordinates:(unsigned long long)arg2;
- (CDStruct_6ece915e)plotCoordinateForViewLength:(CDStruct_6ece915e)arg1 linearPlotRange:(id)arg2 boundsLength:(CDStruct_6ece915e)arg3;
- (void)plotPoint:(CDStruct_6ece915e *)arg1 numberOfCoordinates:(unsigned long long)arg2 forEvent:(struct UIEvent *)arg3;
- (void)plotPoint:(CDStruct_6ece915e *)arg1 numberOfCoordinates:(unsigned long long)arg2 forPlotAreaViewPoint:(struct CGPoint)arg3;
- (id)plotPointForEvent:(struct UIEvent *)arg1;
- (id)plotPointForPlotAreaViewPoint:(struct CGPoint)arg1;
- (id)plotRangeForCoordinate:(long long)arg1;
- (_Bool)pointingDeviceDownEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)pointingDeviceDraggedEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)pointingDeviceUpEvent:(struct UIEvent *)arg1 atPoint:(struct CGPoint)arg2;
- (void)scaleBy:(double)arg1 aboutPoint:(struct CGPoint)arg2;
- (void)scaleToFitPlots:(id)arg1;
- (long long)scaleTypeForCoordinate:(long long)arg1;
- (void)setPlotRange:(id)arg1 forCoordinate:(long long)arg2;
- (void)setScaleType:(long long)arg1 forCoordinate:(long long)arg2;
@property(copy, nonatomic) CPTPlotRange *xRange; // @synthesize xRange;
@property(nonatomic) long long xScaleType; // @synthesize xScaleType;
@property(copy, nonatomic) CPTPlotRange *yRange; // @synthesize yRange;
@property(nonatomic) long long yScaleType; // @synthesize yScaleType;
- (id)shiftRange:(id)arg1 by:(CDStruct_6ece915e)arg2 usingMomentum:(_Bool)arg3 inGlobalRange:(id)arg4 withDisplacement:(double *)arg5;
- (double)viewCoordinateForRange:(id)arg1 coordinate:(long long)arg2 direction:(_Bool)arg3;
- (double)viewCoordinateForViewLength:(double)arg1 linearPlotRange:(id)arg2 doublePrecisionPlotCoordinateValue:(double)arg3;
- (double)viewCoordinateForViewLength:(CDStruct_6ece915e)arg1 linearPlotRange:(id)arg2 plotCoordinateValue:(CDStruct_6ece915e)arg3;
- (double)viewCoordinateForViewLength:(double)arg1 logModulusPlotRange:(id)arg2 doublePrecisionPlotCoordinateValue:(double)arg3;
- (double)viewCoordinateForViewLength:(double)arg1 logPlotRange:(id)arg2 doublePrecisionPlotCoordinateValue:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isDragging; // @dynamic isDragging;
@property(readonly) Class superclass;

@end

