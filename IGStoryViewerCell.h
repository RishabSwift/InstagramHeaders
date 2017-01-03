//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGProfilePictureImageView, IGTapButton, NSString, UILabel;

@interface IGStoryViewerCell : UICollectionViewCell
{
    _Bool _storyHidden;
    id <IGStoryViewerCellDelegate> _delegate;
    IGProfilePictureImageView *_profileImageView;
    NSString *_username;
    NSString *_userDetailText;
    UILabel *_usernameLabel;
    UILabel *_userDetailLabel;
    IGTapButton *_hideButton;
    IGTapButton *_unhideButton;
}

+ (double)preferredHeight;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryViewerCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGTapButton *hideButton; // @synthesize hideButton=_hideButton;
- (void)hideTapped;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) IGProfilePictureImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
@property(nonatomic) _Bool storyHidden; // @synthesize storyHidden=_storyHidden;
@property(copy, nonatomic) NSString *userDetailText; // @synthesize userDetailText=_userDetailText;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) IGTapButton *unhideButton; // @synthesize unhideButton=_unhideButton;
- (void)unhideTapped;
@property(readonly, nonatomic) UILabel *userDetailLabel; // @synthesize userDetailLabel=_userDetailLabel;
@property(readonly, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;

@end
