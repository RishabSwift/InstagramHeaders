//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTableViewCell.h"

#import "IGFollowButtonDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGFollowButton, IGProfilePictureImageView, NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface IGSwipableUserCell : IGTableViewCell <UIScrollViewDelegate, IGFollowButtonDelegate>
{
    _Bool _separatorHidden;
    _Bool _isUserVerified;
    id <IGSwipableUserCellDelegate> _delegate;
    IGProfilePictureImageView *_profilePicImageView;
    UILabel *_usernameLabel;
    UILabel *_userDetailLabel;
    IGFollowButton *_followButton;
    UIImageView *_verifiedUserBadgeView;
    UIScrollView *_swipableContentScrollView;
    UIView *_swipableContentView;
    UIButton *_dismissButton;
    UIView *_separatorLineView;
    id <IGRaindropAnalyticsDelegate> _analyticsDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRaindropAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
- (void)cellTapped:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <IGSwipableUserCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
- (void)dismissButtonTapped:(id)arg1;
@property(retain, nonatomic) IGFollowButton *followButton; // @synthesize followButton=_followButton;
- (void)followButton:(id)arg1 tappedWithAction:(long long)arg2;
- (void)followButtonDidUpdateButtonState:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1 analyticsDelegate:(id)arg2;
@property(nonatomic) _Bool isUserVerified; // @synthesize isUserVerified=_isUserVerified;
- (void)layoutSubviews;
- (void)prepareForReuse;
@property(retain, nonatomic) IGProfilePictureImageView *profilePicImageView; // @synthesize profilePicImageView=_profilePicImageView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
@property(nonatomic) _Bool separatorHidden; // @synthesize separatorHidden=_separatorHidden;
@property(retain, nonatomic) UIView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property(retain, nonatomic) UIScrollView *swipableContentScrollView; // @synthesize swipableContentScrollView=_swipableContentScrollView;
@property(retain, nonatomic) UIView *swipableContentView; // @synthesize swipableContentView=_swipableContentView;
@property(retain, nonatomic) UILabel *userDetailLabel; // @synthesize userDetailLabel=_userDetailLabel;
@property(retain, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain, nonatomic) UIImageView *verifiedUserBadgeView; // @synthesize verifiedUserBadgeView=_verifiedUserBadgeView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
