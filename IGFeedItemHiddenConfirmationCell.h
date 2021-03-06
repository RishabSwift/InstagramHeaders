//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class IGTombstoneView;

@interface IGFeedItemHiddenConfirmationCell : UICollectionViewCell
{
    id <IGFeedItemHiddenConfirmationCellDelegate> _delegate;
    IGTombstoneView *_tombstoneView;
}

+ (double)heightForReportType:(long long)arg1;
- (void).cxx_destruct;
- (void)configureForTombstoneReportType:(long long)arg1;
@property(nonatomic) __weak id <IGFeedItemHiddenConfirmationCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapDismissButton;
- (void)didTapReportButton;
- (void)didTapShowPostButton;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) IGTombstoneView *tombstoneView; // @synthesize tombstoneView=_tombstoneView;

@end

