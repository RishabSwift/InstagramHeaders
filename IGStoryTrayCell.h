//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGAnimatableTrayCell.h"

@class CAShapeLayer, IGLiveCuratorContainerView, IGProfilePictureImageView, IGStoryGradientRingView, NSString, UIImageView, UILabel;

@interface IGStoryTrayCell : UICollectionViewCell <IGAnimatableTrayCell>
{
    _Bool _isCurrentUserReel;
    _Bool _seen;
    _Bool _muted;
    _Bool _showError;
    _Bool _isInstaVideo;
    _Bool _isPlaceholder;
    IGProfilePictureImageView *_profileImageView;
    IGLiveCuratorContainerView *_instaVideoPulseView;
    IGStoryGradientRingView *_gradientRingView;
    id <IGStoryTrayCellDelegate> _delegate;
    UILabel *_titleLabel;
    CAShapeLayer *_overlayLayer;
    UIImageView *_accessoryImageView;
}

+ (struct CGSize)preferredCellSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *accessoryImageView; // @synthesize accessoryImageView=_accessoryImageView;
- (_Bool)canPerformAnimation;
- (void)configureWithUser:(id)arg1 seen:(_Bool)arg2 muted:(_Bool)arg3 isCurrentUserReel:(_Bool)arg4 isPlaceholder:(_Bool)arg5 isInstaVideo:(_Bool)arg6 delegate:(id)arg7;
- (id)contentViewForTransitionAnimation;
@property(readonly, nonatomic) __weak id <IGStoryTrayCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGStoryGradientRingView *gradientRingView; // @synthesize gradientRingView=_gradientRingView;
- (void)handleLongPressGesture:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) IGLiveCuratorContainerView *instaVideoPulseView; // @synthesize instaVideoPulseView=_instaVideoPulseView;
@property(readonly, nonatomic) _Bool isCurrentUserReel; // @synthesize isCurrentUserReel=_isCurrentUserReel;
@property(readonly, nonatomic) _Bool isInstaVideo; // @synthesize isInstaVideo=_isInstaVideo;
@property(readonly, nonatomic) _Bool isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
- (void)layoutSubviews;
@property(readonly, nonatomic) _Bool muted; // @synthesize muted=_muted;
@property(readonly, nonatomic) CAShapeLayer *overlayLayer; // @synthesize overlayLayer=_overlayLayer;
- (void)popWithDuration:(double)arg1 delay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareForReuse;
@property(readonly, nonatomic) IGProfilePictureImageView *profileImageView; // @synthesize profileImageView=_profileImageView;
@property(readonly, nonatomic) _Bool seen; // @synthesize seen=_seen;
- (void)setHighlighted:(_Bool)arg1;
- (void)setLoading:(_Bool)arg1;
@property(nonatomic) _Bool showError; // @synthesize showError=_showError;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)trayInstaVideoTappedInControl;
- (void)updateStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
