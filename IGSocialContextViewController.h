//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGFindUsersViewDataSourceDelegate.h"
#import "IGListAdapterDataSource.h"
#import "IGListAdapterDelegate.h"

@class IGListAdapter, IGListCollectionView, IGSocialContextLogger, IGSuggestedFindUsersViewDataSource, IGSuggestedUserLogger, IGUserSession, NSArray, NSString;

@interface IGSocialContextViewController : IGViewController <IGFindUsersViewDataSourceDelegate, IGListAdapterDataSource, IGListAdapterDelegate>
{
    _Bool _loading;
    IGListCollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    NSArray *_userList;
    IGSocialContextLogger *_socialContextlogger;
    IGSuggestedUserLogger *_suggestedUserLogger;
    IGSuggestedFindUsersViewDataSource *_dataSource;
    IGUserSession *_userSession;
    NSString *_contextPK;
    NSArray *_forcedUserIds;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (void)authorizeAndFetchUsers;
@property(readonly, nonatomic) IGListCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) NSString *contextPK; // @synthesize contextPK=_contextPK;
@property(retain, nonatomic) IGSuggestedFindUsersViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id)emptyViewForListAdapter:(id)arg1;
- (void)fetchFollowStatusForUsers:(id)arg1;
- (void)findUsersViewDataSource:(id)arg1 didFailWithError:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadAllUserIDs:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadMoreUsers:(id)arg2 allUsers:(id)arg3;
- (void)findUsersViewDataSource:(id)arg1 didLoadThumbnailsForUsers:(id)arg2;
- (void)findUsersViewDataSource:(id)arg1 didLoadUserList:(id)arg2;
- (void)finishLoading;
@property(readonly, nonatomic) NSArray *forcedUserIds; // @synthesize forcedUserIds=_forcedUserIds;
- (id)initSocialContextViewControllerWithUserSession:(id)arg1 contextPK:(id)arg2 forcedUserIds:(id)arg3;
- (id)initWithDataSource:(id)arg1 userSession:(id)arg2 contextPK:(id)arg3 forcedUserIds:(id)arg4;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) IGListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)objectsForListAdapter:(id)arg1;
@property(retain, nonatomic) NSArray *userList; // @synthesize userList=_userList;
@property(readonly, nonatomic) IGSocialContextLogger *socialContextlogger; // @synthesize socialContextlogger=_socialContextlogger;
@property(readonly, nonatomic) IGSuggestedUserLogger *suggestedUserLogger; // @synthesize suggestedUserLogger=_suggestedUserLogger;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

