//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGFeedViewController_DEPRECATED.h"

#import "IGFeedFollowPeopleCellDelegate.h"

@class IGFeedFollowPeopleCell, NSArray, NSString;

@interface IGRecapFeedViewController : IGFeedViewController_DEPRECATED <IGFeedFollowPeopleCellDelegate>
{
    IGFeedFollowPeopleCell *_feedFollowPeopleCell;
    NSArray *_followAccountList;
}

- (void).cxx_destruct;
- (id)analyticsModule;
@property(retain, nonatomic) IGFeedFollowPeopleCell *feedFollowPeopleCell; // @synthesize feedFollowPeopleCell=_feedFollowPeopleCell;
- (void)feedFollowPeopleCell:(id)arg1 didTapUser:(id)arg2;
- (void)feedFollowPeopleCellDidChangeHeight:(id)arg1;
- (void)feedFollowPeopleCellDidDismissUnit:(id)arg1;
- (void)feedFollowPeopleCellDidTapBanner:(id)arg1;
- (void)feedFollowPeopleCellDidTapFooterBanner:(id)arg1;
@property(retain, nonatomic) NSArray *followAccountList; // @synthesize followAccountList=_followAccountList;
- (void)handleWillLoadItemsFromResponse:(id)arg1;
- (id)initWithFeedNetworkSource:(id)arg1 userSession:(id)arg2;
- (void)loadFollowAccountListFromResponse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

