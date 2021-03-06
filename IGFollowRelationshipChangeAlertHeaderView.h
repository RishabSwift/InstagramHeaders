//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGProfilePictureImageView, IGUser, UILabel;

@interface IGFollowRelationshipChangeAlertHeaderView : UIView
{
    _Bool _changingToFollow;
    IGProfilePictureImageView *_profilePic;
    UILabel *_titleLabel;
    IGUser *_user;
}

- (void).cxx_destruct;
- (id)alertTitle;
@property(readonly, nonatomic) _Bool changingToFollow; // @synthesize changingToFollow=_changingToFollow;
- (id)initWithFrame:(struct CGRect)arg1 user:(id)arg2 changingToFollow:(_Bool)arg3;
- (void)layoutSubviews;
@property(readonly, nonatomic) IGProfilePictureImageView *profilePic; // @synthesize profilePic=_profilePic;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;

@end

