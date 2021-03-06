//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, UIColor;

@interface FXBlurView : UIView
{
    _Bool _blurEnabled;
    _Bool _dynamic;
    _Bool _iterationsSet;
    _Bool _blurRadiusSet;
    _Bool _dynamicSet;
    _Bool _blurEnabledSet;
    _Bool _needsDrawViewHierarchy;
    UIView *_underlyingView;
    unsigned long long _iterations;
    double _updateInterval;
    UIColor *_tintColor;
    NSDate *_lastUpdate;
}

+ (Class)layerClass;
+ (void)setBlurEnabled:(_Bool)arg1;
+ (void)setUpdatesDisabled;
+ (void)setUpdatesEnabled;
- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
@property(nonatomic) _Bool blurEnabledSet; // @synthesize blurEnabledSet=_blurEnabledSet;
- (id)blurLayer;
- (id)blurPresentationLayer;
@property(nonatomic) double blurRadius;
@property(nonatomic) _Bool blurRadiusSet; // @synthesize blurRadiusSet=_blurRadiusSet;
- (id)blurredSnapshot:(id)arg1 radius:(double)arg2;
- (void)clearImage;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)displayLayer:(id)arg1;
@property(nonatomic) _Bool dynamicSet; // @synthesize dynamicSet=_dynamicSet;
- (id)hideEmptyLayers:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isBlurEnabled) _Bool blurEnabled; // @synthesize blurEnabled=_blurEnabled;
@property(nonatomic, getter=isDynamic) _Bool dynamic; // @synthesize dynamic=_dynamic;
@property(nonatomic) unsigned long long iterations; // @synthesize iterations=_iterations;
@property(nonatomic) _Bool iterationsSet; // @synthesize iterationsSet=_iterationsSet;
@property(retain, nonatomic) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(nonatomic) _Bool needsDrawViewHierarchy; // @synthesize needsDrawViewHierarchy=_needsDrawViewHierarchy;
- (id)prepareUnderlyingViewForSnapshot;
- (void)restoreSuperviewAfterSnapshot:(id)arg1;
- (void)schedule;
- (void)setLayerContents:(id)arg1;
- (void)setNeedsDisplay;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) __weak UIView *underlyingView; // @synthesize underlyingView=_underlyingView;
- (void)setUp;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
- (_Bool)shouldUpdate;
- (id)snapshotOfUnderlyingView;
- (id)underlyingLayer;
- (void)updateAsynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)viewOrSubviewNeedsDrawViewHierarchy:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end

