//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface IGCaptureQueueManager : NSObject
{
    NSObject<OS_dispatch_queue> *_captureQueue;
    NSObject<OS_dispatch_queue> *_videoBufferQueue;
    NSObject<OS_dispatch_queue> *_audioBufferQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioBufferQueue; // @synthesize audioBufferQueue=_audioBufferQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *captureQueue; // @synthesize captureQueue=_captureQueue;
- (_Bool)isInCaptureQueueContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoBufferQueue; // @synthesize videoBufferQueue=_videoBufferQueue;

@end

