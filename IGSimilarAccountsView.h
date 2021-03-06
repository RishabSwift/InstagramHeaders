//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "IGHScrollAYMFBannerCellDelegate.h"

@class CAShapeLayer, IGHScrollAYMFBannerCell, NSObject<IGSimilarAccountsViewDelegate>, NSString, UIColor, UIView;

@interface IGSimilarAccountsView : UITableView <IGHScrollAYMFBannerCellDelegate>
{
    _Bool _isChainingSeeAllButtonEnabled;
    NSObject<IGSimilarAccountsViewDelegate> *_similarAccountsViewDelegate;
    IGHScrollAYMFBannerCell *_topHeaderInnerView;
    UIView *_topHeaderView;
    double _triangleViewCenterOffsetX;
    CAShapeLayer *_pointerLayer;
    UIColor *_similarAccountsBackgroundColor;
}

- (void).cxx_destruct;
- (void)didTapActionButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool isChainingSeeAllButtonEnabled; // @synthesize isChainingSeeAllButtonEnabled=_isChainingSeeAllButtonEnabled;
- (void)layoutSubviews;
@property(readonly, nonatomic) CAShapeLayer *pointerLayer; // @synthesize pointerLayer=_pointerLayer;
@property(nonatomic) __weak NSObject<IGSimilarAccountsViewDelegate> *similarAccountsViewDelegate; // @synthesize similarAccountsViewDelegate=_similarAccountsViewDelegate;
@property(retain, nonatomic) IGHScrollAYMFBannerCell *topHeaderInnerView; // @synthesize topHeaderInnerView=_topHeaderInnerView;
@property(retain, nonatomic) UIView *topHeaderView; // @synthesize topHeaderView=_topHeaderView;
@property(nonatomic) double triangleViewCenterOffsetX; // @synthesize triangleViewCenterOffsetX=_triangleViewCenterOffsetX;
@property(readonly, nonatomic) UIColor *similarAccountsBackgroundColor; // @synthesize similarAccountsBackgroundColor=_similarAccountsBackgroundColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

