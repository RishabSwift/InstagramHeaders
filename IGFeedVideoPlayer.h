//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FNFPlayer, FNFPlayerLayer, IGFNFVideoView, IGKVOHandle, NSObject<AVAsynchronousKeyValueLoading><FNFAssetForPlayer><FNFAVPlayerItem>;

@interface IGFeedVideoPlayer : NSObject
{
    _Bool _audioEnabled;
    _Bool _looping;
    _Bool _assetHasAudio;
    _Bool _hasError;
    _Bool _requiresResetPlayer;
    _Bool _seeking;
    _Bool _playedFirstFrame;
    _Bool _readyToPlay;
    _Bool _isLive;
    _Bool _playerHasStalled;
    _Bool _previousMuteState;
    id <IGFeedVideoPlayerDelegate> _delegate;
    double _duration;
    long long _playbackState;
    IGFNFVideoView *_videoView;
    FNFPlayer *_player;
    FNFPlayerLayer *_playerLayer;
    struct NSObject *_asset;
    id _playerPlaybackObserver;
    IGKVOHandle *_playerItemTimeRangeObserver;
    IGKVOHandle *_playerRateObserver;
    IGKVOHandle *_playerStatusObserver;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
- (id)analyticsTagsForFNF;
- (void)applicationDidBecomeActive;
@property(retain, nonatomic) NSObject<AVAsynchronousKeyValueLoading><FNFAssetForPlayer><FNFAVPlayerItem> *asset; // @synthesize asset=_asset;
- (void)assetFailedToPrepareForPlayback:(id)arg1;
@property(nonatomic) _Bool assetHasAudio; // @synthesize assetHasAudio=_assetHasAudio;
- (void)audioSessionInterruption:(id)arg1;
- (void)currentFrameWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double currentTime;
- (void)dealloc;
- (id)debugDetails;
@property(nonatomic) __weak id <IGFeedVideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(readonly, nonatomic) _Bool hasPaused;
- (id)init;
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(nonatomic, getter=isLooping) _Bool looping; // @synthesize looping=_looping;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)loadAsset:(struct NSObject *)arg1;
- (void)loadInstaVideoForURL:(id)arg1 resourceLoaderDelegate:(id)arg2 queue:(id)arg3;
- (void)loadVideoForURL:(id)arg1;
- (void)loadVideoForURL:(id)arg1 resourceLoaderDelegate:(id)arg2 queue:(id)arg3;
@property(readonly, nonatomic) long long loopCount;
- (void)onTimeRangesUpdated:(id)arg1;
- (void)pause;
- (void)play;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) _Bool playedFirstFrame; // @synthesize playedFirstFrame=_playedFirstFrame;
@property(readonly, nonatomic) FNFPlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool playerHasStalled; // @synthesize playerHasStalled=_playerHasStalled;
- (void)playerItemDidFail:(id)arg1;
- (void)playerItemDidGenerateWarning:(id)arg1;
- (void)playerItemDidPlayToEnd:(id)arg1;
- (void)playerItemDidStall;
@property(retain, nonatomic) IGKVOHandle *playerItemTimeRangeObserver; // @synthesize playerItemTimeRangeObserver=_playerItemTimeRangeObserver;
@property(readonly, nonatomic) FNFPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) id playerPlaybackObserver; // @synthesize playerPlaybackObserver=_playerPlaybackObserver;
@property(retain, nonatomic) IGKVOHandle *playerRateObserver; // @synthesize playerRateObserver=_playerRateObserver;
@property(retain, nonatomic) IGKVOHandle *playerStatusObserver; // @synthesize playerStatusObserver=_playerStatusObserver;
- (void)prepareForReuseWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool previousMuteState; // @synthesize previousMuteState=_previousMuteState;
@property(nonatomic) _Bool readyToPlay; // @synthesize readyToPlay=_readyToPlay;
@property(nonatomic) _Bool requiresResetPlayer; // @synthesize requiresResetPlayer=_requiresResetPlayer;
- (void)seekToTime:(double)arg1;
@property(nonatomic) _Bool seeking; // @synthesize seeking=_seeking;
- (void)setPreventSleep:(_Bool)arg1;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
- (void)videoPlayerDidChangePlaybackTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) IGFNFVideoView *videoView; // @synthesize videoView=_videoView;

@end
