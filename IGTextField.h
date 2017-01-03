//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@class UIColor, UIImage, UIImageView, UIView;

@interface IGTextField : UITextField
{
    _Bool _isValid;
    _Bool _isVerifying;
    _Bool _hideCursor;
    _Bool _shouldHoldFirstResponder;
    UIImage *_icon;
    long long _validity;
    long long _iconSpacing;
    long long _leftViewVerticalLayoutType;
    UIColor *_caretOverlayTintColor;
    UIView *_caretOverlayView;
    UIImageView *_iconImageView;
    struct UIEdgeInsets _insets;
}

+ (id)iconTintColorForValidity:(long long)arg1;
- (void).cxx_destruct;
- (_Bool)canResignFirstResponder;
@property(retain, nonatomic) UIColor *caretOverlayTintColor; // @synthesize caretOverlayTintColor=_caretOverlayTintColor;
@property(retain, nonatomic) UIView *caretOverlayView; // @synthesize caretOverlayView=_caretOverlayView;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (void)deleteBackward;
- (void)didChange;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
@property(nonatomic) _Bool hideCursor; // @synthesize hideCursor=_hideCursor;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) long long iconSpacing; // @synthesize iconSpacing=_iconSpacing;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithPlaceholder:(id)arg1;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) _Bool isVerifying; // @synthesize isVerifying=_isVerifying;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
@property(nonatomic) long long leftViewVerticalLayoutType; // @synthesize leftViewVerticalLayoutType=_leftViewVerticalLayoutType;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
@property(nonatomic) _Bool shouldHoldFirstResponder; // @synthesize shouldHoldFirstResponder=_shouldHoldFirstResponder;
@property(nonatomic) long long validity; // @synthesize validity=_validity;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)wiggleAnimationWithCompletion:(CDUnknownBlockType)arg1;

@end

