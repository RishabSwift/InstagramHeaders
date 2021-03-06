//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface IGActivatorHomeCell : UICollectionViewCell
{
    id <IGActivatorHomeCellDelegate> _delegate;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_imageView;
    UIButton *_actionButton;
    UIView *_cardView;
}

+ (double)suggestedHeightForWidth:(double)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void)activatorCellButtonTapped;
- (void)activatorCellButtonTouchDown;
- (void)activatorCellButtonTouchUp;
@property(readonly, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(nonatomic) __weak id <IGActivatorHomeCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(readonly, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
- (void)setUpSubViews;

@end

