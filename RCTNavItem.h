//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIBarButtonItem, UIColor, UIImage, UIImageView;

@interface RCTNavItem : UIView
{
    _Bool _navigationBarHidden;
    _Bool _shadowHidden;
    _Bool _translucent;
    UIBarButtonItem *_backButtonItem;
    UIBarButtonItem *_leftButtonItem;
    UIBarButtonItem *_rightButtonItem;
    NSString *_title;
    UIImage *_titleImage;
    UIImage *_leftButtonIcon;
    NSString *_leftButtonTitle;
    long long _leftButtonSystemIcon;
    UIImage *_rightButtonIcon;
    NSString *_rightButtonTitle;
    long long _rightButtonSystemIcon;
    UIImage *_backButtonIcon;
    NSString *_backButtonTitle;
    UIColor *_tintColor;
    UIColor *_barTintColor;
    UIColor *_titleTextColor;
    CDUnknownBlockType _onLeftButtonPress;
    CDUnknownBlockType _onRightButtonPress;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *backButtonIcon; // @synthesize backButtonIcon=_backButtonIcon;
@property(readonly, nonatomic) UIBarButtonItem *backButtonItem; // @synthesize backButtonItem=_backButtonItem;
@property(copy, nonatomic) NSString *backButtonTitle; // @synthesize backButtonTitle=_backButtonTitle;
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
- (void)handleLeftButtonPress;
- (void)handleRightButtonPress;
- (id)init;
@property(retain, nonatomic) UIImage *leftButtonIcon; // @synthesize leftButtonIcon=_leftButtonIcon;
@property(readonly, nonatomic) UIBarButtonItem *leftButtonItem; // @synthesize leftButtonItem=_leftButtonItem;
@property(nonatomic) long long leftButtonSystemIcon; // @synthesize leftButtonSystemIcon=_leftButtonSystemIcon;
@property(copy, nonatomic) NSString *leftButtonTitle; // @synthesize leftButtonTitle=_leftButtonTitle;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(copy, nonatomic) CDUnknownBlockType onLeftButtonPress; // @synthesize onLeftButtonPress=_onLeftButtonPress;
@property(copy, nonatomic) CDUnknownBlockType onRightButtonPress; // @synthesize onRightButtonPress=_onRightButtonPress;
@property(retain, nonatomic) UIImage *rightButtonIcon; // @synthesize rightButtonIcon=_rightButtonIcon;
@property(readonly, nonatomic) UIBarButtonItem *rightButtonItem; // @synthesize rightButtonItem=_rightButtonItem;
@property(nonatomic) long long rightButtonSystemIcon; // @synthesize rightButtonSystemIcon=_rightButtonSystemIcon;
@property(copy, nonatomic) NSString *rightButtonTitle; // @synthesize rightButtonTitle=_rightButtonTitle;
@property(nonatomic) _Bool shadowHidden; // @synthesize shadowHidden=_shadowHidden;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *titleImage; // @synthesize titleImage=_titleImage;
@property(retain, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property(nonatomic) _Bool translucent; // @synthesize translucent=_translucent;
@property(readonly, nonatomic) UIImageView *titleImageView;

@end

