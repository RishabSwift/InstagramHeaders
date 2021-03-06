//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGTabPageViewController.h"

#import "IGActivityFeedViewControllerDelegate.h"

@class IGActivityFeedViewController2, IGNewsFollowingTableViewController, IGUserSession, NSString, UIViewController<IGActivityFeedViewControllerProtocol>;

@interface IGNewsViewController : IGTabPageViewController <IGActivityFeedViewControllerDelegate>
{
    _Bool _displayPeopleTab;
    _Bool _displayLimitedActivity;
    _Bool _displaySuggestedUserActivityTab;
    _Bool _displaySuggestedUserPeopleTab;
    _Bool _displayLimitedPeopleFeed;
    _Bool _navigationViewControllerInitiated;
    long long _navigationState;
    id <IGViewControllerInitializationDelegate> _initalizationDelegate;
    IGUserSession *_userSession;
    IGNewsFollowingTableViewController *_followingViewController;
    UIViewController<IGActivityFeedViewControllerProtocol> *_inboxViewController;
    IGActivityFeedViewController2 *_peopleTabViewController;
}

- (void).cxx_destruct;
- (void)activityFeedViewControllerDidFetchData:(id)arg1;
- (id)analyticsModule;
- (void)applicationDidBecomeActive:(id)arg1;
- (long long)currentSegment;
- (void)dealloc;
@property(readonly, nonatomic) _Bool displayLimitedActivity; // @synthesize displayLimitedActivity=_displayLimitedActivity;
@property(readonly, nonatomic) _Bool displayLimitedPeopleFeed; // @synthesize displayLimitedPeopleFeed=_displayLimitedPeopleFeed;
@property(readonly, nonatomic) _Bool displayPeopleTab; // @synthesize displayPeopleTab=_displayPeopleTab;
@property(readonly, nonatomic) _Bool displaySuggestedUserActivityTab; // @synthesize displaySuggestedUserActivityTab=_displaySuggestedUserActivityTab;
@property(readonly, nonatomic) _Bool displaySuggestedUserPeopleTab; // @synthesize displaySuggestedUserPeopleTab=_displaySuggestedUserPeopleTab;
- (void)fetchActivityInbox;
- (void)fetchPeopleInbox;
- (void)focusInbox;
- (void)focusInboxIfOffscreen;
@property(retain, nonatomic) IGNewsFollowingTableViewController *followingViewController; // @synthesize followingViewController=_followingViewController;
@property(retain, nonatomic) UIViewController<IGActivityFeedViewControllerProtocol> *inboxViewController; // @synthesize inboxViewController=_inboxViewController;
- (id)initWithUserSession:(id)arg1;
@property(nonatomic) __weak id <IGViewControllerInitializationDelegate> initalizationDelegate; // @synthesize initalizationDelegate=_initalizationDelegate;
@property(nonatomic) long long navigationState; // @synthesize navigationState=_navigationState;
@property(nonatomic) _Bool navigationViewControllerInitiated; // @synthesize navigationViewControllerInitiated=_navigationViewControllerInitiated;
- (void)notifyInitializationIfNeeded;
- (void)onShouldReload;
@property(retain, nonatomic) IGActivityFeedViewController2 *peopleTabViewController; // @synthesize peopleTabViewController=_peopleTabViewController;
- (id)scrollViewForSegment:(long long)arg1;
- (void)updateNavigationState;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (id)viewControllerForNavigationState:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

