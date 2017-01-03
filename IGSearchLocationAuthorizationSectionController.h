//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListSectionType.h"

@class IGSearchLocationAuthorizationItemViewModel, IGUserSession, NSString;

@interface IGSearchLocationAuthorizationSectionController : IGListSectionController <IGListSectionType>
{
    IGUserSession *_userSession;
    IGSearchLocationAuthorizationItemViewModel *_viewModel;
}

- (void).cxx_destruct;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)displayDelegate;
- (id)initWithUserSession:(id)arg1;
- (long long)numberOfItems;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGSearchLocationAuthorizationItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)workingRangeDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
