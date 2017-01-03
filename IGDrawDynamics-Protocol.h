//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol IGDrawDynamics <NSObject>
- (void)advanceTo:(double)arg1 endingStroke:(_Bool)arg2 calling:(void (^)(id <IGDrawDynamics>))arg3;
@property(readonly, nonatomic) id <IGDrawDynamics> copy;
@property(readonly, nonatomic) CDStruct_8aefd972 cubic;
@property(nonatomic) double damping;
@property(readonly, nonatomic) union _GLKVector2 force;
@property(readonly, nonatomic) _Bool isActive;
@property(readonly, nonatomic) union _GLKVector2 lastPosition;
@property(readonly, nonatomic) union _GLKVector2 lastVelocity;
@property(nonatomic) double lastupdate;
@property(readonly, nonatomic) union _GLKVector2 position;
@property(nonatomic) double springConstant;
@property(nonatomic) union _GLKVector2 target;
@property(nonatomic) double updateInterval;
- (void)startAt:(double)arg1 location:(union _GLKVector2)arg2;
- (void)tick;
@property(readonly, nonatomic) union _GLKVector2 velocity;
@end

