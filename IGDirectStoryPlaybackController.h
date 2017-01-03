//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStoryFullscreenGestureDelegate.h"
#import "IGStoryPlayerMediaViewDelegate.h"

@class IGDirectStory, IGDirectStoryMessage, IGDirectStoryService, IGDirectStoryViewerLogger, IGDirectStoryViewerLoggingInfo, IGUserSession, NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSString;

@interface IGDirectStoryPlaybackController : NSObject <IGStoryPlayerMediaViewDelegate, IGStoryFullscreenGestureDelegate>
{
    _Bool _isReplaying;
    _Bool _pendingAdvanceOnPagination;
    _Bool _isLoadingNextPage;
    IGUserSession *_userSession;
    id <IGStoryMediaPlayer> _player;
    long long _currentMessageIndex;
    IGDirectStoryService *_service;
    NSString *_storyId;
    NSOrderedSet *_messages;
    NSMutableOrderedSet *_seenMessages;
    NSMutableSet *_scheduledMarkSeenMessages;
    long long _totalCountFromServer;
    long long _totalCount;
    IGDirectStoryViewerLogger *_logger;
    IGDirectStoryViewerLoggingInfo *_loggingInfo;
}

- (void).cxx_destruct;
- (void)advanceToNextItemIfPossible;
@property(nonatomic) long long currentMessageIndex; // @synthesize currentMessageIndex=_currentMessageIndex;
@property(readonly, nonatomic) IGDirectStory *directStory;
- (void)finishPlaybackForCurrentMessageWithNavType:(long long)arg1 fillProgressBar:(_Bool)arg2;
- (void)finishPlaybackForNavType:(long long)arg1;
- (void)fullscreenOverlay:(id)arg1 didBeginPressingInRegion:(long long)arg2;
- (void)fullscreenOverlay:(id)arg1 didTapInRegion:(long long)arg2;
- (void)fullscreenOverlayDidEndPressing:(id)arg1;
- (void)fullscreenOverlayDidSwipeUp:(id)arg1;
- (id)initWithStoryId:(id)arg1 userSession:(id)arg2 messagesToReplay:(id)arg3 player:(id)arg4 loggingInfo:(id)arg5;
@property(nonatomic) _Bool isLoadingNextPage; // @synthesize isLoadingNextPage=_isLoadingNextPage;
@property(readonly, nonatomic) _Bool isReplaying; // @synthesize isReplaying=_isReplaying;
- (void)loadMediaAtIndex:(long long)arg1;
- (void)loadNextPage;
@property(retain, nonatomic) IGDirectStoryViewerLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) IGDirectStoryViewerLoggingInfo *loggingInfo; // @synthesize loggingInfo=_loggingInfo;
- (void)markSeenIfApplicable:(id)arg1;
@property(copy, nonatomic) NSOrderedSet *messages; // @synthesize messages=_messages;
@property(nonatomic) _Bool pendingAdvanceOnPagination; // @synthesize pendingAdvanceOnPagination=_pendingAdvanceOnPagination;
@property(readonly, nonatomic) __weak id <IGStoryMediaPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) IGDirectStoryMessage *playingMessage;
@property(retain, nonatomic) NSMutableSet *scheduledMarkSeenMessages; // @synthesize scheduledMarkSeenMessages=_scheduledMarkSeenMessages;
@property(retain, nonatomic) NSMutableOrderedSet *seenMessages; // @synthesize seenMessages=_seenMessages;
@property(readonly, nonatomic) IGDirectStoryService *service; // @synthesize service=_service;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long totalCountFromServer; // @synthesize totalCountFromServer=_totalCountFromServer;
- (void)startPlayback;
@property(readonly, copy, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
- (void)storyPlayerMediaView:(id)arg1 didGenerateVideoPlaybackWarningWithError:(id)arg2;
- (void)storyPlayerMediaView:(id)arg1 didUpdateProgress:(double)arg2;
- (void)storyPlayerMediaViewDidFailToLoadImage:(id)arg1 error:(id)arg2;
- (void)storyPlayerMediaViewDidFailToPlayback:(id)arg1 error:(id)arg2;
- (void)storyPlayerMediaViewDidLoad:(id)arg1;
- (void)storyPlayerMediaViewDidPlay:(id)arg1;
- (void)storyPlayerMediaViewDidPlayToEnd:(id)arg1;
- (void)storyPlayerMediaViewReceivedEmptyBuffer:(id)arg1;
- (void)updateProgressViewSegments;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

