//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGEventViewerPhotoPlaybackController, IGEventViewerPlaybackItem;

@protocol IGEventViewerPhotoPlaybackControllerDelegate <NSObject>
- (void)photoPlaybackController:(IGEventViewerPhotoPlaybackController *)arg1 didBeginPlayingPhotoForItem:(IGEventViewerPlaybackItem *)arg2 withDuration:(double)arg3;
- (void)photoPlaybackController:(IGEventViewerPhotoPlaybackController *)arg1 didEndPlayingPhotoForItem:(IGEventViewerPlaybackItem *)arg2;
- (void)photoPlaybackController:(IGEventViewerPhotoPlaybackController *)arg1 didPausePhotoForItem:(IGEventViewerPlaybackItem *)arg2;
- (void)photoPlaybackController:(IGEventViewerPhotoPlaybackController *)arg1 didUpdatePhotoProgress:(double)arg2 forItem:(IGEventViewerPlaybackItem *)arg3;
@end

