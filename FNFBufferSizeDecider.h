//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface FNFBufferSizeDecider : NSObject
{
    double _fetchBufferSizeInSeconds;
    double _fetchMultiplier;
    double _unstallMultiplier;
    double _unstallBufferSizeInSeconds;
    double _startPlayingUnstallBufferSize;
    double _stallBufferSizeInSeconds;
    id <FNFTimeLoadedDelegate> _delegate;
    NSArray *_loadedTimeRanges;
    double _firstFetchSizeInSeconds;
    CDStruct_1b6d18a9 _playbackTime;
    CDStruct_1b6d18a9 _timeAfterSeek;
}

- (void).cxx_destruct;
- (_Bool)_updateTimeLoaded:(CDStruct_1b6d18a9)arg1 fullyLoaded:(_Bool)arg2;
- (CDStruct_1b6d18a9)addFetchBufferToTime:(CDStruct_1b6d18a9)arg1;
@property(nonatomic) __weak id <FNFTimeLoadedDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
@property(readonly, nonatomic) double firstFetchSizeInSeconds; // @synthesize firstFetchSizeInSeconds=_firstFetchSizeInSeconds;
- (_Bool)hasLoadedTime:(CDStruct_1b6d18a9)arg1;
- (id)initWithFirstFetchSizeInSeconds:(double)arg1 fetchBufferSizeInSeconds:(double)arg2 fetchBufferMultiplier:(double)arg3 unstallBufferMultiplier:(double)arg4 unstallBufferSizeInSeconds:(double)arg5 startPlayingUnstallBufferSizeInSeconds:(double)arg6 stallBufferSizeInSeconds:(double)arg7;
@property(readonly, copy, nonatomic) NSArray *loadedTimeRanges; // @synthesize loadedTimeRanges=_loadedTimeRanges;
@property(nonatomic) CDStruct_1b6d18a9 playbackTime; // @synthesize playbackTime=_playbackTime;
- (void)requestTimeLoadedUpdate;
- (void)resetPlaybackTimeAndTimeLoaded;
@property(nonatomic) CDStruct_1b6d18a9 timeAfterSeek; // @synthesize timeAfterSeek=_timeAfterSeek;
- (_Bool)shouldFetch;
- (_Bool)shouldStall;
- (_Bool)shouldUnstall;
- (CDStruct_1b6d18a9)timeLoaded;
- (float)timeLoadedInSeconds;
- (float)timeToLoadInSeconds;
- (_Bool)updateTimeLoadedWithLoadedVideoTime:(CDStruct_1b6d18a9)arg1 videoFullyDownloaded:(_Bool)arg2;
- (_Bool)updateTimeLoadedWithLoadedVideoTime:(CDStruct_1b6d18a9)arg1 videoFullyDownloaded:(_Bool)arg2 loadedAudioTime:(CDStruct_1b6d18a9)arg3 audioFullyDownloaded:(_Bool)arg4;

@end

