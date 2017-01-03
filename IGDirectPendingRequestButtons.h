//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UILabel;

@interface IGDirectPendingRequestButtons : UIView
{
    id <IGDirectPendingRequestButtonDelegate> _delegate;
    NSString *_pendingRequestString;
    UIView *_gradientBackground;
    UIView *_backgroundWhite;
    UILabel *_explanationLabel;
    UIButton *_acceptButton;
    UIButton *_denyButton;
    UIView *_labelSeparator;
    UIView *_buttonSeparator;
}

+ (id)explanationFont;
+ (double)heightForString:(id)arg1 andWidth:(double)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(readonly, nonatomic) UIView *backgroundWhite; // @synthesize backgroundWhite=_backgroundWhite;
@property(readonly, nonatomic) UIView *buttonSeparator; // @synthesize buttonSeparator=_buttonSeparator;
@property(nonatomic) __weak id <IGDirectPendingRequestButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIButton *denyButton; // @synthesize denyButton=_denyButton;
- (void)didTapAcceptButton;
- (void)didTapDenyButton;
@property(readonly, nonatomic) UILabel *explanationLabel; // @synthesize explanationLabel=_explanationLabel;
@property(readonly, nonatomic) UIView *gradientBackground; // @synthesize gradientBackground=_gradientBackground;
- (id)initWithFrame:(struct CGRect)arg1 andString:(id)arg2;
@property(readonly, nonatomic) UIView *labelSeparator; // @synthesize labelSeparator=_labelSeparator;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *pendingRequestString; // @synthesize pendingRequestString=_pendingRequestString;

@end
