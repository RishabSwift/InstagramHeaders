//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBFunnelConfig : NSObject
{
    _Bool _shouldEndOnBackgrounding;
    _Bool _enableFunnelPseudoEnding;
    _Bool _reuseFunnelIfExists;
    double _timeout;
}

@property(readonly, nonatomic) _Bool enableFunnelPseudoEnding; // @synthesize enableFunnelPseudoEnding=_enableFunnelPseudoEnding;
- (id)initWithShouldEndOnBackgrounding:(_Bool)arg1 timeout:(double)arg2 enableFunnelPseudoEnding:(_Bool)arg3 reuseFunnelIfExists:(_Bool)arg4;
@property(readonly, nonatomic) _Bool reuseFunnelIfExists; // @synthesize reuseFunnelIfExists=_reuseFunnelIfExists;
@property(readonly, nonatomic) _Bool shouldEndOnBackgrounding; // @synthesize shouldEndOnBackgrounding=_shouldEndOnBackgrounding;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;

@end

