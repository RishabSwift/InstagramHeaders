//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFeedNetworkSourceDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class IGBoostPostLogger, IGCameraNavigationControllerTransitionDelegate, IGFeedNetworkSource, IGUserSession, NSArray, NSString, UIActivityIndicatorView, UICollectionView, UIView;

@interface IGPromoteMediaSelectViewController : IGViewController <UICollectionViewDelegate, UICollectionViewDataSource, IGFeedNetworkSourceDelegate>
{
    UICollectionView *_mediaCollectionView;
    NSArray *_feedItems;
    IGFeedNetworkSource *_feedSource;
    IGViewController *_singleFeedViewController;
    long long _activeIndex;
    IGCameraNavigationControllerTransitionDelegate *_boostPostTransitionDelegate;
    IGUserSession *_userSession;
    UIView *_collectionViewBottomSeparator;
    UIActivityIndicatorView *_spinner;
    IGBoostPostLogger *_logger;
    struct CGSize _cellSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long activeIndex; // @synthesize activeIndex=_activeIndex;
- (id)analyticsModule;
@property(readonly, nonatomic) IGCameraNavigationControllerTransitionDelegate *boostPostTransitionDelegate; // @synthesize boostPostTransitionDelegate=_boostPostTransitionDelegate;
- (void)buildMediaPicker;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(retain, nonatomic) UIView *collectionViewBottomSeparator; // @synthesize collectionViewBottomSeparator=_collectionViewBottomSeparator;
@property(copy, nonatomic) NSArray *feedItems; // @synthesize feedItems=_feedItems;
- (void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(long long)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(long long)arg3;
@property(retain, nonatomic) IGFeedNetworkSource *feedSource; // @synthesize feedSource=_feedSource;
- (id)gridViewCellForIndexPath:(id)arg1;
- (id)initWithUserSession:(id)arg1 boostPostLogger:(id)arg2;
- (void)initializeSpinner;
- (void)logMediaLoadFailureWithErrorMessage:(id)arg1;
- (void)logMediaLoaded;
- (void)logNoMediaAvailable;
@property(readonly, nonatomic) IGBoostPostLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) UICollectionView *mediaCollectionView; // @synthesize mediaCollectionView=_mediaCollectionView;
- (void)onCancelButtonTapped:(id)arg1;
- (void)onNextButtonTapped:(id)arg1;
- (_Bool)prefersTabBarHidden;
- (void)presentBoostPostViewControllerWithFeedItem:(id)arg1;
@property(retain, nonatomic) IGViewController *singleFeedViewController; // @synthesize singleFeedViewController=_singleFeedViewController;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void)setupNavigationItems;
- (id)singleFeedViewControllerForFeedItem:(id)arg1;
- (void)updateSingleFeedViewControllerWithIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

