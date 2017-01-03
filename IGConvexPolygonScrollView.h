//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSString, POPDecayAnimation, POPSpringAnimation, UIPanGestureRecognizer, UIPinchGestureRecognizer;

@interface IGConvexPolygonScrollView : UIView <UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    POPSpringAnimation *_bounceAnimation;
    POPDecayAnimation *_scrollAnimation;
    POPSpringAnimation *_zoomAnimation;
    POPSpringAnimation *_translationAnimation;
    _Bool __scrolling;
    _Bool __bouncing;
    _Bool _dragging;
    _Bool _zooming;
    _Bool _scrollEnabled;
    _Bool _decelerating;
    _Bool _zoomBouncing;
    UIView *_contentView;
    double _rotateAngle;
    NSArray *_contentRegion;
    double _cropAspectRatio;
    double _maximumZoomScale;
    id <IGConvexPolygonScrollViewDelegate> _delegate;
    double _lastScale;
    struct CGSize _contentSize;
    struct CGSize _viewModelSize;
    struct CGPoint _lastZoomPoint;
}

- (void).cxx_destruct;
- (struct CGPoint)_applyRubberBandingEffectOnScrollVector:(struct CGPoint)arg1;
- (void)_beginDragging;
- (void)_beginScrollAnimationsWithVelocity:(struct CGPoint)arg1;
- (void)_beginZooming;
- (double)_currentRubberBandingStrength;
- (void)_draggingWithTranslation:(struct CGPoint)arg1;
- (void)_endDraggingWithDecelerationVelocity:(struct CGPoint)arg1;
- (_Bool)_isVisibleRegionInsideConvexPolygonWithOffset:(struct CGPoint)arg1 scale:(double)arg2;
- (_Bool)_isVisibleRegionInsideConvexPolygonWithOffset:(struct CGPoint)arg1 scale:(double)arg2 convexPlygon:(id)arg3;
- (void)_noteScrollingEndedAfterDeceleration:(_Bool)arg1 finished:(_Bool)arg2;
- (void)_noteZoomAnimationEnded:(_Bool)arg1;
- (struct CGPoint)_offsetForRotateAngle:(double)arg1;
- (void)_panFromGestureRecognizer:(id)arg1;
- (void)_pinchFromGestureRecognizer:(id)arg1;
- (struct CGPoint)_projectOffsetWithScale:(double)arg1 offset:(struct CGPoint)arg2;
- (void)_restrainOffset:(struct CGPoint *)arg1;
- (void)_restrainOffset:(struct CGPoint *)arg1 scale:(double *)arg2;
- (double)_restrainScaleForRotation:(double)arg1 targetScale:(double)arg2 safeScale:(double)arg3;
- (double)_straightenScaleForAngle:(double)arg1;
- (void)_transitionToBounceAnimationWithVelocity:(struct CGPoint)arg1;
- (void)_transitionToBounceAnimationWithVelocity:(struct CGPoint)arg1 targetOffset:(struct CGPoint)arg2;
- (void)_transitionToBounceAnimationWithVelocity:(struct CGPoint)arg1 targetOffset:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_transitionToBounceAnimationWithVelocity:(struct CGPoint)arg1 targetOffset:(struct CGPoint)arg2 strongBounce:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_transitionToScrollAnimationWithVelocity:(struct CGPoint)arg1;
- (void)_transitionToTranslateAnimationWithVelocity:(struct CGPoint)arg1 targetOffset:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateScrollState;
- (void)_zoomAnimationWithTargetScale:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_zoomBounceFinished:(_Bool)arg1 targetOffset:(struct CGPoint)arg2 targetScale:(double)arg3;
- (void)_zoomToPoint:(struct CGPoint)arg1 scale:(float)arg2;
- (void)_zoomingDidFinished;
- (void)_zoomingUpdatedWithGesture:(id)arg1;
- (double)aspectRatioAdjustedValue:(double)arg1;
- (void)cancelAnimations;
@property(nonatomic) struct CGPoint contentOffset;
@property(copy, nonatomic) NSArray *contentRegion; // @synthesize contentRegion=_contentRegion;
@property(readonly, nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (union _GLKMatrix4)contentTransform;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double cropAspectRatio; // @synthesize cropAspectRatio=_cropAspectRatio;
- (void)dealloc;
@property(nonatomic) _Bool decelerating; // @synthesize decelerating=_decelerating;
@property(nonatomic) __weak id <IGConvexPolygonScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool dragging; // @synthesize dragging=_dragging;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double lastScale; // @synthesize lastScale=_lastScale;
@property(nonatomic) struct CGPoint lastZoomPoint; // @synthesize lastZoomPoint=_lastZoomPoint;
@property(nonatomic) double maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
- (id)rectangularRegionFromSquareRegion:(id)arg1;
@property(nonatomic) double rotateAngle; // @synthesize rotateAngle=_rotateAngle;
- (double)rotateAngleX;
- (double)rotateAngleY;
- (double)rotateAngleZ;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
- (struct CGPoint)scrollVelocity;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentTransform:(union _GLKMatrix4)arg1;
- (void)setRotateAngleX:(double)arg1;
- (void)setRotateAngleY:(double)arg1;
- (void)setRotateAngleZ:(double)arg1;
@property(nonatomic) struct CGSize viewModelSize; // @synthesize viewModelSize=_viewModelSize;
@property(nonatomic) _Bool zoomBouncing; // @synthesize zoomBouncing=_zoomBouncing;
@property(nonatomic) double zoomScale;
@property(nonatomic) _Bool zooming; // @synthesize zooming=_zooming;
- (id)squareRegionFromRectangularRegion:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

