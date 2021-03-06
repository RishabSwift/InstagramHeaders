//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectResponseLogging.h"

@class NSString;

@interface IGDirectResponseLogger : NSObject <IGDirectResponseLogging>
{
    id <IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
- (id)initWithLoggingDelegate:(id)arg1 analyticsModule:(id)arg2;
- (void)logActionFailedForFeedItem:(id)arg1 feedItemTracker:(id)arg2 directResponseInfo:(id)arg3 openContext:(id)arg4 openTarget:(id)arg5;
- (void)logActionForFeedItem:(id)arg1 feedItemTracker:(id)arg2 directResponseInfo:(id)arg3 actionCellState:(id)arg4 openContext:(id)arg5 action:(id)arg6 extraFields:(id)arg7;
@property(readonly, nonatomic) __weak id <IGFeedItemDirectResponseLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

