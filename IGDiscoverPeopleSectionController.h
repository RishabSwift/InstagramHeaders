//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGDiscoverPeopleCellDelegate.h"
#import "IGListSectionType.h"
#import "IGStoryDataControllerStoryItemListener.h"
#import "IGStoryViewerDelegate.h"
#import "IGTitleAndActionCellDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"

@class IGDiscoverPeopleItemConfiguration, IGFeaturedUserInfo, IGReel, IGStoryTrayLoggingContext, IGSuggestedUserLogger, IGTitleAndActionSupplementaryViewSource, IGUserSession, NSString;

@interface IGDiscoverPeopleSectionController : IGListSectionController <IGDiscoverPeopleCellDelegate, IGStoryDataControllerStoryItemListener, IGStoryViewerDelegate, UIViewControllerTransitioningDelegate, IGTitleAndActionCellDelegate, IGListSectionType>
{
    _Bool _hasSocialContext;
    _Bool _shouldLaunchReelWhenLoaded;
    id <IGDiscoverPeopleSectionControllerDelegate> _delegate;
    IGSuggestedUserLogger *_suggestedUserLogger;
    IGFeaturedUserInfo *_featuredUserInfo;
    IGDiscoverPeopleItemConfiguration *_itemConfiguration;
    IGTitleAndActionSupplementaryViewSource *_headerViewSource;
    IGUserSession *_userSession;
    IGReel *_reel;
    IGStoryTrayLoggingContext *_storyTrayLoggingContext;
}

+ (long long)defaultCellHeight;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <IGDiscoverPeopleSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (void)discoverPeopleCellDidTapDismiss:(id)arg1;
- (void)discoverPeopleCellDidTapFollow:(id)arg1;
- (void)discoverPeopleCellDidTapFollowing:(id)arg1;
- (void)discoverPeopleCellDidTapProfileRing:(id)arg1;
@property(readonly, nonatomic) IGFeaturedUserInfo *featuredUserInfo; // @synthesize featuredUserInfo=_featuredUserInfo;
- (void)friendStatusChanged:(id)arg1;
- (void)handlePendingReelLaunchIfNeeded;
@property(nonatomic) _Bool hasSocialContext; // @synthesize hasSocialContext=_hasSocialContext;
@property(retain, nonatomic) IGTitleAndActionSupplementaryViewSource *headerViewSource; // @synthesize headerViewSource=_headerViewSource;
- (id)initWithHasSocialContext:(_Bool)arg1 userSession:(id)arg2;
@property(readonly, nonatomic) IGDiscoverPeopleItemConfiguration *itemConfiguration; // @synthesize itemConfiguration=_itemConfiguration;
- (long long)numberOfItems;
@property(retain, nonatomic) IGReel *reel; // @synthesize reel=_reel;
@property(nonatomic) _Bool shouldLaunchReelWhenLoaded; // @synthesize shouldLaunchReelWhenLoaded=_shouldLaunchReelWhenLoaded;
@property(retain, nonatomic) IGStoryTrayLoggingContext *storyTrayLoggingContext; // @synthesize storyTrayLoggingContext=_storyTrayLoggingContext;
@property(retain, nonatomic) IGSuggestedUserLogger *suggestedUserLogger; // @synthesize suggestedUserLogger=_suggestedUserLogger;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)showKodachromeViewer;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)storyDataController:(id)arg1 didReturnNoStoryItemResultsForReelPK:(id)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)storyDataController:(id)arg1 didUpdateReel:(id)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)storyDataController:(id)arg1 fetchStoryItemsDidFailWithError:(id)arg2 refreshType:(long long)arg3 updateDuration:(double)arg4;
- (void)storyViewer:(id)arg1 didFocusOnReelWithPK:(id)arg2;
- (void)storyViewerDidFinish:(id)arg1;
- (id)supplementaryViewSource;
- (void)titleAndActionCell:(id)arg1 didTapActionButton:(id)arg2;
- (void)updateProfileRingStateForReel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

