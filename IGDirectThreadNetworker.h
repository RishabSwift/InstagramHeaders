//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGUserSessionObject.h"

@class IGDirectNetworkPerfLogger, NSString;

@interface IGDirectThreadNetworker : NSObject <IGUserSessionObject>
{
    id <IGAPIClient> _networker;
    IGDirectNetworkPerfLogger *_perfLogger;
}

- (void).cxx_destruct;
- (id)initWithNetworker:(id)arg1;
@property(readonly, nonatomic) id <IGAPIClient> networker; // @synthesize networker=_networker;
@property(readonly, nonatomic) IGDirectNetworkPerfLogger *perfLogger; // @synthesize perfLogger=_perfLogger;
- (void)requestAddUsersWithIds:(id)arg1 toThreadWithId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)requestCreateThreadWithUserIds:(id)arg1 name:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)requestDeleteMessageWithId:(id)arg1 fromThreadWithId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)requestHideThreadWithId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestLeaveThreadWithId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestRenameThreadWithName:(id)arg1 threadId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)requestSetSeenTimestampForMessageWithId:(id)arg1 threadId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)requestSetThreadMuted:(_Bool)arg1 threadId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)requestThreadWithId:(id)arg1 cursor:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)requestThreadWithUserIds:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

