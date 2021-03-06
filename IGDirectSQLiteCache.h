//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGDirectAsyncCaching.h"
#import "IGUserSessionClearableObject.h"

@class IGDirectSQLiteMessagesManager, IGDirectSQLiteThreadsManager, IGDirectThreadMerger, IGSQLiteDatabase, NSObject<OS_dispatch_queue>, NSString;

@interface IGDirectSQLiteCache : NSObject <IGDirectAsyncCaching, IGUserSessionClearableObject>
{
    NSObject<OS_dispatch_queue> *_sqliteQueue;
    NSString *_userPK;
    IGSQLiteDatabase *_database;
    IGDirectSQLiteThreadsManager *_threadsManager;
    IGDirectSQLiteMessagesManager *_messagesManager;
    IGDirectThreadMerger *_threadMerger;
}

+ (void)clearForUserPK:(id)arg1;
- (void).cxx_destruct;
- (void)addContent:(id)arg1 forThreadId:(id)arg2;
- (_Bool)configureMessagesManagerWithDatabase:(id)arg1;
- (_Bool)configureThreadsManagerWithDatabase:(id)arg1;
- (void)createLocalThreadWithUsers:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) IGSQLiteDatabase *database; // @synthesize database=_database;
- (void)fetchThreadWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchThreadsWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithUserPK:(id)arg1;
@property(retain, nonatomic) IGDirectSQLiteMessagesManager *messagesManager; // @synthesize messagesManager=_messagesManager;
- (_Bool)prepareManagersForDatabase:(id)arg1;
- (void)removePendingMessage:(id)arg1;
- (void)removeThreadWithId:(id)arg1;
- (void)replaceContent:(id)arg1 forThreadId:(id)arg2 needsForceUpdate:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) IGDirectThreadMerger *threadMerger; // @synthesize threadMerger=_threadMerger;
@property(retain, nonatomic) IGDirectSQLiteThreadsManager *threadsManager; // @synthesize threadsManager=_threadsManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sqliteQueue; // @synthesize sqliteQueue=_sqliteQueue;
- (void)storeThread:(id)arg1;
- (void)storeThread:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)trimThreads:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePendingMessage:(id)arg1 forThreadId:(id)arg2;
- (void)updateThreadWithId:(id)arg1 draftMessage:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, copy, nonatomic) NSString *userPK; // @synthesize userPK=_userPK;
- (void)willLogOut;
- (void)willSwitchUsers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

