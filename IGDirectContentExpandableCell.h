//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGDirectContentCell.h"

#import "IGDirectContentUploadCell.h"
#import "IGDirectMediaViewerCellProtocol.h"

@class IGBlurredImageView, IGDirectContentCellUploadDecorator, IGHeartView, NSString, UIImage, UILabel, UIView;

@interface IGDirectContentExpandableCell : IGDirectContentCell <IGDirectContentUploadCell, IGDirectMediaViewerCellProtocol>
{
    _Bool _enableBlurOverlay;
    id <IGDirectContentUpoadCellDelegate> _delegate;
    IGDirectContentCellUploadDecorator *_uploadDecorator;
    UIView *_contentImageView;
    UIImage *_contentImage;
    double _cornerRadius;
    double _expansionProgress;
    IGHeartView *_heartView;
    IGBlurredImageView *_blurredImageView;
    UILabel *_dismissBlurLabel;
    struct CGSize _photoSize;
}

+ (struct CGSize)offsetForUploadSpinner;
- (void).cxx_destruct;
- (void)animateLikeAction;
@property(retain, nonatomic) IGBlurredImageView *blurredImageView; // @synthesize blurredImageView=_blurredImageView;
@property(readonly, nonatomic) UIImage *contentImage; // @synthesize contentImage=_contentImage;
@property(retain, nonatomic) UIView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) __weak id <IGDirectContentUpoadCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *dismissBlurLabel; // @synthesize dismissBlurLabel=_dismissBlurLabel;
@property(nonatomic) _Bool enableBlurOverlay; // @synthesize enableBlurOverlay=_enableBlurOverlay;
@property(nonatomic) double expansionProgress; // @synthesize expansionProgress=_expansionProgress;
- (void)handleUploadCellTap;
@property(retain, nonatomic) IGHeartView *heartView; // @synthesize heartView=_heartView;
- (id)imageViewForMediaViewer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutBlurOverlay;
- (void)layoutSubviews;
- (id)mediaView;
- (void)performDelete;
- (void)performRetry;
@property(nonatomic) struct CGSize photoSize; // @synthesize photoSize=_photoSize;
- (void)prepareForReuse;
- (id)previewImageForMediaViewer;
- (void)setCellDecorator:(id)arg1;
- (void)setContent:(id)arg1 currentUser:(id)arg2;
- (void)setIsSameUserContent:(_Bool)arg1;
@property(retain, nonatomic) IGDirectContentCellUploadDecorator *uploadDecorator; // @synthesize uploadDecorator=_uploadDecorator;
- (void)setupBlurOverlay;
- (void)setupBlurredImageView;
- (void)setupDismissBlurLabel;
- (void)showUploadFailedUI;
- (void)showUploadSendingUI;
- (struct CGRect)tapTargetFrame;
- (id)timestampText;
- (void)uploadDecoratorShowFailedUI:(id)arg1;
- (double)usernameXOffset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

