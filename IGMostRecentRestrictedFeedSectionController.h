//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListSectionType.h"

@class NSString, UINavigationController;

@interface IGMostRecentRestrictedFeedSectionController : IGListSectionController <IGListSectionType>
{
    NSString *_feedName;
    UINavigationController *_navigationController;
}

- (void).cxx_destruct;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)displayDelegate;
@property(readonly, nonatomic) NSString *feedName; // @synthesize feedName=_feedName;
- (id)initWithFeedName:(id)arg1 navigationController:(id)arg2;
@property(readonly, nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (long long)numberOfItems;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)workingRangeDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

