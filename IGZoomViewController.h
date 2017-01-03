//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

@class NSString, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIView;

@interface IGZoomViewController : IGViewController
{
    _Bool _isZoomingEnding;
    _Bool _tensionParameterSet;
    id <IGZoomViewControllerDelegate> _delegate;
    NSString *_analyticsModule;
    UIView *_zoomView;
    UIView *_mediaView;
    UIView *_containerView;
    UIView *_dimmedView;
    double _visibleYOffset;
    double _previousRotationAngle;
    double _previousScale;
    double _tensionParameter;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    double _maxZoomScaleReached;
    struct CGPoint _originalPosition;
    struct CGPoint _accumulatedTranslation;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGPoint accumulatedTranslation; // @synthesize accumulatedTranslation=_accumulatedTranslation;
@property(copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (struct CATransform3D)currentTransform;
- (void)dealloc;
@property(nonatomic) __weak id <IGZoomViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *dimmedView; // @synthesize dimmedView=_dimmedView;
- (id)initWithMediaView:(id)arg1 frame:(struct CGRect)arg2 visibleYOffset:(double)arg3 pinchGestureRecognizer:(id)arg4 panGestureRecognizer:(id)arg5 analyticsModule:(id)arg6;
@property(nonatomic) _Bool isZoomingEnding; // @synthesize isZoomingEnding=_isZoomingEnding;
@property(nonatomic) double maxZoomScaleReached; // @synthesize maxZoomScaleReached=_maxZoomScaleReached;
@property(retain, nonatomic) UIView *mediaView; // @synthesize mediaView=_mediaView;
- (double)normalizeVelocity:(double)arg1;
@property(nonatomic) struct CGPoint originalPosition; // @synthesize originalPosition=_originalPosition;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
- (void)pop_animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
@property(nonatomic) double previousRotationAngle; // @synthesize previousRotationAngle=_previousRotationAngle;
@property(nonatomic) double previousScale; // @synthesize previousScale=_previousScale;
- (void)resetViewsToPosition:(struct CGPoint)arg1 mediaYOffset:(double)arg2;
- (void)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
@property(nonatomic) double tensionParameter; // @synthesize tensionParameter=_tensionParameter;
@property(nonatomic) _Bool tensionParameterSet; // @synthesize tensionParameterSet=_tensionParameterSet;
@property(nonatomic) double visibleYOffset; // @synthesize visibleYOffset=_visibleYOffset;
@property(retain, nonatomic) UIView *zoomView; // @synthesize zoomView=_zoomView;
- (void)setupAnimationViews;
- (void)updateAlphaOfBackgroundViews;
- (void)updateViewWithGestureRecognizer:(id)arg1;
- (double)updatedPinchScale;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end

