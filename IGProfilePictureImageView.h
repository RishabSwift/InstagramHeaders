//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGImageView.h"

#import "IGFeedItemVideoViewDelegate.h"

@class IGFeedItemVideoView, IGFeedVideoPlayer, IGFeedVideoStateManager, IGSimpleButton, IGUser, IGVideoPlaybackController, IGVideoPlaybackItem, NSOperationQueue, NSString, UIColor;

@interface IGProfilePictureImageView : IGImageView <IGFeedItemVideoViewDelegate>
{
    _Bool _buttonDisabled;
    _Bool _hasHighlightedState;
    _Bool _useHDPictureIfAvailable;
    IGUser *_user;
    IGSimpleButton *_profilePicButton;
    long long _borderStyle;
    UIColor *_borderColor;
    double _borderWidth;
    IGFeedVideoPlayer *_profileVideoPlayer;
    IGFeedVideoStateManager *_profileVideoStateManager;
    IGVideoPlaybackController *_profileVideoPlaybackController;
    IGFeedItemVideoView *_profileVideoView;
    long long _viewMode;
    NSOperationQueue *_itemFetchQueue;
    IGVideoPlaybackItem *_playbackItem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) long long borderStyle; // @synthesize borderStyle=_borderStyle;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) _Bool buttonDisabled; // @synthesize buttonDisabled=_buttonDisabled;
- (void)dealloc;
- (void)feedItemVideoViewDidLoadImage:(id)arg1;
@property(nonatomic) _Bool hasHighlightedState; // @synthesize hasHighlightedState=_hasHighlightedState;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSOperationQueue *itemFetchQueue; // @synthesize itemFetchQueue=_itemFetchQueue;
- (void)pauseVideo;
- (void)playVideo;
@property(retain, nonatomic) IGVideoPlaybackItem *playbackItem; // @synthesize playbackItem=_playbackItem;
@property(readonly, nonatomic) IGSimpleButton *profilePicButton; // @synthesize profilePicButton=_profilePicButton;
- (id)profilePicURLForUser:(id)arg1;
@property(retain, nonatomic) IGVideoPlaybackController *profileVideoPlaybackController; // @synthesize profileVideoPlaybackController=_profileVideoPlaybackController;
@property(retain, nonatomic) IGFeedVideoPlayer *profileVideoPlayer; // @synthesize profileVideoPlayer=_profileVideoPlayer;
@property(retain, nonatomic) IGFeedVideoStateManager *profileVideoStateManager; // @synthesize profileVideoStateManager=_profileVideoStateManager;
@property(retain, nonatomic) IGFeedItemVideoView *profileVideoView; // @synthesize profileVideoView=_profileVideoView;
- (void)removeCurrentVideo;
- (void)setBackgroundColor:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setIsAccessibilityElement:(_Bool)arg1;
- (void)setUpProfileVideoViewWithFeedItem:(id)arg1;
@property(nonatomic) _Bool useHDPictureIfAvailable; // @synthesize useHDPictureIfAvailable=_useHDPictureIfAvailable;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
- (void)setUser:(id)arg1 inViewMode:(long long)arg2;
@property(nonatomic) long long viewMode; // @synthesize viewMode=_viewMode;
- (void)tapped:(id)arg1;
- (void)updateHighlightedBackgroundColor;
- (void)updateImageProcessor;
- (void)userUpdated:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

