//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGUserTitleSubtitleView, UIImage, UIImageView, UILongPressGestureRecognizer;

@interface IGDirectRecipientCell : UICollectionViewCell
{
    id <IGDirectRecipientCellDelegate> _delegate;
    IGUserTitleSubtitleView *_coreView;
    UIImageView *_accessoryView;
    UILongPressGestureRecognizer *_gesture;
    UIImage *_selectedMark;
    UIImage *_deselectedMark;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void)configureWithViewModel:(id)arg1 delegate:(id)arg2;
@property(readonly, nonatomic) IGUserTitleSubtitleView *coreView; // @synthesize coreView=_coreView;
@property(nonatomic) __weak id <IGDirectRecipientCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *deselectedMark; // @synthesize deselectedMark=_deselectedMark;
@property(readonly, nonatomic) UILongPressGestureRecognizer *gesture; // @synthesize gesture=_gesture;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)onLongPress:(id)arg1;
@property(retain, nonatomic) UIImage *selectedMark; // @synthesize selectedMark=_selectedMark;

@end

