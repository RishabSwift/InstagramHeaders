//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListSectionType.h"

@class IGChannelFocusCoordinator, IGChannelModel, IGEventFeedDataCache, IGFeedVideoCellManager, IGUserSession, NSString;

@interface IGChannelSectionController : IGListSectionController <IGListSectionType>
{
    IGUserSession *_userSession;
    IGChannelModel *_channel;
    IGFeedVideoCellManager *_videoCellManager;
    IGChannelFocusCoordinator *_channelFocusCoordinator;
    IGEventFeedDataCache *_feedDataCache;
    id <IGEventViewerViewControllerDelegate> _viewerDelegate;
    double _aspectRatio;
}

+ (id)newEventControllerWithChannel:(id)arg1 feedDataCache:(id)arg2 channelFocusCoordinator:(id)arg3 userSession:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (id)cellForItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) IGChannelModel *channel; // @synthesize channel=_channel;
@property(readonly, nonatomic) IGChannelFocusCoordinator *channelFocusCoordinator; // @synthesize channelFocusCoordinator=_channelFocusCoordinator;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)displayDelegate;
@property(readonly, nonatomic) IGEventFeedDataCache *feedDataCache; // @synthesize feedDataCache=_feedDataCache;
- (id)initWithVideoCellManager:(id)arg1 focusCoordinator:(id)arg2 viewerDelegate:(id)arg3 aspectRatio:(double)arg4 userSession:(id)arg5;
- (long long)numberOfItems;
- (void)prepareToPushEventViewerWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)supplementaryViewSource;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGFeedVideoCellManager *videoCellManager; // @synthesize videoCellManager=_videoCellManager;
@property(readonly, nonatomic) __weak id <IGEventViewerViewControllerDelegate> viewerDelegate; // @synthesize viewerDelegate=_viewerDelegate;
- (id)workingRangeDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

