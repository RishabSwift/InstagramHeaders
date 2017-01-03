//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGProfilePictureHelperDelegate.h"
#import "IGProfilePictureImageViewDelegate.h"
#import "IGTextFieldDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class FBSDKAccessToken, IGProfilePictureHelper, IGRetroRegistrationSignUpView, NSDictionary, NSString, UIImage, UITapGestureRecognizer;

@interface IGRetroRegistrationSignUpViewController : UIViewController <IGTextFieldDelegate, IGProfilePictureHelperDelegate, IGProfilePictureImageViewDelegate, UIGestureRecognizerDelegate>
{
    id <IGRetroRegistrationSignUpViewControllerDelegate> _delegate;
    IGRetroRegistrationSignUpView *_signUpView;
    IGProfilePictureHelper *_profilePictureHelper;
    NSDictionary *_facebookUserInfo;
    FBSDKAccessToken *_facebookAccessToken;
    UITapGestureRecognizer *_tapGesture;
    id <IGAPIClient> _networker;
    NSString *_userDisplayName;
    UIImage *_profilePhoto;
}

- (void).cxx_destruct;
- (void)backgroundTapped;
@property(nonatomic) __weak id <IGRetroRegistrationSignUpViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBSDKAccessToken *facebookAccessToken; // @synthesize facebookAccessToken=_facebookAccessToken;
@property(retain, nonatomic) NSDictionary *facebookUserInfo; // @synthesize facebookUserInfo=_facebookUserInfo;
- (id)flowName;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFacebookInfo:(id)arg1 facebookAccessToken:(id)arg2 networker:(id)arg3;
- (_Bool)isPasswordFieldsValid;
- (void)keyboardWillShow:(id)arg1;
- (void)loginButtonTapped;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
- (void)nextButtonTapped;
- (void)pasteFacebookUserInfo;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersStatusBarHidden;
@property(retain, nonatomic) UIImage *profilePhoto; // @synthesize profilePhoto=_profilePhoto;
@property(retain, nonatomic) IGProfilePictureHelper *profilePictureHelper; // @synthesize profilePictureHelper=_profilePictureHelper;
- (void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2 fromOption:(long long)arg3;
- (void)profilePictureHelper:(id)arg1 willPerformAction:(long long)arg2;
- (void)profilePictureHelperDidGetNewFacebookAccessToken:(id)arg1;
- (void)profilePictureTapped;
- (void)profilePictureTapped:(id)arg1;
@property(retain, nonatomic) IGRetroRegistrationSignUpView *signUpView; // @synthesize signUpView=_signUpView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(copy, nonatomic) NSString *userDisplayName; // @synthesize userDisplayName=_userDisplayName;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

