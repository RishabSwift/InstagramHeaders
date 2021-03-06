//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVPlayerItemOutputPullDelegate.h"

@class AVAsset, AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, CADisplayLink, NSObject<OS_dispatch_queue>, NSString;

@interface IGVideoPlayer : NSObject <AVPlayerItemOutputPullDelegate>
{
    id _displayLinkTarget;
    _Bool _isLooping;
    _Bool _isSeeking;
    AVPlayerItemVideoOutput *_videoOutput;
    AVAsset *_asset;
    id <IGVideoPlayerDelegate> _delegate;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    CADisplayLink *_displayLink;
    NSObject<OS_dispatch_queue> *_videoOutputQueue;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _seekTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime;
- (void)dealloc;
@property(nonatomic) __weak id <IGVideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
- (void)displayLinkCallback:(id)arg1;
@property(readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property(nonatomic) CDStruct_1b6d18a9 endTime;
- (id)initWithAsset:(id)arg1;
@property(nonatomic) _Bool isLooping; // @synthesize isLooping=_isLooping;
@property(nonatomic) _Bool isMuted;
@property(nonatomic) _Bool isSeeking; // @synthesize isSeeking=_isSeeking;
- (void)itemDidFinishPlaying;
- (void)loadBufferAtItemTime:(CDStruct_1b6d18a9)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)outputSequenceWasFlushed:(id)arg1;
- (void)playFromStart;
- (void)playFromTime:(CDStruct_1b6d18a9)arg1;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(readonly, nonatomic) double progress;
@property(nonatomic) CDStruct_1b6d18a9 seekTime; // @synthesize seekTime=_seekTime;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) AVPlayerItemVideoOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoOutputQueue; // @synthesize videoOutputQueue=_videoOutputQueue;
- (void)stop;
- (void)stopHelperAnimated:(_Bool)arg1;
- (void)stopWithoutAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

