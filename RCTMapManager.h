//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTViewManager.h"

#import "MKMapViewDelegate.h"

@class NSString;

@interface RCTMapManager : RCTViewManager <MKMapViewDelegate>
{
}

+ (void)load;
+ (id)moduleName;
+ (id)propConfig_annotations;
+ (id)propConfig_followUserLocation;
+ (id)propConfig_legalLabelInsets;
+ (id)propConfig_mapType;
+ (id)propConfig_maxDelta;
+ (id)propConfig_minDelta;
+ (id)propConfig_onAnnotationBlur;
+ (id)propConfig_onAnnotationDragStateChange;
+ (id)propConfig_onAnnotationFocus;
+ (id)propConfig_onChange;
+ (id)propConfig_onPress;
+ (id)propConfig_overlays;
+ (id)propConfig_pitchEnabled;
+ (id)propConfig_region;
+ (id)propConfig_rotateEnabled;
+ (id)propConfig_scrollEnabled;
+ (id)propConfig_showsAnnotationCallouts;
+ (id)propConfig_showsCompass;
+ (id)propConfig_showsPointsOfInterest;
+ (id)propConfig_showsUserLocation;
+ (id)propConfig_zoomEnabled;
- (void)_emitRegionChangeEvent:(id)arg1 continuous:(_Bool)arg2;
- (void)_onTick:(id)arg1;
- (void)_regionChanged:(id)arg1;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewWillStartRenderingMap:(id)arg1;
- (void)set_region:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
