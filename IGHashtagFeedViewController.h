//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedViewController_DEPRECATED.h"

#import "IGAnalyticsModule.h"
#import "IGFeedPromotionBannerDelegate.h"
#import "IGGenericMegaphoneViewDelegate.h"
#import "IGRankedMediaViewDelegate.h"
#import "IGRelatedItemsHeaderViewDelegate.h"

@class IGDefaultGenericMegaphoneLogger, IGFeedItemPreviewingHandler, IGGenericMegaphoneView, IGHashtagModel, IGMediaThumbnailLogger, IGRankedMediaView, IGRelatedItemsHeaderView, IGRelatedItemsLogger, IGRelatedItemsService, IGVisitedRelatedItemsStore, NSArray, NSDictionary, NSMutableSet, NSString, UIBarButtonItem;

@interface IGHashtagFeedViewController : IGFeedViewController_DEPRECATED <IGRankedMediaViewDelegate, IGRelatedItemsHeaderViewDelegate, IGGenericMegaphoneViewDelegate, IGAnalyticsModule, IGFeedPromotionBannerDelegate>
{
    IGRankedMediaView *_rankedMediaView;
    UIBarButtonItem *_moreOptionsButton;
    IGHashtagModel *_hashtag;
    NSArray *_forceMediaIDs;
    IGVisitedRelatedItemsStore *_visitedHashtagsStore;
    NSString *_sessionId;
    NSMutableSet *_loggedMediaImpressions;
    IGMediaThumbnailLogger *_mediaLogger;
    NSMutableSet *_lastVisibleIndexPaths;
    NSMutableSet *_lastIndexPaths;
    NSMutableSet *_lastVisibleRankedImageURLs;
    NSMutableSet *_lastRankedImageURLs;
    IGRelatedItemsHeaderView *_relatedItemsHeaderView;
    IGRelatedItemsService *_relatedItemsService;
    IGRelatedItemsLogger *_relatedItemsLogger;
    NSDictionary *_serverMegaphoneData;
    IGGenericMegaphoneView *_megaphoneView;
    IGDefaultGenericMegaphoneLogger *_megaphoneLogger;
    IGFeedItemPreviewingHandler *_thumbnailPreviewDelegate;
}

- (void).cxx_destruct;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionViewController:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureRankedHeaderWithFeedNetworkSource:(id)arg1;
- (void)configureRankedHeaderWithViewWidth:(double)arg1;
- (void)configureRelatedItemsViewWithItems:(id)arg1;
- (void)dealloc;
- (_Bool)enableNavState;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(long long)arg3;
- (void)feedPromotionBannerDidTapDismiss:(id)arg1 withConfiguration:(id)arg2;
@property(retain, nonatomic) NSArray *forceMediaIDs; // @synthesize forceMediaIDs=_forceMediaIDs;
- (void)handleLoadedContentDidChange;
- (void)handleWillLoadItemsFromResponse:(id)arg1;
@property(retain, nonatomic) IGHashtagModel *hashtag; // @synthesize hashtag=_hashtag;
- (id)initWithUserSession:(id)arg1 hashtag:(id)arg2;
@property(retain, nonatomic) NSMutableSet *lastIndexPaths; // @synthesize lastIndexPaths=_lastIndexPaths;
@property(retain, nonatomic) NSMutableSet *lastRankedImageURLs; // @synthesize lastRankedImageURLs=_lastRankedImageURLs;
@property(retain, nonatomic) NSMutableSet *lastVisibleIndexPaths; // @synthesize lastVisibleIndexPaths=_lastVisibleIndexPaths;
@property(retain, nonatomic) NSMutableSet *lastVisibleRankedImageURLs; // @synthesize lastVisibleRankedImageURLs=_lastVisibleRankedImageURLs;
- (void)legacyMegaphoneView:(id)arg1 didOpenURL:(id)arg2;
- (void)legacyMegaphoneView:(id)arg1 didTapButton:(id)arg2;
- (void)legacyMegaphoneViewDidDismiss:(id)arg1;
- (void)logClickForMedia:(id)arg1 atIndex:(long long)arg2 sectionType:(unsigned long long)arg3;
- (void)logImpressionForMedia:(id)arg1 atIndex:(long long)arg2 sectionType:(unsigned long long)arg3;
@property(readonly, nonatomic) NSMutableSet *loggedMediaImpressions; // @synthesize loggedMediaImpressions=_loggedMediaImpressions;
@property(readonly, nonatomic) IGMediaThumbnailLogger *mediaLogger; // @synthesize mediaLogger=_mediaLogger;
@property(retain, nonatomic) IGDefaultGenericMegaphoneLogger *megaphoneLogger; // @synthesize megaphoneLogger=_megaphoneLogger;
@property(retain, nonatomic) IGGenericMegaphoneView *megaphoneView; // @synthesize megaphoneView=_megaphoneView;
@property(retain, nonatomic) UIBarButtonItem *moreOptionsButton; // @synthesize moreOptionsButton=_moreOptionsButton;
- (void)onHashtagUpdated;
- (void)presentHashtagReshareView;
@property(retain, nonatomic) IGRankedMediaView *rankedMediaView; // @synthesize rankedMediaView=_rankedMediaView;
- (void)rankedMediaView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
@property(nonatomic) __weak IGRelatedItemsHeaderView *relatedItemsHeaderView; // @synthesize relatedItemsHeaderView=_relatedItemsHeaderView;
- (void)relatedItemsHeaderView:(id)arg1 didTapItem:(id)arg2 atIndexPath:(id)arg3 userSession:(id)arg4;
- (void)relatedItemsHeaderView:(id)arg1 willDisplayItem:(id)arg2 atIndexPath:(id)arg3;
@property(readonly, nonatomic) IGRelatedItemsLogger *relatedItemsLogger; // @synthesize relatedItemsLogger=_relatedItemsLogger;
@property(retain, nonatomic) IGRelatedItemsService *relatedItemsService; // @synthesize relatedItemsService=_relatedItemsService;
- (void)requestRelatedItems;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) NSDictionary *serverMegaphoneData; // @synthesize serverMegaphoneData=_serverMegaphoneData;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void)setMegaphoneView:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) IGFeedItemPreviewingHandler *thumbnailPreviewDelegate; // @synthesize thumbnailPreviewDelegate=_thumbnailPreviewDelegate;
@property(retain, nonatomic) IGVisitedRelatedItemsStore *visitedHashtagsStore; // @synthesize visitedHashtagsStore=_visitedHashtagsStore;
- (void)updateCellVisibility:(id)arg1 atIndex:(id)arg2;
- (void)updateRankedViewVisibility;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
