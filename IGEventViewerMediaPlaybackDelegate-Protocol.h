//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGEventViewerMediaPlaybackController, IGEventViewerPlaybackItem;

@protocol IGEventViewerMediaPlaybackDelegate <NSObject>
- (void)mediaPlaybackController:(IGEventViewerMediaPlaybackController *)arg1 didBeginPlayingItem:(IGEventViewerPlaybackItem *)arg2 withDuration:(double)arg3;
- (void)mediaPlaybackController:(IGEventViewerMediaPlaybackController *)arg1 didEndPlayingItem:(IGEventViewerPlaybackItem *)arg2;
- (void)mediaPlaybackController:(IGEventViewerMediaPlaybackController *)arg1 didPausePlayingItem:(IGEventViewerPlaybackItem *)arg2;
@end

