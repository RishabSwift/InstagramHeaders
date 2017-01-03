//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "IGStoryDimmableView.h"
#import "IGStoryProfileImageContaining.h"
#import "UIScrollViewDelegate.h"

@class IGStoryFullscreenOverlayView, NSString, UIScrollView, UIView, UIView<IGStoryPlayerMediaViewType>;

@interface IGStoryFullscreenCell : UICollectionViewCell <UIScrollViewDelegate, IGStoryDimmableView, IGStoryProfileImageContaining>
{
    _Bool _presentingWebView;
    IGStoryFullscreenOverlayView *_overlayView;
    id <IGStoryFullScreenCellDelegate> _delegate;
    UIView<IGStoryPlayerMediaViewType> *_mediaView;
    UIView *_webview;
    UIView *_dimmingView;
    UIScrollView *_contentScrollView;
}

- (void).cxx_destruct;
- (void)animateScrollToFrame:(struct CGRect)arg1 onCompletion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
- (void)dealloc;
@property(nonatomic) __weak id <IGStoryFullScreenCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didScrollToMediaViewWithSource:(unsigned long long)arg1;
- (void)didScrollToWebView;
@property(readonly, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, getter=isPresentingWebView) _Bool presentingWebView; // @synthesize presentingWebView=_presentingWebView;
- (void)layoutSubviews;
@property(retain, nonatomic) UIView<IGStoryPlayerMediaViewType> *mediaView; // @synthesize mediaView=_mediaView;
@property(readonly, nonatomic) IGStoryFullscreenOverlayView *overlayView; // @synthesize overlayView=_overlayView;
- (void)prepareForReuse;
- (id)profileImageView;
- (void)scrollToMediaViewWithSource:(unsigned long long)arg1;
- (void)scrollToWebView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDimmingPercent:(double)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
@property(retain, nonatomic) UIView *webview; // @synthesize webview=_webview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

