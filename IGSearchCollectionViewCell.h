//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UIGestureRecognizerDelegate.h"

@class CALayer, IGProfilePictureImageView, NSString, UIActivityIndicatorView, UIImageView, UILabel, UILongPressGestureRecognizer, UIView;

@interface IGSearchCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate>
{
    _Bool _showUnseen;
    _Bool _showUnseenContext;
    id <IGSearchCollectionViewCellDelegate> _delegate;
    UIView *_iconView;
    IGProfilePictureImageView *_profileImageView;
    UIImageView *_iconImageView;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_unseenToastView;
    UIImageView *_verifiedUserBadgeView;
    UILongPressGestureRecognizer *_contentMenuLongPressRecognizer;
    CALayer *_separatorLayer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
- (void)configureLoadingWithQuery:(id)arg1;
- (void)configureNearby;
- (void)configureNoResultWithMessage:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
@property(retain, nonatomic) UILongPressGestureRecognizer *contentMenuLongPressRecognizer; // @synthesize contentMenuLongPressRecognizer=_contentMenuLongPressRecognizer;
@property(nonatomic) __weak id <IGSearchCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGRect)iconFrameContainedInBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGRect)labelFrameContainedInBounds:(struct CGRect)arg1 labelFrame:(struct CGRect)arg2;
- (double)labelMinXForIconFrame:(struct CGRect)arg1;
- (void)layoutLabels:(double)arg1 bounds:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)onContentMenuPress:(id)arg1;
- (void)prepareForReuse;
@property(readonly, nonatomic) IGProfilePictureImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
- (void)reset;
@property(readonly, nonatomic) CALayer *separatorLayer; // @synthesize separatorLayer=_separatorLayer;
- (void)setHighlighted:(_Bool)arg1;
@property(readonly, nonatomic) _Bool showUnseen; // @synthesize showUnseen=_showUnseen;
@property(readonly, nonatomic) _Bool showUnseenContext; // @synthesize showUnseenContext=_showUnseenContext;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (struct CGRect)unSeenToastViewContainedInBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) UIImageView *unseenToastView; // @synthesize unseenToastView=_unseenToastView;
@property(readonly, nonatomic) UIImageView *verifiedUserBadgeView; // @synthesize verifiedUserBadgeView=_verifiedUserBadgeView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

