//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class IGCameraGuideView, IGScrollView, NSString, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface IGCropView : UIView <UIScrollViewDelegate>
{
    IGScrollView *_scrollView;
    _Bool _isInteracting;
    _Bool _didSetPinchProperties;
    _Bool _zoomEnabled;
    _Bool _nonSquareEnabled;
    UIView *_circularCropperView;
    IGCameraGuideView *_guideView;
    _Bool _circularCropMode;
    _Bool _showsGuideView;
    double _cropAngle;
    UITapGestureRecognizer *_tap;
    UIPanGestureRecognizer *_minimizePan;
    id <IGCropViewUserInteractionDelegate> _userInteractionDelegate;
}

- (void).cxx_destruct;
- (void)addBlockedGestureRecognizer:(id)arg1;
- (void)checkInteractions:(id)arg1;
@property(nonatomic) _Bool circularCropMode; // @synthesize circularCropMode=_circularCropMode;
- (id)circularCropperView;
@property(retain, nonatomic) UIView *contentView;
@property(nonatomic) double cropAngle; // @synthesize cropAngle=_cropAngle;
@property(nonatomic) struct CGPoint cropCenter;
- (struct IGCropInfo)cropInfo;
@property(nonatomic) long long cropMode;
- (struct CGRect)cropRect;
- (struct CGRect)cropRectForMode:(long long)arg1 size:(struct CGSize)arg2;
@property(nonatomic) double cropZoom;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic, getter=isInteracting) _Bool interacting;
@property(nonatomic, getter=isNonSquareEnabled) _Bool nonSquareEnabled; // @synthesize nonSquareEnabled=_nonSquareEnabled;
@property(nonatomic, getter=isPanEnabled) _Bool panEnabled;
@property(nonatomic, getter=isZoomEnabled) _Bool zoomEnabled;
- (struct CGSize)largestOutputSizeWithNoUpscaling;
- (double)maxAspectRatioSetting;
@property(nonatomic) double maximumZoom;
- (void)maybeSetPinchProperties;
- (double)minAspectRatioSetting;
@property(retain, nonatomic) UIPanGestureRecognizer *minimizePan; // @synthesize minimizePan=_minimizePan;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)setCropCenter:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setCropMode:(long long)arg1 animated:(_Bool)arg2;
- (void)setCropRect:(struct CGRect)arg1;
@property(nonatomic) _Bool showsGuideView; // @synthesize showsGuideView=_showsGuideView;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(nonatomic) __weak id <IGCropViewUserInteractionDelegate> userInteractionDelegate; // @synthesize userInteractionDelegate=_userInteractionDelegate;
- (double)straightenScaleForAngle:(double)arg1;
- (void)updateZoomScales;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGRect)visibleContentRect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

