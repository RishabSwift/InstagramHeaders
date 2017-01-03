//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

#import "IGBusinessConversionViewControllerDelegate.h"
#import "IGRageShakeViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class IGGroupedTableViewFooterView, IGSwitch, IGUserSession, NSArray, NSString;

@interface IGAccountSettingsViewController : IGGroupedTableViewController <UIAlertViewDelegate, IGRageShakeViewControllerDelegate, IGBusinessConversionViewControllerDelegate>
{
    NSArray *_followSectionRowTypes;
    NSArray *_inviteSectionRowTypes;
    NSArray *_accountSectionRowTypes;
    NSArray *_aboutSectionRowTypes;
    NSArray *_settingSectionRowTypes;
    NSArray *_sessionSectionRowTypes;
    NSArray *_developerSectionRowTypes;
    id _paymentsNotificationObserver;
    _Bool _isSwitchingAccount;
    id <IGBusinessConversionDelegate> _delegate;
    IGGroupedTableViewFooterView *_privacySettingsFooterView;
    IGSwitch *_privateAccountSwitch;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)aboutSectionRows;
- (long long)accountRowForRow:(long long)arg1;
- (id)accountSectionRows;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (id)allSections;
- (id)analyticsModule;
- (id)appVersionString;
- (void)businessConversionViewControllerDidCompleteFlow:(id)arg1;
- (void)businessConversionViewControllerDidDismiss:(id)arg1;
- (void)businessConversionViewControllerNotBusiness:(id)arg1;
- (void)configureAboutCell:(id)arg1 forRow:(long long)arg2;
- (void)configureAccountCell:(id)arg1 forRow:(long long)arg2;
- (void)configureCell:(id)arg1 forServiceType:(long long)arg2;
- (void)configureDeveloperCell:(id)arg1 forRow:(long long)arg2;
- (void)configureFollowCell:(id)arg1 forRow:(long long)arg2;
- (void)configureInviteCell:(id)arg1 forRow:(long long)arg2;
- (void)configureSessionCell:(id)arg1 forRow:(long long)arg2;
- (void)configureSettingsCell:(id)arg1 forRow:(long long)arg2;
- (void)configureSupportCell:(id)arg1 forRow:(long long)arg2;
- (id)contentPresentingViewController;
- (void)dealloc;
@property(nonatomic) __weak id <IGBusinessConversionDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)developerRowForRow:(long long)arg1;
- (id)developerSectionRows;
- (void)didDismissRageShakeViewController:(id)arg1 didSendReport:(_Bool)arg2;
- (void)didTapBackButton:(id)arg1;
- (void)dismissViewController;
- (long long)followRowTypeForRow:(long long)arg1;
- (id)followSectionRows;
- (id)imageForServiceType:(long long)arg1;
- (id)initWithUserSession:(id)arg1;
- (void)inviteFBFriends;
- (long long)inviteRowForRow:(long long)arg1;
- (id)inviteSectionRows;
@property(nonatomic, getter=isPrivateAccount) _Bool privateAccount;
@property(nonatomic) _Bool isSwitchingAccount; // @synthesize isSwitchingAccount=_isSwitchingAccount;
- (void)logTapEventForServiceType:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)performLogoutForCurrentUser:(id)arg1 oneTapLoginEnabled:(_Bool)arg2;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)presentReportProblemAlert;
- (void)presentReportThankYouAlert;
@property(retain, nonatomic) IGGroupedTableViewFooterView *privacySettingsFooterView; // @synthesize privacySettingsFooterView=_privacySettingsFooterView;
@property(readonly, nonatomic) IGSwitch *privateAccountSwitch; // @synthesize privateAccountSwitch=_privateAccountSwitch;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)saveAccountWithData:(id)arg1;
- (long long)sectionIndexForSection:(long long)arg1;
- (void)sendChangePasswordRequest;
- (long long)sessionRowForRow:(long long)arg1;
- (id)sessionSectionRows;
- (long long)settingRowForRow:(long long)arg1;
- (id)settingSectionRows;
- (_Bool)shouldShowAboutSponsoredPost;
- (void)showDoubleDialogWithIndexPath:(id)arg1 logoutBlock:(CDUnknownBlockType)arg2 withMultiTapEnabled:(_Bool)arg3;
- (void)showLogoutFromAllUsersAlertViewForCellWithIndexPath:(id)arg1;
- (void)showLogoutFromAllUsersAlertViewWithMultiTapEnabledForCellWithIndexPath:(id)arg1;
- (void)showLogoutFromCurrentUserAlertViewForCellWithIndexPath:(id)arg1;
- (void)showLogoutFromCurrentUserAlertViewWithMultiTapEnabledForCellWithIndexPath:(id)arg1;
- (void)showOneTapLoginCheckboxDialogPrechecked:(_Bool)arg1 indexPath:(id)arg2 logoutBlock:(CDUnknownBlockType)arg3;
- (void)showRevertBackSurvey;
- (void)showSimpleLogoutDialogWithIndexPath:(id)arg1 logoutBlock:(CDUnknownBlockType)arg2 hasMultipleAccounts:(_Bool)arg3;
- (void)startAdRating;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectAboutRow:(long long)arg2;
- (void)tableView:(id)arg1 didSelectAccountRow:(long long)arg2;
- (void)tableView:(id)arg1 didSelectDeveloperRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectFollowRow:(long long)arg2;
- (void)tableView:(id)arg1 didSelectInviteRow:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectSessionRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectSettingsRow:(long long)arg2;
- (void)tableView:(id)arg1 didSelectSupportRow:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)updateRows;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
