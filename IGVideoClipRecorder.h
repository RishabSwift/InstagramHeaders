//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriter, AVAssetWriterInput, NSObject<OS_dispatch_queue>, NSURL;

@interface IGVideoClipRecorder : NSObject
{
    long long _position;
    NSURL *_outputFileURL;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoWriterInput;
    AVAssetWriterInput *_audioWriterInput;
    long long _state;
    struct __CFArray *_savedAudioBuffers;
    NSObject<OS_dispatch_queue> *_writeQueue;
    struct CGSize _videoSize;
    CDStruct_1b6d18a9 _startSessionTime;
    CDStruct_1b6d18a9 _endSessionTime;
    CDStruct_1b6d18a9 _lastVideoFrameSourceTime;
    CDStruct_1b6d18a9 _lastAudioFrameSourceTime;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(retain, nonatomic) AVAssetWriterInput *audioWriterInput; // @synthesize audioWriterInput=_audioWriterInput;
- (void)dealloc;
- (void)doStopRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) CDStruct_1b6d18a9 endSessionTime; // @synthesize endSessionTime=_endSessionTime;
- (void)handleAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)handleVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithOutputFileURL:(id)arg1 videoSize:(struct CGSize)arg2;
@property(nonatomic) CDStruct_1b6d18a9 lastAudioFrameSourceTime; // @synthesize lastAudioFrameSourceTime=_lastAudioFrameSourceTime;
- (CDStruct_1b6d18a9)lastSharedBufferTime;
@property(nonatomic) CDStruct_1b6d18a9 lastVideoFrameSourceTime; // @synthesize lastVideoFrameSourceTime=_lastVideoFrameSourceTime;
@property(retain, nonatomic) NSURL *outputFileURL; // @synthesize outputFileURL=_outputFileURL;
@property(nonatomic) long long position; // @synthesize position=_position;
- (void)relaseSavedAudioBuffers;
- (void)releaseOldestAudioBuffer;
@property(readonly, nonatomic) double runningTime;
- (void)saveAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
@property(nonatomic) struct __CFArray *savedAudioBuffers; // @synthesize savedAudioBuffers=_savedAudioBuffers;
@property(nonatomic) CDStruct_1b6d18a9 startSessionTime; // @synthesize startSessionTime=_startSessionTime;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) AVAssetWriterInput *videoWriterInput; // @synthesize videoWriterInput=_videoWriterInput;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;
- (void)startRecordingWithVideoTransform:(struct CGAffineTransform)arg1;
- (void)stopRecordingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)writeAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)writeVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;

@end

