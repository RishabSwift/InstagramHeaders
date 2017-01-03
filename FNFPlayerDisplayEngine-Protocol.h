//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSObject<OS_dispatch_queue>, NSString;

@protocol FNFPlayerDisplayEngine <NSObject>
- (_Bool)allowRenderingWhileApplicationInactive;
@property(retain) struct OpaqueCMTimebase *controlTimebase;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@property(readonly, nonatomic) NSError *error;
- (void)flush;
- (void)flushAndRemoveImage;
- (_Bool)flushDisplayReadySampleBuffers;
- (_Bool)flushIfError;
- (void)invalidate;
- (void)invalidateRenderer:(id <FNFPlayerRenderer>)arg1;
- (_Bool)isReadyForDisplay;
- (_Bool)isReadyForMoreMediaData;
- (void)pause:(int)arg1;
- (void)pauseDisplayLink;
@property(nonatomic) __weak id <FNFPlayerDisplayEngineDelegate> playerLayerDelegate;
@property(nonatomic) struct CGAffineTransform preferredTransform;
- (void)requestMediaDataWhenReadyOnQueue:(NSObject<OS_dispatch_queue> *)arg1 usingBlock:(void (^)(void))arg2;
- (void)resume;
- (void)setRenderer:(id <FNFPlayerRenderer>)arg1;
@property(copy) NSString *videoGravity;
@property(readonly, nonatomic) long long status;
- (void)stopRequestingMediaData;
- (void)yieldDecompressedBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2 presentationDuration:(CDStruct_1b6d18a9)arg3;
@end
