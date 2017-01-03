//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, UIView<IGStoryPlayerMediaViewType>;

@protocol IGStoryPlayerMediaViewDelegate <NSObject>
- (void)storyPlayerMediaView:(UIView<IGStoryPlayerMediaViewType> *)arg1 didGenerateVideoPlaybackWarningWithError:(NSError *)arg2;
- (void)storyPlayerMediaView:(UIView<IGStoryPlayerMediaViewType> *)arg1 didUpdateProgress:(double)arg2;
- (void)storyPlayerMediaViewDidFailToLoadImage:(UIView<IGStoryPlayerMediaViewType> *)arg1 error:(NSError *)arg2;
- (void)storyPlayerMediaViewDidFailToPlayback:(UIView<IGStoryPlayerMediaViewType> *)arg1 error:(NSError *)arg2;
- (void)storyPlayerMediaViewDidLoad:(UIView<IGStoryPlayerMediaViewType> *)arg1;
- (void)storyPlayerMediaViewDidPlay:(UIView<IGStoryPlayerMediaViewType> *)arg1;
- (void)storyPlayerMediaViewDidPlayToEnd:(UIView<IGStoryPlayerMediaViewType> *)arg1;
- (void)storyPlayerMediaViewReceivedEmptyBuffer:(UIView<IGStoryPlayerMediaViewType> *)arg1;
@end

