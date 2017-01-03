//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGUnifiedWebViewControllerWebViewDelegate.h"
#import "IGWatchAndActionViewControllerProtocol.h"
#import "IGWatchAndActionViewDelegate.h"

@class IGFeedItem, IGSponsoredFeedItemTracker, IGUnifiedWebViewController, IGWatchAndActionView, IGWebViewNavigationController, NSString, UIView;

@interface IGWatchAndBrowseViewController : IGViewController <IGUnifiedWebViewControllerWebViewDelegate, IGWatchAndActionViewDelegate, IGWatchAndActionViewControllerProtocol>
{
    _Bool _isVideoCollapsed;
    _Bool _didEndDisplayingVideoInFeed;
    id <IGWatchAndBrowseViewControllerDelegate> _delegate;
    UIView *_videoView;
    IGWatchAndActionView *_watchAndBrowseView;
    IGWebViewNavigationController *_browserViewController;
    IGUnifiedWebViewController *_webViewController;
    IGSponsoredFeedItemTracker *_tracker;
    IGFeedItem *_feedItem;
}

- (void).cxx_destruct;
- (id)analyticsModule;
@property(readonly, nonatomic) IGWebViewNavigationController *browserViewController; // @synthesize browserViewController=_browserViewController;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
@property(nonatomic) __weak id <IGWatchAndBrowseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool didEndDisplayingVideoInFeed; // @synthesize didEndDisplayingVideoInFeed=_didEndDisplayingVideoInFeed;
- (void)didTapWebViewCloseButton;
- (void)dismissWithExitSource:(unsigned long long)arg1;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (id)initWithVideoView:(id)arg1 webViewController:(id)arg2 feedItem:(id)arg3;
@property(nonatomic) _Bool isVideoCollapsed; // @synthesize isVideoCollapsed=_isVideoCollapsed;
- (void)loadView;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)removeActionView;
- (void)setVideoView:(id)arg1;
- (void)showNavigationBarButtons:(_Bool)arg1;
@property(readonly, nonatomic) IGSponsoredFeedItemTracker *tracker; // @synthesize tracker=_tracker;
@property(readonly, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)watchAndActionView:(id)arg1 setPlayVideo:(_Bool)arg2;
- (void)watchAndActionViewDidCollapseVideoView:(_Bool)arg1;
- (void)watchAndActionViewDidDrag:(_Bool)arg1;
- (void)watchAndActionViewDidSwipeDownVideo;
- (void)watchAndActionViewDidTap;
- (void)watchAndActionViewDidTapDismissVideoButton;
- (void)watchAndActionViewWillCollapseVideoView:(_Bool)arg1;
- (void)watchAndActionViewWillExpandVideoView:(_Bool)arg1;
@property(readonly, nonatomic) IGWatchAndActionView *watchAndBrowseView; // @synthesize watchAndBrowseView=_watchAndBrowseView;
@property(readonly, nonatomic) IGUnifiedWebViewController *webViewController; // @synthesize webViewController=_webViewController;
- (void)webViewDidStartLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
