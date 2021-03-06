//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGDirectMediaViewerTransitionManagerDelegate.h"
#import "IGTooltipViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class IGTooltipView, NSArray, NSString, UIButton, UICollectionView, UIImageView, UILabel;

@interface IGInsightsCarouselsView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGTooltipViewDelegate, IGDirectMediaViewerTransitionManagerDelegate>
{
    _Bool _infoIconToolTipPresenting;
    id <IGInsightsCarouselsViewDelegate> _delegate;
    UILabel *_headerLabel;
    UIButton *_headerButton;
    UIImageView *_iconImageView;
    UIButton *_infoButton;
    NSString *_infoIconName;
    IGTooltipView *_infoIconToolTip;
    NSString *_header;
    NSString *_headerButtonText;
    NSArray *_mediaBundles;
    UICollectionView *_collectionView;
    struct CGSize _cellSize;
}

+ (double)heightForCellAspectRatio:(double)arg1 headerText:(id)arg2 withinBoundingWidth:(double)arg3;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
@property(readonly, nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)createBtttonWithText:(id)arg1;
- (id)createCarouselCollectionViewWithCellAspectRatio:(double)arg1;
- (id)createHeaderLabelWithText:(id)arg1;
- (id)createIconImageView;
- (id)createInfoButton;
- (id)createInfoIconToolTipWithText:(id)arg1;
@property(nonatomic) __weak id <IGInsightsCarouselsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didCalculateSourceRectForPresentation;
- (void)didTapTooltipView:(id)arg1;
- (id)feedItemAtIndex:(long long)arg1;
@property(copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(readonly, nonatomic) UIButton *headerButton; // @synthesize headerButton=_headerButton;
@property(copy, nonatomic) NSString *headerButtonText; // @synthesize headerButtonText=_headerButtonText;
@property(readonly, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (void)hideInfoIconToolTip;
- (void)hideInfoIconToolTipAfterDelay:(double)arg1;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(readonly, nonatomic) NSString *infoIconName; // @synthesize infoIconName=_infoIconName;
- (void)infoIconTapped:(id)arg1;
@property(retain, nonatomic) IGTooltipView *infoIconToolTip; // @synthesize infoIconToolTip=_infoIconToolTip;
- (id)initWithFrame:(struct CGRect)arg1 header:(id)arg2 buttonText:(id)arg3 infoIconName:(id)arg4 infoIconToolTipText:(id)arg5 aspectRatio:(double)arg6;
@property(nonatomic, getter=isInfoIconToolTipPresenting) _Bool infoIconToolTipPresenting; // @synthesize infoIconToolTipPresenting=_infoIconToolTipPresenting;
- (void)layoutSubviews;
@property(copy, nonatomic) NSArray *mediaBundles; // @synthesize mediaBundles=_mediaBundles;
- (void)showInfoIconToolTip;
- (void)showInfoIconToolTipForDuration:(double)arg1;
- (void)showInfoIconToolTipIndefinitely;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateMediaBundle:(id)arg1;
- (id)visibleMediaCellForMediaViewerProducer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

