//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGFeedItemVisibilityTracking.h"
#import "IGItemDiffingDelegate.h"

@class IGItemDiffing, IGMainFeedNetworkSource, IGUserSession, NSDictionary, NSString, UICollectionView;

@interface IGFeedItemSectionImpressionTracker : NSObject <IGItemDiffingDelegate, IGFeedItemVisibilityTracking>
{
    UICollectionView *_collectionView;
    IGUserSession *_userSession;
    IGItemDiffing *_indexPathTracker;
    NSDictionary *_indexToFeedItemMap;
    IGMainFeedNetworkSource *_feedNetworkSource;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak IGMainFeedNetworkSource *feedNetworkSource; // @synthesize feedNetworkSource=_feedNetworkSource;
@property(readonly, nonatomic) IGItemDiffing *indexPathTracker; // @synthesize indexPathTracker=_indexPathTracker;
@property(retain, nonatomic) NSDictionary *indexToFeedItemMap; // @synthesize indexToFeedItemMap=_indexToFeedItemMap;
- (id)initWithFeedNetworkSource:(id)arg1 userSession:(id)arg2;
- (void)itemDiffing:(id)arg1 didChangeWithItemAdded:(id)arg2;
- (void)itemDiffing:(id)arg1 didChangeWithItemRemoved:(id)arg2;
- (void)updateWithCellTrackingData:(id)arg1 sectionHeaderTrackingData:(id)arg2 visibleContentRect:(struct CGRect)arg3;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
