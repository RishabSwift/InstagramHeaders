//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionClearableObject.h"

@class IGLeadGenContextRegistry, IGUser, IGUserDefaults, NSString;

@interface IGUserSession : NSObject <IGUserSessionClearableObject>
{
    struct unordered_map<Class<IGUserSessionObject>, std::__1::shared_future<Value>, std::__1::hash<Class<IGUserSessionObject>>, std::__1::equal_to<Class<IGUserSessionObject>>, std::__1::allocator<std::__1::pair<const Class<IGUserSessionObject>, std::__1::shared_future<Value>>>> _objectMap;
    struct Mutex _objectsLock;
    IGUser *_user;
    IGUserDefaults *_sessionUserDefaults;
    unsigned long long _backgroundTask;
}

+ (void)clearForUserPK:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)archiveInBackgroundWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)autocompleteHashtagsStore;
- (id)autocompletePlacesStore;
- (id)autocompleteUsersStore;
- (id)autoupdaterReactService;
@property(nonatomic) unsigned long long backgroundTask; // @synthesize backgroundTask=_backgroundTask;
- (id)badgeHelper;
- (id)blendedSearchRecentItemsOrderStore;
- (id)cameraDraftManager;
- (void)checkIfStillAliveAfterDelay;
- (id)commentDataController;
- (id)commentDraftDataController;
- (void)dealloc;
- (id)directCache;
- (id)directContentUploader;
- (id)directInboxNetworker;
- (id)directMessageService;
- (id)directPendingInboxNetworker;
- (id)directRealtimeService;
- (id)directRecipientManager;
- (id)directRefreshService;
- (id)directStoryMessagePlaybackTracker;
- (id)directStoryNetworker;
- (id)directStoryRecipientService;
- (id)directStorySentStatusNetworker;
- (id)directStorySentStatusService;
- (id)directThreadNetworker;
- (id)directThreadStore;
- (id)directTypingStatusNetworker;
- (id)editProfileReactFetcher;
- (id)flaggedCommentLedger;
- (id)inAppBadgeManager;
- (id)initForTesting;
- (id)initWithUser:(id)arg1;
- (id)instaVideoNotificationStore;
- (id)instaVideoRealtimeTopicHandlingService;
- (id)instaVideoStoryViewerPresentationHelper;
- (void)invalidateObjectMap;
@property(readonly, nonatomic) IGLeadGenContextRegistry *leadGenContextRegistry;
- (id)mediaManager;
- (id)mediaUploadManager;
- (id)networker;
- (id)postUploadManager;
- (id)postUserSessionCreateExecutor;
- (id)pushRegistrationHelper;
- (id)reactModule;
- (id)realtimeClient;
- (id)realtimeMessageDispatcher;
- (id)recentHiddenSearchItemStore;
- (id)reelSeenStateStore;
- (id)seenStateStore;
- (id)serviceManager;
@property(retain, nonatomic) IGUserDefaults *sessionUserDefaults; // @synthesize sessionUserDefaults=_sessionUserDefaults;
@property(retain, nonatomic) IGUser *user; // @synthesize user=_user;
- (id)storyDataController;
- (id)userActions;
- (id)userExperimentSet;
- (id)valueForClass:(Class)arg1 withInitializer:(CDUnknownBlockType)arg2;
- (id)videoRenderQueue;
- (void)willLogOut;
- (void)willSwitchUsers;
- (void)willSwitchUsersWithCompletionBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

