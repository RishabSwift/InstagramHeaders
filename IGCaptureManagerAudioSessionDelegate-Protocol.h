//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGCaptureManager;

@protocol IGCaptureManagerAudioSessionDelegate <NSObject>
- (void)captureManagerAudioSessionDidFinishCleanup:(IGCaptureManager *)arg1;
- (void)captureManagerAudioSessionDidStartRunning:(IGCaptureManager *)arg1;
- (void)captureManagerAudioSessionInterruptionEnded:(IGCaptureManager *)arg1;
- (void)captureManagerAudioSessionWasInterrupted:(IGCaptureManager *)arg1;
@end

