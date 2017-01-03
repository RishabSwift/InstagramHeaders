//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectResponseInfo, IGFeedItem, IGFeedItemPageCellState, IGFeedItemTracker, IGUserSession, UIViewController;

@interface IGCTAPresenterContext : NSObject
{
    IGFeedItem *_feedItem;
    IGFeedItemTracker *_feedItemTracker;
    IGFeedItemPageCellState *_pageCellState;
    IGDirectResponseInfo *_directResponseInfo;
    unsigned long long _feedDirectResponseActionContext;
    long long _mediaPosition;
    IGUserSession *_userSession;
    id <IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectResponseInfo *directResponseInfo; // @synthesize directResponseInfo=_directResponseInfo;
@property(readonly, nonatomic) unsigned long long feedDirectResponseActionContext; // @synthesize feedDirectResponseActionContext=_feedDirectResponseActionContext;
@property(readonly, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
@property(readonly, nonatomic) IGFeedItemTracker *feedItemTracker; // @synthesize feedItemTracker=_feedItemTracker;
- (id)initWithFeedItem:(id)arg1 feedItemTracker:(id)arg2 mediaPosition:(long long)arg3 userSession:(id)arg4 pageCellState:(id)arg5 directResponseInfo:(id)arg6 feedDirectResponseActionContext:(unsigned long long)arg7 loggingDelegate:(id)arg8;
@property(readonly, nonatomic) __weak id <IGFeedItemDirectResponseLoggingProviderDelegate> loggingDelegate; // @synthesize loggingDelegate=_loggingDelegate;
@property(readonly, nonatomic) long long mediaPosition; // @synthesize mediaPosition=_mediaPosition;
@property(readonly, nonatomic) IGFeedItemPageCellState *pageCellState; // @synthesize pageCellState=_pageCellState;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

@end
