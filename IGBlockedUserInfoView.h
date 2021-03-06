//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGCoreTextLinkHandler.h"

@class IGGating, IGImageView, NSString, NSURL, UIButton, UILabel;

@interface IGBlockedUserInfoView : UIView <IGCoreTextLinkHandler>
{
    id <IGAgeGatingDelegate> _delegate;
    IGGating *_gating;
    NSURL *_userProfileUrl;
    UIView *_containerView;
    UILabel *_messageLabel;
    UILabel *_publicReasonLabel;
    UIView *_line;
    IGImageView *_profileImage;
    UIButton *_leftButton;
    UIButton *_rightButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)createButtonWithSelector:(SEL)arg1;
- (id)createContainerView;
- (id)createDividerLine;
- (id)createMessageLabel;
- (id)createProfileImageView;
- (id)createPublicReasonLabel;
@property(nonatomic) __weak id <IGAgeGatingDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapLeftButton;
- (void)didTapRightButton;
@property(readonly, nonatomic) IGGating *gating; // @synthesize gating=_gating;
- (id)initWithGating:(id)arg1 userProfileURL:(id)arg2;
- (_Bool)layoutButtons;
- (void)layoutSubviews;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) IGImageView *profileImage; // @synthesize profileImage=_profileImage;
@property(retain, nonatomic) UILabel *publicReasonLabel; // @synthesize publicReasonLabel=_publicReasonLabel;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(readonly, nonatomic) NSURL *userProfileUrl; // @synthesize userProfileUrl=_userProfileUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

