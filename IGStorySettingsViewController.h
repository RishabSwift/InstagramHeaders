//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGStorySettingsBlockedUserListViewControllerDelegate.h"

@class IGGroupedTableViewFooterView, IGSwitch, IGUserSession, NSSet, NSString;

@interface IGStorySettingsViewController : IGGroupedTableViewController <IGStorySettingsBlockedUserListViewControllerDelegate>
{
    IGUserSession *_userSession;
    long long _entryPoint;
    NSSet *_blockedUsers;
    NSString *_messagePreference;
    NSString *_pendingMessagePreference;
    IGGroupedTableViewFooterView *_hideStoryFromFooterView;
    IGGroupedTableViewFooterView *_messageReplySettingsFooterView;
    IGGroupedTableViewFooterView *_saveSharedPhotosFooterView;
    IGSwitch *_saveSharedPhotosSwitch;
}

- (void).cxx_destruct;
- (id)analyticsModule;
@property(retain, nonatomic) NSSet *blockedUsers; // @synthesize blockedUsers=_blockedUsers;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
- (void)handleIndividualHidesRowSelected;
- (void)handleMessageReplyRowSelected:(long long)arg1;
@property(readonly, nonatomic) IGGroupedTableViewFooterView *hideStoryFromFooterView; // @synthesize hideStoryFromFooterView=_hideStoryFromFooterView;
- (id)initWithUserSession:(id)arg1 entryPoint:(long long)arg2;
@property(copy, nonatomic) NSString *messagePreference; // @synthesize messagePreference=_messagePreference;
@property(readonly, nonatomic) IGGroupedTableViewFooterView *messageReplySettingsFooterView; // @synthesize messageReplySettingsFooterView=_messageReplySettingsFooterView;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(copy, nonatomic) NSString *pendingMessagePreference; // @synthesize pendingMessagePreference=_pendingMessagePreference;
@property(readonly, nonatomic) IGGroupedTableViewFooterView *saveSharedPhotosFooterView; // @synthesize saveSharedPhotosFooterView=_saveSharedPhotosFooterView;
@property(readonly, nonatomic) IGSwitch *saveSharedPhotosSwitch; // @synthesize saveSharedPhotosSwitch=_saveSharedPhotosSwitch;
- (void)storySettingsBlockedUserListViewController:(id)arg1 didBlockUsers:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
