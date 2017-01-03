//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGExploreInterestSelectionCellDelegate.h"
#import "IGListSectionType.h"

@class IGExploreInterestModel, NSString;

@interface IGExploreInterestSelectionSectionController : IGListSectionController <IGExploreInterestSelectionCellDelegate, IGListSectionType>
{
    _Bool _isFetching;
    _Bool _isSavingSelection;
    id <IGExploreInterestSelectionSectionControllerDelegate> _delegate;
    IGExploreInterestModel *_model;
    id <IGAPIClient> _networker;
}

- (void).cxx_destruct;
- (id)cellForItemAtIndex:(long long)arg1;
@property(nonatomic) __weak id <IGExploreInterestSelectionSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)displayDelegate;
- (void)exploreInterestSelectionCell:(id)arg1 didTapTopicsButton:(id)arg2 withIndex:(long long)arg3;
- (void)exploreInterestSelectionCellDidTapDone:(id)arg1;
- (void)exploreInterestSelectionCellDidTapSeeMore:(id)arg1;
- (void)fetchMoreTopics;
- (id)initWithNetworker:(id)arg1;
@property(nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
@property(nonatomic) _Bool isSavingSelection; // @synthesize isSavingSelection=_isSavingSelection;
@property(readonly, nonatomic) IGExploreInterestModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
- (long long)numberOfItems;
- (void)saveSelectedTopics;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)supplementaryViewSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
