//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface IGInstaVideoBroadcastProductionManager : NSObject
{
    NSMutableArray *_audioProcessorPipeline;
    NSMutableArray *_videoProcessorPipeline;
}

- (void).cxx_destruct;
- (void)addAudioProcessor:(id)arg1;
- (void)addVideoProcessor:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *audioProcessorPipeline; // @synthesize audioProcessorPipeline=_audioProcessorPipeline;
- (id)initWithUserSession:(id)arg1;
- (struct opaqueCMSampleBuffer *)processAudioBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (struct opaqueCMSampleBuffer *)processVideoBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)removeAudioProcessor:(id)arg1;
- (void)removeVideoProcessor:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *videoProcessorPipeline; // @synthesize videoProcessorPipeline=_videoProcessorPipeline;

@end

