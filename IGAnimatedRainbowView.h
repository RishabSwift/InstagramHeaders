//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAAnimation, CAGradientLayer, CALayer;

@interface IGAnimatedRainbowView : UIView
{
    double _animationDuration;
    CALayer *_rotatingBackgroundLayer;
    CALayer *_rotatingOverlayLayer;
    CAGradientLayer *_overlayLayerMask;
    CALayer *_rotatingOverlayContainerLayer;
    CAAnimation *_animationPosition;
}

- (void).cxx_destruct;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) CAAnimation *animationPosition; // @synthesize animationPosition=_animationPosition;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) CAGradientLayer *overlayLayerMask; // @synthesize overlayLayerMask=_overlayLayerMask;
- (void)pauseLayer:(id)arg1;
- (void)resumeLayer:(id)arg1;
@property(retain, nonatomic) CALayer *rotatingBackgroundLayer; // @synthesize rotatingBackgroundLayer=_rotatingBackgroundLayer;
@property(retain, nonatomic) CALayer *rotatingOverlayContainerLayer; // @synthesize rotatingOverlayContainerLayer=_rotatingOverlayContainerLayer;
@property(retain, nonatomic) CALayer *rotatingOverlayLayer; // @synthesize rotatingOverlayLayer=_rotatingOverlayLayer;
- (void)setUpLayers;

@end

