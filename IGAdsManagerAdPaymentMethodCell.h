//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTableViewCell.h"

@class IGAdViewModel, IGImageView, UILabel;

@interface IGAdsManagerAdPaymentMethodCell : IGTableViewCell
{
    IGAdViewModel *_viewModel;
    UILabel *_title;
    UILabel *_subtitle;
    IGImageView *_thumbnailView;
}

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (struct CGRect)layoutForSubtitleWithThumbnailRect:(struct CGRect)arg1 bottomMargin:(double)arg2;
- (struct CGRect)layoutForThumbnail;
- (struct CGRect)layoutForTitleWithThumbnailRect:(struct CGRect)arg1 topMargin:(double)arg2;
- (void)layoutSubviews;
- (void)setUpSubtitle;
- (void)setUpThumbnailView;
- (void)setUpTitle;
- (void)setUpViewHierarchy;
@property(retain, nonatomic) IGAdViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) UILabel *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) IGImageView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(readonly, nonatomic) UILabel *title; // @synthesize title=_title;
- (double)topBottomMarginWithTitleSize:(struct CGSize)arg1 subtitleSize:(struct CGSize)arg2;

@end

