//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGAdRatingWebViewSectionControllerDelegate.h"
#import "IGFeedItemDirectResponseLoggingProviderDelegate.h"
#import "IGFeedItemLoggingProviderDelegate.h"
#import "IGFeedNetworkSourceDelegate.h"
#import "IGFeedSectionControllerActionDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGListAdapterDelegate.h"
#import "UICollectionViewDelegate.h"

@class IGCollectionViewVisibility, IGFeedHeartAnimator, IGFeedItemLogger, IGFeedNetworkSource, IGFeedVideoCellManager, IGFeedViewControllerTracker, IGListAdapter, IGListAdapterScrollingContext, IGListCollectionView, IGUserSession, NSString;

@interface IGAdRatingFeedViewController : IGViewController <IGAdRatingWebViewSectionControllerDelegate, IGFeedItemDirectResponseLoggingProviderDelegate, IGFeedItemLoggingProviderDelegate, IGFeedNetworkSourceDelegate, IGFeedSectionControllerActionDelegate, IGListAdapterDataSource, IGListAdapterDelegate, UICollectionViewDelegate>
{
    _Bool _didTapCTAButton;
    id <IGFeedItemConfigurationType> _itemConfiguration;
    id <IGFeedConfigurationType> _configuration;
    IGUserSession *_userSession;
    IGListCollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGFeedNetworkSource *_feedNetworkSource;
    IGFeedVideoCellManager *_videoCellManager;
    IGCollectionViewVisibility *_collectionViewVisibility;
    IGFeedHeartAnimator *_heartAnimator;
    IGListAdapterScrollingContext *_scrollingContext;
    IGFeedItemLogger *_feedItemLogger;
    IGFeedViewControllerTracker *_impressionTracker;
}

- (void).cxx_destruct;
- (void)adRatingWebViewSectionControllerDidFinishCurrentRating:(id)arg1;
- (void)adRatingWebViewSectionControllerDidRequestHONRatingStart:(id)arg1;
- (id)analyticsModule;
@property(readonly, nonatomic) IGListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) IGCollectionViewVisibility *collectionViewVisibility; // @synthesize collectionViewVisibility=_collectionViewVisibility;
@property(readonly, nonatomic) id <IGFeedConfigurationType> configuration; // @synthesize configuration=_configuration;
@property(nonatomic) _Bool didTapCTAButton; // @synthesize didTapCTAButton=_didTapCTAButton;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)extraDictionaryForFeedItem:(id)arg1;
- (id)extraDictionaryForFeedItem:(id)arg1 directResponseInfo:(id)arg2;
@property(readonly, nonatomic) IGFeedItemLogger *feedItemLogger; // @synthesize feedItemLogger=_feedItemLogger;
@property(readonly, nonatomic) IGFeedNetworkSource *feedNetworkSource; // @synthesize feedNetworkSource=_feedNetworkSource;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(long long)arg3;
- (void)feedSectionControllerDidTapCustomizableButton:(id)arg1;
- (void)feedSectionControllerDidTapSendButton:(id)arg1;
@property(readonly, nonatomic) IGFeedHeartAnimator *heartAnimator; // @synthesize heartAnimator=_heartAnimator;
@property(readonly, nonatomic) IGFeedViewControllerTracker *impressionTracker; // @synthesize impressionTracker=_impressionTracker;
- (id)initWithUserSession:(id)arg1;
@property(readonly, nonatomic) id <IGFeedItemConfigurationType> itemConfiguration; // @synthesize itemConfiguration=_itemConfiguration;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)objectsForListAdapter:(id)arg1;
- (void)refreshDataIfNotFullyLoaded;
- (void)scrollViewDidScroll:(id)arg1;
@property(readonly, nonatomic) IGListAdapterScrollingContext *scrollingContext; // @synthesize scrollingContext=_scrollingContext;
- (void)setupCollectionViewAndAdapter;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGFeedVideoCellManager *videoCellManager; // @synthesize videoCellManager=_videoCellManager;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

