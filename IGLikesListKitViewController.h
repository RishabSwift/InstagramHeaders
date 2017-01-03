//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFeedNetworkSourceDelegate.h"
#import "IGFeedNetworkSourceHideDelegate.h"
#import "IGFeedPreviewingType.h"
#import "IGFeedScrollViewListener.h"
#import "IGListAdapterDataSource.h"

@class IGFeedNetworkSource, IGFeedPreviewingHandler, IGFeedScrollViewAnnouncer, IGFeedToggleSectionController, IGListAdapter, IGListCollectionView, IGToggleFeedCollectionViewLayoutManager, IGUserSession, NSString;

@interface IGLikesListKitViewController : IGViewController <IGFeedNetworkSourceDelegate, IGFeedNetworkSourceHideDelegate, IGListAdapterDataSource, IGFeedScrollViewListener, IGFeedPreviewingType>
{
    IGUserSession *_userSession;
    IGListAdapter *_adapter;
    IGListCollectionView *_collectionView;
    IGToggleFeedCollectionViewLayoutManager *_layoutManager;
    IGFeedNetworkSource *_networkDataSource;
    IGFeedToggleSectionController *_toggleItemController;
    IGFeedScrollViewAnnouncer *_feedScrollAnnouncer;
    IGFeedPreviewingHandler *_previewingHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGListAdapter *adapter; // @synthesize adapter=_adapter;
- (id)analyticsModule;
@property(readonly, nonatomic) IGListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(long long)arg3;
- (void)feedNetworkSource:(id)arg1 didHideObject:(id)arg2;
@property(readonly, nonatomic) IGFeedScrollViewAnnouncer *feedScrollAnnouncer; // @synthesize feedScrollAnnouncer=_feedScrollAnnouncer;
- (id)initWithUserSession:(id)arg1;
@property(retain, nonatomic) IGToggleFeedCollectionViewLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (void)loadNextPage;
@property(retain, nonatomic) IGFeedNetworkSource *networkDataSource; // @synthesize networkDataSource=_networkDataSource;
- (id)objectsForListAdapter:(id)arg1;
@property(readonly, nonatomic) IGFeedPreviewingHandler *previewingHandler; // @synthesize previewingHandler=_previewingHandler;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
@property(retain, nonatomic) IGFeedToggleSectionController *toggleItemController; // @synthesize toggleItemController=_toggleItemController;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

