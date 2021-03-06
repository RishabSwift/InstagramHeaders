//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBTimer, NSMutableArray;

@interface IGNetworkStat : NSObject
{
    NSMutableArray *_rates;
    unsigned long long _insertionIndex;
    double _lastCaptureTime;
    unsigned long long _captureBytes;
    unsigned long long _previousCaptureBytes;
    double _currentAverage;
    double _averagedSum;
    long long _samples;
    FBTimer *_sampler;
    long long _currentRate;
    CDUnknownBlockType _transferRateStatusChangeBlock;
}

+ (id)sharedStat;
- (void).cxx_destruct;
- (void)addTransferData:(unsigned long long)arg1;
- (void)addTransferRate:(double)arg1;
- (double)averageTransferRate;
- (void)dealloc;
- (id)init;
- (double)mostRecentAverageTransferRate;
- (long long)mostRecentTransferRate;
- (id)mostRecentTransferRateString;
- (void)notifyForNetworkStatChange;
- (void)sample;
@property(copy, nonatomic) CDUnknownBlockType transferRateStatusChangeBlock; // @synthesize transferRateStatusChangeBlock=_transferRateStatusChangeBlock;
- (void)startSampling;
- (void)stopSampling;

@end

