//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionClearableObject.h"

@class IGBadgeHelper, IGDirectCache, IGDirectContentUploader, IGDirectMessageReliabilityLogger, IGDirectRealtimeMessageDispatcher, IGDirectRealtimeService, IGDirectThreadService, IGMediaUploadManager, IGUser, NSMutableDictionary, NSOperationQueue, NSString;

@interface IGDirectMessageService : NSObject <IGUserSessionClearableObject>
{
    IGDirectThreadService *_threadService;
    IGDirectContentUploader *_contentUploader;
    IGDirectCache *_directCache;
    id <IGAPIClient> _networker;
    IGBadgeHelper *_badgeHelper;
    IGDirectRealtimeService *_realtimeService;
    IGDirectRealtimeMessageDispatcher *_realtimeDispatcher;
    IGUser *_user;
    IGMediaUploadManager *_mediaUploadManager;
    IGDirectMessageReliabilityLogger *_logger;
    NSMutableDictionary *_synchronizedQueues;
    NSOperationQueue *_heavyTaskConcurrentQueue;
    NSOperationQueue *_lightTaskConcurrentQueue;
}

+ (void)clearForUserPK:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGBadgeHelper *badgeHelper; // @synthesize badgeHelper=_badgeHelper;
- (void)cancelAllOperations;
- (void)cancelMessage:(id)arg1;
@property(readonly, nonatomic) IGDirectContentUploader *contentUploader; // @synthesize contentUploader=_contentUploader;
@property(readonly, nonatomic) IGDirectCache *directCache; // @synthesize directCache=_directCache;
@property(readonly, nonatomic) NSOperationQueue *heavyTaskConcurrentQueue; // @synthesize heavyTaskConcurrentQueue=_heavyTaskConcurrentQueue;
- (id)initWithThreadService:(id)arg1 contentUploader:(id)arg2 directCache:(id)arg3 networker:(id)arg4 badgeHelper:(id)arg5 realtimeService:(id)arg6 realtimeDispatcher:(id)arg7 user:(id)arg8 mediaUploadManager:(id)arg9;
@property(readonly, nonatomic) NSOperationQueue *lightTaskConcurrentQueue; // @synthesize lightTaskConcurrentQueue=_lightTaskConcurrentQueue;
@property(readonly, nonatomic) IGDirectMessageReliabilityLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) IGMediaUploadManager *mediaUploadManager; // @synthesize mediaUploadManager=_mediaUploadManager;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
- (void)precacheImageIfNeededForMessage:(id)arg1;
@property(readonly, nonatomic) IGDirectRealtimeMessageDispatcher *realtimeDispatcher; // @synthesize realtimeDispatcher=_realtimeDispatcher;
@property(readonly, nonatomic) IGDirectRealtimeService *realtimeService; // @synthesize realtimeService=_realtimeService;
- (void)retryMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendAllFailedMessages;
- (void)sendAllFailedSeenMarks;
- (void)sendAllFailedTasksWithDelay;
- (void)sendMessage:(id)arg1 loggingContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)sendMessageWithProducer:(id)arg1 loggingContext:(id)arg2 uploadParameter:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendReaction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendSeen:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldUseMessageServiceForMessage:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *synchronizedQueues; // @synthesize synchronizedQueues=_synchronizedQueues;
@property(readonly, nonatomic) IGDirectThreadService *threadService; // @synthesize threadService=_threadService;
@property(readonly, nonatomic) IGUser *user; // @synthesize user=_user;
- (void)willLogOut;
- (void)willSwitchUsers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
