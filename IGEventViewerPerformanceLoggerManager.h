//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGPerformanceEvent, NSString;

@interface IGEventViewerPerformanceLoggerManager : NSObject
{
    NSString *_analyticsModule;
    IGPerformanceEvent *_networkPerformanceLogger;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
- (id)initWithAnalyticsModule:(id)arg1;
@property(retain, nonatomic) IGPerformanceEvent *networkPerformanceLogger; // @synthesize networkPerformanceLogger=_networkPerformanceLogger;
- (void)startNetworkPerformanceLogger;
- (void)stopNetworkPerformanceLoggerWithIsSuccess:(_Bool)arg1;

@end

