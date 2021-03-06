//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FNFAdaptiveBitrateSelector : NSObject
{
    long long _filter;
    double _fractionOfAvailableBandwidthToUse;
    id <FNFBandwidthProvider> _bandwidthProvider;
    double _screenWidth;
    double _screenHeight;
    long long _type;
    double _lastBandwidthEstimateInBitsPerSecond;
}

- (void).cxx_destruct;
- (void)_forTestingOverrideScreenWidth:(double)arg1 height:(double)arg2;
- (id)description;
- (id)ifAvailableSelectPrefetchedVideoTrackFromMpd:(id)arg1 resourceLoader:(id)arg2;
- (id)init;
- (id)initWithSelectorType:(long long)arg1 filter:(long long)arg2 parameters:(struct FNFAbrParameters)arg3 bandwidthProvider:(id)arg4;
@property(readonly, nonatomic) double lastBandwidthEstimateInBitsPerSecond; // @synthesize lastBandwidthEstimateInBitsPerSecond=_lastBandwidthEstimateInBitsPerSecond;
- (id)selectRepresentationIdFromMetadata:(id)arg1 defaultId:(id)arg2;
- (id)selectVideoTrackFromList:(id)arg1;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;

@end

