//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class IGProfilePictureImageView, UIControl, UIImageView, UILabel;

@interface IGUserHeaderView : UIView
{
    UIControl *_followButton;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGProfilePictureImageView *_imageView;
    UIImageView *_verifiedImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIControl *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) IGProfilePictureImageView *imageView; // @synthesize imageView=_imageView;
- (void)layoutSubviews;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *verifiedImageView; // @synthesize verifiedImageView=_verifiedImageView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
