//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIDevice.h"

@interface UIDevice (AVOrientation)
+ (long long)avOrientationForDeviceOrientation:(long long)arg1;
+ (long long)avOrientationForInterfaceOrientation:(long long)arg1;
+ (struct CGAffineTransform)videoTransformForOrientation:(long long)arg1;
- (long long)videoOrientation;
- (struct CGAffineTransform)videoTransform;
@end
