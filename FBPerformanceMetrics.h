//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBPerformanceMetrics : NSObject
{
}

+ (_Bool)absoluteStartTime:(double *)arg1;
+ (struct FBDeviceBatteryInfo)batteryInfo;
+ (id)batteryStateWithDeviceBatteryState:(long long)arg1;
+ (unsigned int)coreCount;
+ (CDStruct_4bcfbbae)freeAndTotalDiskBytes;
+ (unsigned long long)freeDiskBytes;
+ (unsigned long long)freeMemoryBytes;
+ (_Bool)getNetworkUsage:(CDStruct_4bcfbbae *)arg1;
+ (_Bool)lastBootTime:(double *)arg1;
+ (_Bool)lastWakeTime:(double *)arg1;
+ (id)loadAvgWithPrecision:(double)arg1;
+ (unsigned long long)residentMemoryBytes;
+ (unsigned long long)totalMemoryBytes;
+ (unsigned long long)virtualMemoryBytes;
+ (unsigned long long)webKitMemoryBytes;

@end

