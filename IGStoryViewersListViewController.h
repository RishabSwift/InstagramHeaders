//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IGListAdapterDataSource.h"
#import "IGPendingStoryItemStatusDelegate.h"
#import "IGStoryOverviewUploadStatusViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class IGListAdapter, IGListCollectionView, IGPendingStoryItemStatusObserver, IGStoryOverviewUploadStatusView, IGStoryViewersHeaderView, IGUserSession, NSMutableOrderedSet, NSString, UIView;

@interface IGStoryViewersListViewController : UIViewController <IGStoryOverviewUploadStatusViewDelegate, IGListAdapterDataSource, IGPendingStoryItemStatusDelegate, UIScrollViewDelegate>
{
    _Bool _hasLoadedOnce;
    _Bool _lastFetchFailed;
    _Bool _isLoading;
    _Bool _moreAvailable;
    UIView *_emptyStateView;
    IGStoryOverviewUploadStatusView *_uploadStatusView;
    id <IGStoryItemType> _item;
    id <IGStoryViewersListDelegate> _delegate;
    IGUserSession *_userSession;
    IGStoryViewersHeaderView *_headerView;
    IGListCollectionView *_collectionView;
    IGListAdapter *_adapter;
    IGPendingStoryItemStatusObserver *_pendingItemObserver;
    NSMutableOrderedSet *_viewers;
    NSString *_maxID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGListAdapter *adapter; // @synthesize adapter=_adapter;
- (_Bool)canTryLoading;
@property(readonly, nonatomic) IGListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)dealloc;
@property(nonatomic) __weak id <IGStoryViewersListDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteButtonPressed;
- (void)didManuallyCancelForPendingItemObserver:(id)arg1;
@property(readonly, nonatomic) UIView *emptyStateView; // @synthesize emptyStateView=_emptyStateView;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)fetchIfNeededForTargetOffset:(struct CGPoint)arg1;
@property(nonatomic) _Bool hasLoadedOnce; // @synthesize hasLoadedOnce=_hasLoadedOnce;
@property(readonly, nonatomic) IGStoryViewersHeaderView *headerView; // @synthesize headerView=_headerView;
- (id)initWithUserSession:(id)arg1 item:(id)arg2;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(readonly, nonatomic) id <IGStoryItemType> item; // @synthesize item=_item;
@property(nonatomic) _Bool lastFetchFailed; // @synthesize lastFetchFailed=_lastFetchFailed;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
@property(retain, nonatomic) NSString *maxID; // @synthesize maxID=_maxID;
@property(nonatomic) _Bool moreAvailable; // @synthesize moreAvailable=_moreAvailable;
- (id)objectsForListAdapter:(id)arg1;
@property(readonly, nonatomic) IGPendingStoryItemStatusObserver *pendingItemObserver; // @synthesize pendingItemObserver=_pendingItemObserver;
- (void)pendingItemObserver:(id)arg1 didUpdateToProgress:(double)arg2;
- (void)pendingItemObserver:(id)arg1 didUpdateToStatus:(long long)arg2;
- (void)saveButtonPressed;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
@property(retain, nonatomic) NSMutableOrderedSet *viewers; // @synthesize viewers=_viewers;
- (void)shareButtonPressed;
- (void)tryFetchUsers;
- (void)updateHeaderButtonVisibility;
@property(readonly, nonatomic) IGStoryOverviewUploadStatusView *uploadStatusView; // @synthesize uploadStatusView=_uploadStatusView;
- (void)uploadStatusViewDidTapRetry:(id)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewerCountUpdated:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

