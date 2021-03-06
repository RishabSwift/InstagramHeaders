//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGArcLayer, UIColor;

@interface IGCircularProgressView : UIView
{
    IGArcLayer *_progressLayer;
    double _progress;
}

+ (double)defaultDimension;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIColor *progressTintColor;
@property(nonatomic) double trackThickness;
@property(retain, nonatomic) UIColor *trackTintColor;

@end

