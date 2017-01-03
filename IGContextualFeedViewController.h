//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGBugReportingProtocol.h"
#import "IGFeedNetworkSourceDelegate.h"
#import "IGFeedPreviewingType.h"
#import "IGFeedScrollViewListener.h"
#import "IGFeedStatusViewDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGListAdapterDelegate.h"
#import "IGPagingListAdapterControllerDelegate.h"
#import "IGScreenshotObserverDelegate.h"

@class IGCollectionViewVisibility, IGContextualFeedItemConfiguration, IGFeedFocusCoordinator, IGFeedNetworkSource, IGFeedPreviewingHandler, IGFeedScrollViewAnnouncer, IGFeedSectionControllerLoggingComponents, IGFeedStatusView, IGListAdapter, IGListAdapterUpdaterLogger, IGListCollectionView, IGPagingListAdapterController, IGPerformanceEvent, IGRefreshControl, IGUserSession, NSString;

@interface IGContextualFeedViewController : IGViewController <IGFeedNetworkSourceDelegate, IGListAdapterDataSource, IGListAdapterDelegate, IGFeedStatusViewDelegate, IGFeedScrollViewListener, IGFeedPreviewingType, IGPagingListAdapterControllerDelegate, IGScreenshotObserverDelegate, IGBugReportingProtocol>
{
    _Bool _hasScrolledToFocusedItem;
    IGListCollectionView *_collectionView;
    IGFeedNetworkSource *_feedNetworkSource;
    IGListAdapter *_listAdapter;
    IGContextualFeedItemConfiguration *_itemConfiguration;
    IGUserSession *_userSession;
    IGFeedStatusView *_feedStatusView;
    IGRefreshControl *_refreshControl;
    IGFeedPreviewingHandler *_previewingHandler;
    IGListAdapterUpdaterLogger *_adapterPerfLogger;
    IGFeedScrollViewAnnouncer *_feedScrollAnnouncer;
    IGFeedSectionControllerLoggingComponents *_feedSectionControllerComponents;
    IGPagingListAdapterController *_pagingListAdapterController;
    IGCollectionViewVisibility *_collectionViewVisibility;
    IGFeedFocusCoordinator *_focusCoordinator;
    id _previouslyFocusedItem;
    id _nextFocusedItem;
    IGPerformanceEvent *_loadingPerformanceLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGListAdapterUpdaterLogger *adapterPerfLogger; // @synthesize adapterPerfLogger=_adapterPerfLogger;
- (id)analyticsModule;
- (id)bugReportDescription;
@property(readonly, nonatomic) IGListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) IGCollectionViewVisibility *collectionViewVisibility; // @synthesize collectionViewVisibility=_collectionViewVisibility;
- (void)dealloc;
- (id)emptyViewForListAdapter:(id)arg1;
- (_Bool)enableNavState;
@property(readonly, nonatomic) IGFeedNetworkSource *feedNetworkSource; // @synthesize feedNetworkSource=_feedNetworkSource;
- (void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(long long)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(long long)arg3;
- (void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(long long)arg2;
@property(readonly, nonatomic) IGFeedScrollViewAnnouncer *feedScrollAnnouncer; // @synthesize feedScrollAnnouncer=_feedScrollAnnouncer;
@property(readonly, nonatomic) IGFeedSectionControllerLoggingComponents *feedSectionControllerComponents; // @synthesize feedSectionControllerComponents=_feedSectionControllerComponents;
@property(readonly, nonatomic) IGFeedStatusView *feedStatusView; // @synthesize feedStatusView=_feedStatusView;
- (void)feedStatusViewDidTapOnInfoView:(id)arg1;
- (void)fetchNextPage;
- (void)fetchPreviousPage;
@property(readonly, nonatomic) IGFeedFocusCoordinator *focusCoordinator; // @synthesize focusCoordinator=_focusCoordinator;
@property(nonatomic) _Bool hasScrolledToFocusedItem; // @synthesize hasScrolledToFocusedItem=_hasScrolledToFocusedItem;
- (id)initWithFeedNetworkSource:(id)arg1 userSession:(id)arg2 itemConfiguration:(id)arg3 focusCoordinator:(id)arg4 loadingPerformanceLogger:(id)arg5;
@property(readonly, nonatomic) IGContextualFeedItemConfiguration *itemConfiguration; // @synthesize itemConfiguration=_itemConfiguration;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
@property(retain, nonatomic) IGPerformanceEvent *loadingPerformanceLogger; // @synthesize loadingPerformanceLogger=_loadingPerformanceLogger;
@property(retain, nonatomic) id nextFocusedItem; // @synthesize nextFocusedItem=_nextFocusedItem;
- (id)nextFocusedItemAfter:(id)arg1;
- (id)objectsForListAdapter:(id)arg1;
@property(readonly, nonatomic) IGPagingListAdapterController *pagingListAdapterController; // @synthesize pagingListAdapterController=_pagingListAdapterController;
@property(readonly, nonatomic) IGFeedPreviewingHandler *previewingHandler; // @synthesize previewingHandler=_previewingHandler;
- (id)previousFocusedItemBefore:(id)arg1;
@property(retain, nonatomic) id previouslyFocusedItem; // @synthesize previouslyFocusedItem=_previouslyFocusedItem;
- (void)refresh;
@property(readonly, nonatomic) IGRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
- (void)refreshDataIfNotFullyLoaded;
- (void)screenshotObserverDidSeeScreenshotTaken:(id)arg1;
- (void)scrollToFocusedItem;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)setupCollectionViewAndAdapter;
- (void)setupFeedStatusView;
- (void)updateFeedStateAnimated:(_Bool)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

