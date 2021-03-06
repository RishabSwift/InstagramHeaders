//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListSectionType.h"
#import "IGStoryViewerCellDelegate.h"

@class IGUser, IGUserSession, NSString;

@interface IGStoryViewerSectionController : IGListSectionController <IGStoryViewerCellDelegate, IGListSectionType>
{
    _Bool _tapShouldNavigateToProfile;
    IGUser *_user;
    IGUserSession *_userSession;
    id <IGStoryViewerSectionControllerViewerDelegate> _viewerDelegate;
}

- (void).cxx_destruct;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)dealloc;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)initWithUserSession:(id)arg1 tapShouldNavigateToProfile:(_Bool)arg2 viewerDelegate:(id)arg3;
- (long long)numberOfItems;
- (void)onFriendshipStatusReceived:(id)arg1;
- (void)pushProfileViewController;
- (void)showUnhideActionSheet;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)storyViewerCellDidTapHide:(id)arg1;
- (void)storyViewerCellDidTapUnhide:(id)arg1;
@property(readonly, nonatomic) _Bool tapShouldNavigateToProfile; // @synthesize tapShouldNavigateToProfile=_tapShouldNavigateToProfile;
- (void)updateForFriendshipChange;
- (void)updateReelBlockStatus:(_Bool)arg1;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) __weak id <IGStoryViewerSectionControllerViewerDelegate> viewerDelegate; // @synthesize viewerDelegate=_viewerDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

