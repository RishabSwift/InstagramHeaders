//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBVideoStreamingErrorProcessor.h"

@class FBRtmpSession, NSString;

@interface FBAACPacketizer : NSObject <FBVideoStreamingErrorProcessor>
{
    unsigned char _asc[2];
    _Bool _sentAudioConfig;
    struct FBAudioStreamingConfig _config;
    vector_a3426c4e _outbuffer;
    FBRtmpSession *_transport;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)droppedPackets:(shared_ptr_896bc00e)arg1 withReason:(id)arg2;
- (id)initWithAudioConfig:(struct FBAudioStreamingConfig)arg1 transport:(id)arg2;
- (void)makeAsc:(struct AudioStreamBasicDescription)arg1;
- (void)packetAudioFrame:(const char *)arg1 size:(unsigned long long)arg2 isASC:(_Bool)arg3 pts:(CDStruct_1b6d18a9)arg4 dts:(CDStruct_1b6d18a9)arg5;
- (void)packetAudioFrame:(const char *)arg1 size:(unsigned long long)arg2 pts:(CDStruct_1b6d18a9)arg3 dts:(CDStruct_1b6d18a9)arg4;
- (void)packetAudioSpecificConfigForAudioStreamDescription:(struct AudioStreamBasicDescription)arg1 pts:(CDStruct_1b6d18a9)arg2 dts:(CDStruct_1b6d18a9)arg3;
- (void)processError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

