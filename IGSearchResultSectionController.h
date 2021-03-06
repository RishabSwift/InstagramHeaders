//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListSectionType.h"
#import "IGSearchCollectionViewCellDelegate.h"

@class IGSearchHideHelper, IGSearchResultViewModel, IGUserSession, NSString;

@interface IGSearchResultSectionController : IGListSectionController <IGSearchCollectionViewCellDelegate, IGListSectionType>
{
    IGSearchResultViewModel *_viewModel;
    IGUserSession *_userSession;
    IGSearchHideHelper *_itemHidingHelper;
}

- (void).cxx_destruct;
- (void)addBackingModelToRecentItemStore:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)displayDelegate;
- (id)initWithUserSession:(id)arg1 itemHidingHelper:(id)arg2;
@property(readonly, nonatomic) IGSearchHideHelper *itemHidingHelper; // @synthesize itemHidingHelper=_itemHidingHelper;
- (long long)numberOfItems;
- (void)searchCollectionViewCellDidLongPress:(id)arg1;
- (_Bool)searchCollectionViewCellShouldLongPress:(id)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (id)viewControllerForBackingModel:(id)arg1;
@property(readonly, nonatomic) IGSearchResultViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)workingRangeDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

