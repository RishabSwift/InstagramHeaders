//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedMediaView.h"

#import "IGImageProgressViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class IGFeedVideoTimeIndicatorView, IGImageProgressView, IGPhoto, IGPlaybackTimeIndicatorController, IGVideo, IGVideoIndicatorView, IGVideoLoadProgressView, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView, UIView<IGVideoCaptionViewType>;

@interface IGFeedItemVideoView : IGFeedMediaView <UIGestureRecognizerDelegate, IGImageProgressViewDelegate>
{
    IGImageProgressView *_photoImageView;
    id <IGFeedItemVideoViewDelegate> _delegate;
    id <IGFeedItemVideoViewAudioDelegate> _audioDelegate;
    id <IGFeedItemVideoViewSingleTapDelegate> _singleTapDelegate;
    id <IGFeedItemVideoViewDoubleTapDelegate> _doubleTapDelegate;
    IGVideoLoadProgressView *_progressView;
    UIView<IGVideoCaptionViewType> *_captionView;
    id <IGVideoViewLogging> _logger;
    IGVideo *_video;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UITapGestureRecognizer *_singleTapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    IGVideoIndicatorView *_indicatorView;
    IGFeedVideoTimeIndicatorView *_timeIndicatorView;
    IGPlaybackTimeIndicatorController *_timeIndicatorController;
    UIView *_mediaView;
    double _startTime;
    IGPhoto *_photo;
    UIView *_videoView;
    double _videoShouldStartTime;
}

+ (double)heightForWidth:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFeedItemVideoViewAudioDelegate> audioDelegate; // @synthesize audioDelegate=_audioDelegate;
@property(readonly, nonatomic) UIView<IGVideoCaptionViewType> *captionView; // @synthesize captionView=_captionView;
- (void)cleanUpVideoView:(CDUnknownBlockType)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <IGFeedItemVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)disableImageProgressView;
- (void)disableIndicator:(_Bool)arg1;
@property(nonatomic) __weak id <IGFeedItemVideoViewDoubleTapDelegate> doubleTapDelegate; // @synthesize doubleTapDelegate=_doubleTapDelegate;
@property(readonly, nonatomic) UITapGestureRecognizer *doubleTapRecognizer; // @synthesize doubleTapRecognizer=_doubleTapRecognizer;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(retain, nonatomic) IGVideoIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutCaptionView;
- (void)layoutSubviews;
@property(readonly, nonatomic) id <IGVideoViewLogging> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(readonly, nonatomic) UIView *mediaView; // @synthesize mediaView=_mediaView;
- (void)onDoubleTap:(id)arg1;
- (void)onTap:(id)arg1;
@property(readonly, nonatomic) IGPhoto *photo; // @synthesize photo=_photo;
- (id)photoImageView;
@property(readonly, nonatomic) _Bool posterFrameLoaded;
- (void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)progressImageView:(id)arg1 didLoadImage:(id)arg2;
@property(readonly, nonatomic) IGVideoLoadProgressView *progressView; // @synthesize progressView=_progressView;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
@property(nonatomic) __weak id <IGFeedItemVideoViewSingleTapDelegate> singleTapDelegate; // @synthesize singleTapDelegate=_singleTapDelegate;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)setVideo:(id)arg1 coverPhoto:(id)arg2 logger:(id)arg3;
@property(nonatomic) double videoShouldStartTime; // @synthesize videoShouldStartTime=_videoShouldStartTime;
@property(retain, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
- (void)showIndicatorStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)showVideo:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showVideoIndication:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) UITapGestureRecognizer *singleTapRecognizer; // @synthesize singleTapRecognizer=_singleTapRecognizer;
@property(readonly, nonatomic) IGPlaybackTimeIndicatorController *timeIndicatorController; // @synthesize timeIndicatorController=_timeIndicatorController;
@property(readonly, nonatomic) IGFeedVideoTimeIndicatorView *timeIndicatorView; // @synthesize timeIndicatorView=_timeIndicatorView;
- (void)updateVideoViewToLoadingState;
- (void)updateVideoViewToPlayingState;
- (void)updateVideoViewToView:(id)arg1;
@property(readonly, nonatomic) IGVideo *video; // @synthesize video=_video;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

