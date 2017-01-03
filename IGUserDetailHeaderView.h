//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IGBusinessConversionDelegate.h"
#import "IGCoreTextLinkHandler.h"
#import "IGFeedToggleViewDelegate.h"
#import "IGFollowButtonDelegate.h"
#import "IGFriendRequestHeaderViewDelegate.h"
#import "IGProfilePictureHelperDelegate.h"
#import "IGSimilarAccountsViewDelegate.h"
#import "IGTooltipViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class IGButton, IGCoreTextView, IGFeedToggleView, IGFeedViewController_DEPRECATED<IGUserDetailHeaderViewDelegate>, IGFollowButton, IGFollowsYouView, IGFriendRequestHeaderView, IGHScrollSimilarAccountsControl, IGLiveCuratorContainerView, IGProfilePictureImageView, IGSimilarAccountsView, IGStatButton, IGStoryGradientRingView, IGTapButton, IGTextButton, IGTooltipView, IGUser, IGUserSession, NSArray, NSString, UIActivityIndicatorView, UIControl, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface IGUserDetailHeaderView : UIView <IGCoreTextLinkHandler, IGFollowButtonDelegate, IGFriendRequestHeaderViewDelegate, IGTooltipViewDelegate, IGSimilarAccountsViewDelegate, IGBusinessConversionDelegate, UIGestureRecognizerDelegate, IGFeedToggleViewDelegate, IGProfilePictureHelperDelegate>
{
    _Bool _showingProfileMegaphone;
    _Bool _showingSavedMediaTooltip;
    _Bool _feedRestricted;
    _Bool _translateBiographyShowing;
    _Bool _requestHeaderShowing;
    _Bool _isCurrentUser;
    IGFeedViewController_DEPRECATED<IGUserDetailHeaderViewDelegate> *_delegate;
    IGUser *_user;
    UIView *_megaphoneView;
    IGFeedToggleView *_toggleBar;
    id <IGBusinessConversionDelegate> _businessConversionDelegate;
    IGUserSession *_userSession;
    IGProfilePictureImageView *_profilePic;
    IGStoryGradientRingView *_profilePicRingView;
    IGLiveCuratorContainerView *_profilePicInstaVideoPulseView;
    IGStatButton *_followersButton;
    IGStatButton *_followingButton;
    IGStatButton *_mediaButton;
    IGTextButton *_editProfileButton;
    UIImageView *_editProfileExclamationMark;
    IGFollowButton *_followButton;
    IGTapButton *_similarAccountsButton;
    IGFriendRequestHeaderView *_requestHeader;
    IGCoreTextView *_infoLabelView;
    UIView *_infoLabelContainerView;
    UIView *_additionalInfoView;
    IGTooltipView *_profileCompletionTooltipView;
    IGTooltipView *_savedMediaTooltipView;
    long long _additionalInfoViewState;
    IGHScrollSimilarAccountsControl *_hscrollSimilarAccountsControl;
    IGSimilarAccountsView *_similarAccountsView;
    UIActivityIndicatorView *_spinner;
    id <IGRaindropAnalyticsDelegate> _analyticsDelegate;
    UITapGestureRecognizer *_profilePicTapGesture;
    UILongPressGestureRecognizer *_profilePicLongPressGesture;
    UIControl *_contactButton;
    IGButton *_translateBiographyButton;
    IGFollowsYouView *_followsYouView;
    NSArray *_accessibleElements;
}

- (void).cxx_destruct;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (id)accessibilityIdentifier;
@property(retain, nonatomic) NSArray *accessibleElements; // @synthesize accessibleElements=_accessibleElements;
@property(retain, nonatomic) UIView *additionalInfoView; // @synthesize additionalInfoView=_additionalInfoView;
@property(nonatomic) long long additionalInfoViewState; // @synthesize additionalInfoViewState=_additionalInfoViewState;
@property(nonatomic) __weak id <IGRaindropAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) __weak id <IGBusinessConversionDelegate> businessConversionDelegate; // @synthesize businessConversionDelegate=_businessConversionDelegate;
- (void)businessConversionDidCompleteFlow;
- (double)buttonY;
- (void)configureSimilarAccountsView;
@property(retain, nonatomic) UIControl *contactButton; // @synthesize contactButton=_contactButton;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (id)createProfileCompletionTooltipView;
- (id)createProfileContextString:(id)arg1 profileContextStyle:(id)arg2;
- (id)createSimilarAccountsView;
- (id)createStyledNameString:(id)arg1;
- (void)createTranslationButton;
- (void)dealloc;
@property(nonatomic) __weak IGFeedViewController_DEPRECATED<IGUserDetailHeaderViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)didTapTooltipView:(id)arg1;
- (void)dismissSavedMediaTooltipView;
@property(retain, nonatomic) IGTextButton *editProfileButton; // @synthesize editProfileButton=_editProfileButton;
@property(retain, nonatomic) UIImageView *editProfileExclamationMark; // @synthesize editProfileExclamationMark=_editProfileExclamationMark;
- (_Bool)enableLists;
@property(nonatomic) _Bool feedRestricted; // @synthesize feedRestricted=_feedRestricted;
- (void)feedToggle:(id)arg1 selectedButton:(long long)arg2;
- (void)fetchSimilarUsersWithCompletion:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) IGFollowButton *followButton; // @synthesize followButton=_followButton;
- (void)followButton:(id)arg1 tappedWithAction:(long long)arg2;
- (void)followButtonDidUpdateButtonState:(id)arg1;
@property(retain, nonatomic) IGStatButton *followersButton; // @synthesize followersButton=_followersButton;
- (void)followersButtonTapped:(id)arg1;
@property(retain, nonatomic) IGStatButton *followingButton; // @synthesize followingButton=_followingButton;
- (void)followingButtonTapped:(id)arg1;
@property(retain, nonatomic) IGFollowsYouView *followsYouView; // @synthesize followsYouView=_followsYouView;
- (struct CGRect)frameForContactButton;
- (struct CGRect)frameForEditProfileButton;
- (struct CGRect)frameForFollowButton;
- (struct CGRect)frameForFollowsYouView;
- (struct CGRect)frameForSimilarAccountsButton;
- (id)friendlyURLString;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)hideProfileCompletionNuxView;
@property(retain, nonatomic) IGHScrollSimilarAccountsControl *hscrollSimilarAccountsControl; // @synthesize hscrollSimilarAccountsControl=_hscrollSimilarAccountsControl;
- (long long)indexOfAccessibilityElement:(id)arg1;
@property(retain, nonatomic) UIView *infoLabelContainerView; // @synthesize infoLabelContainerView=_infoLabelContainerView;
@property(retain, nonatomic) IGCoreTextView *infoLabelView; // @synthesize infoLabelView=_infoLabelView;
- (id)initWithFrame:(struct CGRect)arg1 analyticsDelegate:(id)arg2 userSession:(id)arg3;
@property(nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
- (void)layoutSavedMediaTooltipView;
- (void)layoutSubviews;
- (void)logEvent:(id)arg1 requireURL:(_Bool)arg2;
- (void)logSocialContextClicked:(id)arg1;
- (void)logSocialContextOutOfBounds:(id)arg1 rangeStart:(id)arg2 rangeEnd:(id)arg3 rangeLength:(id)arg4;
- (void)logWebsiteCancel;
- (void)logWebsiteConfirmed;
- (void)logWebsiteOpen;
- (void)logWebsiteTap;
@property(retain, nonatomic) IGStatButton *mediaButton; // @synthesize mediaButton=_mediaButton;
- (void)mediaButtonTapped:(id)arg1;
@property(retain, nonatomic) UIView *megaphoneView; // @synthesize megaphoneView=_megaphoneView;
- (void)onContactButtonTapped;
- (void)onEditProfileTapped;
- (void)onFriendStatusChanged:(id)arg1;
- (void)onOwnMediaAdded:(id)arg1;
- (void)onOwnMediaDeleted:(id)arg1;
- (void)onSimilarAccountsButtonTapped:(id)arg1;
- (void)onTranslateBiographyButtonTapped;
- (void)onWebsiteExternalLinkTapped;
@property(retain, nonatomic) IGTooltipView *profileCompletionTooltipView; // @synthesize profileCompletionTooltipView=_profileCompletionTooltipView;
@property(retain, nonatomic) IGProfilePictureImageView *profilePic; // @synthesize profilePic=_profilePic;
@property(retain, nonatomic) IGLiveCuratorContainerView *profilePicInstaVideoPulseView; // @synthesize profilePicInstaVideoPulseView=_profilePicInstaVideoPulseView;
@property(retain, nonatomic) UILongPressGestureRecognizer *profilePicLongPressGesture; // @synthesize profilePicLongPressGesture=_profilePicLongPressGesture;
@property(retain, nonatomic) IGStoryGradientRingView *profilePicRingView; // @synthesize profilePicRingView=_profilePicRingView;
@property(retain, nonatomic) UITapGestureRecognizer *profilePicTapGesture; // @synthesize profilePicTapGesture=_profilePicTapGesture;
- (void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2 fromOption:(long long)arg3;
- (void)profilePictureHelper:(id)arg1 willPerformAction:(long long)arg2;
- (void)profilePictureHelperRemovePictureButtonTapped:(id)arg1;
- (_Bool)profilePictureHelperShouldShowRemovePicture:(id)arg1;
- (void)profilePictureHelperWantsToPresentBoomerangAppInstallAlertView;
- (void)profilePictureHelperWillPresentCameraFlow;
- (void)profilePictureLongPressed:(id)arg1;
- (void)profilePictureTapped:(id)arg1;
- (void)profilePictureTappedInControl:(id)arg1;
@property(retain, nonatomic) IGFriendRequestHeaderView *requestHeader; // @synthesize requestHeader=_requestHeader;
- (void)requestHeaderIsShowing:(_Bool)arg1;
@property(nonatomic) _Bool requestHeaderShowing; // @synthesize requestHeaderShowing=_requestHeaderShowing;
@property(retain, nonatomic) IGTooltipView *savedMediaTooltipView; // @synthesize savedMediaTooltipView=_savedMediaTooltipView;
- (void)scheduleDismissSavedMediaTooltipView;
@property(nonatomic) _Bool showingProfileMegaphone; // @synthesize showingProfileMegaphone=_showingProfileMegaphone;
@property(nonatomic) _Bool showingSavedMediaTooltip; // @synthesize showingSavedMediaTooltip=_showingSavedMediaTooltip;
@property(retain, nonatomic) IGTapButton *similarAccountsButton; // @synthesize similarAccountsButton=_similarAccountsButton;
@property(retain, nonatomic) IGSimilarAccountsView *similarAccountsView; // @synthesize similarAccountsView=_similarAccountsView;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) IGFeedToggleView *toggleBar; // @synthesize toggleBar=_toggleBar;
@property(retain, nonatomic) IGButton *translateBiographyButton; // @synthesize translateBiographyButton=_translateBiographyButton;
@property(nonatomic) _Bool translateBiographyShowing; // @synthesize translateBiographyShowing=_translateBiographyShowing;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (_Bool)shouldShowContactOptions;
- (_Bool)shouldShowSimilarAccountsButton;
- (void)showProfileCompletionNuxView;
- (void)showSavedMediaTooltipView;
- (void)similarAccountsViewDidTapOnSeeAllAccounts:(id)arg1;
- (void)toggleSimilarAccountsView:(_Bool)arg1;
- (void)updateAllContentViews;
- (void)updateBioText;
- (void)updateCountLabels;
- (void)updateFollowButton;
- (void)updateFollowsYouViewLayout;
- (void)updateForUserInfo;
- (void)updateLayout;
- (void)updateRequestHeader;
- (void)updateSimilarAccountsButton;
- (void)updateStatButtonsLayout;
- (void)updateToggleBar;
- (void)updateToggleButtons;
- (void)updateTranslateBiography:(_Bool)arg1;
- (void)updateTranslateBiographyButton;
- (void)userChanged:(id)arg1;
- (id)webViewControllerForURL:(id)arg1;
- (double)widthForInfoView;
- (double)widthForSingleButtonLayout;
- (double)widthForSingleButtonWithChaining;
- (double)widthForThreeButtonLayout;
- (double)widthForTwoButtonLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
