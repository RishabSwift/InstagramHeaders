//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FBThroughputMonitor <NSObject>
- (void)addBytesSent:(unsigned long long)arg1 timeElapsed:(double)arg2;
- (void)addThroughputMeasurement:(double)arg1;
- (double)detectedThroughput;
- (void)reset;
- (unsigned long long)timeElapsed;
- (unsigned long long)totalBytesSent;
@end

