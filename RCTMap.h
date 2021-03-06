//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKMapView.h"

@class CLLocationManager, NSArray, NSTimer, UIView;

@interface RCTMap : MKMapView
{
    UIView *_legalLabel;
    CLLocationManager *_locationManager;
    _Bool _followUserLocation;
    _Bool _hasStartedRendering;
    _Bool _showsAnnotationCallouts;
    double _minDelta;
    double _maxDelta;
    NSTimer *_regionChangeObserveTimer;
    NSArray *_annotationIDs;
    NSArray *_overlayIDs;
    CDUnknownBlockType _onChange;
    CDUnknownBlockType _onPress;
    CDUnknownBlockType _onAnnotationDragStateChange;
    CDUnknownBlockType _onAnnotationFocus;
    CDUnknownBlockType _onAnnotationBlur;
    struct UIEdgeInsets _legalLabelInsets;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *annotationIDs; // @synthesize annotationIDs=_annotationIDs;
- (void)dealloc;
- (void)didUpdateReactSubviews;
@property(nonatomic) _Bool followUserLocation; // @synthesize followUserLocation=_followUserLocation;
@property(nonatomic) _Bool hasStartedRendering; // @synthesize hasStartedRendering=_hasStartedRendering;
- (id)init;
- (void)layoutSubviews;
@property(nonatomic) struct UIEdgeInsets legalLabelInsets; // @synthesize legalLabelInsets=_legalLabelInsets;
@property(nonatomic) double maxDelta; // @synthesize maxDelta=_maxDelta;
@property(nonatomic) double minDelta; // @synthesize minDelta=_minDelta;
@property(copy, nonatomic) CDUnknownBlockType onAnnotationBlur; // @synthesize onAnnotationBlur=_onAnnotationBlur;
@property(copy, nonatomic) CDUnknownBlockType onAnnotationDragStateChange; // @synthesize onAnnotationDragStateChange=_onAnnotationDragStateChange;
@property(copy, nonatomic) CDUnknownBlockType onAnnotationFocus; // @synthesize onAnnotationFocus=_onAnnotationFocus;
@property(copy, nonatomic) CDUnknownBlockType onChange; // @synthesize onChange=_onChange;
@property(copy, nonatomic) CDUnknownBlockType onPress; // @synthesize onPress=_onPress;
@property(copy, nonatomic) NSArray *overlayIDs; // @synthesize overlayIDs=_overlayIDs;
@property(retain, nonatomic) NSTimer *regionChangeObserveTimer; // @synthesize regionChangeObserveTimer=_regionChangeObserveTimer;
- (void)setAnnotations:(id)arg1;
- (void)setOverlays:(id)arg1;
- (void)setRegion:(CDStruct_2b0c6e0b)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool showsAnnotationCallouts; // @synthesize showsAnnotationCallouts=_showsAnnotationCallouts;
- (void)setShowsCompass:(_Bool)arg1;
- (void)setShowsUserLocation:(_Bool)arg1;
- (_Bool)showsCompass;

@end

