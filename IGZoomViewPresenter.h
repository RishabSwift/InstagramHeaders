//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGZoomControllerZoomingDelegate.h"
#import "IGZoomViewControllerDelegate.h"

@class IGZoomController, IGZoomViewController, NSMapTable, NSString, UIView, UIViewController;

@interface IGZoomViewPresenter : NSObject <IGZoomControllerZoomingDelegate, IGZoomViewControllerDelegate>
{
    UIView *_grayRect;
    id <IGZoomHandlerDelegate> _zoomHandler;
    id <IGZoomLoggerProtocol> _zoomLogger;
    UIViewController *_presentingController;
    NSMapTable *_supplementaryViewsPreviousHiddenValues;
    IGZoomController *_zoomRecognizerController;
    IGZoomViewController *_zoomViewController;
    double _zoomingStartTime;
    double _maxZoomScaleReached;
    double _headerAndStatusBarHeight;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *grayRect; // @synthesize grayRect=_grayRect;
@property(nonatomic) double headerAndStatusBarHeight; // @synthesize headerAndStatusBarHeight=_headerAndStatusBarHeight;
- (id)initWithZoomHandler:(id)arg1 zoomLogger:(id)arg2;
@property(nonatomic) double maxZoomScaleReached; // @synthesize maxZoomScaleReached=_maxZoomScaleReached;
@property(nonatomic) __weak UIViewController *presentingController; // @synthesize presentingController=_presentingController;
@property(retain, nonatomic) NSMapTable *supplementaryViewsPreviousHiddenValues; // @synthesize supplementaryViewsPreviousHiddenValues=_supplementaryViewsPreviousHiddenValues;
@property(nonatomic) __weak id <IGZoomHandlerDelegate> zoomHandler; // @synthesize zoomHandler=_zoomHandler;
@property(nonatomic) __weak id <IGZoomLoggerProtocol> zoomLogger; // @synthesize zoomLogger=_zoomLogger;
@property(nonatomic) __weak IGZoomController *zoomRecognizerController; // @synthesize zoomRecognizerController=_zoomRecognizerController;
@property(retain, nonatomic) IGZoomViewController *zoomViewController; // @synthesize zoomViewController=_zoomViewController;
@property(nonatomic) double zoomingStartTime; // @synthesize zoomingStartTime=_zoomingStartTime;
- (void)zoomController:(id)arg1 willEndZoomingWithPosition:(inout struct CGPoint *)arg2 yOffset:(inout double *)arg3 maxZoomScaleReached:(double)arg4;
- (void)zoomControllerDetectedZoom:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)zoomControllerDidEndZooming:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

