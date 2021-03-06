//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGCoreTextLinkHandler.h"
#import "IGCountryCodeViewControllerDelegate.h"
#import "IGTextFieldDelegate.h"

@class IGRetroRegistrationPhoneNumberView, NSString, UITapGestureRecognizer;

@interface IGRetroRegistrationPhoneNumberViewController : UIViewController <IGCoreTextLinkHandler, IGTextFieldDelegate, IGCountryCodeViewControllerDelegate>
{
    id <IGRetroRegistrationPhoneNumberViewControllerDelegate> _delegate;
    IGRetroRegistrationPhoneNumberView *_phoneNumberView;
    UITapGestureRecognizer *_tapGesture;
    id <IGAPIClient> _networker;
}

- (void).cxx_destruct;
- (void)backgroundViewTapped;
- (void)configurePhoneNumberView;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)countryCodeButtonTapped;
@property(nonatomic) __weak id <IGRetroRegistrationPhoneNumberViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)emailRegistrationButtonTapped;
- (id)initWithNetworker:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)logInButtonTapped;
- (void)logNextButtonBlocked;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
- (void)nextButtonTapped;
@property(retain, nonatomic) IGRetroRegistrationPhoneNumberView *phoneNumberView; // @synthesize phoneNumberView=_phoneNumberView;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersStatusBarHidden;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)userDidSelectCountryWithName:(id)arg1 countryNumber:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

