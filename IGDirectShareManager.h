//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGDirectRecipientDataSourceDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class IGUserSession, NSArray, NSSet, NSString, UIView;

@interface IGDirectShareManager : IGGroupedTableViewController <UITableViewDataSource, UITableViewDelegate, IGDirectRecipientDataSourceDelegate>
{
    _Bool _isPerformingSearch;
    _Bool _shouldShowSelf;
    id <IGDirectShareManagerDataSource> _datasource;
    NSSet *_usersToFilter;
    IGUserSession *_userSession;
    NSArray *_suggestedRecipients;
    id <IGDirectRecipientDataSourceProtocol> _recipientDataSource;
    NSArray *_currentDataSourceResults;
    UIView *_recentsLabelHeaderView;
    UIView *_followingLabelHeaderView;
    struct UIEdgeInsets _contentInset;
}

- (void).cxx_destruct;
- (id)analyticsModule;
- (_Bool)automaticallyAdjustsScrollViewInsets;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) NSArray *currentDataSourceResults; // @synthesize currentDataSourceResults=_currentDataSourceResults;
- (void)dataSourceDidFailLoad:(id)arg1;
- (void)dataSourceDidFinishLoading:(id)arg1;
- (void)dataSourceDidReturnLocalResults:(id)arg1;
- (void)dataSourceDidStartLoading:(id)arg1;
@property(nonatomic) __weak id <IGDirectShareManagerDataSource> datasource; // @synthesize datasource=_datasource;
- (void)fetchData;
- (id)filterOutUsers:(id)arg1 fromRecipients:(id)arg2;
@property(retain, nonatomic) UIView *followingLabelHeaderView; // @synthesize followingLabelHeaderView=_followingLabelHeaderView;
- (id)generateSuggestedRecipients;
- (id)initWithUserSession:(id)arg1;
- (id)initWithUserSession:(id)arg1 shouldShowSelf:(_Bool)arg2;
@property(nonatomic) _Bool isPerformingSearch; // @synthesize isPerformingSearch=_isPerformingSearch;
- (long long)numberOfDataSourceResultsToShow;
- (long long)numberOfRecentsToShow;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct UIEdgeInsets)preferredContentInsets;
@property(retain, nonatomic) UIView *recentsLabelHeaderView; // @synthesize recentsLabelHeaderView=_recentsLabelHeaderView;
@property(retain, nonatomic) id <IGDirectRecipientDataSourceProtocol> recipientDataSource; // @synthesize recipientDataSource=_recipientDataSource;
- (void)reloadFullUserList;
@property(retain, nonatomic) NSArray *suggestedRecipients; // @synthesize suggestedRecipients=_suggestedRecipients;
@property(retain, nonatomic) NSSet *usersToFilter; // @synthesize usersToFilter=_usersToFilter;
@property(readonly, nonatomic) _Bool shouldShowSelf; // @synthesize shouldShowSelf=_shouldShowSelf;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 noResultsCellForIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 searchPromptCellForIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateQuery:(id)arg1;
- (id)userCellForUser:(id)arg1 atIndexPath:(id)arg2;
- (id)userIdsFromRecipientsList:(id)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (id)verifiedSingleUserFromDataSourceAtRow:(long long)arg1;
- (id)verifiedSingleUserFromSuggestedRecipientsAtRow:(long long)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

