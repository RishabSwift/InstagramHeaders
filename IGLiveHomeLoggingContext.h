//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGGridCollectionViewLayout, NSMutableDictionary, NSMutableSet, NSString;

@interface IGLiveHomeLoggingContext : NSObject
{
    NSString *_moduleName;
    NSString *_sessionId;
    IGGridCollectionViewLayout *_gridLayout;
    NSMutableDictionary *_coverRefreshCounter;
    NSMutableSet *_seenItems;
}

- (void).cxx_destruct;
- (id)commonDictFromBroadcast:(id)arg1 atIndexPath:(id)arg2;
@property(readonly, nonatomic) NSMutableDictionary *coverRefreshCounter; // @synthesize coverRefreshCounter=_coverRefreshCounter;
@property(readonly, nonatomic) IGGridCollectionViewLayout *gridLayout; // @synthesize gridLayout=_gridLayout;
- (id)initWithModule:(id)arg1 sessionId:(id)arg2 gridLayout:(id)arg3;
- (void)logEventWithName:(id)arg1 extraDict:(id)arg2;
@property(readonly, copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
- (void)notifyClickOfBroadcast:(id)arg1 atIndexPath:(id)arg2;
- (void)notifyCoverFrameRefreshOfBroadcast:(id)arg1;
- (void)notifyImpressionOfBroadcast:(id)arg1 atIndexPath:(id)arg2;
- (void)resetCoverFrameRefreshCounterOfBroadcast:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *seenItems; // @synthesize seenItems=_seenItems;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;

@end

