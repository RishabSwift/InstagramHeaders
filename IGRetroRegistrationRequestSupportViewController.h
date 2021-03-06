//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGTextFieldDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class IGRetroRegistrationRequestSupportView, NSIndexPath, NSString, UITapGestureRecognizer;

@interface IGRetroRegistrationRequestSupportViewController : UIViewController <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, IGTextFieldDelegate, UITextViewDelegate>
{
    _Bool _submitting;
    id <IGRetroRegistrationRequestSupportDelegate> _delegate;
    IGRetroRegistrationRequestSupportView *_requestSupportView;
    UITapGestureRecognizer *_tapGesture;
    NSString *_twoFactorIdentifier;
    NSString *_username;
    NSIndexPath *_checkedAccountTypeIndexPath;
    NSIndexPath *_checkedReasonIndexPath;
    unsigned long long _requestSupportType;
    id <IGAPIClient> _networker;
    struct CGRect _activeFrame;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect activeFrame; // @synthesize activeFrame=_activeFrame;
- (void)backButtonTapped;
@property(retain, nonatomic) NSIndexPath *checkedAccountTypeIndexPath; // @synthesize checkedAccountTypeIndexPath=_checkedAccountTypeIndexPath;
@property(retain, nonatomic) NSIndexPath *checkedReasonIndexPath; // @synthesize checkedReasonIndexPath=_checkedReasonIndexPath;
@property(nonatomic) __weak id <IGRetroRegistrationRequestSupportDelegate> delegate; // @synthesize delegate=_delegate;
- (id)descriptionForRequestSupportForm;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithUsername:(id)arg1 twoFactorIdentifier:(id)arg2 networker:(id)arg3;
- (void)keyboardWillHide;
- (void)keyboardWillShow:(id)arg1;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersStatusBarHidden;
- (void)requestSupportFailureHandler:(id)arg1;
- (void)requestSupportSuccessHandler:(id)arg1;
@property(nonatomic) unsigned long long requestSupportType; // @synthesize requestSupportType=_requestSupportType;
@property(retain, nonatomic) IGRetroRegistrationRequestSupportView *requestSupportView; // @synthesize requestSupportView=_requestSupportView;
- (id)selectedAccountType;
- (id)selectedReasonType;
@property(nonatomic) _Bool submitting; // @synthesize submitting=_submitting;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(copy, nonatomic) NSString *twoFactorIdentifier; // @synthesize twoFactorIdentifier=_twoFactorIdentifier;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void)supportButtonTapped;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)updateRequestSupportButton;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

