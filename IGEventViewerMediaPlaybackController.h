//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGEventViewerPhotoPlaybackControllerDelegate.h"
#import "IGEventViewerVideoPlaybackControllerDelegate.h"

@class IGEventViewerAnalyticsLogger, IGEventViewerPhotoPlaybackController, IGEventViewerVideoPlaybackController, NSString;

@interface IGEventViewerMediaPlaybackController : NSObject <IGEventViewerVideoPlaybackControllerDelegate, IGEventViewerPhotoPlaybackControllerDelegate>
{
    id <IGEventViewerMediaPlaybackDelegate> _playDelegate;
    id <IGEventViewerMediaProgressDelegate> _progressDelegate;
    IGEventViewerVideoPlaybackController *_videoPlaybackController;
    IGEventViewerPhotoPlaybackController *_photoPlaybackController;
    IGEventViewerAnalyticsLogger *_logger;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool audioEnabled;
- (void)cacheCurrentFrameWithCompletion:(CDUnknownBlockType)arg1;
- (double)currentDurationForPost:(id)arg1;
- (double)currentProgressForPost:(id)arg1;
- (id)initWithLogger:(id)arg1;
- (_Bool)isPlayingMedia;
- (_Bool)isPlayingPhoto;
- (_Bool)isPlayingVideo;
@property(readonly, nonatomic) IGEventViewerAnalyticsLogger *logger; // @synthesize logger=_logger;
- (void)pauseCurrentMedia;
@property(readonly, nonatomic) IGEventViewerPhotoPlaybackController *photoPlaybackController; // @synthesize photoPlaybackController=_photoPlaybackController;
- (void)photoPlaybackController:(id)arg1 didBeginPlayingPhotoForItem:(id)arg2 withDuration:(double)arg3;
- (void)photoPlaybackController:(id)arg1 didEndPlayingPhotoForItem:(id)arg2;
- (void)photoPlaybackController:(id)arg1 didPausePhotoForItem:(id)arg2;
- (void)photoPlaybackController:(id)arg1 didUpdatePhotoProgress:(double)arg2 forItem:(id)arg3;
@property(nonatomic) __weak id <IGEventViewerMediaPlaybackDelegate> playDelegate; // @synthesize playDelegate=_playDelegate;
- (void)playMediaForItem:(id)arg1 startTime:(double)arg2;
@property(nonatomic) __weak id <IGEventViewerMediaProgressDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
- (void)stopCurrentMedia;
@property(readonly, nonatomic) IGEventViewerVideoPlaybackController *videoPlaybackController; // @synthesize videoPlaybackController=_videoPlaybackController;
- (void)videoPlaybackController:(id)arg1 didBeginPlayingItem:(id)arg2 withDuration:(double)arg3;
- (void)videoPlaybackController:(id)arg1 didPauseVideoForItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didPlayVideoToEndForItem:(id)arg2;
- (void)videoPlaybackController:(id)arg1 didUpdateVideoProgress:(double)arg2 forItem:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

