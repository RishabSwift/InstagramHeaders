//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, RCTValueAnimatedNode;

@protocol RCTAnimationDriver <NSObject>
@property(readonly, nonatomic) _Bool animationHasBegun;
@property(readonly, nonatomic) _Bool animationHasFinished;
@property(readonly, nonatomic) NSNumber *animationId;
- (id)initWithId:(NSNumber *)arg1 config:(NSDictionary *)arg2 forNode:(RCTValueAnimatedNode *)arg3 callBack:(void (^)(NSArray *))arg4;
- (void)removeAnimation;
- (void)startAnimation;
- (void)stepAnimation;
- (void)stopAnimation;
@property(readonly, nonatomic) RCTValueAnimatedNode *valueNode;
@end

