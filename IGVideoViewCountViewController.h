//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFeedScrollViewListener.h"
#import "IGFeedStatusViewDelegate.h"
#import "IGListAdapterDelegate.h"
#import "IGNavSearchBarDelegate.h"
#import "IGUserListNetworkDataSourceDelegate.h"
#import "UICollectionViewDelegate.h"

@class IGFeedItem, IGFeedScrollViewAnnouncer, IGFeedStatusView, IGFollowListLogger, IGListAdapter, IGListCollectionView, IGNavSearchBar, IGRefreshControl, IGUserListNetworkDataSource, IGUserSession, IGVideoViewCountListAdapterDataSource, NSString, UIBarButtonItem, UIButton;

@interface IGVideoViewCountViewController : IGViewController <IGFeedStatusViewDelegate, IGListAdapterDelegate, IGNavSearchBarDelegate, UICollectionViewDelegate, IGFeedScrollViewListener, IGUserListNetworkDataSourceDelegate>
{
    _Bool _loading;
    IGListCollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGVideoViewCountListAdapterDataSource *_listAdapterDataSource;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    IGFeedStatusView *_emptyStateView;
    IGRefreshControl *_refreshControl;
    IGUserSession *_userSession;
    NSString *_sessionId;
    IGFollowListLogger *_followListLogger;
    IGNavSearchBar *_searchBar;
    NSString *_searchString;
    IGUserListNetworkDataSource *_networkDataSource;
    UIBarButtonItem *_loadingButtonItem;
    UIButton *_heartButton;
    UIBarButtonItem *_heartButtonItem;
    UIBarButtonItem *_negativeSpacerButtonItem;
    IGFeedItem *_feedItem;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)authorizeAndFetchUsers;
@property(retain, nonatomic) IGListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)dataSourceDidFailLoad:(id)arg1;
- (void)dataSourceDidFinishLoading:(id)arg1;
- (void)dataSourceDidStartLoading:(id)arg1;
@property(retain, nonatomic) IGFeedStatusView *emptyStateView; // @synthesize emptyStateView=_emptyStateView;
@property(retain, nonatomic) IGFeedItem *feedItem; // @synthesize feedItem=_feedItem;
- (void)feedStatusViewDidTapOnInfoView:(id)arg1;
- (void)finishLoading;
@property(readonly, nonatomic) IGFollowListLogger *followListLogger; // @synthesize followListLogger=_followListLogger;
- (void)handleEmptyStateViewTap;
@property(retain, nonatomic) UIButton *heartButton; // @synthesize heartButton=_heartButton;
@property(retain, nonatomic) UIBarButtonItem *heartButtonItem; // @synthesize heartButtonItem=_heartButtonItem;
- (id)initWithContextPK:(id)arg1 userSession:(id)arg2;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
@property(retain, nonatomic) IGVideoViewCountListAdapterDataSource *listAdapterDataSource; // @synthesize listAdapterDataSource=_listAdapterDataSource;
- (void)loadMoreUsers;
@property(retain, nonatomic) UIBarButtonItem *loadingButtonItem; // @synthesize loadingButtonItem=_loadingButtonItem;
@property(retain, nonatomic) UIBarButtonItem *negativeSpacerButtonItem; // @synthesize negativeSpacerButtonItem=_negativeSpacerButtonItem;
@property(retain, nonatomic) IGUserListNetworkDataSource *networkDataSource; // @synthesize networkDataSource=_networkDataSource;
- (void)onHeartButtonPressed:(id)arg1;
@property(retain, nonatomic) IGRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
- (void)reloadData;
- (void)resetRightBarIcon:(_Bool)arg1;
@property(retain, nonatomic) IGFeedScrollViewAnnouncer *scrollViewAnnouncer; // @synthesize scrollViewAnnouncer=_scrollViewAnnouncer;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
@property(retain, nonatomic) IGNavSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarWillBeginEditing:(id)arg1;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)updateHeartButtonWithFeedItem:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
