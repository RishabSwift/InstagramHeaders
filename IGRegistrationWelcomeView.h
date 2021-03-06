//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGCoreTextView, IGFacebookButton, IGRetroRegistrationFacebookButtonSeperator, IGWelcomeViewBackgroundView, UIButton, UILabel;

@interface IGRegistrationWelcomeView : UIView
{
    IGFacebookButton *_facebookLoginButton;
    id <IGRegistrationWelcomeViewDelegate> _registrationWelcomeViewDelegate;
    IGWelcomeViewBackgroundView *_backgroundView;
    UILabel *_socialContextLabel;
    IGRetroRegistrationFacebookButtonSeperator *_facebookButtonSeparator;
    UIButton *_signUpButton;
    IGCoreTextView *_termView;
    UIButton *_dismissButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGWelcomeViewBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (id)createFacebookLoginButton;
- (id)createSignUpBotton;
- (id)createSocialContextLabel;
- (id)createTermView;
- (void)didTapDismissButton;
- (void)didTapFacebookLoginButton;
- (void)didTapLoginButton;
- (void)didTapSignUpButton;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) IGRetroRegistrationFacebookButtonSeperator *facebookButtonSeparator; // @synthesize facebookButtonSeparator=_facebookButtonSeparator;
@property(retain, nonatomic) IGFacebookButton *facebookLoginButton; // @synthesize facebookLoginButton=_facebookLoginButton;
- (id)initWithFrame:(struct CGRect)arg1 isSwitchingAccount:(_Bool)arg2;
- (void)layoutSubviews;
@property(nonatomic) __weak id <IGRegistrationWelcomeViewDelegate> registrationWelcomeViewDelegate; // @synthesize registrationWelcomeViewDelegate=_registrationWelcomeViewDelegate;
@property(retain, nonatomic) UIButton *signUpButton; // @synthesize signUpButton=_signUpButton;
@property(retain, nonatomic) UILabel *socialContextLabel; // @synthesize socialContextLabel=_socialContextLabel;
@property(retain, nonatomic) IGCoreTextView *termView; // @synthesize termView=_termView;
- (void)setTermViewLinkHandler:(id)arg1;
- (void)updateFBLoginButtonWithFBName:(id)arg1 socialContext:(id)arg2;

@end

