//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface IGTabBarControllerPerformanceMonitor : NSObject
{
    NSMutableDictionary *_itemLoggers;
}

- (void).cxx_destruct;
- (id)init;
@property(retain, nonatomic) NSMutableDictionary *itemLoggers; // @synthesize itemLoggers=_itemLoggers;
- (void)logDataPoint:(id)arg1 forViewController:(id)arg2;
- (id)loggerForItem:(id)arg1;
- (void)registerTTILoggerForViewController:(id)arg1 usingAnalyticsEventName:(id)arg2 module:(id)arg3;
- (void)startMonitoringTTIForViewController:(id)arg1;
- (void)stopMonitoringTTIForViewController:(id)arg1 success:(_Bool)arg2;

@end

