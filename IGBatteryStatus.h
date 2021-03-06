//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IGBatteryStatus : NSObject
{
    double _batteryLevel;
    long long _batteryState;
}

+ (id)currentBatteryStatus;
- (id)asDictionary;
@property(nonatomic) double batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(nonatomic) long long batteryState; // @synthesize batteryState=_batteryState;
@property(readonly, copy, nonatomic) NSString *batteryStateString;
- (void)refreshBatteryStatus;

@end

