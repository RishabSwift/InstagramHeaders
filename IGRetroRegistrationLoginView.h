//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGRetroRegistrationBackgroundView, IGRetroRegistrationLoginScrollView;

@interface IGRetroRegistrationLoginView : UIView
{
    IGRetroRegistrationLoginScrollView *_loginScrollView;
    IGRetroRegistrationBackgroundView *_backgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGRetroRegistrationBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) IGRetroRegistrationLoginScrollView *loginScrollView; // @synthesize loginScrollView=_loginScrollView;

@end

