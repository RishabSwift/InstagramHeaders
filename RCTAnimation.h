//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RCTAnimation : NSObject
{
    double _duration;
    double _delay;
    NSString *_property;
    double _springDamping;
    double _initialVelocity;
    long long _animationType;
}

+ (void)initializeStatics;
+ (void)keyboardWillChangeFrame:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long animationType; // @synthesize animationType=_animationType;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (id)initWithDuration:(double)arg1 dictionary:(id)arg2;
@property(readonly, nonatomic) double initialVelocity; // @synthesize initialVelocity=_initialVelocity;
- (void)performAnimations:(CDUnknownBlockType)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *property; // @synthesize property=_property;
@property(readonly, nonatomic) double springDamping; // @synthesize springDamping=_springDamping;

@end
