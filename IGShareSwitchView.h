//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGSwitch, UILabel;

@interface IGShareSwitchView : UIView
{
    UILabel *_textLabel;
    IGSwitch *_switch;
    UIView *_bottomLine;
    UIView *_detailLabelBackgroundView;
    UILabel *_detailTextLabel;
    double _offsetY;
}

+ (double)height;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 shareMode:(long long)arg2 switchBlock:(CDUnknownBlockType)arg3;
- (void)layoutSubviews;
- (void)setOffsetY:(double)arg1;
- (void)setSwitchIsOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateShareMode:(long long)arg1;

@end
