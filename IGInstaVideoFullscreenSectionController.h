//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "FBKeyboardObserverDelegate.h"
#import "IGInstaVideoBroadcastInfoQueryServiceDelegate.h"
#import "IGInstaVideoFeedbackControllerDelegate.h"
#import "IGInstaVideoViewerActionSheetControllerDelegate.h"
#import "IGInstaVideoViewerViewDelegate.h"
#import "IGListDisplayDelegate.h"
#import "IGListScrollDelegate.h"
#import "IGListSectionType.h"
#import "IGStoryFullscreenControllerType.h"
#import "IGStoryPlayerMediaViewDelegate.h"

@class FBKeyboardObserver, FBTimer, IGFlaggedCommentLedger, IGInstaVideoBroadcast, IGInstaVideoBroadcastInfoQueryService, IGInstaVideoFeedbackController, IGInstaVideoNotificationStore, IGInstaVideoPlaybackLoggingContext, IGInstaVideoViewerActionSheetController, IGMediaManager, IGStoryViewerLoggingContext, IGStoryViewerViewModel, IGUser, IGUserSession, NSError, NSString;

@interface IGInstaVideoFullscreenSectionController : IGListSectionController <FBKeyboardObserverDelegate, IGInstaVideoBroadcastInfoQueryServiceDelegate, IGInstaVideoFeedbackControllerDelegate, IGInstaVideoViewerActionSheetControllerDelegate, IGInstaVideoViewerViewDelegate, IGListDisplayDelegate, IGListScrollDelegate, IGStoryPlayerMediaViewDelegate, IGStoryFullscreenControllerType, IGListSectionType>
{
    _Bool _audioEnabled;
    _Bool _hasStartedPlaying;
    _Bool _needsStartPulling;
    _Bool _isStopped;
    IGStoryViewerViewModel *_viewModel;
    id <IGStoryFullscreenControllerTypeDelegate> _delegate;
    IGInstaVideoBroadcast *_currentBroadcast;
    IGInstaVideoBroadcastInfoQueryService *_broadcastInfoQueryService;
    IGInstaVideoFeedbackController *_feedbackController;
    id <IGAPIClient> _networker;
    IGUserSession *_userSession;
    FBKeyboardObserver *_keyboardObserver;
    IGStoryViewerLoggingContext *_storyLoggingContext;
    IGInstaVideoPlaybackLoggingContext *_loggingContext;
    long long _entryPoint;
    IGFlaggedCommentLedger *_flaggedCommentLedger;
    IGInstaVideoNotificationStore *_notificationStore;
    IGMediaManager *_mediaManager;
    IGUser *_currentUser;
    IGInstaVideoViewerActionSheetController *_actionSheetController;
    long long _currentBroadcastStatus;
    long long _retryCounter;
    FBTimer *_retryTimer;
    NSError *_currentLoadingError;
}

+ (_Bool)shouldStopPlaybackWithStatus:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGInstaVideoViewerActionSheetController *actionSheetController; // @synthesize actionSheetController=_actionSheetController;
- (void)actionSheetController:(id)arg1 didReportBroadcast:(id)arg2 isSpam:(_Bool)arg3;
- (void)actionSheetController:(id)arg1 didReportComment:(id)arg2 inBroadcast:(id)arg3 isSpam:(_Bool)arg4;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(readonly, nonatomic) IGInstaVideoBroadcastInfoQueryService *broadcastInfoQueryService; // @synthesize broadcastInfoQueryService=_broadcastInfoQueryService;
- (void)broadcastInfoQueryService:(id)arg1 didFailToLoadForBroadcastId:(id)arg2;
- (void)broadcastInfoQueryService:(id)arg1 didLoadBroadcastInfo:(id)arg2 forBroadcastId:(id)arg3;
- (void)broadcasterProfileTappedInView:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (void)closeButtonTappedInView:(id)arg1;
- (void)configureForBroadcastInterruptionIfNeeded;
- (void)configureMediaViewForCell:(id)arg1;
- (void)configureVideoView:(id)arg1 broadcast:(id)arg2 coverFrameEnabled:(_Bool)arg3;
- (void)configureViewerOverlayViewForCell:(id)arg1;
@property(retain, nonatomic) IGInstaVideoBroadcast *currentBroadcast; // @synthesize currentBroadcast=_currentBroadcast;
@property(nonatomic) long long currentBroadcastStatus; // @synthesize currentBroadcastStatus=_currentBroadcastStatus;
@property(retain, nonatomic) NSError *currentLoadingError; // @synthesize currentLoadingError=_currentLoadingError;
- (id)currentStoryItem;
@property(readonly, nonatomic) IGUser *currentUser; // @synthesize currentUser=_currentUser;
- (void)dealloc;
@property(nonatomic) __weak id <IGStoryFullscreenControllerTypeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)displayDelegate;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(retain, nonatomic) IGInstaVideoFeedbackController *feedbackController; // @synthesize feedbackController=_feedbackController;
- (void)feedbackController:(id)arg1 didFailToPinComment:(id)arg2;
- (void)feedbackController:(id)arg1 didFailToUnpinComment:(id)arg2;
- (void)feedbackController:(id)arg1 didFetchPinnedComment:(id)arg2;
- (void)feedbackController:(id)arg1 didHaveBroadcastUpdate:(id)arg2;
- (void)feedbackController:(id)arg1 didRemoveComment:(id)arg2;
- (void)feedbackController:(id)arg1 didReplaceCommentWithPk:(id)arg2 withComment:(id)arg3;
- (void)feedbackController:(id)arg1 didUpdateViewerList:(id)arg2;
- (void)feedbackController:(id)arg1 hasCommentsReadyToDisplay:(id)arg2;
- (void)feedbackController:(id)arg1 hasLikerProfileImageReadyToDisplay:(id)arg2 likeCount:(long long)arg3 overDuration:(double)arg4;
- (void)feedbackController:(id)arg1 hasNumLikesReadyToDisplay:(long long)arg2 fromSelf:(_Bool)arg3 overDuration:(double)arg4;
- (void)feedbackControllerDidFailToMuteComments:(id)arg1;
- (void)feedbackControllerDidFailToUnmuteComments:(id)arg1;
- (void)feedbackControllerDidFetchCommentMuteStatus:(_Bool)arg1;
@property(readonly, nonatomic) IGFlaggedCommentLedger *flaggedCommentLedger; // @synthesize flaggedCommentLedger=_flaggedCommentLedger;
- (void)handlePlaybackEndedWithViewerOverlayView:(id)arg1;
@property(nonatomic) _Bool hasStartedPlaying; // @synthesize hasStartedPlaying=_hasStartedPlaying;
- (id)initWithUserSession:(id)arg1 storyLoggingContext:(id)arg2 entryPoint:(long long)arg3;
- (void)invalidateRetryTimer;
@property(nonatomic) _Bool isStopped; // @synthesize isStopped=_isStopped;
@property(readonly, nonatomic) FBKeyboardObserver *keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
- (void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)keyboardObserverKeyboardDidHide:(id)arg1;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)likeButtonTappedInView:(id)arg1;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDraggingSectionController:(id)arg2 willDecelerate:(_Bool)arg3;
- (void)listAdapter:(id)arg1 didScrollSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willBeginDraggingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
@property(retain, nonatomic) IGInstaVideoPlaybackLoggingContext *loggingContext; // @synthesize loggingContext=_loggingContext;
@property(readonly, nonatomic) IGMediaManager *mediaManager; // @synthesize mediaManager=_mediaManager;
- (void)moreButtonTappedInView:(id)arg1;
- (void)navigateToUserProfile:(id)arg1;
@property(nonatomic) _Bool needsStartPulling; // @synthesize needsStartPulling=_needsStartPulling;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(readonly, nonatomic) IGInstaVideoNotificationStore *notificationStore; // @synthesize notificationStore=_notificationStore;
- (long long)numberOfItems;
- (void)onAppWillResignActive:(id)arg1;
- (void)pauseWithReason:(long long)arg1;
- (void)reloadMediaFromFailure;
- (void)resetFeedbackController;
@property(nonatomic) long long retryCounter; // @synthesize retryCounter=_retryCounter;
@property(retain, nonatomic) FBTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
- (id)scrollDelegate;
- (void)showSystemCommentForSelfJoin;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)stopWithReason:(long long)arg1;
@property(readonly, nonatomic) IGStoryViewerLoggingContext *storyLoggingContext; // @synthesize storyLoggingContext=_storyLoggingContext;
- (void)storyPlayerMediaView:(id)arg1 didGenerateVideoPlaybackWarningWithError:(id)arg2;
- (void)storyPlayerMediaView:(id)arg1 didUpdateProgress:(double)arg2;
- (void)storyPlayerMediaViewDidFailToLoadImage:(id)arg1 error:(id)arg2;
- (void)storyPlayerMediaViewDidFailToPlayback:(id)arg1 error:(id)arg2;
- (void)storyPlayerMediaViewDidLoad:(id)arg1;
- (void)storyPlayerMediaViewDidPlay:(id)arg1;
- (void)storyPlayerMediaViewDidPlayToEnd:(id)arg1;
- (void)storyPlayerMediaViewReceivedEmptyBuffer:(id)arg1;
- (void)tryResumePlayback;
- (void)updateVideoPauseForReason:(long long)arg1;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGStoryViewerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)viewerView:(id)arg1 didEnterCommentText:(id)arg2;
- (void)viewerView:(id)arg1 didReceiveTapOnComment:(id)arg2 isPinned:(_Bool)arg3;
- (id)visibleCell;
- (id)visibleMediaView;
- (id)visibleViewerOverlayView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
