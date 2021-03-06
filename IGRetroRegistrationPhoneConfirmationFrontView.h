//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGCoreTextView, IGRetroRegistrationNextButton, IGRetroRegistrationTextField, NSString, UIImageView, UILabel;

@interface IGRetroRegistrationPhoneConfirmationFrontView : UIView
{
    IGRetroRegistrationNextButton *_nextButton;
    UIImageView *_logoView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    IGRetroRegistrationTextField *_confirmationCodeField;
    IGCoreTextView *_resendCodeView;
    NSString *_phoneNumber;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGRetroRegistrationTextField *confirmationCodeField; // @synthesize confirmationCodeField=_confirmationCodeField;
- (id)createLogoView;
- (id)initWithFrame:(struct CGRect)arg1 phoneNumber:(id)arg2;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) IGRetroRegistrationNextButton *nextButton; // @synthesize nextButton=_nextButton;
@property(readonly, copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) IGCoreTextView *resendCodeView; // @synthesize resendCodeView=_resendCodeView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

