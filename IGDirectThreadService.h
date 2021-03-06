//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectStoryService, IGUserSession, NSMutableOrderedSet;

@interface IGDirectThreadService : NSObject
{
    IGUserSession *_userSession;
    NSMutableOrderedSet *_refreshingThreadIds;
    IGDirectStoryService *_storyService;
}

- (void).cxx_destruct;
- (void)addMessage:(id)arg1 toThreadWithId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)addThreadWithUsers:(id)arg1;
- (void)addUsers:(id)arg1 toThread:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createThreadWithUsers:(id)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteMessage:(id)arg1 fromThread:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchThreadWithId:(id)arg1 users:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchThreadWithUsers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1;
@property(readonly, nonatomic) _Bool isNetworkReachable;
- (void)leaveThreadWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshThreadWithId:(id)arg1 cursor:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSMutableOrderedSet *refreshingThreadIds; // @synthesize refreshingThreadIds=_refreshingThreadIds;
- (void)renameThreadToName:(id)arg1 threadId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setDraftMessageForThreadId:(id)arg1 draftMessage:(id)arg2;
- (void)setSeenTimestampForThread:(id)arg1 message:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) IGDirectStoryService *storyService; // @synthesize storyService=_storyService;
- (_Bool)threadIsLocalForUploadInfo:(id)arg1;
- (id)threadWithId:(id)arg1;
- (id)threadWithUsers:(id)arg1;
- (id)trimedThread:(id)arg1 toOldestCursor:(id)arg2;
- (id)updatedThreadFromDictionary:(id)arg1 mergeOption:(unsigned long long)arg2;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;

@end

