//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBVideoEncoder.h"

@class FBH264Packetizer, NSObject<OS_dispatch_queue>, NSString;

@interface FBH264MemoryEncoder : NSObject <FBVideoEncoder>
{
    struct FBVideoStreamingConfig _config;
    struct OpaqueVTCompressionSession *_compressionSession;
    NSObject<OS_dispatch_queue> *_encodingQueue;
    FBH264Packetizer *_packetizer;
    struct AVCFrameSplitter _frameSplitter;
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _videoOutputBitrate
    double _bitrateMeasurementTimestamp;
    unsigned long long _producedBytes;
    id <FBVideoStreamingLogger> _logger;
    struct WeakHolder *_weakHolder;
}

+ (id)fb_pixelTransferPropertyKeyScalingMode;
+ (id)fb_scalingModeTrim;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cleanup;
- (id)createAndSetupCompressionSession:(struct FBVideoStreamingConfig)arg1;
- (id)createCompressionSession:(struct FBVideoStreamingConfig)arg1;
- (void)dealloc;
- (void)droppedPackets:(shared_ptr_896bc00e)arg1 withReason:(id)arg2;
- (void)encodeVideo:(struct opaqueCMSampleBuffer *)arg1;
- (void)flush;
- (id)initWithVideoConfig:(struct FBVideoStreamingConfig)arg1 packetizer:(id)arg2 encodingQueue:(id)arg3 logger:(id)arg4;
- (void)onEncodedFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)processError:(id)arg1;
- (void)setVideoConfig:(struct FBVideoStreamingConfig)arg1;
- (id)setupCompressionSession:(struct FBVideoStreamingConfig)arg1;
- (id)setupCompressionSessionImpl:(struct FBVideoStreamingConfig)arg1;
- (void)teardownCompressionSession;
- (struct FBVideoStreamingConfig)videoConfig;
- (double)videoOutputBitrate;
- (void)vtCallBackWithStatus:(int)arg1 infoFlags:(unsigned int)arg2 buffer:(struct opaqueCMSampleBuffer *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

