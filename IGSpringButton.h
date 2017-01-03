//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class IGDynamics1D, UIImageView, UILabel, UIView;

@interface IGSpringButton : UIControl
{
    _Bool _springEnabled;
    UIView *_contentView;
    double _minimumWidth;
    double _maximumWidth;
    long long _displayType;
    UIImageView *_springContentView;
    UIImageView *_accessoryImageView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    double _currentScale;
    IGDynamics1D *_spring;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
- (double)accessoryWidth;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (double)contentWidth;
@property(nonatomic) double currentScale; // @synthesize currentScale=_currentScale;
- (void)dealloc;
@property(nonatomic) long long displayType; // @synthesize displayType=_displayType;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isSpringEnabled) _Bool springEnabled; // @synthesize springEnabled=_springEnabled;
- (void)layoutSubviews;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(nonatomic) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)scaleUp:(_Bool)arg1 withVelocity:(_Bool)arg2;
@property(nonatomic) __weak IGDynamics1D *spring; // @synthesize spring=_spring;
@property(retain, nonatomic) UIImageView *springContentView; // @synthesize springContentView=_springContentView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (_Bool)shouldShowTitle;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) double titleLabelPadding;
- (double)titleWidth;

@end
